<?php
/**
 * @file
 * cis_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cis_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_access|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_access';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Access',
    'weight' => '3',
    'children' => array(
      0 => 'field_access_string',
      1 => 'field_access_url',
      2 => 'field_method_of_access',
      3 => 'field_studio_space',
      4 => 'field_access_dates',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Access',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Location of the course if it has an online space',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_access|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|user|user|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '4',
    'children' => array(
      0 => 'timezone',
      1 => 'overlay_control',
      2 => 'wysiwyg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_advanced|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_archives|field_collection_item|field_offerings|form';
  $field_group->group_name = 'group_archives';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_offerings';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Archives',
    'weight' => '3',
    'children' => array(
      0 => 'field_course_archive',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Archives',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_archives|field_collection_item|field_offerings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|user|user|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_phone_number',
      1 => 'field_email',
      2 => 'field_instant_messenger',
      3 => 'field_additional_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_contact_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|course|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_academic_home',
      2 => 'field_program_classification',
      3 => 'field_course_title',
      4 => 'title',
      5 => 'field_instructional_designer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_details|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ecoop_optional|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_ecoop_optional';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_historical';
  $field_group->data = array(
    'label' => 'E-Coop optional',
    'weight' => '8',
    'children' => array(
      0 => 'field_ecoop_filled',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'E-Coop optional',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Optional fields to fill out if this is going through the elearning cooperative.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ecoop_optional|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ecoop_planning|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_ecoop_planning';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_setup';
  $field_group->data = array(
    'label' => 'E-Coop',
    'weight' => '5',
    'children' => array(
      0 => 'field_ecoop_number_of_seats',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'E-Coop',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ecoop_planning|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_historical|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_historical';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Historical',
    'weight' => '4',
    'children' => array(
      0 => 'field_seats_filled',
      1 => 'group_wc_optional',
      2 => 'group_ecoop_optional',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Historical',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Information to be filled out after the course has finished running, mostly for documentation and planning purposes.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_historical|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instructors|node|course|form';
  $field_group->group_name = 'group_instructors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resources';
  $field_group->data = array(
    'label' => 'Instructors',
    'weight' => '14',
    'children' => array(
      0 => 'field_inst_design_doc',
      1 => 'field_inst_delivery_guide',
      2 => 'field_inst_setup_guide',
      3 => 'field_inst_other_documents',
      4 => 'field_inst_instructions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Instructors',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_instructors|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offerings_wrapper|node|course|form';
  $field_group->group_name = 'group_offerings_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Offerings',
    'weight' => '3',
    'children' => array(
      0 => 'field_offerings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Offerings',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_offerings_wrapper|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|user|user|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal',
    'weight' => '2',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_ldap_campus',
      3 => 'field_ldap_department',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'These fields are set by LDAP',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_personal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personel|node|academic_unit|form';
  $field_group->group_name = 'group_personel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'academic_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personel',
    'weight' => '3',
    'children' => array(
      0 => 'field_unit_head',
      1 => 'field_coordinators',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personel|node|academic_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources|node|course|form';
  $field_group->group_name = 'group_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '2',
    'children' => array(
      0 => 'group_tas',
      1 => 'group_instructors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Resources',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_resources|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_samples|node|course|form';
  $field_group->group_name = 'group_samples';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Samples',
    'weight' => '1',
    'children' => array(
      0 => 'field_sample_syllabus',
      1 => 'field_sample_lesson',
      2 => 'field_university_bulletin',
      3 => 'group_screenshots',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Samples',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_samples|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_screenshots|node|course|form';
  $field_group->group_name = 'group_screenshots';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_samples';
  $field_group->data = array(
    'label' => 'Screenshots',
    'weight' => '7',
    'children' => array(
      0 => 'field_screenshot',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Screenshots',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_screenshots|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sections_wrapper|field_collection_item|field_offerings|form';
  $field_group->group_name = 'group_sections_wrapper';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_offerings';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sections',
    'weight' => '1',
    'children' => array(
      0 => 'field_sections',
      1 => 'field_ratio',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Sections',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'You can only add sections to offerings on the offerings tab',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_sections_wrapper|field_collection_item|field_offerings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sem_year|field_collection_item|field_offerings|form';
  $field_group->group_name = 'group_sem_year';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_offerings';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Semester/Year',
    'weight' => '0',
    'children' => array(
      0 => 'field_semester',
      1 => 'field_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Semester/Year',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sem_year|field_collection_item|field_offerings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_setup|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_setup';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Setup',
    'weight' => '0',
    'children' => array(
      0 => 'field_campus',
      1 => 'field_seats_offered',
      2 => 'field_method_of_offering',
      3 => 'field_section_number',
      4 => 'group_ecoop_planning',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Setup',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Campus, number of offerings and method of offering as required in order to setup a course section.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_setup|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_syllabus|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_syllabus';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Syllabus',
    'weight' => '2',
    'children' => array(
      0 => 'field_syllabus',
      1 => 'field_materials',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Syllabus',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Syllabus and materials that define the requirements to take the course',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_syllabus|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tas|node|course|form';
  $field_group->group_name = 'group_tas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resources';
  $field_group->data = array(
    'label' => 'Teach Assistants',
    'weight' => '16',
    'children' => array(
      0 => 'field_ta_documents',
      1 => 'field_ta_instructions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Teach Assistants',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_tas|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teachers|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_teachers';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teachers',
    'weight' => '1',
    'children' => array(
      0 => 'field_instructor_of_record',
      1 => 'field_teaching_assistants',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Teachers',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Who is teaching the course',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_teachers|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wc_optional|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_wc_optional';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_historical';
  $field_group->data = array(
    'label' => 'World Campus Optional',
    'weight' => '7',
    'children' => array(
      0 => 'field_wd_filled',
      1 => 'field_up_filled',
      2 => 'field_cc_filled',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'World Campus Optional',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Optional fields to fill out if the World Campus is where this is being delivered',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_wc_optional|field_collection_item|field_sections|form'] = $field_group;

  return $export;
}
