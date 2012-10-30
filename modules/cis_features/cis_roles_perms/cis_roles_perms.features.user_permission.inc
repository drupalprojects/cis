<?php
/**
 * @file
 * cis_roles_perms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cis_roles_perms_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Learning Designer',
      2 => 'Staff',
      3 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access ckeditor link.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'Teaching Assistant',
      5 => 'Unit Head',
      6 => 'World Campus',
      7 => 'administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Dean',
      2 => 'Instructor',
      3 => 'Learning Designer',
      4 => 'Staff',
      5 => 'Teaching Assistant',
      6 => 'Unit Head',
      7 => 'World Campus',
      8 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create academic_unit content.
  $permissions['create academic_unit content'] = array(
    'name' => 'create academic_unit content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create course content.
  $permissions['create course content'] = array(
    'name' => 'create course content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_abbreviation.
  $permissions['create field_abbreviation'] = array(
    'name' => 'create field_abbreviation',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_access_string.
  $permissions['create field_access_string'] = array(
    'name' => 'create field_access_string',
    'roles' => array(
      0 => 'Instructor',
      1 => 'Learning Designer',
      2 => 'Staff',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_additional_notes.
  $permissions['create field_additional_notes'] = array(
    'name' => 'create field_additional_notes',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_color.
  $permissions['create field_color'] = array(
    'name' => 'create field_color',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_coordinators.
  $permissions['create field_coordinators'] = array(
    'name' => 'create field_coordinators',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Staff',
      2 => 'Unit Head',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_course_archive.
  $permissions['create field_course_archive'] = array(
    'name' => 'create field_course_archive',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_email.
  $permissions['create field_email'] = array(
    'name' => 'create field_email',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_first_name.
  $permissions['create field_first_name'] = array(
    'name' => 'create field_first_name',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_instant_messenger.
  $permissions['create field_instant_messenger'] = array(
    'name' => 'create field_instant_messenger',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_instructional_designer.
  $permissions['create field_instructional_designer'] = array(
    'name' => 'create field_instructional_designer',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_instructor_of_record.
  $permissions['create field_instructor_of_record'] = array(
    'name' => 'create field_instructor_of_record',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Staff',
      2 => 'Unit Head',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_last_name.
  $permissions['create field_last_name'] = array(
    'name' => 'create field_last_name',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ldap_campus.
  $permissions['create field_ldap_campus'] = array(
    'name' => 'create field_ldap_campus',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ldap_department.
  $permissions['create field_ldap_department'] = array(
    'name' => 'create field_ldap_department',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_phone_number.
  $permissions['create field_phone_number'] = array(
    'name' => 'create field_phone_number',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_seats_offered.
  $permissions['create field_seats_offered'] = array(
    'name' => 'create field_seats_offered',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_syllabus.
  $permissions['create field_syllabus'] = array(
    'name' => 'create field_syllabus',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ta_documents.
  $permissions['create field_ta_documents'] = array(
    'name' => 'create field_ta_documents',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_teaching_assistants.
  $permissions['create field_teaching_assistants'] = array(
    'name' => 'create field_teaching_assistants',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Staff',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_unit_head.
  $permissions['create field_unit_head'] = array(
    'name' => 'create field_unit_head',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create isbn2node_book content.
  $permissions['create isbn2node_book content'] = array(
    'name' => 'create isbn2node_book content',
    'roles' => array(
      0 => 'Learning Designer',
      1 => 'Staff',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create program content.
  $permissions['create program content'] = array(
    'name' => 'create program content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any academic_unit content.
  $permissions['delete any academic_unit content'] = array(
    'name' => 'delete any academic_unit content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any course content.
  $permissions['delete any course content'] = array(
    'name' => 'delete any course content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any isbn2node_book content.
  $permissions['delete any isbn2node_book content'] = array(
    'name' => 'delete any isbn2node_book content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any program content.
  $permissions['delete any program content'] = array(
    'name' => 'delete any program content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own academic_unit content.
  $permissions['delete own academic_unit content'] = array(
    'name' => 'delete own academic_unit content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own course content.
  $permissions['delete own course content'] = array(
    'name' => 'delete own course content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own isbn2node_book content.
  $permissions['delete own isbn2node_book content'] = array(
    'name' => 'delete own isbn2node_book content',
    'roles' => array(
      0 => 'Learning Designer',
      1 => 'Staff',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own program content.
  $permissions['delete own program content'] = array(
    'name' => 'delete own program content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any academic_unit content.
  $permissions['edit any academic_unit content'] = array(
    'name' => 'edit any academic_unit content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any course content.
  $permissions['edit any course content'] = array(
    'name' => 'edit any course content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any isbn2node_book content.
  $permissions['edit any isbn2node_book content'] = array(
    'name' => 'edit any isbn2node_book content',
    'roles' => array(
      0 => 'Learning Designer',
      1 => 'Staff',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any program content.
  $permissions['edit any program content'] = array(
    'name' => 'edit any program content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit boxes.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: edit field_abbreviation.
  $permissions['edit field_abbreviation'] = array(
    'name' => 'edit field_abbreviation',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_access_string.
  $permissions['edit field_access_string'] = array(
    'name' => 'edit field_access_string',
    'roles' => array(
      0 => 'Learning Designer',
      1 => 'Staff',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_additional_notes.
  $permissions['edit field_additional_notes'] = array(
    'name' => 'edit field_additional_notes',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_color.
  $permissions['edit field_color'] = array(
    'name' => 'edit field_color',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_coordinators.
  $permissions['edit field_coordinators'] = array(
    'name' => 'edit field_coordinators',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Staff',
      2 => 'Unit Head',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_course_archive.
  $permissions['edit field_course_archive'] = array(
    'name' => 'edit field_course_archive',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_email.
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_first_name.
  $permissions['edit field_first_name'] = array(
    'name' => 'edit field_first_name',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_instant_messenger.
  $permissions['edit field_instant_messenger'] = array(
    'name' => 'edit field_instant_messenger',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_instructional_designer.
  $permissions['edit field_instructional_designer'] = array(
    'name' => 'edit field_instructional_designer',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_instructor_of_record.
  $permissions['edit field_instructor_of_record'] = array(
    'name' => 'edit field_instructor_of_record',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Staff',
      2 => 'Unit Head',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_last_name.
  $permissions['edit field_last_name'] = array(
    'name' => 'edit field_last_name',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ldap_campus.
  $permissions['edit field_ldap_campus'] = array(
    'name' => 'edit field_ldap_campus',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ldap_department.
  $permissions['edit field_ldap_department'] = array(
    'name' => 'edit field_ldap_department',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_phone_number.
  $permissions['edit field_phone_number'] = array(
    'name' => 'edit field_phone_number',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_seats_offered.
  $permissions['edit field_seats_offered'] = array(
    'name' => 'edit field_seats_offered',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_syllabus.
  $permissions['edit field_syllabus'] = array(
    'name' => 'edit field_syllabus',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ta_documents.
  $permissions['edit field_ta_documents'] = array(
    'name' => 'edit field_ta_documents',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_teaching_assistants.
  $permissions['edit field_teaching_assistants'] = array(
    'name' => 'edit field_teaching_assistants',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Staff',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_unit_head.
  $permissions['edit field_unit_head'] = array(
    'name' => 'edit field_unit_head',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own academic_unit content.
  $permissions['edit own academic_unit content'] = array(
    'name' => 'edit own academic_unit content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own course content.
  $permissions['edit own course content'] = array(
    'name' => 'edit own course content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own field_abbreviation.
  $permissions['edit own field_abbreviation'] = array(
    'name' => 'edit own field_abbreviation',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_access_string.
  $permissions['edit own field_access_string'] = array(
    'name' => 'edit own field_access_string',
    'roles' => array(
      0 => 'Instructor',
      1 => 'Learning Designer',
      2 => 'Staff',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_additional_notes.
  $permissions['edit own field_additional_notes'] = array(
    'name' => 'edit own field_additional_notes',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_color.
  $permissions['edit own field_color'] = array(
    'name' => 'edit own field_color',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_coordinators.
  $permissions['edit own field_coordinators'] = array(
    'name' => 'edit own field_coordinators',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Staff',
      2 => 'Unit Head',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_course_archive.
  $permissions['edit own field_course_archive'] = array(
    'name' => 'edit own field_course_archive',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_email.
  $permissions['edit own field_email'] = array(
    'name' => 'edit own field_email',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_first_name.
  $permissions['edit own field_first_name'] = array(
    'name' => 'edit own field_first_name',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_instant_messenger.
  $permissions['edit own field_instant_messenger'] = array(
    'name' => 'edit own field_instant_messenger',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_instructional_designer.
  $permissions['edit own field_instructional_designer'] = array(
    'name' => 'edit own field_instructional_designer',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_instructor_of_record.
  $permissions['edit own field_instructor_of_record'] = array(
    'name' => 'edit own field_instructor_of_record',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Staff',
      2 => 'Unit Head',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_last_name.
  $permissions['edit own field_last_name'] = array(
    'name' => 'edit own field_last_name',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ldap_campus.
  $permissions['edit own field_ldap_campus'] = array(
    'name' => 'edit own field_ldap_campus',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ldap_department.
  $permissions['edit own field_ldap_department'] = array(
    'name' => 'edit own field_ldap_department',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_phone_number.
  $permissions['edit own field_phone_number'] = array(
    'name' => 'edit own field_phone_number',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_seats_offered.
  $permissions['edit own field_seats_offered'] = array(
    'name' => 'edit own field_seats_offered',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_syllabus.
  $permissions['edit own field_syllabus'] = array(
    'name' => 'edit own field_syllabus',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ta_documents.
  $permissions['edit own field_ta_documents'] = array(
    'name' => 'edit own field_ta_documents',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_teaching_assistants.
  $permissions['edit own field_teaching_assistants'] = array(
    'name' => 'edit own field_teaching_assistants',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Staff',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_unit_head.
  $permissions['edit own field_unit_head'] = array(
    'name' => 'edit own field_unit_head',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own isbn2node_book content.
  $permissions['edit own isbn2node_book content'] = array(
    'name' => 'edit own isbn2node_book content',
    'roles' => array(
      0 => 'Learning Designer',
      1 => 'Staff',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own program content.
  $permissions['edit own program content'] = array(
    'name' => 'edit own program content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: masquerade as user.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: use text format textbook_editor.
  $permissions['use text format textbook_editor'] = array(
    'name' => 'use text format textbook_editor',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Dean',
      2 => 'Instructor',
      3 => 'Learning Designer',
      4 => 'Staff',
      5 => 'Teaching Assistant',
      6 => 'Unit Head',
      7 => 'World Campus',
      8 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: view field_abbreviation.
  $permissions['view field_abbreviation'] = array(
    'name' => 'view field_abbreviation',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_access_string.
  $permissions['view field_access_string'] = array(
    'name' => 'view field_access_string',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'World Campus',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_additional_notes.
  $permissions['view field_additional_notes'] = array(
    'name' => 'view field_additional_notes',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_color.
  $permissions['view field_color'] = array(
    'name' => 'view field_color',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_coordinators.
  $permissions['view field_coordinators'] = array(
    'name' => 'view field_coordinators',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Staff',
      2 => 'Unit Head',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_course_archive.
  $permissions['view field_course_archive'] = array(
    'name' => 'view field_course_archive',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_email.
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_first_name.
  $permissions['view field_first_name'] = array(
    'name' => 'view field_first_name',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_instant_messenger.
  $permissions['view field_instant_messenger'] = array(
    'name' => 'view field_instant_messenger',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_instructional_designer.
  $permissions['view field_instructional_designer'] = array(
    'name' => 'view field_instructional_designer',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Dean',
      2 => 'Instructor',
      3 => 'Learning Designer',
      4 => 'Staff',
      5 => 'Teaching Assistant',
      6 => 'Unit Head',
      7 => 'World Campus',
      8 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_instructor_of_record.
  $permissions['view field_instructor_of_record'] = array(
    'name' => 'view field_instructor_of_record',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_last_name.
  $permissions['view field_last_name'] = array(
    'name' => 'view field_last_name',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ldap_campus.
  $permissions['view field_ldap_campus'] = array(
    'name' => 'view field_ldap_campus',
    'roles' => array(
      0 => 'Learning Designer',
      1 => 'Staff',
      2 => 'administrator',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ldap_department.
  $permissions['view field_ldap_department'] = array(
    'name' => 'view field_ldap_department',
    'roles' => array(
      0 => 'Learning Designer',
      1 => 'Staff',
      2 => 'administrator',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_phone_number.
  $permissions['view field_phone_number'] = array(
    'name' => 'view field_phone_number',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_seats_offered.
  $permissions['view field_seats_offered'] = array(
    'name' => 'view field_seats_offered',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_syllabus.
  $permissions['view field_syllabus'] = array(
    'name' => 'view field_syllabus',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ta_documents.
  $permissions['view field_ta_documents'] = array(
    'name' => 'view field_ta_documents',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'Teaching Assistant',
      5 => 'Unit Head',
      6 => 'World Campus',
      7 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_teaching_assistants.
  $permissions['view field_teaching_assistants'] = array(
    'name' => 'view field_teaching_assistants',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Dean',
      2 => 'Instructor',
      3 => 'Learning Designer',
      4 => 'Staff',
      5 => 'Teaching Assistant',
      6 => 'Unit Head',
      7 => 'World Campus',
      8 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_unit_head.
  $permissions['view field_unit_head'] = array(
    'name' => 'view field_unit_head',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_abbreviation.
  $permissions['view own field_abbreviation'] = array(
    'name' => 'view own field_abbreviation',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_access_string.
  $permissions['view own field_access_string'] = array(
    'name' => 'view own field_access_string',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'World Campus',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_additional_notes.
  $permissions['view own field_additional_notes'] = array(
    'name' => 'view own field_additional_notes',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_color.
  $permissions['view own field_color'] = array(
    'name' => 'view own field_color',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_coordinators.
  $permissions['view own field_coordinators'] = array(
    'name' => 'view own field_coordinators',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Staff',
      2 => 'Unit Head',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_course_archive.
  $permissions['view own field_course_archive'] = array(
    'name' => 'view own field_course_archive',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_email.
  $permissions['view own field_email'] = array(
    'name' => 'view own field_email',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_first_name.
  $permissions['view own field_first_name'] = array(
    'name' => 'view own field_first_name',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_instant_messenger.
  $permissions['view own field_instant_messenger'] = array(
    'name' => 'view own field_instant_messenger',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_instructional_designer.
  $permissions['view own field_instructional_designer'] = array(
    'name' => 'view own field_instructional_designer',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Dean',
      2 => 'Instructor',
      3 => 'Learning Designer',
      4 => 'Staff',
      5 => 'Teaching Assistant',
      6 => 'Unit Head',
      7 => 'World Campus',
      8 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_instructor_of_record.
  $permissions['view own field_instructor_of_record'] = array(
    'name' => 'view own field_instructor_of_record',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_last_name.
  $permissions['view own field_last_name'] = array(
    'name' => 'view own field_last_name',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ldap_campus.
  $permissions['view own field_ldap_campus'] = array(
    'name' => 'view own field_ldap_campus',
    'roles' => array(
      0 => 'Learning Designer',
      1 => 'Staff',
      2 => 'administrator',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ldap_department.
  $permissions['view own field_ldap_department'] = array(
    'name' => 'view own field_ldap_department',
    'roles' => array(
      0 => 'Learning Designer',
      1 => 'Staff',
      2 => 'administrator',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_phone_number.
  $permissions['view own field_phone_number'] = array(
    'name' => 'view own field_phone_number',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_seats_offered.
  $permissions['view own field_seats_offered'] = array(
    'name' => 'view own field_seats_offered',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_syllabus.
  $permissions['view own field_syllabus'] = array(
    'name' => 'view own field_syllabus',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ta_documents.
  $permissions['view own field_ta_documents'] = array(
    'name' => 'view own field_ta_documents',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'Teaching Assistant',
      5 => 'Unit Head',
      6 => 'World Campus',
      7 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_teaching_assistants.
  $permissions['view own field_teaching_assistants'] = array(
    'name' => 'view own field_teaching_assistants',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Dean',
      2 => 'Instructor',
      3 => 'Learning Designer',
      4 => 'Staff',
      5 => 'Teaching Assistant',
      6 => 'Unit Head',
      7 => 'World Campus',
      8 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_unit_head.
  $permissions['view own field_unit_head'] = array(
    'name' => 'view own field_unit_head',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view regions_admin_left region.
  $permissions['view regions_admin_left region'] = array(
    'name' => 'view regions_admin_left region',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'regions',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'Staff',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'Coordinator',
      1 => 'Instructor',
      2 => 'Learning Designer',
      3 => 'Staff',
      4 => 'Teaching Assistant',
      5 => 'Unit Head',
      6 => 'World Campus',
      7 => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
