<?php
/**
 * @file
 * How to work with the CIS automation scripts.
 */

/**
 * Implements hook_cis_service_instance_options_alter().
 *
 * This allows for the altering of options (drush calls)
 * just prior to creation of the service based on a course.
 * Course / service are also passed in for context
 *
 * @param $options
 *   array of drush commands
 * @param $course
 *   node object
 * @param $service
 *   node object
 */
function hook_cis_service_instance_options_alter(&$options, $course, $service) {
  // run drush dis pathauto as part of the install routine
  $options['dis'][] = 'pathauto';
  // run drush en devel as part of setup
  $options['en'][] = 'devel';
}

/**
 * Implements hook_cis_service_instance_TOOL_options_alter().
 *
 * This allows for the altering of options (drush calls)
 * just prior to creation of the service based on a course.
 * This hook is specific to the machine_name of the tool being produced.
 *
 * To integrate with home-grown distributions you can replace TOOL with the
 * machine_name of the service, such as courses, blog, interact, etc.
 *
 * @param $options
 *   array of drush commands
 * @param $course
 *   node object
 * @param $service
 *   node object
 */
function hook_cis_service_instance_TOOL_options_alter(&$options, $course, $service) {
  // run drush dis pathauto as part of the install routine
  $options['dis'][] = 'pathauto';
  // run drush en devel as part of setup
  $options['en'][] = 'devel';
}

/**
 * Implements hook_cis_service_instance_job_file_alter().
 *
 * This allows for the altering of job file content
 * just prior to creation of the service based on a course.
 * Course / service are also passed in for context
 *
 * @param $options
 *   array of drush commands
 * @param $course
 *   node object
 * @param $service
 *   node object
 * @param $service_instance
 *   node object
 */
function hook_cis_service_instance_job_file_alter(&$content, $course, $service, $service_instance) {
  // run the cron as a final clean up mechanism
  $content .= 'drush cron' . "\n";
  // run ecl to help seed caches for all entities
  $content .= 'drush ecl' . "\n";
  // may seem odd but double running cron can prime syncing
  $content .= 'drush cron' . "\n";
}

/**
 * Implements hook_cis_service_instance_TOOL_job_file_alter().
 *
 * This allows for the altering of the actual file for the job
 * just prior to creation of the service based on a course.
 * This hook is specific to the machine_name of the tool being produced.
 *
 * To integrate with home-grown distributions you can replace TOOL with the
 * machine_name of the service, such as courses, blog, interact, etc.
 *
 * @param $content
 *   string of drush commands, the full output of the file
 * @param $course
 *   node object
 * @param $service
 *   node object
 * @param $service_instance
 *   node object
 */
function hook_cis_service_instance_TOOL_job_file_alter(&$content, $course, $service, $service_instance) {
  // only apply default content import for course based service
  if ($service->field_machine_name[LANGUAGE_NONE][0]['value'] == CIS_HELPER_COURSE_SERVICE && !empty($service_instance->field_service_data[LANGUAGE_NONE][0]['value'])) {
    // allow for on creation population of material
    $content .= 'drush feeds-import feeds_node_helper_book_import --file=' . $service_instance->field_service_data[LANGUAGE_NONE][0]['value'] . "\n";
  }
}

/**
 * Implements hook_cis_instructional_outlines_alter().
 *
 * This allows for the altering of listed instructional outlines
 * Use this to add your own instructional outlines for selection
 * during section setup.
 * This simply adds the options for selecting it, you'll still need
 * a hook_entity_insert / update handler to correctly handle this.
 * A common use-case for this is overriding traditional remote
 * reference and setup of an outline to allow for creation of a new
 * one based on a pre-packaged XML outline of content.
 *
 * @param $outlines
 *   an array of possible outlines to select from.
 */
function hook_cis_instructional_outlines(&$outlines) {
  // allow for module based, paced instruction
  $outlines['module-based'] = t('Module based');
}
