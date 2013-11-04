#!/bin/bash
# look for location argument for the command
if [ -z "$1" ]; then
echo "Usage: $0 <directorytocreate>"
exit 1
fi
# settings and global vars
university='youruni'
collegeshort='aa'
college='aanda'
dbsu='root'
dbsupw='root'
email='youruni.edu'
address='youruni.edu'
serviceaddress='youruni.edu'
admin='admin'
# current supported version
currentversion='drupal-7.23'
drupalbranch='7.x'
# webroot
webroot='www'
dslmloc='dslmcode'
dslmbase="$(pwd)/${1}/${dslmloc}"

# supported cores
cores=('drupal-6' 'drupal-7')
# projects to run / download
dl=('cis-7.x-1.x-dev' 'mooc-7.x-1.x-dev' 'cle-7.x-1.0-alpha1' 'remote_watchdog-7.x-1.x-dev')
# distro name to match
distros=('cis' 'mooc' 'cle' 'remote_watchdog')
# locations to move these distributions to
stacks=('online' 'courses' 'studio')
# array of instance definitions for the distro type
instances=('FALSE' 'TRUE' 'TRUE' 'FALSE')

# this is all execution of the script to build the entire stack

# move to location requested
mkdir $1
cd $1
# make dslm share
mkdir $dslmloc

# make sure we have dslm and patch it
cd ~/.drush
# write path option into user loc drush file
echo -e "\n\$options['dslm_base'] = '${dslmbase}';" >> drushrc.php
# get a fresh copy of dslm for patching
drush dl dslm
cd ~/.drush/dslm/lib
# shortcut so patches apply without question
ln -s ../README.txt README.txt
# shared modules/libraries/themes support
wget http://drupal.org/files/shared-sites-all-2118957-1.patch
patch < shared-sites-all-2118957-1.patch
# .ds_store
wget http://drupal.org/files/DS_Store-2119199-1.patch
patch < DS_Store-2119199-1.patch
# patch to allow for better profile versioning
wget http://drupal.org/files/profile-name-in-dir-2117807-3.patch
patch < profile-name-in-dir-2117807-3.patch
# clear drush cache to give us new capability
drush cc drush
# rm symbolic link
rm README.txt

# start to work off of the dslm base location
cd $dslmbase

# make profiles, cores and shared dir
mkdir profiles
mkdir cores
mkdir shared
mkdir stacks

# setup the shared code base dir structure
cd shared
for core in "${cores[@]}"
do
  mkdir ${core}.x
  cd ${core}.x
  mkdir libraries
  mkdir themes
  mkdir modules
  cd modules
  mkdir supported_contrib
  # make an area specific to the university
  mkdir ${university}
  cd ${university}
  # make a module to house the settings array
  mkdir ${university}_${college}_settings
  cd ${university}_${college}_settings
  
  # write the .info file
  printf "name = ${university} ${college} Settings\ndescription = This contains registry information for all ${college} connection details\ncore = ${drupalbranch}\npackage = ${university}" >> ${university}_${college}_settings.info
  
  # write the .module file
  printf "<?php\n\n// service module that makes this implementation specific\n\n/**\n * Implements hook_cis_service_registry().\n */\nfunction ${university}_${college}_settings_cis_service_registry() {\n  \$items = array(\n" >> ${university}_${college}_settings.module
  # write the array of connection values dynamically
  COUNTER=0
  char=(0 1 2 3 4 5 6 7 8 9 a b c d e f g h i j k l m n o p q r s t u v w x y z A B C D E F G H I J K L M N O P Q R S T U V X W Y Z)
  max=${#char[*]}
  for distro in "${distros[@]}"
  do
    # array built up to password
    printf "    // ${distro} distro instance called ${stacks[$COUNTER]}\n    '${distro}' => array(\n      'protocol' => 'https',\n      'service_address' => 'data.${stacks[$COUNTER]}.${serviceaddress}',\n      'address' => '${stacks[$COUNTER]}.${college}.${address}',\n      'user' => 'SERVICE_${distro}_${collegeshort}',\n      'mail' => 'SERVICE_${distro}_${collegeshort}@${email}',\n      'pass' => '" >> ${university}_${college}_settings.module
     pass=''
    # generate a random 30 digit password
    for i in `seq 1 30`
    do
      let "rand=$RANDOM % 62"
      pass="${pass}${char[$rand]}"
    done
    # write password to file
    printf $pass >> ${university}_${college}_settings.module
    # finish off array
    printf "',\n      'instance' => ${instances[$COUNTER]},\n    ),\n" >> ${university}_${college}_settings.module
    COUNTER=$[COUNTER + 1]
  done
  # close out function and file
  printf "  );\n\n  return \$items;\n}" >> ${university}_${college}_settings.module
  cd ../../../..
done

# move to the cores directory and dl all cores
cd ../cores
for core in "${cores[@]}"
do
  drush dl $core
done

# move to profiles and work on them
cd ../profiles

COUNTER=0
# run commands to get all versions of distros we need
for dist in "${dl[@]}"
do
  # download the distribution via drush w. version
  drush dl $dist
  mkdir tmp
  mv ${dist}/profiles/${distros[$COUNTER]}/* tmp
  rm -r -f $dist
  mv tmp $dist

  COUNTER=$[COUNTER + 1]
done
COUNTER=0
# work on producing the assembled stacks
cd ../stacks
for stack in "${stacks[@]}"
do
  drush dslm-new $stack $currentversion
  cd $stack
  drush dslm-add-profile ${dl[$COUNTER]/'.x-'/'.x '} --current
  # make remote_watchdog available in each stack
  drush dslm-add-profile remote_watchdog-7.x 1.x-dev --current
  cd ..
  COUNTER=$[COUNTER + 1]
done

# now hook the stacks up to a sample instance
cd ../../
mkdir $webroot
cd $webroot
for stack in "${stacks[@]}"
do
  mkdir $stack
  cd $stack
  ln -s ../../${dslmloc}/stacks/${stack} root
  cd ..
done