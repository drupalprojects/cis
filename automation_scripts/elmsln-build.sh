#!/bin/bash
# look for location argument for the command
if [ -z "$1" ]; then
echo "Usage: $0 <directorytocreate>"
exit 1
fi
# settings
college='aa'
dbsu='root'
dbsupw='root'
admin='admin@example.com'

# move to location requested
mkdir $1
cd $1
# projects to run / download
dl=('cis-7.x-1.0-alpha9' 'mooc-7.x-1.x-dev' 'cle-7.x-1.0-alpha1')
# distro name to match
distros=('cis' 'mooc' 'cle')
# which distros to install into which stacks
build=('cis' 'remote_watchdog' 'remote_watchdog')
# locations to move these distributions to
mvs=('online' 'courses' 'studio')
COUNTER=0

# run commands to get all versions of distros we need
for dist in "${dl[@]}"
do
  # download the distribution via drush w. version
  drush dl $dist
  # move this to a real location and go into it
  mv $dist ${mvs[$COUNTER]}
  cd ${mvs[$COUNTER]}
  # remove all txt files for security
  rm *.txt
  # move libraries, modules, themes to a normal location for management
  cp -r profiles/${distros[$COUNTER]}/libraries sites/all/libraries
  mv profiles/${distros[$COUNTER]}/modules/contrib sites/all/modules/contrib
  mv profiles/${distros[$COUNTER]}/themes/contrib sites/all/themes/contrib
  cd ..
  # increment counter to run next location
  COUNTER=$[COUNTER + 1]
done

# special exception for cis cause of packaging issues on d.o.
cd online
drush dl shadowbox-7.x-4.0-rc1
cd ..

# get remote watchdog so we can add it to the other distros
drush dl remote_watchdog-7.x-1.x-dev
mv remote_watchdog-7.x-1.x-dev watchdog
COUNTER=0
for dist in "${dl[@]}"
do
  cp -r watchdog/profiles/remote_watchdog ${mvs[$COUNTER]}/profiles/remote_watchdog
	COUNTER=$[COUNTER + 1]
done
# we only downloaded this distro to get its manifest into the other stacks
rm -r -f watchdog

# run an install routine for each system in order
COUNTER=0
for dist in "${dl[@]}"
do
  # move to the directory to execute the drush command
	cd ${mvs[$COUNTER]}
	# generate random password for the new user account
  dbpw=`LC_CTYPE=C tr -dc A-Za-z0-9 < /dev/urandom | head -c 14`
	# install distro selected
  drush si ${build[$COUNTER]} --db-url=mysql://${mvs[$COUNTER]}_$college:$dbpw@localhost/${mvs[$COUNTER]}_$college --db-su=$dbsu --db-su-pw=$dbsupw --account-mail=$admin --site-mail=$admin --site-name='${mvs[$COUNTER]} $college site' --y  > /dev/null
  COUNTER=$[COUNTER + 1]
	cd ..
done