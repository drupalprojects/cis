----
drush-create-site v-0.5
----

1.) Prerequsites 
-Server should have the ability to send e-mail to get the admin password for first time login If not you can always use drush to create a one time login or run the script manually to see the password
-Drush should be installed 
-Server should be on a functioning LAMP stack. (Script was built for RHEL, but could be modified to work with others)


2.) Installlation 
    a.)run install.sh as root

3.) Sample course file 
The coursefile is the file that drush-create-site reads to determine what to
pass through to drush. It must end in .course or .studio and each of these
file extensions can have different variables. see lines 20+ in
/usr/local/bin/drush-create-site

1-robots109
2-aa
3-robots 109
4-and introduction to taking over the world
5-djb44@psu.edu
6-drush en webaccess
7-drush vset site_email dannbohn@gmail.com
8-drush user-add-role administrator dannbohn

Line 1 is the coursename
Line 2 is the college (this should be defined in the hosts file)
Line 3 is the site title 
Line 4 is the site slogan
Line 5 is the requestor e-mail
lines 6-EOF are drush commands, must be formatted drush <space> command
<options>

4.) Hosts file 
The hosts file contains a list of college to hostname translations.
i.e aa = aanda.psu.edu 

















