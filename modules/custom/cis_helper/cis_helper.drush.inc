<?php

/**
 * @file
 * Drush integration for CIS distribution.
 */

/**
 * Implements hook_drush_command().
 */
function cis_helper_drush_command() {
  $items['create-service-instances'] = array(
    'description' => dt('Create service instances for an existing course via drush'),
    'arguments' => array(
      'machine_name' => dt("Course machine name, built automatically if it doesn't exist currently"),
      'string' => dt('Access bind to the section key pair in time'),
    ),
    'options' => array(
      'uname' => dt("Username requesting the space, defaults to user 1's name otherwise"),
      'build_service' => dt('Build a specific service when you specify a valid machine name.'),
      'outline_import' => dt('Point to sites/{site}/files/cis_outline_import/{machine_name}.xml for outline to use instead of default.'),
    ),
    'aliases' => array('cis-si'),
    'examples' => array(
      'drush create-course-instance art010 2012faup001' => 
        'Add service instances to art010, use user 1 and use default outline for mooc',
      'drush cis-ci gd100 2012spaa002 --outline_import' => 
        'Add service instances to gd100, use user 1 and import from import bucket gd100.xml',
      'drush cis-ci gd100 2012spaa001 --uname=admin' => 
        'Add service instances to gd100, user is admin',
    ),
  );
  $items['cis-release-kraken'] = array(
    'description' => dt('Look up all possible courses and produce matching service instances'),
    'aliases' => array('cis-kraken'),
    'options' => array(
      'actually_run' => dt("default behavior doesn't actually commit the action, need this to really run it."),
      'build_service' => dt('Build a specific service when you specify a valid machine name.'),
      'outline_import' => dt('Point to sites/{site}/files/cis_outline_import/{machine_name}.xml for outline to use instead of default.'),
    ),
    'examples' => array(
      'drush cis-release-kraken' => 
        'Add service instances to all known courses in system',
      'drush cis-kraken --outline_import --build_service=course' => 
        'Add service instances to all known courses in system, attempt outline importing, only building the "course" instance.',
    ),
  );
  return $items;
}

/**
 * Implements hook_drush_help().
 */
function cis_helper_drush_help($section) {
  switch ($section) {
    case 'drush:create-service-instance':
      return dt('Pass this commands to produce a new drupal site in the CIS instance.');
    case 'drush:cis-release-kraken':
      return dt('Produce a "kraken" that will hit and force the production of every course into all instances, good for initial population and testing.');
  }
}

/**
 * Drush command callback for cis-release-kraken.
 */
function drush_cis_helper_cis_release_kraken() {
  $courses = _cis_helper_assemble_entity_list('node', 'course', 'field_machine_name', 'title');
  // load all services
  $services = _cis_helper_assemble_entity_list('node', 'service', 'field_machine_name', 'title');
  $build_service = drush_get_option('build_service');
  // remove anything with (dev) in title
  foreach ($services as $name => $title) {
    if (strpos($title, '(dev)')) {
      unset($services[$name]);
    }
    // see if we should unset everything except the service to build
    if (!empty($build_service) && in_array($build_service, array_keys($services)) && $name != $build_service) {
      unset($services[$name]);
    }
  }
  $vars = array(
    '@count' => count($courses),
    '@services' => count($services),
    '@total' => count($courses) * count($services),
  );
  drush_print(dt('@count courses will each build @services for @total operations', $vars));
  if (!drush_confirm(dt('Do you really want to continue?'))) {
    drush_die('Aborting.. that was close!');
  }
  else {
    drush_print(dt('Good luck!'));
    foreach ($courses as $name => $title) {
      $string = '201314FAUP___NAME__123_' . rand(100, 900);
      if (drush_get_option('actually_run')) {
        drush_cis_helper_create_service_instances($name, $string);
      }
      else {
        drush_print(dt('Would have run drush_cis_helper_create_service_instances course "@name" with string "@string"', array('@name' => $name, '@string' => $string)));
      }
    }
  }
}

/**
 * Drush command callback for create-service-instances.
 */
function drush_cis_helper_create_service_instances($machine_name, $string) {
  module_load_include('inc', 'cis_helper', 'cis_helper.pages');
  // load all services
  $build_service = drush_get_option('build_service');
  if (!empty($build_service)) {
    $list = _cis_helper_assemble_entity_list('node', 'service', 'field_machine_name', 'nid');
    if (in_array($build_service, array_keys($list))) {
      $nid = $list[$build_service];
    }
  }
  $services = _cis_helper_assemble_entity_list('node', 'service', 'nid', 'title');
  // remove anything with (dev) in title
  foreach ($services as $key => $service_name) {
    if (strpos($service_name, '(dev)')) {
      unset($services[$key]);
    }
    // see if we got an option to only produce one item
    if (isset($nid) && $key != $nid) {
      unset($services[$key]);
    }
  }
  drush_print_r($services);
  $uname = drush_get_option('uname');
  // if no username, assume admin
  if (!$uname || !user_validate_name($uname)) {
    $tmp = user_load(1);
    $uname = $tmp->name;
  }
  $parts = array();
  // allow other projects to define custom alterations
  // return should be array w/ year, semester, campus and number (section)
  drupal_alter('cis_string_process', $string, $parts);
  $year = $parts['year'];
  $semester = $parts['semester'];
  $campus = $parts['campus'];
  $number = $parts['number'];
  // check if we want to use outline import location and that it exists, or default
  $path = variable_get('file_public_path', conf_path() . '/files') . '/cis_outline_import/';
  if (drush_get_option('outline_import') && file_exists($path . $machine_name . '.xml')) {
    $outline = $path;
  }
  else {
    $outline = drupal_get_path('module', 'cis_helper') . '/instructional_models/' . CIS_HELPER_DEFAULT_CONTENT_OUTLINE;
  }
  // set up the form array
  $form_state = array();
  $form_state['values'] = array(
    'course' => $machine_name, // course machine name
    'instructional_outline' => $outline, // location of outline to use
    'services' => array_keys($services), // array of entity ids of services to use
    'semester' => $semester, // semester as word
    'year' => $year, // year of offering
    'number' => $number, // section number
    'campus' => $campus, // campus code
    'access_string' => $string, // access string to bind
    'instructor' => $uname, // name of the instructor for this course
  );
  // required for forced submission
  $form_state['values']['op'] = t('Create course');
  // try and "submit" the form
  //drupal_form_submit('cis_helper_quick_setup_page', $form_state);
}