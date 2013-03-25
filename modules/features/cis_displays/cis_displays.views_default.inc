<?php
/**
 * @file
 * cis_displays.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cis_displays_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cis_bulk_operations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course Bulk operations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course Bulk Operations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_academic_home' => 'field_academic_home',
    'field_program_classification' => 'field_program_classification',
    'field_course_author' => 'field_course_author',
    'field_instructional_designer' => 'field_instructional_designer',
    'field_lead_instructor' => 'field_lead_instructor',
    'edit_node' => 'edit_node',
    'field_machine_name' => 'field_machine_name',
    'field_method_of_access' => 'field_method_of_access',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_home' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_classification' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_author' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instructional_designer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lead_instructor' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_machine_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_method_of_access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['summary'] = 'List of courses to perform bulk operations on';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'course::field_academic_home' => 'course::field_academic_home',
          'course::field_instructional_designer' => 'course::field_instructional_designer',
          'course::field_program_classification' => 'course::field_program_classification',
          'course::field_method_of_access' => 'course::field_method_of_access',
          'course::field_display_in_course_list' => 'course::field_display_in_course_list',
          'course::field_course_author' => 'course::field_course_author',
          'course::field_lead_instructor' => 'course::field_lead_instructor',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Course';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Academic home */
  $handler->display->display_options['fields']['field_academic_home']['id'] = 'field_academic_home';
  $handler->display->display_options['fields']['field_academic_home']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['fields']['field_academic_home']['field'] = 'field_academic_home';
  $handler->display->display_options['fields']['field_academic_home']['label'] = 'Unit';
  $handler->display->display_options['fields']['field_academic_home']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academic_home']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_academic_home']['delta_offset'] = '0';
  /* Field: Content: Program classification */
  $handler->display->display_options['fields']['field_program_classification']['id'] = 'field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['field'] = 'field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['label'] = 'Program';
  $handler->display->display_options['fields']['field_program_classification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_classification']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_program_classification']['delta_offset'] = '0';
  /* Field: Content: Course Author */
  $handler->display->display_options['fields']['field_course_author']['id'] = 'field_course_author';
  $handler->display->display_options['fields']['field_course_author']['table'] = 'field_data_field_course_author';
  $handler->display->display_options['fields']['field_course_author']['field'] = 'field_course_author';
  $handler->display->display_options['fields']['field_course_author']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Instructional Designer */
  $handler->display->display_options['fields']['field_instructional_designer']['id'] = 'field_instructional_designer';
  $handler->display->display_options['fields']['field_instructional_designer']['table'] = 'field_data_field_instructional_designer';
  $handler->display->display_options['fields']['field_instructional_designer']['field'] = 'field_instructional_designer';
  $handler->display->display_options['fields']['field_instructional_designer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Lead Instructor */
  $handler->display->display_options['fields']['field_lead_instructor']['id'] = 'field_lead_instructor';
  $handler->display->display_options['fields']['field_lead_instructor']['table'] = 'field_data_field_lead_instructor';
  $handler->display->display_options['fields']['field_lead_instructor']['field'] = 'field_lead_instructor';
  $handler->display->display_options['fields']['field_lead_instructor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Academic home (field_academic_home) */
  $handler->display->display_options['filters']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['filters']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator_id'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['label'] = 'Unit';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['identifier'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Program classification (field_program_classification) */
  $handler->display->display_options['filters']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['filters']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator_id'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['label'] = 'Program';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['identifier'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
  );

  /* Display: Bulk Ops */
  $handler = $view->new_display('page', 'Bulk Ops', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'cis/courses/bulk_ops';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Course Bulk Operations';
  $handler->display->display_options['menu']['description'] = 'Course Bulk Operations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_bulk_operations'] = $view;

  $view = new view();
  $view->name = 'cis_departments';
  $view->description = 'Views that help visualize department information';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CIS Departments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CIS Departments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'academic_unit' => 'academic_unit',
  );

  /* Display: Unit / Department List */
  $handler = $view->new_display('page', 'Unit / Department List', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'cis/units';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Units';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Visual */
  $handler = $view->new_display('page', 'Visual', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['type'] = 'OrgChart';
  $handler->display->display_options['style_options']['width'] = '600';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['responsive'] = 0;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Field: Content: Academic home */
  $handler->display->display_options['fields']['field_academic_home']['id'] = 'field_academic_home';
  $handler->display->display_options['fields']['field_academic_home']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['fields']['field_academic_home']['field'] = 'field_academic_home';
  $handler->display->display_options['fields']['field_academic_home']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_academic_home']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'border-color:green;font-size:11px;';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'border-color:green;';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  /* Filter criterion: Content: Academic home (field_academic_home) */
  $handler->display->display_options['filters']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['filters']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator_id'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['label'] = 'Academic home';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['identifier'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Program classification (field_program_classification) */
  $handler->display->display_options['filters']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['filters']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator_id'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['label'] = 'Program';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['identifier'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
    13 => 0,
  );
  $handler->display->display_options['path'] = 'cis/units/map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Unit Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_departments'] = $view;

  $view = new view();
  $view->name = 'cis_field_collection_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'CIS Field Collection admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CIS Field Collection admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'cis/admin/field-collections';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Field Collection admin';
  $handler->display->display_options['menu']['weight'] = '30';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_field_collection_admin'] = $view;

  $view = new view();
  $view->name = 'cis_my_courses';
  $view->description = 'Helper displays for showing courses you should care about';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CIS My Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CIS My Courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );

  /* Display: Instructional Designer of record */
  $handler = $view->new_display('block', 'Instructional Designer of record', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Courses I\'m responsible for';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Instructional Designer (field_instructional_designer) */
  $handler->display->display_options['arguments']['field_instructional_designer_target_id']['id'] = 'field_instructional_designer_target_id';
  $handler->display->display_options['arguments']['field_instructional_designer_target_id']['table'] = 'field_data_field_instructional_designer';
  $handler->display->display_options['arguments']['field_instructional_designer_target_id']['field'] = 'field_instructional_designer_target_id';
  $handler->display->display_options['arguments']['field_instructional_designer_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_instructional_designer_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_instructional_designer_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instructional_designer_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instructional_designer_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Instructor */
  $handler = $view->new_display('block', 'Instructor', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Courses I Teach';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['ui_name'] = 'Offering';
  $handler->display->display_options['relationships']['field_offerings_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_offerings_value']['delta'] = '-1';
  /* Relationship: Section */
  $handler->display->display_options['relationships']['field_sections_value']['id'] = 'field_sections_value';
  $handler->display->display_options['relationships']['field_sections_value']['table'] = 'field_data_field_sections';
  $handler->display->display_options['relationships']['field_sections_value']['field'] = 'field_sections_value';
  $handler->display->display_options['relationships']['field_sections_value']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_sections_value']['ui_name'] = 'Section';
  $handler->display->display_options['relationships']['field_sections_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_sections_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: Instructor of record (field_instructor_of_record) */
  $handler->display->display_options['arguments']['field_instructor_of_record_target_id']['id'] = 'field_instructor_of_record_target_id';
  $handler->display->display_options['arguments']['field_instructor_of_record_target_id']['table'] = 'field_data_field_instructor_of_record';
  $handler->display->display_options['arguments']['field_instructor_of_record_target_id']['field'] = 'field_instructor_of_record_target_id';
  $handler->display->display_options['arguments']['field_instructor_of_record_target_id']['relationship'] = 'field_sections_value';
  $handler->display->display_options['arguments']['field_instructor_of_record_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_instructor_of_record_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_instructor_of_record_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instructor_of_record_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instructor_of_record_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: CIS Container */
  $handler = $view->new_display('page', 'CIS Container', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'cis';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'CIS';
  $handler->display->display_options['menu']['description'] = 'CIS list of courses';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Course list */
  $handler = $view->new_display('page', 'Course list', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'cis/courses';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Courses';
  $handler->display->display_options['menu']['description'] = 'List of Courses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_my_courses'] = $view;

  $view = new view();
  $view->name = 'cis_offerings';
  $view->description = 'Displays useful in visualizing what is being offered';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'CIS Offerings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CIS Offerings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Field collection item: Entity with the Offerings (field_offerings) */
  $handler->display->display_options['relationships']['field_offerings_node']['id'] = 'field_offerings_node';
  $handler->display->display_options['relationships']['field_offerings_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_offerings_node']['field'] = 'field_offerings_node';
  $handler->display->display_options['relationships']['field_offerings_node']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_offerings_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['exclude'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'title';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[item_id]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offerings_node';
  $handler->display->display_options['fields']['title']['label'] = 'Course';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'title';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_year] [field_semester]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/offerings';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'format';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'border-color:green;';
  /* Sort criterion: Field collection item: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  /* Sort criterion: Field collection item: Semester (field_semester) */
  $handler->display->display_options['sorts']['field_semester_value']['id'] = 'field_semester_value';
  $handler->display->display_options['sorts']['field_semester_value']['table'] = 'field_data_field_semester';
  $handler->display->display_options['sorts']['field_semester_value']['field'] = 'field_semester_value';
  /* Filter criterion: Field collection item: Archived */
  $handler->display->display_options['filters']['archived']['id'] = 'archived';
  $handler->display->display_options['filters']['archived']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['archived']['field'] = 'archived';
  $handler->display->display_options['filters']['archived']['value']['value'] = '0';
  $handler->display->display_options['filters']['archived']['group'] = 1;
  /* Filter criterion: Field collection item: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['relationship'] = 'field_sections_field_collection_item';
  $handler->display->display_options['filters']['field_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_value']['expose']['operator_id'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_year_value']['expose']['operator'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['identifier'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
    13 => 0,
  );
  /* Filter criterion: Field collection item: Semester (field_semester) */
  $handler->display->display_options['filters']['field_semester_value']['id'] = 'field_semester_value';
  $handler->display->display_options['filters']['field_semester_value']['table'] = 'field_data_field_semester';
  $handler->display->display_options['filters']['field_semester_value']['field'] = 'field_semester_value';
  $handler->display->display_options['filters']['field_semester_value']['relationship'] = 'field_sections_field_collection_item';
  $handler->display->display_options['filters']['field_semester_value']['group'] = 1;
  $handler->display->display_options['filters']['field_semester_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_semester_value']['expose']['operator_id'] = 'field_semester_value_op';
  $handler->display->display_options['filters']['field_semester_value']['expose']['label'] = 'Semester';
  $handler->display->display_options['filters']['field_semester_value']['expose']['operator'] = 'field_semester_value_op';
  $handler->display->display_options['filters']['field_semester_value']['expose']['identifier'] = 'field_semester_value';
  $handler->display->display_options['filters']['field_semester_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
    13 => 0,
  );

  /* Display: Offering Table */
  $handler = $view->new_display('page', 'Offering Table', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_offerings_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['exclude'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'title';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[item_id]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offerings_node';
  $handler->display->display_options['fields']['title']['label'] = 'Course';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'delete';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'field-collection/field-sections/[item_id]/delete';
  $handler->display->display_options['path'] = 'cis/offerings';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Offerings';
  $handler->display->display_options['menu']['name'] = 'management';

  /* Display: C - O Map */
  $handler = $view->new_display('page', 'C - O Map', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Courses - Offerings';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['type'] = 'OrgChart';
  $handler->display->display_options['style_options']['width'] = '600';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_offerings_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['exclude'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'title';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[item_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'title';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_year] [field_semester]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/offerings';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offerings_node';
  $handler->display->display_options['fields']['title']['label'] = 'Course';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'format';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'border-color:green;';
  $handler->display->display_options['path'] = 'cis/offerings/course-map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Course Map';
  $handler->display->display_options['menu']['description'] = 'Course Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'title';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_year] - [field_semester]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'title';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_year] - [field_semester]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offerings_node';
  $handler->display->display_options['fields']['title']['label'] = 'Course';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'format';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'border-color:green;';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page_3' => 'page_3',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: O - C Map */
  $handler = $view->new_display('page', 'O - C Map', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Courses - Offerings';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['type'] = 'OrgChart';
  $handler->display->display_options['style_options']['width'] = '600';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['exclude'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_offerings_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offerings_node';
  $handler->display->display_options['fields']['title']['label'] = 'Course';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'title';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_year] [field_semester]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'format';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'border-color:green;';
  $handler->display->display_options['path'] = 'cis/offerings/semester-map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Semester Map';
  $handler->display->display_options['menu']['description'] = 'Semester Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: O - S Map */
  $handler = $view->new_display('page', 'O - S Map', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sections';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['type'] = 'OrgChart';
  $handler->display->display_options['style_options']['width'] = '600';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field collection item: Entity with the Sections (field_sections) */
  $handler->display->display_options['relationships']['field_sections_field_collection_item']['id'] = 'field_sections_field_collection_item';
  $handler->display->display_options['relationships']['field_sections_field_collection_item']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_sections_field_collection_item']['field'] = 'field_sections_field_collection_item';
  $handler->display->display_options['relationships']['field_sections_field_collection_item']['label'] = 'Offering';
  $handler->display->display_options['relationships']['field_sections_field_collection_item']['required'] = TRUE;
  /* Relationship: Field collection item: Entity with the Offerings (field_offerings) */
  $handler->display->display_options['relationships']['field_offerings_node']['id'] = 'field_offerings_node';
  $handler->display->display_options['relationships']['field_offerings_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_offerings_node']['field'] = 'field_offerings_node';
  $handler->display->display_options['relationships']['field_offerings_node']['relationship'] = 'field_sections_field_collection_item';
  $handler->display->display_options['relationships']['field_offerings_node']['label'] = 'Course';
  $handler->display->display_options['relationships']['field_offerings_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_sections_field_collection_item';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['relationship'] = 'field_sections_field_collection_item';
  $handler->display->display_options['fields']['field_semester']['exclude'] = TRUE;
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['exclude'] = TRUE;
  /* Field: Field collection item: Section number */
  $handler->display->display_options['fields']['field_section_number']['id'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['table'] = 'field_data_field_section_number';
  $handler->display->display_options['fields']['field_section_number']['field'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['exclude'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Display title';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_semester] [field_year] [field_campus] [field_section_number]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offerings_node';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'format';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'border-color:green;';
  $handler->display->display_options['path'] = 'cis/offerings/section-map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Section Map';
  $handler->display->display_options['menu']['description'] = 'Section Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_offerings'] = $view;

  $view = new view();
  $view->name = 'cis_programs';
  $view->description = 'Listings of Programs';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CIS Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CIS Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program' => 'program',
  );

  /* Display: Program table */
  $handler = $view->new_display('page', 'Program table', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'cis/programs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Programs';
  $handler->display->display_options['menu']['name'] = 'management';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['type'] = 'OrgChart';
  $handler->display->display_options['style_options']['width'] = '600';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Field: Content: Program classification */
  $handler->display->display_options['fields']['field_program_classification']['id'] = 'field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['field'] = 'field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_program_classification']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'border-color:green;';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  /* Filter criterion: Content: Program classification (field_program_classification) */
  $handler->display->display_options['filters']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['filters']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator_id'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['label'] = 'Program';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['identifier'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
    13 => 0,
  );
  $handler->display->display_options['path'] = 'cis/programs/map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Program map';
  $handler->display->display_options['menu']['description'] = 'Program mapping';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_programs'] = $view;

  $view = new view();
  $view->name = 'cis_resources';
  $view->description = 'List of global resources for use by course sections in the system.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CIS Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create resource content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  /* Filter criterion: Content: Resource type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'global' => 'global',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CIS Resources';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_machine_name' => 'field_machine_name',
    'field_type' => 'field_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_machine_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Machine name */
  $handler->display->display_options['fields']['field_machine_name']['id'] = 'field_machine_name';
  $handler->display->display_options['fields']['field_machine_name']['table'] = 'field_data_field_machine_name';
  $handler->display->display_options['fields']['field_machine_name']['field'] = 'field_machine_name';
  $handler->display->display_options['fields']['field_machine_name']['element_label_colon'] = FALSE;
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  $handler->display->display_options['path'] = 'cis/resources';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Resources';
  $handler->display->display_options['menu']['description'] = 'List of all resources in the system';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_resources'] = $view;

  $view = new view();
  $view->name = 'cis_service_map';
  $view->description = 'Visualizing the service instances and courses that exist';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CIS service map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CIS service map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['type'] = 'OrgChart';
  $handler->display->display_options['style_options']['width'] = '600';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['relationships']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['relationships']['field_course_target_id']['field'] = 'field_course_target_id';
  /* Field: Content: Course */
  $handler->display->display_options['fields']['field_course']['id'] = 'field_course';
  $handler->display->display_options['fields']['field_course']['table'] = 'field_data_field_course';
  $handler->display->display_options['fields']['field_course']['field'] = 'field_course';
  $handler->display->display_options['fields']['field_course']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_course']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[field_course]';
  /* Field: Field: Service */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'border-color:green;border-size:3px;';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'border-color:red';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_instance' => 'service_instance',
  );
  /* Filter criterion: Content: Academic home (field_academic_home) */
  $handler->display->display_options['filters']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['filters']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator_id'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['label'] = 'Academic home';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['identifier'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
    13 => 0,
  );

  /* Display: Services */
  $handler = $view->new_display('page', 'Services', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'cis/services/map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Service Map';
  $handler->display->display_options['menu']['description'] = 'Service map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Courses */
  $handler = $view->new_display('page', 'Courses', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Service */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_services']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[field_services]';
  /* Field: Content: Course */
  $handler->display->display_options['fields']['field_course']['id'] = 'field_course';
  $handler->display->display_options['fields']['field_course']['table'] = 'field_data_field_course';
  $handler->display->display_options['fields']['field_course']['field'] = 'field_course';
  $handler->display->display_options['fields']['field_course']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_course']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'border-color:green;border-size:3px;';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'border-color:red';
  $handler->display->display_options['path'] = 'cis/courses/map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Course Map';
  $handler->display->display_options['menu']['description'] = 'Visual list of courses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_service_map'] = $view;

  $view = new view();
  $view->name = 'cis_services';
  $view->description = 'List of global resources for use by course sections in the system.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CIS Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create service_instance content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );

  /* Display: Service Entity Reference */
  $handler = $view->new_display('entityreference', 'Service Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Service list */
  $handler = $view->new_display('page', 'Service list', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CIS Resources';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_location' => 'field_location',
    'field_distribution' => 'field_distribution',
    'field_machine_name' => 'field_machine_name',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_distribution' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_machine_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'url';
  /* Field: Content: Distribution */
  $handler->display->display_options['fields']['field_distribution']['id'] = 'field_distribution';
  $handler->display->display_options['fields']['field_distribution']['table'] = 'field_data_field_distribution';
  $handler->display->display_options['fields']['field_distribution']['field'] = 'field_distribution';
  $handler->display->display_options['fields']['field_distribution']['element_label_colon'] = FALSE;
  /* Field: Content: Machine name */
  $handler->display->display_options['fields']['field_machine_name']['id'] = 'field_machine_name';
  $handler->display->display_options['fields']['field_machine_name']['table'] = 'field_data_field_machine_name';
  $handler->display->display_options['fields']['field_machine_name']['field'] = 'field_machine_name';
  $handler->display->display_options['fields']['field_machine_name']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'cis/services';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Services';
  $handler->display->display_options['menu']['description'] = 'List of all services in the CIS';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Service Instance list */
  $handler = $view->new_display('page', 'Service Instance list', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Service Instances';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_location' => 'field_location',
    'field_machine_name' => 'field_machine_name',
    'field_course' => 'field_course',
    'nothing' => 'nothing',
    'field_course_1' => 'field_course_1',
    'field_services' => 'field_services',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_machine_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_services' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Service ref */
  $handler->display->display_options['relationships']['field_services_target_id']['id'] = 'field_services_target_id';
  $handler->display->display_options['relationships']['field_services_target_id']['table'] = 'field_data_field_services';
  $handler->display->display_options['relationships']['field_services_target_id']['field'] = 'field_services_target_id';
  $handler->display->display_options['relationships']['field_services_target_id']['ui_name'] = 'Service ref';
  $handler->display->display_options['relationships']['field_services_target_id']['label'] = 'Service ref';
  $handler->display->display_options['relationships']['field_services_target_id']['required'] = TRUE;
  /* Relationship: course ref */
  $handler->display->display_options['relationships']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['relationships']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['relationships']['field_course_target_id']['field'] = 'field_course_target_id';
  $handler->display->display_options['relationships']['field_course_target_id']['ui_name'] = 'course ref';
  $handler->display->display_options['relationships']['field_course_target_id']['label'] = 'course ref';
  $handler->display->display_options['relationships']['field_course_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Service URL */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_services_target_id';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'Service URL';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_location']['type'] = 'link_plain';
  /* Field: Content: Cron key */
  $handler->display->display_options['fields']['field_cron_key']['id'] = 'field_cron_key';
  $handler->display->display_options['fields']['field_cron_key']['table'] = 'field_data_field_cron_key';
  $handler->display->display_options['fields']['field_cron_key']['field'] = 'field_cron_key';
  $handler->display->display_options['fields']['field_cron_key']['label'] = '';
  $handler->display->display_options['fields']['field_cron_key']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cron_key']['element_label_colon'] = FALSE;
  /* Field: Course machine */
  $handler->display->display_options['fields']['field_machine_name']['id'] = 'field_machine_name';
  $handler->display->display_options['fields']['field_machine_name']['table'] = 'field_data_field_machine_name';
  $handler->display->display_options['fields']['field_machine_name']['field'] = 'field_machine_name';
  $handler->display->display_options['fields']['field_machine_name']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['fields']['field_machine_name']['ui_name'] = 'Course machine';
  $handler->display->display_options['fields']['field_machine_name']['label'] = '';
  $handler->display->display_options['fields']['field_machine_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_machine_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_machine_name']['type'] = 'text_plain';
  /* Field: Content: Course */
  $handler->display->display_options['fields']['field_course']['id'] = 'field_course';
  $handler->display->display_options['fields']['field_course']['table'] = 'field_data_field_course';
  $handler->display->display_options['fields']['field_course']['field'] = 'field_course';
  $handler->display->display_options['fields']['field_course']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Link';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Access [field_course]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_location]/[field_machine_name]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Course */
  $handler->display->display_options['fields']['field_course_1']['id'] = 'field_course_1';
  $handler->display->display_options['fields']['field_course_1']['table'] = 'field_data_field_course';
  $handler->display->display_options['fields']['field_course_1']['field'] = 'field_course';
  $handler->display->display_options['fields']['field_course_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Service */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Cron';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Run Cron';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_location]/[field_machine_name]/cron.php?cron_key=[field_cron_key]';
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit instance';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_instance' => 'service_instance',
  );
  /* Filter criterion: Content: Course (field_course) */
  $handler->display->display_options['filters']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['filters']['field_course_target_id']['field'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_target_id']['expose']['operator_id'] = 'field_course_target_id_op';
  $handler->display->display_options['filters']['field_course_target_id']['expose']['label'] = 'Course';
  $handler->display->display_options['filters']['field_course_target_id']['expose']['operator'] = 'field_course_target_id_op';
  $handler->display->display_options['filters']['field_course_target_id']['expose']['identifier'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
    13 => 0,
  );
  /* Filter criterion: Field: Service (field_services) */
  $handler->display->display_options['filters']['field_services_target_id']['id'] = 'field_services_target_id';
  $handler->display->display_options['filters']['field_services_target_id']['table'] = 'field_data_field_services';
  $handler->display->display_options['filters']['field_services_target_id']['field'] = 'field_services_target_id';
  $handler->display->display_options['filters']['field_services_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_services_target_id']['expose']['operator_id'] = 'field_services_target_id_op';
  $handler->display->display_options['filters']['field_services_target_id']['expose']['label'] = 'Service';
  $handler->display->display_options['filters']['field_services_target_id']['expose']['operator'] = 'field_services_target_id_op';
  $handler->display->display_options['filters']['field_services_target_id']['expose']['identifier'] = 'field_services_target_id';
  $handler->display->display_options['filters']['field_services_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
    13 => 0,
  );
  $handler->display->display_options['path'] = 'cis/services/instances';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Service Instances';
  $handler->display->display_options['menu']['description'] = 'List of all services in the CIS';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_services'] = $view;

  $view = new view();
  $view->name = 'course_slider';
  $view->description = 'Breaks the course rendering up into blocks that can be easily positioned';
  $view->tag = 'course';
  $view->base_table = 'node';
  $view->human_name = 'Course displays';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Promotional screenshots for course */
  $handler->display->display_options['fields']['field_screenshot']['id'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['table'] = 'field_data_field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['field'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_screenshot']['alter']['link_class'] = 'colorbox-inline';
  $handler->display->display_options['fields']['field_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot']['type'] = 'flexslider';
  $handler->display->display_options['fields']['field_screenshot']['settings'] = array(
    'flexslider_optionset' => 'course',
  );
  $handler->display->display_options['fields']['field_screenshot']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Slider */
  $handler = $view->new_display('block', 'Slider', 'block');
  $handler->display->display_options['display_description'] = 'Flex slider block display';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promotional screenshots for course (field_screenshot:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_screenshot';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';

  /* Display: Materials */
  $handler = $view->new_display('block', 'Materials', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Materials';
  $handler->display->display_options['display_description'] = 'materials needed for the course';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'isbn2node_cover' => 'isbn2node_cover',
    'isbn2node_isbn' => 'isbn2node_isbn',
    'title' => 'title',
    'isbn2node_author' => 'isbn2node_author',
    'isbn2node_edition' => 'isbn2node_edition',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'isbn2node_cover' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'isbn2node_isbn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'isbn2node_author' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'isbn2node_edition' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['isbn2node_cover']['id'] = 'isbn2node_cover';
  $handler->display->display_options['fields']['isbn2node_cover']['table'] = 'field_data_isbn2node_cover';
  $handler->display->display_options['fields']['isbn2node_cover']['field'] = 'isbn2node_cover';
  $handler->display->display_options['fields']['isbn2node_cover']['relationship'] = 'field_materials_target_id';
  $handler->display->display_options['fields']['isbn2node_cover']['label'] = '';
  $handler->display->display_options['fields']['isbn2node_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['isbn2node_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['isbn2node_cover']['type'] = 'colorbox';
  $handler->display->display_options['fields']['isbn2node_cover']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => 'flexslider_full',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_materials_target_id';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['isbn2node_isbn']['id'] = 'isbn2node_isbn';
  $handler->display->display_options['fields']['isbn2node_isbn']['table'] = 'field_data_isbn2node_isbn';
  $handler->display->display_options['fields']['isbn2node_isbn']['field'] = 'isbn2node_isbn';
  $handler->display->display_options['fields']['isbn2node_isbn']['relationship'] = 'field_materials_target_id';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['isbn2node_author']['id'] = 'isbn2node_author';
  $handler->display->display_options['fields']['isbn2node_author']['table'] = 'field_data_isbn2node_author';
  $handler->display->display_options['fields']['isbn2node_author']['field'] = 'isbn2node_author';
  $handler->display->display_options['fields']['isbn2node_author']['relationship'] = 'field_materials_target_id';
  /* Field: Content: Edition */
  $handler->display->display_options['fields']['isbn2node_edition']['id'] = 'isbn2node_edition';
  $handler->display->display_options['fields']['isbn2node_edition']['table'] = 'field_data_isbn2node_edition';
  $handler->display->display_options['fields']['isbn2node_edition']['field'] = 'isbn2node_edition';
  $handler->display->display_options['fields']['isbn2node_edition']['relationship'] = 'field_materials_target_id';
  $handler->display->display_options['fields']['isbn2node_edition']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'isbn2node_book' => 'isbn2node_book',
  );

  /* Display: Samples */
  $handler = $view->new_display('block', 'Samples', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Samples';
  $handler->display->display_options['display_description'] = 'Links to sample materials';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sample Syllabus */
  $handler->display->display_options['fields']['field_sample_syllabus']['id'] = 'field_sample_syllabus';
  $handler->display->display_options['fields']['field_sample_syllabus']['table'] = 'field_data_field_sample_syllabus';
  $handler->display->display_options['fields']['field_sample_syllabus']['field'] = 'field_sample_syllabus';
  $handler->display->display_options['fields']['field_sample_syllabus']['label'] = '';
  $handler->display->display_options['fields']['field_sample_syllabus']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_sample_syllabus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sample_syllabus']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sample_syllabus']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sample_syllabus']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sample_syllabus']['type'] = 'file_custom_link';
  $handler->display->display_options['fields']['field_sample_syllabus']['settings'] = array(
    'format_custom_link_text' => 'Sample Syllabus',
  );
  /* Field: Content: Sample Lesson */
  $handler->display->display_options['fields']['field_sample_lesson']['id'] = 'field_sample_lesson';
  $handler->display->display_options['fields']['field_sample_lesson']['table'] = 'field_data_field_sample_lesson';
  $handler->display->display_options['fields']['field_sample_lesson']['field'] = 'field_sample_lesson';
  $handler->display->display_options['fields']['field_sample_lesson']['label'] = '';
  $handler->display->display_options['fields']['field_sample_lesson']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_sample_lesson']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sample_lesson']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sample_lesson']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sample_lesson']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sample_lesson']['type'] = 'file_custom_link';
  $handler->display->display_options['fields']['field_sample_lesson']['settings'] = array(
    'format_custom_link_text' => 'Sample Lesson',
  );
  /* Field: Content: University Bulletin */
  $handler->display->display_options['fields']['field_university_bulletin']['id'] = 'field_university_bulletin';
  $handler->display->display_options['fields']['field_university_bulletin']['table'] = 'field_data_field_university_bulletin';
  $handler->display->display_options['fields']['field_university_bulletin']['field'] = 'field_university_bulletin';
  $handler->display->display_options['fields']['field_university_bulletin']['label'] = '';
  $handler->display->display_options['fields']['field_university_bulletin']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_university_bulletin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_university_bulletin']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_university_bulletin']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_university_bulletin']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_university_bulletin']['type'] = 'link_label';

  /* Display: TA Tab */
  $handler = $view->new_display('page', 'TA Tab', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teaching Assistant Resources';
  $handler->display->display_options['display_description'] = 'Teaching assistant area for documents and resources';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    8 => '8',
    10 => '10',
    6 => '6',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Instructions */
  $handler->display->display_options['fields']['field_ta_instructions']['id'] = 'field_ta_instructions';
  $handler->display->display_options['fields']['field_ta_instructions']['table'] = 'field_data_field_ta_instructions';
  $handler->display->display_options['fields']['field_ta_instructions']['field'] = 'field_ta_instructions';
  $handler->display->display_options['fields']['field_ta_instructions']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_ta_instructions']['element_label_colon'] = FALSE;
  /* Field: Content: Documents */
  $handler->display->display_options['fields']['field_ta_documents']['id'] = 'field_ta_documents';
  $handler->display->display_options['fields']['field_ta_documents']['table'] = 'field_data_field_ta_documents';
  $handler->display->display_options['fields']['field_ta_documents']['field'] = 'field_ta_documents';
  $handler->display->display_options['fields']['field_ta_documents']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_ta_documents']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ta_documents']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ta_documents']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_ta_documents']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'node/%/resources/ta';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Teaching Assistants';
  $handler->display->display_options['menu']['description'] = 'Teaching Assistant Resources';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Offerings';
  $handler->display->display_options['tab_options']['description'] = 'Listing of offerings';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Inst Tab */
  $handler = $view->new_display('page', 'Inst Tab', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instructor Resources';
  $handler->display->display_options['display_description'] = 'Instructor tab';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    8 => '8',
    10 => '10',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Design doc */
  $handler->display->display_options['fields']['field_inst_design_doc']['id'] = 'field_inst_design_doc';
  $handler->display->display_options['fields']['field_inst_design_doc']['table'] = 'field_data_field_inst_design_doc';
  $handler->display->display_options['fields']['field_inst_design_doc']['field'] = 'field_inst_design_doc';
  $handler->display->display_options['fields']['field_inst_design_doc']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_inst_design_doc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_design_doc']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_inst_design_doc']['settings'] = array(
    'format_custom_link_text' => 'Design document',
  );
  /* Field: Content: Setup guide */
  $handler->display->display_options['fields']['field_inst_setup_guide']['id'] = 'field_inst_setup_guide';
  $handler->display->display_options['fields']['field_inst_setup_guide']['table'] = 'field_data_field_inst_setup_guide';
  $handler->display->display_options['fields']['field_inst_setup_guide']['field'] = 'field_inst_setup_guide';
  $handler->display->display_options['fields']['field_inst_setup_guide']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_inst_setup_guide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_setup_guide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_inst_setup_guide']['settings'] = array(
    'format_custom_link_text' => 'Setup Guide',
  );
  /* Field: Content: Delivery Guide */
  $handler->display->display_options['fields']['field_inst_delivery_guide']['id'] = 'field_inst_delivery_guide';
  $handler->display->display_options['fields']['field_inst_delivery_guide']['table'] = 'field_data_field_inst_delivery_guide';
  $handler->display->display_options['fields']['field_inst_delivery_guide']['field'] = 'field_inst_delivery_guide';
  $handler->display->display_options['fields']['field_inst_delivery_guide']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_inst_delivery_guide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_delivery_guide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_inst_delivery_guide']['settings'] = array(
    'format_custom_link_text' => 'Delivery Guide',
  );
  /* Field: Content: Other documents */
  $handler->display->display_options['fields']['field_inst_other_documents']['id'] = 'field_inst_other_documents';
  $handler->display->display_options['fields']['field_inst_other_documents']['table'] = 'field_data_field_inst_other_documents';
  $handler->display->display_options['fields']['field_inst_other_documents']['field'] = 'field_inst_other_documents';
  $handler->display->display_options['fields']['field_inst_other_documents']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_inst_other_documents']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_other_documents']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_inst_other_documents']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_inst_other_documents']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'node/%/resources/instructor';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Instructors';
  $handler->display->display_options['menu']['description'] = 'Instructor Resources';
  $handler->display->display_options['menu']['weight'] = '9';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Offerings';
  $handler->display->display_options['tab_options']['description'] = 'Listing of offerings';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Resources Tab */
  $handler = $view->new_display('page', 'Resources Tab', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['display_description'] = 'Resources Tab';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    11 => '11',
    7 => '7',
    8 => '8',
    10 => '10',
    6 => '6',
    5 => '5',
    9 => '9',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] Resources';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/resources';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Resources';
  $handler->display->display_options['menu']['description'] = 'Course Resources';
  $handler->display->display_options['menu']['weight'] = '9';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Offerings';
  $handler->display->display_options['tab_options']['description'] = 'Listing of offerings';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['course_slider'] = $view;

  $view = new view();
  $view->name = 'courses_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Online Courses';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_course_title' => 'field_course_title',
    'field_academic_home' => 'field_academic_home',
    'field_program_classification' => 'field_program_classification',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_home' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_classification' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['summary'] = 'Online Courses available to the college';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Course title */
  $handler->display->display_options['fields']['field_course_title']['id'] = 'field_course_title';
  $handler->display->display_options['fields']['field_course_title']['table'] = 'field_data_field_course_title';
  $handler->display->display_options['fields']['field_course_title']['field'] = 'field_course_title';
  $handler->display->display_options['fields']['field_course_title']['label'] = 'Title';
  $handler->display->display_options['fields']['field_course_title']['element_label_colon'] = FALSE;
  /* Field: Content: Academic home */
  $handler->display->display_options['fields']['field_academic_home']['id'] = 'field_academic_home';
  $handler->display->display_options['fields']['field_academic_home']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['fields']['field_academic_home']['field'] = 'field_academic_home';
  $handler->display->display_options['fields']['field_academic_home']['label'] = 'Academic Unit';
  $handler->display->display_options['fields']['field_academic_home']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academic_home']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_academic_home']['delta_offset'] = '0';
  /* Field: Content: Program classification */
  $handler->display->display_options['fields']['field_program_classification']['id'] = 'field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['field'] = 'field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['label'] = 'Program';
  $handler->display->display_options['fields']['field_program_classification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_classification']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_program_classification']['delta_offset'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  /* Filter criterion: Content: Academic home (field_academic_home) */
  $handler->display->display_options['filters']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['filters']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator_id'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['label'] = 'Academic unit';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['identifier'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Program classification (field_program_classification) */
  $handler->display->display_options['filters']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['filters']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator_id'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['label'] = 'Program';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['identifier'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Display in course list (field_display_in_course_list) */
  $handler->display->display_options['filters']['field_display_in_course_list_value']['id'] = 'field_display_in_course_list_value';
  $handler->display->display_options['filters']['field_display_in_course_list_value']['table'] = 'field_data_field_display_in_course_list';
  $handler->display->display_options['filters']['field_display_in_course_list_value']['field'] = 'field_display_in_course_list_value';
  $handler->display->display_options['filters']['field_display_in_course_list_value']['value'] = array(
    1 => '1',
  );

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'course-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Courses';
  $handler->display->display_options['menu']['description'] = 'Listing of courses';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Grid */
  $handler = $view->new_display('page', 'Grid', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'course-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Courses';
  $handler->display->display_options['menu']['description'] = 'Listing of courses';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['courses_overview'] = $view;

  $view = new view();
  $view->name = 'historical_college_data';
  $view->description = 'Default view for data table Historical course data';
  $view->tag = 'data table';
  $view->base_table = 'historical_course_data';
  $view->human_name = 'historical_college_data';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'Historical course data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    8 => '8',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'schedule_id' => 'schedule_id',
    'course' => 'course',
    'semester' => 'semester',
    'year' => 'year',
    'location' => 'location',
    'section' => 'section',
    'enrolled' => 'enrolled',
    'limit' => 'limit',
  );
  $handler->display->display_options['style_options']['default'] = -1;
  $handler->display->display_options['style_options']['info'] = array(
    'schedule_id' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'course' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'semester' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'year' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'location' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'section' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'enrolled' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'limit' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'There is no data in this table.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Historical course data: Course */
  $handler->display->display_options['relationships']['course']['id'] = 'course';
  $handler->display->display_options['relationships']['course']['table'] = 'historical_course_data';
  $handler->display->display_options['relationships']['course']['field'] = 'course';
  $handler->display->display_options['relationships']['course']['required'] = TRUE;
  /* Relationship: nid */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'historical_name_to_data';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'course';
  $handler->display->display_options['relationships']['nid']['ui_name'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Historical course data: Schedule id */
  $handler->display->display_options['fields']['schedule_id']['id'] = 'schedule_id';
  $handler->display->display_options['fields']['schedule_id']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['schedule_id']['field'] = 'schedule_id';
  $handler->display->display_options['fields']['schedule_id']['label'] = 'schedule_id';
  $handler->display->display_options['fields']['schedule_id']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  /* Field: Historical course data: Semester */
  $handler->display->display_options['fields']['semester']['id'] = 'semester';
  $handler->display->display_options['fields']['semester']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['semester']['field'] = 'semester';
  $handler->display->display_options['fields']['semester']['label'] = 'semester';
  /* Field: Historical course data: Year */
  $handler->display->display_options['fields']['year']['id'] = 'year';
  $handler->display->display_options['fields']['year']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['year']['field'] = 'year';
  $handler->display->display_options['fields']['year']['label'] = 'year';
  /* Field: Historical course data: Location */
  $handler->display->display_options['fields']['location']['id'] = 'location';
  $handler->display->display_options['fields']['location']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['location']['field'] = 'location';
  $handler->display->display_options['fields']['location']['label'] = 'location';
  /* Field: Historical course data: Section */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'section';
  /* Field: Historical course data: Enrolled */
  $handler->display->display_options['fields']['enrolled']['id'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['enrolled']['field'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['label'] = 'enrolled';
  /* Field: Historical course data: Limit */
  $handler->display->display_options['fields']['limit']['id'] = 'limit';
  $handler->display->display_options['fields']['limit']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['limit']['field'] = 'limit';
  $handler->display->display_options['fields']['limit']['label'] = 'limit';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'nid';
  /* Filter criterion: Historical course data: Location */
  $handler->display->display_options['filters']['location']['id'] = 'location';
  $handler->display->display_options['filters']['location']['table'] = 'historical_course_data';
  $handler->display->display_options['filters']['location']['field'] = 'location';
  $handler->display->display_options['filters']['location']['group'] = 1;
  $handler->display->display_options['filters']['location']['exposed'] = TRUE;
  $handler->display->display_options['filters']['location']['expose']['operator_id'] = 'location_op';
  $handler->display->display_options['filters']['location']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['location']['expose']['operator'] = 'location_op';
  $handler->display->display_options['filters']['location']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['location']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  /* Filter criterion: Historical course data: Semester */
  $handler->display->display_options['filters']['semester']['id'] = 'semester';
  $handler->display->display_options['filters']['semester']['table'] = 'historical_course_data';
  $handler->display->display_options['filters']['semester']['field'] = 'semester';
  $handler->display->display_options['filters']['semester']['group'] = 1;
  $handler->display->display_options['filters']['semester']['exposed'] = TRUE;
  $handler->display->display_options['filters']['semester']['expose']['operator_id'] = 'semester_op';
  $handler->display->display_options['filters']['semester']['expose']['label'] = 'Semester';
  $handler->display->display_options['filters']['semester']['expose']['operator'] = 'semester_op';
  $handler->display->display_options['filters']['semester']['expose']['identifier'] = 'semester';
  $handler->display->display_options['filters']['semester']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  /* Filter criterion: Historical course data: Year */
  $handler->display->display_options['filters']['year']['id'] = 'year';
  $handler->display->display_options['filters']['year']['table'] = 'historical_course_data';
  $handler->display->display_options['filters']['year']['field'] = 'year';
  $handler->display->display_options['filters']['year']['group'] = 1;
  $handler->display->display_options['filters']['year']['exposed'] = TRUE;
  $handler->display->display_options['filters']['year']['expose']['operator_id'] = 'year_op';
  $handler->display->display_options['filters']['year']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['year']['expose']['operator'] = 'year_op';
  $handler->display->display_options['filters']['year']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['year']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['year']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['year']['group_info']['label'] = 'Year';
  $handler->display->display_options['filters']['year']['group_info']['identifier'] = 'year';
  $handler->display->display_options['filters']['year']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['year']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  /* Filter criterion: Content: Academic home (field_academic_home) */
  $handler->display->display_options['filters']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['filters']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_academic_home_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator_id'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['label'] = 'Unit';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['identifier'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Program classification (field_program_classification) */
  $handler->display->display_options['filters']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['filters']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_program_classification_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator_id'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['label'] = 'Program';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['identifier'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  /* Filter criterion: Historical course data: Course */
  $handler->display->display_options['filters']['course']['id'] = 'course';
  $handler->display->display_options['filters']['course']['table'] = 'historical_course_data';
  $handler->display->display_options['filters']['course']['field'] = 'course';
  $handler->display->display_options['filters']['course']['exposed'] = TRUE;
  $handler->display->display_options['filters']['course']['expose']['operator_id'] = 'course_op';
  $handler->display->display_options['filters']['course']['expose']['label'] = 'Course';
  $handler->display->display_options['filters']['course']['expose']['operator'] = 'course_op';
  $handler->display->display_options['filters']['course']['expose']['identifier'] = 'course';
  $handler->display->display_options['filters']['course']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );

  /* Display: Course */
  $handler = $view->new_display('page', 'Course', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '900';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Historical course data: Enrolled */
  $handler->display->display_options['fields']['enrolled']['id'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['enrolled']['field'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['label'] = 'enrolled';
  /* Field: Historical course data: Limit */
  $handler->display->display_options['fields']['limit']['id'] = 'limit';
  $handler->display->display_options['fields']['limit']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['limit']['field'] = 'limit';
  $handler->display->display_options['fields']['limit']['label'] = 'limit';
  $handler->display->display_options['path'] = 'cis/historical_college_data';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'College data';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'year',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '900';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Historical course data: Year */
  $handler->display->display_options['fields']['year']['id'] = 'year';
  $handler->display->display_options['fields']['year']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['year']['field'] = 'year';
  /* Field: Historical course data: Enrolled */
  $handler->display->display_options['fields']['enrolled']['id'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['enrolled']['field'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['enrolled']['label'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['separator'] = '';
  /* Field: Historical course data: Limit */
  $handler->display->display_options['fields']['limit']['id'] = 'limit';
  $handler->display->display_options['fields']['limit']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['limit']['field'] = 'limit';
  $handler->display->display_options['fields']['limit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['limit']['label'] = 'limit';
  $handler->display->display_options['fields']['limit']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Historical course data: Year */
  $handler->display->display_options['sorts']['year']['id'] = 'year';
  $handler->display->display_options['sorts']['year']['table'] = 'historical_course_data';
  $handler->display->display_options['sorts']['year']['field'] = 'year';
  $handler->display->display_options['path'] = 'cis/historical_college_data/year';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Campus */
  $handler = $view->new_display('page', 'Campus', 'page_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'location',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '900';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Historical course data: Location */
  $handler->display->display_options['fields']['location']['id'] = 'location';
  $handler->display->display_options['fields']['location']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['location']['field'] = 'location';
  /* Field: Historical course data: Enrolled */
  $handler->display->display_options['fields']['enrolled']['id'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['enrolled']['field'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['enrolled']['label'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['separator'] = '';
  /* Field: Historical course data: Limit */
  $handler->display->display_options['fields']['limit']['id'] = 'limit';
  $handler->display->display_options['fields']['limit']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['limit']['field'] = 'limit';
  $handler->display->display_options['fields']['limit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['limit']['label'] = 'limit';
  $handler->display->display_options['fields']['limit']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Historical course data: Location */
  $handler->display->display_options['sorts']['location']['id'] = 'location';
  $handler->display->display_options['sorts']['location']['table'] = 'historical_course_data';
  $handler->display->display_options['sorts']['location']['field'] = 'location';
  $handler->display->display_options['path'] = 'cis/historical_college_data/campus';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Campus';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Unit */
  $handler = $view->new_display('page', 'Unit', 'page_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_abbreviation',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'PieChart';
  $handler->display->display_options['style_options']['width'] = '900';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Historical course data: Course */
  $handler->display->display_options['relationships']['course']['id'] = 'course';
  $handler->display->display_options['relationships']['course']['table'] = 'historical_course_data';
  $handler->display->display_options['relationships']['course']['field'] = 'course';
  $handler->display->display_options['relationships']['course']['required'] = TRUE;
  /* Relationship: nid */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'historical_name_to_data';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'course';
  $handler->display->display_options['relationships']['nid']['ui_name'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Abbreviation */
  $handler->display->display_options['fields']['field_abbreviation']['id'] = 'field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['table'] = 'field_data_field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['field'] = 'field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['relationship'] = 'field_academic_home_target_id';
  $handler->display->display_options['fields']['field_abbreviation']['type'] = 'text_plain';
  /* Field: Historical course data: Course */
  $handler->display->display_options['fields']['course']['id'] = 'course';
  $handler->display->display_options['fields']['course']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['course']['field'] = 'course';
  $handler->display->display_options['fields']['course']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['course']['label'] = '';
  $handler->display->display_options['fields']['course']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['course']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Academic home (field_academic_home) */
  $handler->display->display_options['sorts']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['sorts']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['sorts']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['sorts']['field_academic_home_target_id']['relationship'] = 'nid';
  $handler->display->display_options['path'] = 'cis/historical_college_data/unit';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Unit';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Unit enrollments */
  $handler = $view->new_display('page', 'Unit enrollments', 'page_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_abbreviation',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'PieChart';
  $handler->display->display_options['style_options']['width'] = '900';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Historical course data: Course */
  $handler->display->display_options['relationships']['course']['id'] = 'course';
  $handler->display->display_options['relationships']['course']['table'] = 'historical_course_data';
  $handler->display->display_options['relationships']['course']['field'] = 'course';
  $handler->display->display_options['relationships']['course']['required'] = TRUE;
  /* Relationship: nid */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'historical_name_to_data';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'course';
  $handler->display->display_options['relationships']['nid']['ui_name'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Abbreviation */
  $handler->display->display_options['fields']['field_abbreviation']['id'] = 'field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['table'] = 'field_data_field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['field'] = 'field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['relationship'] = 'field_academic_home_target_id';
  $handler->display->display_options['fields']['field_abbreviation']['type'] = 'text_plain';
  /* Field: Historical course data: Enrolled */
  $handler->display->display_options['fields']['enrolled']['id'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['enrolled']['field'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['enrolled']['label'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['separator'] = '';
  /* Field: Historical course data: Limit */
  $handler->display->display_options['fields']['limit']['id'] = 'limit';
  $handler->display->display_options['fields']['limit']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['limit']['field'] = 'limit';
  $handler->display->display_options['fields']['limit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['limit']['label'] = 'limit';
  $handler->display->display_options['fields']['limit']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Academic home (field_academic_home) */
  $handler->display->display_options['sorts']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['sorts']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['sorts']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['sorts']['field_academic_home_target_id']['relationship'] = 'nid';
  $handler->display->display_options['path'] = 'cis/historical_college_data/unit/enrollments';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Enrollments';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Program */
  $handler = $view->new_display('page', 'Program', 'page_7');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_program_classification',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'PieChart';
  $handler->display->display_options['style_options']['width'] = '900';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Historical course data: Course */
  $handler->display->display_options['relationships']['course']['id'] = 'course';
  $handler->display->display_options['relationships']['course']['table'] = 'historical_course_data';
  $handler->display->display_options['relationships']['course']['field'] = 'course';
  $handler->display->display_options['relationships']['course']['required'] = TRUE;
  /* Relationship: nid */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'historical_name_to_data';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'course';
  $handler->display->display_options['relationships']['nid']['ui_name'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Program classification */
  $handler->display->display_options['fields']['field_program_classification']['id'] = 'field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['field'] = 'field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_program_classification']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_program_classification']['empty'] = 'No Program';
  $handler->display->display_options['fields']['field_program_classification']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_program_classification']['delta_offset'] = '0';
  /* Field: Historical course data: Course */
  $handler->display->display_options['fields']['course']['id'] = 'course';
  $handler->display->display_options['fields']['course']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['course']['field'] = 'course';
  $handler->display->display_options['fields']['course']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['course']['label'] = '';
  $handler->display->display_options['fields']['course']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['course']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Program classification (field_program_classification) */
  $handler->display->display_options['sorts']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['sorts']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['sorts']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['sorts']['field_program_classification_target_id']['relationship'] = 'nid';
  $handler->display->display_options['path'] = 'cis/historical_college_data/program';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Program';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Program enrollments */
  $handler = $view->new_display('page', 'Program enrollments', 'page_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_program_classification',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'PieChart';
  $handler->display->display_options['style_options']['width'] = '900';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Program classification */
  $handler->display->display_options['fields']['field_program_classification']['id'] = 'field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['field'] = 'field_program_classification';
  $handler->display->display_options['fields']['field_program_classification']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_program_classification']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_program_classification']['empty'] = 'No program';
  $handler->display->display_options['fields']['field_program_classification']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_program_classification']['delta_offset'] = '0';
  /* Field: Historical course data: Enrolled */
  $handler->display->display_options['fields']['enrolled']['id'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['enrolled']['field'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['enrolled']['label'] = 'enrolled';
  $handler->display->display_options['fields']['enrolled']['separator'] = '';
  /* Field: Historical course data: Limit */
  $handler->display->display_options['fields']['limit']['id'] = 'limit';
  $handler->display->display_options['fields']['limit']['table'] = 'historical_course_data';
  $handler->display->display_options['fields']['limit']['field'] = 'limit';
  $handler->display->display_options['fields']['limit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['limit']['label'] = 'limit';
  $handler->display->display_options['fields']['limit']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Program classification (field_program_classification) */
  $handler->display->display_options['sorts']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['sorts']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['sorts']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['sorts']['field_program_classification_target_id']['relationship'] = 'nid';
  $handler->display->display_options['path'] = 'cis/historical_college_data/program/enrollments';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Enrollments';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Export */
  $handler = $view->new_display('views_data_export', 'Export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'historical_college_data/export';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page_3' => 'page_3',
    'page_6' => 'page_6',
    'page_4' => 'page_4',
    'page_7' => 'page_7',
    'page_5' => 'page_5',
    'default' => 0,
  );
  $export['historical_college_data'] = $view;

  $view = new view();
  $view->name = 'per_academic_unit_charts';
  $view->description = 'Charted data about courses';
  $view->tag = 'course, charts';
  $view->base_table = 'node';
  $view->human_name = 'Academic Unit Charts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '%1 Enrollments per Course';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    11 => '11',
    10 => '10',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = 'Seats over time';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '900';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['3d'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Course */
  $handler->display->display_options['relationships']['reverse_field_academic_home_node']['id'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['relationships']['reverse_field_academic_home_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_academic_home_node']['field'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['relationships']['reverse_field_academic_home_node']['ui_name'] = 'Course';
  $handler->display->display_options['relationships']['reverse_field_academic_home_node']['label'] = 'Course';
  $handler->display->display_options['relationships']['reverse_field_academic_home_node']['required'] = TRUE;
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['relationship'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['relationships']['field_offerings_value']['ui_name'] = 'Offering';
  $handler->display->display_options['relationships']['field_offerings_value']['label'] = 'Offering';
  $handler->display->display_options['relationships']['field_offerings_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_offerings_value']['delta'] = '-1';
  /* Relationship: Section */
  $handler->display->display_options['relationships']['field_sections_value']['id'] = 'field_sections_value';
  $handler->display->display_options['relationships']['field_sections_value']['table'] = 'field_data_field_sections';
  $handler->display->display_options['relationships']['field_sections_value']['field'] = 'field_sections_value';
  $handler->display->display_options['relationships']['field_sections_value']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_sections_value']['ui_name'] = 'Section';
  $handler->display->display_options['relationships']['field_sections_value']['label'] = 'Section';
  $handler->display->display_options['relationships']['field_sections_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_sections_value']['delta'] = '-1';
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['relationship'] = 'field_offerings_value';
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['relationship'] = 'field_offerings_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'academic_unit' => 'academic_unit',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate_options']['access_op'] = 'update';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'academic_unit' => 'academic_unit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Program classification (field_program_classification) */
  $handler->display->display_options['filters']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['filters']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['relationship'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['filters']['field_program_classification_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_program_classification_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator_id'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['label'] = 'Program classification';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['operator'] = 'field_program_classification_target_id_op';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['identifier'] = 'field_program_classification_target_id';
  $handler->display->display_options['filters']['field_program_classification_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
  );

  /* Display: Offerings */
  $handler = $view->new_display('page', 'Offerings', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Offerings for %1';
  $handler->display->display_options['display_description'] = 'Offering tab';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'title' => 'title',
    'field_year' => 'field_year',
    'field_semester' => 'field_semester',
    'field_sections' => 'field_sections',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_semester' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sections' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['ui_name'] = 'Offering';
  $handler->display->display_options['relationships']['field_offerings_value']['label'] = 'Offering';
  $handler->display->display_options['relationships']['field_offerings_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_offerings_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_semester']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Sections */
  $handler->display->display_options['fields']['field_sections']['id'] = 'field_sections';
  $handler->display->display_options['fields']['field_sections']['table'] = 'field_data_field_sections';
  $handler->display->display_options['fields']['field_sections']['field'] = 'field_sections';
  $handler->display->display_options['fields']['field_sections']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_sections']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sections']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sections']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sections']['type'] = 'field_collection_table_view';
  $handler->display->display_options['fields']['field_sections']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 0,
    'view_mode' => 'full',
    'empty' => 1,
  );
  $handler->display->display_options['fields']['field_sections']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sections']['multi_type'] = 'ol';
  /* Field: Add Section */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Add Section';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Add Section';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'field-collection/field-sections/add/field_collection_item/[item_id]?destination=node/!1/offerings';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate_options']['access_op'] = 'update';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['filters']['field_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_value']['expose']['operator_id'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_year_value']['expose']['operator'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['identifier'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
  );
  /* Filter criterion: Field collection item: Semester (field_semester) */
  $handler->display->display_options['filters']['field_semester_value']['id'] = 'field_semester_value';
  $handler->display->display_options['filters']['field_semester_value']['table'] = 'field_data_field_semester';
  $handler->display->display_options['filters']['field_semester_value']['field'] = 'field_semester_value';
  $handler->display->display_options['filters']['field_semester_value']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['filters']['field_semester_value']['group'] = 1;
  $handler->display->display_options['filters']['field_semester_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_semester_value']['expose']['operator_id'] = 'field_semester_value_op';
  $handler->display->display_options['filters']['field_semester_value']['expose']['label'] = 'Semester';
  $handler->display->display_options['filters']['field_semester_value']['expose']['operator'] = 'field_semester_value_op';
  $handler->display->display_options['filters']['field_semester_value']['expose']['identifier'] = 'field_semester_value';
  $handler->display->display_options['filters']['field_semester_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    9 => 0,
    11 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'node/%/offerings';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Offerings';
  $handler->display->display_options['menu']['description'] = 'Offerings of this course';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['per_academic_unit_charts'] = $view;

  $view = new view();
  $view->name = 'user_type_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User type lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[field_last_name], [field_first_name] ([name])';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: User: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
    11 => '11',
    5 => '5',
    10 => '10',
    6 => '6',
    4 => '4',
    7 => '7',
    8 => '8',
    3 => '3',
  );

  /* Display: Unit Heads */
  $handler = $view->new_display('entityreference', 'Unit Heads', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
    10 => '10',
  );

  /* Display: Coordinators */
  $handler = $view->new_display('entityreference', 'Coordinators', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    11 => '11',
    10 => '10',
    4 => '4',
  );

  /* Display: Inst of record */
  $handler = $view->new_display('entityreference', 'Inst of record', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );

  /* Display: World Campus */
  $handler = $view->new_display('entityreference', 'World Campus', 'entityreference_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    11 => '11',
  );

  /* Display: TAs */
  $handler = $view->new_display('entityreference', 'TAs', 'entityreference_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
  );

  /* Display: Learning Designer */
  $handler = $view->new_display('entityreference', 'Learning Designer', 'entityreference_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );

  /* Display: Internal Staff */
  $handler = $view->new_display('entityreference', 'Internal Staff', 'entityreference_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
    3 => '3',
  );

  /* Display: Deans */
  $handler = $view->new_display('entityreference', 'Deans', 'entityreference_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $export['user_type_lists'] = $view;

  return $export;
}
