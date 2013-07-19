<?php
/**
 * Implements hook_cis_service_instance_options_alter().
 *
 * This allows for the altering of options (drush calls)
 * just prior to creation of the service based on a course.
 * Course / service are also passed in for context
 *
 * options - array of drush commands
 * course - node object
 * service - node object
 */
function hook_cis_service_instance_options_alter(&$options, $course, $service) {
  // run drush dis pathauto as part of the install routine
  $options['dis'][] = 'pathauto';
  // run drush en devel as part of setup
  $options['en'][] = 'devel';
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
 */
function hook_cis_instructional_outlines(&$outlines) {
  // allow for module based, paced instruction
  $outlines['module-based'] = t('Module based');
}