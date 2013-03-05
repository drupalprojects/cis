<?php

/*
Place this file in the /sites directory and call from cron, or via the command line php site-cron.php

a script to read the sites array, then run drush cron on each site defined. used as a workaround to @sites not working on subsites that live below the /sites directory. This script can also be used to run a drush command on all of the sites that are nested below the /sites directory as a poor mans @sites.
*/

include "sites.php";

foreach ($sites as $key=>$value) {
    echo $key;
    exec("drush  --r=/var/www/courses/ --uri=http://$key -y cron &");
}
?>
