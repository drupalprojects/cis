<?php
/**
 * Implements hook_cis_service_instance_options_alter().
 * This allows for the altering of options (module calls)
 * just prior to creation of the service based on a course.
 *
 * This way you can define modules that should be activated
 * that are specific to the institution you are implementing it in.
 */
function hook_cis_service_instance_options_alter(&$node, &$service, &$college, &$account, &$options) {
	// add our internal options routine to all services
  $options .= ' lms_authentication';
}