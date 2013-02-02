#installs the drush-create-site script


echo "what is the administrator e-mail"
read adminemail
echo "where are you storing the jobs file?"
read wwwjobs
echo "where is your drupal installation installed?"
read drupalroot
echo "what is the database admin user?"
read dbsu
echo "what is the database admin password?"
read dbsupw


##entering starting values
sed -i "/^admin=/c\admin=$adminemail" drush-create-site
sed -i "/^fileloc=/c\fileloc=$wwwjobs" drush-create-site
sed -i "/^drupalroot=/c\drupalroot=$drupalroot" drush-create-site
sed -i "/^dbsu=/c\dbsu=$dbsu" drush-create-site
sed -i "/^dbsupw=/c\dbsupw=$dbsupw" drush-create-site



#moves the hosts file to the jobs folder
if [ ! -f $wwwjobs ]; then 
    mkdir -p $wwwjobs
fi
cp hosts $wwwjobs/hosts

#copies the drush script to /usr/local/bin/

if [ ! -f /usr/local/bin/drush-create-site ]; then
cp drush-create-site /usr/local/bin/drush-create-site
else 
    echo "file seemingly exists, do you want to overwrite? [y/n]"
        read overwrite
        if [ $overwrite = "y" ]; then 
            cp drush-create-site /usr/local/bin/drush-create-site
            else
                echo "file not copied"
         fi
         
fi

echo "drush-create-site installed to /usr/local/bin/drush-create-site"




