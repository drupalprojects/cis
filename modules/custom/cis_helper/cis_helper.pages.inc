<?php
/**
 * @file
 * User page callbacks for the cis_helper module.
 */
 
/**
 * Callback for quick setup page
 */
function cis_helper_quick_setup_page() {
  global $user;
  $form = array();
  // allow for new courses to be created from here
  $options = array('new' => t('New'));
  // build list of node entities from structured EFQ
  $options += _cis_helper_assemble_entity_list('node', 'course', 'field_machine_name', 'title');
  // select the course desired
  $form['course'] = array(
    '#required' => '1',
    '#multiple' => '0',
    '#key_type_toggled' => '1',
    '#description' => t('The course that this is associated to'),
    '#type' => 'select',
    '#options' => $options,
    '#multiple_toggle' => '1',
    '#default_value' => 'new',
    '#title' => t('Course'),
  );
  // container for settings related to a new course
  $form['new_course'] = array(
    '#description' => t('Settings that only apply to new courses'),
    '#collapsed' => '0',
    '#type' => 'fieldset',
    '#collapsible' => '1',
    '#title' => t('New Course settings'),
  );
  // new course name
  $form['new_course']['new_name'] = array(
    '#required' => '0',
    '#description' => t('Name of the new course to create.'),
    '#type' => 'textfield',
    '#title' => t('Course name'),
  );
  // new course name
  $form['new_course']['new_title'] = array(
    '#required' => '0',
    '#description' => t('Title of the new course.'),
    '#type' => 'textfield',
    '#title' => t('Course title'),
  );
  // access level
  $form['new_course']['access'] = array(
    '#required' => '1',
    '#description' => t('How restrictive would you like access to be?'),
    '#multiple' => '0',
    '#key_type_toggled' => '1',
    '#default_value' => CIS_HELPER_DEFAULT_AUTHENTICATION,
    '#type' => 'select',
    '#options' => array(
      'open' => t('Open course - publicly available'),
      'authenticated' => t('Require login'),
      'lms' => t('Limit access to my students'),
      'code' => t('Activation code'),
    ),
    '#multiple_toggle' => '1',
    '#title' => t('Method of access'),
  );
	$form['instructional_outline'] = array(
	  '#type' => 'select',
		'#options' => _cis_helper_get_instructional_outlines(),
		'#required' => TRUE,
		'#title' => t('Instructional outline'),
		'#description' => t('This helps in creating a default instructional flow for the course, this just helps provide a starting point.'),
	  '#default_value' => drupal_get_path('module', 'cis_helper') . '/instructional_models/' . CIS_HELPER_DEFAULT_CONTENT_OUTLINE,
	);
  // list of services
  $form['service'] = array(
    '#multiple' => '0',
    '#required' => '1',
    '#key_type_toggled' => '1',
    '#description' => t('The service to deploy for this course'),
    '#type' => 'select',
    '#options' => _cis_helper_assemble_entity_list('node', 'service', 'nid', 'title'),
    '#multiple_toggle' => '1',
    '#title' => t('Service'),
  );
  // offering container
  $form['offering'] = array(
    '#description' => t('The point in time that this course is being offered'),
    '#collapsed' => '0',
    '#type' => 'fieldset',
    '#collapsible' => '1',
    '#title' => t('Offering'),
  );
  // list of available semesters for this offering
  $form['offering']['semester'] = array(
    '#required' => '1',
    '#multiple' => '0',
    '#key_type_toggled' => '1',
    '#type' => 'select',
    '#options' => array(
      'fa' => t('Fall'),
      'sp' => t('Spring'),
      'su' => t('Summer'),
    ),
    '#multiple_toggle' => '1',
    '#title' => t('Semester'),
  );
  // academic year of this offering
  $form['offering']['year'] = array(
    '#required' => '1',
    '#multiple' => '0',
    '#key_type_toggled' => '1',
    '#type' => 'select',
    '#options' => array(
      '201213' => t('2012-13'),
      '201314' => t('2013-14'),
      '201415' => t('2014-15'),
    ),
    '#multiple_toggle' => '1',
    '#title' => t('Year'),
  );
  // section container
  $form['section'] = array(
    '#description' => t('Details related to creation of a section'),
    '#collapsed' => '0',
    '#type' => 'fieldset',
    '#collapsible' => '1',
    '#title' => t('Section'),
  );
	// section number of record
  $form['section']['number'] = array(
    '#description' => t('Section number supplied by the registrar.'),
    '#type' => 'textfield',
    '#title' => t('Section number'),
  );
	// campus code of record
  $form['section']['campus'] = array(
    '#description' => t('Campus code used to identify where this offering takes place.'),
    '#type' => 'textfield',
    '#title' => t('Campus code'),
  );
  // access strings / primary key for binding access across services
  $form['section']['access_string'] = array(
    '#required' => '0',
    '#description' => t('The access string to bind to, this is the primary key for this course section.'),
    '#type' => 'textfield',
    '#title' => t('Access string'),
  );
  // instructor of record
  $form['section']['instructor'] = array(
    '#required' => '1',
    '#description' => t('Instructor of record for the course'),
    '#type' => 'textfield',
    '#default_value' => $user->name,
    '#title' => t('Instructor of Record'),
  );
	// the welcome letter to use for the section to be created
  $form['welcome_letter'] = array(
    '#required' => '0',
    '#description' => t('(PDF only) This gives students instructions on how to get started with their course.'),
    '#type' => 'managed_file',
    '#size' => '30',
    '#title' => t('Welcome letter'),
    '#upload_location' => 'public://welcome_letters/',
    '#upload_validators' => array(
      'file_validate_extensions' => array(
        0 => 'pdf',
      ),
      'file_validate_size' => array(
        0 => 10485760,
      ),
    ),
  );
	// the welcome letter to use for the section to be created
  $form['materials_letter'] = array(
    '#required' => '0',
    '#description' => t('(PDF only) Communicate to the student what materials are needed to take the course.'),
    '#type' => 'managed_file',
    '#size' => '30',
    '#title' => t('Materials letter'),
    '#upload_location' => 'public://materials_letter/',
    '#upload_validators' => array(
      'file_validate_extensions' => array(
        0 => 'pdf',
      ),
      'file_validate_size' => array(
        0 => 10485760,
      ),
    ),
  );
  // the syllabus to use for the section to be created
  $form['syllabus'] = array(
    '#required' => '0',
    '#description' => t('(PDF only) Syllabus for the course'),
    '#type' => 'managed_file',
    '#size' => '30',
    '#title' => t('Syllabus'),
    '#upload_location' => 'public://syllabi/',
    '#upload_validators' => array(
      'file_validate_extensions' => array(
        0 => 'pdf',
      ),
      'file_validate_size' => array(
        0 => 10485760,
      ),
    ),
  );
  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Create course'),
  );
  return $form;
}

/**
 * Implements hook_submit().
 */
function cis_helper_quick_setup_page_submit($form, $form_state) {
  // load account and values for later
  $account = user_load_by_name($form_state['values']['instructor']);
  $offering = NULL;
  $semester = $form_state['values']['semester'];
  $year = $form_state['values']['year'];
	$instructional_outline = $form_state['values']['instructional_outline'];
  $service = $form_state['values']['service'];
  // first step is to create the course if it exists
  if ($form_state['values']['course'] == 'new') {
    $name = check_plain($form_state['values']['new_name']);
    // make course, then we need to generate the ids
    $course = new stdClass();
    $course->type = 'course';
    $course->status = 1;
    $course->revision = 1;
    $course->language = LANGUAGE_NONE;
    // created by the system so root user
    $course->uid = 1;
    $course->title = $name;
		// set course title
		$course->field_course_title[LANGUAGE_NONE][0]['value'] = check_plain($form_state['values']['new_title']);
    // generate machine name
    $course->field_machine_name[LANGUAGE_NONE][0]['value'] = preg_replace('/[^a-z0-9_]+/', '', drupal_strtolower($name));
    // method of access
    $course->field_method_of_access[LANGUAGE_NONE][0]['value'] = $form_state['values']['access'];
    node_save($course);
  }
  else {
		// load array of course machine names based on EFQ
		$courses = _cis_helper_assemble_entity_list('node', 'course', 'field_machine_name', 'nid');
		// this will be the entity id for a course
		$etid = $courses[$form_state['values']['course']];
    $course = entity_load_single('node', $etid);
  }
  // make sure that this course doesn't already have an offering for this semester/year
  if (!empty($course->field_offerings)) {
    foreach ($course->field_offerings[LANGUAGE_NONE] as $offering_ref) {
      $offering_refs[] = $offering_ref['value'];
    }
    $query = new EntityFieldQuery;
    $result = $query
      // select all field collections
      ->entityCondition('entity_type', 'field_collection_item')
      // that are offerings
      ->entityCondition('bundle', 'field_offerings')
      // that have an internal id associated to the current course
      ->propertyCondition('item_id', $offering_refs, 'IN')
      // and semester of the one submitted
      ->fieldCondition('field_semester', 'value', $semester, '=')
      // and year of the one submitted
      ->fieldCondition('field_year', 'value', $year, '=')
      // load as user 1 to ignore access issues for current user
      ->addMetaData('account', user_load(1))
      ->execute();
    // if we had results, set the offering
    if (isset($result['field_collection_item'])) {
      $item = array_keys($result['field_collection_item']);
      $offerings = entity_load('field_collection_item', $item);
      $offering = array_pop($offerings);
    }
  }
  // create an offering if we didn't select one above
  if (is_null($offering)) {
    // now work on the offering
    $offering = entity_create('field_collection_item', array('field_name' => 'field_offerings'));
    // associate this offering to the course
    $offering->setHostEntity('node', $course);
    // set semester
    $offering->field_semester[LANGUAGE_NONE][0]['value'] = $semester;
    // set year
    $offering->field_year[LANGUAGE_NONE][0]['value'] = $year;
  }
  
  // now work on the section
  $section = entity_create('field_collection_item', array('field_name' => 'field_sections'));
  // associate this section to the offering
  $section->setHostEntity('field_collection_item', $offering);
  // set the section number
  $section->field_section_number[LANGUAGE_NONE][0]['value'] = $form_state['values']['number'];
  // set the campus code
  $section->field_campus[LANGUAGE_NONE][0]['value'] = $form_state['values']['campus'];
	// set the access string
  $section->field_access_string[LANGUAGE_NONE][0]['value'] = $form_state['values']['access_string'];
  // set the entity reference field (user)
  $section->field_instructor_of_record[LANGUAGE_NONE][0]['target_id'] = $account->uid;
  // special handling for files, if added
	$file_check = array('syllabus', 'welcome_letter', 'materials_letter');
	foreach ($file_check as $file_name) {
		// make sure the file came across
		if ($form_state['values'][$file_name] != '') {
			// load the file into an object
			$file = file_load($form_state['values'][$file_name]);
			// Change status to permanent so it isn't killed on cron clean up
			$file->status = FILE_STATUS_PERMANENT;
			// save file
			file_save($file);
			// silly typecast of file object to array for field happiness
			$file_ary = (array)$file;
			// set the file to be displayed on this field_collection_item
			$file_ary['display'] = 1;
			// field names must match files to check
			$field_name = 'field_' . $file_name;
			// set the section's file field to match file array
			$section->{$field_name}[LANGUAGE_NONE][0] = $file_ary;
		}
	}
	// allow other modules to alter information
	drupal_alter('cis_quick_submit', $section, $offering);
	// save section
	$section->save();
  
  // now work on the service instance if needed
  $query = new EntityFieldQuery;
  $result = $query
    ->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'service_instance')
    ->fieldCondition('field_services', 'target_id', $service, '=')
    ->fieldCondition('field_course', 'target_id', $course->nid, '=')
    ->addMetaData('account', user_load(1)) // Run the query as user 1.
    ->execute();
  // verify this service doesn't already exist
  if (count($result) == 0) {
    // make course, then we need to generate the ids
    $instance = new stdClass();
    $instance->type = 'service_instance';
    $instance->status = 1;
    $instance->revision = 1;
    $instance->language = LANGUAGE_NONE;
    // created by the system so root user
    $instance->uid = 1;
    // set the entity reference field to service
    $instance->field_services[LANGUAGE_NONE][0]['target_id'] = $service;
    // set the entity reference field to course
    $instance->field_course[LANGUAGE_NONE][0]['target_id'] = $course->nid;
		// repurpose the general data field
		$instance->field_service_data[LANGUAGE_NONE][0]['value'] = getcwd() . '/' . $instructional_outline;
    // this will create the service because of the hook_entity_insert used here
    node_save($instance);
		// instance UUID will be sent to the new course
		// this is the only case when instruction_outline needs to be populated manually
		// this value will be targetted and converted during a service account PUT operation
		$section->field_instructional_outline[LANGUAGE_NONE][0]['value'] = $instance->uuid;
		// save section
		$section->save();
  }
}