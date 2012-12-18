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
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_academic_home' => 'field_academic_home',
    'field_program_classification' => 'field_program_classification',
    'edit_node' => 'edit_node',
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
    'edit_node' => array(
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
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'course::field_academic_home' => 'course::field_academic_home',
          'course::field_program_classification' => 'course::field_program_classification',
          'course::field_instructional_designer' => 'course::field_instructional_designer',
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
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'use_queue' => 0,
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
  $handler->display->display_options['path'] = 'course_bulk_ops';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Course Bulk Operations';
  $handler->display->display_options['menu']['description'] = 'Course Bulk Operations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_bulk_operations'] = $view;

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
  $handler->display->display_options['fields']['field_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot']['type'] = 'flexslider';
  $handler->display->display_options['fields']['field_screenshot']['settings'] = array(
    'flexslider_optionset' => 'screenshots',
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
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sample Syllabus */
  $handler->display->display_options['fields']['field_sample_syllabus']['id'] = 'field_sample_syllabus';
  $handler->display->display_options['fields']['field_sample_syllabus']['table'] = 'field_data_field_sample_syllabus';
  $handler->display->display_options['fields']['field_sample_syllabus']['field'] = 'field_sample_syllabus';
  $handler->display->display_options['fields']['field_sample_syllabus']['label'] = '';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  /* Contextual filter: Historical course data: Schedule id */
  $handler->display->display_options['arguments']['schedule_id']['id'] = 'schedule_id';
  $handler->display->display_options['arguments']['schedule_id']['table'] = 'historical_course_data';
  $handler->display->display_options['arguments']['schedule_id']['field'] = 'schedule_id';
  $handler->display->display_options['arguments']['schedule_id']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['schedule_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['schedule_id']['title'] = 'Historical course data %1';
  $handler->display->display_options['arguments']['schedule_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['schedule_id']['summary']['format'] = 'default_summary';
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
  $handler->display->display_options['path'] = 'historical_college_data';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Course';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
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
    'default' => 0,
  );

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
  $handler->display->display_options['path'] = 'historical_college_data/year';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
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
  $handler->display->display_options['path'] = 'historical_college_data/campus';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Campus';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Unit */
  $handler = $view->new_display('page', 'Unit', 'page_4');
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
  $handler->display->display_options['path'] = 'historical_college_data/unit';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Unit';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Program */
  $handler = $view->new_display('page', 'Program', 'page_5');
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
  $handler->display->display_options['path'] = 'historical_college_data/program';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Program';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
  $handler->display->display_options['menu']['context'] = 0;
  $export['historical_college_data'] = $view;

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

  /* Display: Unit Heads */
  $handler = $view->new_display('entityreference', 'Unit Heads', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
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

  /* Display: Coordinators */
  $handler = $view->new_display('entityreference', 'Coordinators', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
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
    7 => '7',
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
    9 => '9',
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
    6 => '6',
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
    8 => '8',
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
    10 => '10',
    3 => '3',
  );

  /* Display: Deans */
  $handler = $view->new_display('entityreference', 'Deans', 'entityreference_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
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
  $export['user_type_lists'] = $view;

  return $export;
}
