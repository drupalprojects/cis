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
  $view->name = 'cis_course_charts';
  $view->description = 'Charted data about courses';
  $view->tag = 'course, charts';
  $view->base_table = 'node';
  $view->human_name = 'Per Course Offerings and charts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '%1 Enrollments per Year';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
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
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
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
  $handler->display->display_options['fields']['field_year']['type'] = 'date_default';
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
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_seats_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_seats_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Field collection item: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['sorts']['field_year_value']['expose']['label'] = 'Year (field_year)';
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
  /* Filter criterion: Field collection item: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_value']['id'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_value']['field'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_campus_value']['group'] = 1;
  $handler->display->display_options['filters']['field_campus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator_id'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['label'] = 'Campus';
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['identifier'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['expose']['remember_roles'] = array(
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
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_3' => 'nothing_1',
    'item_id' => 'item_id',
    'field_year' => 'field_year',
    'field_semester' => 'field_semester',
    'field_sections' => 'nothing',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nothing' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'nothing_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 0,
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
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Add offering text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Add offering text';
  $handler->display->display_options['header']['area']['content'] = '[nothing_2]';
  $handler->display->display_options['header']['area']['format'] = 'textbook_editor';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
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
  /* Field: Update offering link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Update offering link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'edit';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'field-collection/field-offerings/[item_id]/edit?destination=node/!1/offerings';
  $handler->display->display_options['fields']['nothing_1']['alter']['alt'] = 'Update this offering';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Delete offering link */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Delete offering link';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'delete';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'field-collection/field-offerings/[item_id]/delete?destination=node/!1/offerings';
  $handler->display->display_options['fields']['nothing_3']['alter']['alt'] = 'Delete this offering';
  $handler->display->display_options['fields']['nothing_3']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
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
  /* Field: Add Section */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Add Section';
  $handler->display->display_options['fields']['nothing']['label'] = 'Sections';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Add section';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'field-collection/field-sections/add/field_collection_item/[item_id]?destination=node/!1/offerings';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
    'empty' => 0,
  );
  $handler->display->display_options['fields']['field_sections']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sections']['multi_type'] = 'ol';
  /* Field: Add an offering */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Add an offering';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add an Offering';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'field-collection/field-offerings/add/node/!1?destination=node/!1/offerings';
  $handler->display->display_options['fields']['nothing_2']['alter']['alt'] = 'Add a new offering';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
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

  /* Display: Data Table */
  $handler = $view->new_display('attachment', 'Data Table', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_seats_filled' => 'field_seats_filled',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_seats_filled' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
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
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Ratio */
  $handler->display->display_options['fields']['field_ratio']['id'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['table'] = 'field_data_field_ratio';
  $handler->display->display_options['fields']['field_ratio']['field'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_ratio']['empty'] = '0';
  $handler->display->display_options['fields']['field_ratio']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '% Filled';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '1';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_seats_filled] / [field_seats_offered]) * 100';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Export */
  $handler = $view->new_display('views_data_export', 'Export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title-enrollment-data.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
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
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Ratio */
  $handler->display->display_options['fields']['field_ratio']['id'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['table'] = 'field_data_field_ratio';
  $handler->display->display_options['fields']['field_ratio']['field'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_ratio']['empty'] = '-';
  $handler->display->display_options['fields']['field_ratio']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/offerings/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Campus */
  $handler = $view->new_display('page', 'Campus', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Campus';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_campus',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/offerings/section';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Campus';
  $handler->display->display_options['menu']['description'] = 'Enrollment data by campus';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Semester */
  $handler = $view->new_display('page', 'Semester', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Semester';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_semester',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_semester']['label'] = '';
  $handler->display->display_options['fields']['field_semester']['element_label_colon'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/offerings/semester';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Semester';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for this course';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_year',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/offerings/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for the year';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_course_charts'] = $view;

  $view = new view();
  $view->name = 'cis_program_charts';
  $view->description = 'Charted data about courses';
  $view->tag = 'course, charts';
  $view->base_table = 'node';
  $view->human_name = 'Per Program Charts';
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
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['id'] = 'reverse_field_program_classification_node';
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['field'] = 'reverse_field_program_classification_node';
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['ui_name'] = 'Course';
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['label'] = 'Course';
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['required'] = TRUE;
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['relationship'] = 'reverse_field_program_classification_node';
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
  $handler->display->display_options['fields']['field_year']['type'] = 'date_default';
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
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_seats_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_seats_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Field collection item: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['relationship'] = 'field_offerings_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_program_classification_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'program' => 'program',
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
    'program' => 'program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Seats filled (field_seats_filled) */
  $handler->display->display_options['filters']['field_seats_filled_value']['id'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['filters']['field_seats_filled_value']['field'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_seats_filled_value']['group'] = 1;
  /* Filter criterion: Field collection item: Number of Seats (field_seats_offered) */
  $handler->display->display_options['filters']['field_seats_offered_value']['id'] = 'field_seats_offered_value';
  $handler->display->display_options['filters']['field_seats_offered_value']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['filters']['field_seats_offered_value']['field'] = 'field_seats_offered_value';
  $handler->display->display_options['filters']['field_seats_offered_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_seats_offered_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_seats_offered_value']['group'] = 1;
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
  /* Filter criterion: Field collection item: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_value']['id'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_value']['field'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_campus_value']['group'] = 1;
  $handler->display->display_options['filters']['field_campus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator_id'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['label'] = 'Campus';
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['identifier'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_academic_home_target_id']['relationship'] = 'reverse_field_program_classification_node';
  $handler->display->display_options['filters']['field_academic_home_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_academic_home_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator_id'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['label'] = 'Academic home';
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
  /* Relationship: Program */
  $handler->display->display_options['relationships']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['ui_name'] = 'Program';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['label'] = 'Program';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
    'empty' => 0,
  );
  $handler->display->display_options['fields']['field_sections']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sections']['multi_type'] = 'ol';
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
  /* Filter criterion: Content: Academic home (field_academic_home) */
  $handler->display->display_options['filters']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['filters']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['filters']['field_academic_home_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_academic_home_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['operator_id'] = 'field_academic_home_target_id_op';
  $handler->display->display_options['filters']['field_academic_home_target_id']['expose']['label'] = 'Academic home';
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
  $handler->display->display_options['path'] = 'node/%/prog_offerings';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Offerings';
  $handler->display->display_options['menu']['description'] = 'Offerings of this course';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data Table */
  $handler = $view->new_display('attachment', 'Data Table', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_year' => 'field_year',
    'field_semester' => 'field_semester',
    'field_campus' => 'field_campus',
    'field_seats_filled' => 'field_seats_filled',
    'field_seats_offered' => 'field_seats_offered',
    'field_ratio' => 'field_ratio',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_semester' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_campus' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seats_filled' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seats_offered' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ratio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_program_classification_node';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
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
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Ratio */
  $handler->display->display_options['fields']['field_ratio']['id'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['table'] = 'field_data_field_ratio';
  $handler->display->display_options['fields']['field_ratio']['field'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_ratio']['empty'] = '0';
  $handler->display->display_options['fields']['field_ratio']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '% Filled';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '1';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_seats_filled] / [field_seats_offered]) * 100';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page' => 'page',
    'page_4' => 'page_4',
    'page_5' => 'page_5',
    'default' => 0,
    'page_3' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Export */
  $handler = $view->new_display('views_data_export', 'Export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title-enrollment-data.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_program_classification_node';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
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
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Ratio */
  $handler->display->display_options['fields']['field_ratio']['id'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['table'] = 'field_data_field_ratio';
  $handler->display->display_options['fields']['field_ratio']['field'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_ratio']['empty'] = '-';
  $handler->display->display_options['fields']['field_ratio']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/prog_offerings/export';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page' => 'page',
    'page_4' => 'page_4',
    'page_5' => 'page_5',
    'default' => 0,
    'page_3' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Campus */
  $handler = $view->new_display('page', 'Campus', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Campus';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_campus',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/prog_offerings/campus';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Campus';
  $handler->display->display_options['menu']['description'] = 'Enrollment data by campus';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Semester */
  $handler = $view->new_display('page', 'Semester', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Semester';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_semester',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_semester']['label'] = '';
  $handler->display->display_options['fields']['field_semester']['element_label_colon'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/prog_offerings/semester';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Semester';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for this course';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Year';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_year',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/prog_offerings/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for the year';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Academic Unit */
  $handler = $view->new_display('page', 'Academic Unit', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Academic Unit';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_abbreviation',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Course */
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['id'] = 'reverse_field_program_classification_node';
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['field'] = 'reverse_field_program_classification_node';
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['ui_name'] = 'Course';
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['label'] = 'Course';
  $handler->display->display_options['relationships']['reverse_field_program_classification_node']['required'] = TRUE;
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['relationship'] = 'reverse_field_program_classification_node';
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
  /* Relationship: academic home */
  $handler->display->display_options['relationships']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['relationship'] = 'reverse_field_program_classification_node';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['ui_name'] = 'academic home';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['label'] = 'academic home';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Abbreviation */
  $handler->display->display_options['fields']['field_abbreviation']['id'] = 'field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['table'] = 'field_data_field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['field'] = 'field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['relationship'] = 'field_academic_home_target_id';
  $handler->display->display_options['fields']['field_abbreviation']['element_label_colon'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/prog_offerings/unit';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Academic Unit';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for the Academic Unit';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Course */
  $handler = $view->new_display('page', 'Course', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Course';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_program_classification_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/prog_offerings/course';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Course';
  $handler->display->display_options['menu']['description'] = 'Enrollment data per course';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['cis_program_charts'] = $view;

  $view = new view();
  $view->name = 'college_charts';
  $view->description = 'Charted data about courses';
  $view->tag = 'course, charts';
  $view->base_table = 'node';
  $view->human_name = 'College Charts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'College Enrollments per Course';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_year' => 'field_year',
    'field_semester' => 'field_semester',
    'field_campus' => 'field_campus',
    'field_seats_filled' => 'field_seats_filled',
    'field_seats_offered' => 'field_seats_offered',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_semester' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_campus' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seats_filled' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seats_offered' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
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
  $handler->display->display_options['fields']['field_year']['type'] = 'date_default';
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
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_seats_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_seats_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Field collection item: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['relationship'] = 'field_offerings_value';
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
  /* Filter criterion: Field collection item: Number of Seats (field_seats_offered) */
  $handler->display->display_options['filters']['field_seats_offered_value']['id'] = 'field_seats_offered_value';
  $handler->display->display_options['filters']['field_seats_offered_value']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['filters']['field_seats_offered_value']['field'] = 'field_seats_offered_value';
  $handler->display->display_options['filters']['field_seats_offered_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_seats_offered_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_seats_offered_value']['group'] = 1;
  /* Filter criterion: Field collection item: Seats filled (field_seats_filled) */
  $handler->display->display_options['filters']['field_seats_filled_value']['id'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['filters']['field_seats_filled_value']['field'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_seats_filled_value']['group'] = 1;
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
  /* Filter criterion: Field collection item: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_value']['id'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_value']['field'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_campus_value']['group'] = 1;
  $handler->display->display_options['filters']['field_campus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator_id'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['label'] = 'Campus';
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['identifier'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_program_classification_target_id']['group'] = 1;
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
  $handler = $view->new_display('page', 'Offerings', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'College Enrollments per Course';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = 'College Enrollments';
  $handler->display->display_options['style_options']['type'] = 'BarChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '2500';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'college_data/offerings';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Offerings';
  $handler->display->display_options['menu']['description'] = 'Enrollment data per course';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'College Enrollments per Year';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_year',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = 'College Enrollments';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'college_data/offerings/year';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for the year';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Semester */
  $handler = $view->new_display('page', 'Semester', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'College Enrollments per Semester';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_semester',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = 'College Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_semester']['label'] = '';
  $handler->display->display_options['fields']['field_semester']['element_label_colon'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Semester (field_semester) */
  $handler->display->display_options['sorts']['field_semester_value']['id'] = 'field_semester_value';
  $handler->display->display_options['sorts']['field_semester_value']['table'] = 'field_data_field_semester';
  $handler->display->display_options['sorts']['field_semester_value']['field'] = 'field_semester_value';
  $handler->display->display_options['sorts']['field_semester_value']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['path'] = 'college_data/offerings/semester';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Semester';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for this course';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Campus */
  $handler = $view->new_display('page', 'Campus', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'College Enrollments per Campus';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_campus',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = 'College Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Campus (field_campus) */
  $handler->display->display_options['sorts']['field_campus_value']['id'] = 'field_campus_value';
  $handler->display->display_options['sorts']['field_campus_value']['table'] = 'field_data_field_campus';
  $handler->display->display_options['sorts']['field_campus_value']['field'] = 'field_campus_value';
  $handler->display->display_options['sorts']['field_campus_value']['relationship'] = 'field_offerings_value';
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
  /* Filter criterion: Field collection item: Seats filled (field_seats_filled) */
  $handler->display->display_options['filters']['field_seats_filled_value']['id'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['filters']['field_seats_filled_value']['field'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_seats_filled_value']['group'] = 1;
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
  /* Filter criterion: Field collection item: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_value']['id'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_value']['field'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_campus_value']['group'] = 1;
  $handler->display->display_options['filters']['field_campus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator_id'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['label'] = 'Campus';
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['identifier'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_program_classification_target_id']['group'] = 1;
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
  $handler->display->display_options['path'] = 'college_data/offerings/campus';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Campus';
  $handler->display->display_options['menu']['description'] = 'Enrollment data by campus';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Unit */
  $handler = $view->new_display('page', 'Unit', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'College Enrollments per Unit';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_abbreviation',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = 'College Enrollments';
  $handler->display->display_options['style_options']['type'] = 'PieChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['3d'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
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
  /* Relationship: Academic Unit */
  $handler->display->display_options['relationships']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['ui_name'] = 'Academic Unit';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['label'] = 'Academic Unit';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Abbreviation */
  $handler->display->display_options['fields']['field_abbreviation']['id'] = 'field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['table'] = 'field_data_field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['field'] = 'field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['relationship'] = 'field_academic_home_target_id';
  $handler->display->display_options['fields']['field_abbreviation']['label'] = '';
  $handler->display->display_options['fields']['field_abbreviation']['element_label_colon'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_academic_home_target_id';
  $handler->display->display_options['path'] = 'college_data/offerings/unit';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Academic Unit';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for the Academic Unit';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Program */
  $handler = $view->new_display('page', 'Program', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'College Enrollments per Program';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = 'College Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
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
  /* Relationship: Program */
  $handler->display->display_options['relationships']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['ui_name'] = 'Program';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['label'] = 'Program';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_program_classification_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_program_classification_target_id';
  $handler->display->display_options['path'] = 'college_data/offerings/programs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Programs';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for the Program';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data Table */
  $handler = $view->new_display('attachment', 'Data Table', 'attachment_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_year' => 'field_year',
    'field_semester' => 'field_semester',
    'field_campus' => 'field_campus',
    'field_seats_filled' => 'field_seats_filled',
    'field_seats_offered' => 'field_seats_offered',
    'field_ratio' => 'field_ratio',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_semester' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_campus' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seats_filled' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seats_offered' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ratio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['type'] = 'date_default';
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
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Ratio */
  $handler->display->display_options['fields']['field_ratio']['id'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['table'] = 'field_data_field_ratio';
  $handler->display->display_options['fields']['field_ratio']['field'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_ratio']['empty'] = '0';
  $handler->display->display_options['fields']['field_ratio']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '% Filled';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '1';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_seats_filled] / [field_seats_offered]) * 100';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page_7' => 0,
    'page_5' => 0,
    'page' => 0,
    'page_2' => 0,
    'page_1' => 0,
    'page_6' => 0,
    'page_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Export */
  $handler = $view->new_display('views_data_export', 'Export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'college-enrollment-data.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['type'] = 'date_default';
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
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Ratio */
  $handler->display->display_options['fields']['field_ratio']['id'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['table'] = 'field_data_field_ratio';
  $handler->display->display_options['fields']['field_ratio']['field'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_ratio']['empty'] = '-';
  $handler->display->display_options['fields']['field_ratio']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'college_offerings/export';
  $handler->display->display_options['displays'] = array(
    'page_7' => 'page_7',
    'page_5' => 'page_5',
    'page' => 'page',
    'page_2' => 'page_2',
    'page_1' => 'page_1',
    'page_6' => 'page_6',
    'page_4' => 'page_4',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Campus table */
  $handler = $view->new_display('attachment', 'Campus table', 'attachment_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_campus' => 'field_campus',
    'field_seats_filled' => 'field_seats_filled',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_campus' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seats_filled' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_campus']['label'] = '';
  $handler->display->display_options['fields']['field_campus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
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
  /* Filter criterion: Field collection item: Seats filled (field_seats_filled) */
  $handler->display->display_options['filters']['field_seats_filled_value']['id'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['filters']['field_seats_filled_value']['field'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_seats_filled_value']['group'] = 1;
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
  /* Filter criterion: Field collection item: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_value']['id'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_value']['field'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_campus_value']['group'] = 1;
  $handler->display->display_options['filters']['field_campus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator_id'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['label'] = 'Campus';
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['identifier'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_program_classification_target_id']['group'] = 1;
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
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page_7' => 0,
    'page_5' => 0,
    'page' => 0,
    'page_2' => 0,
    'page_1' => 0,
    'page_6' => 0,
    'page_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['college_charts'] = $view;

  $view = new view();
  $view->name = 'college_data';
  $view->description = 'Specific slices of data for college reports';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'College data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Online Enrollment Trend';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    11 => '11',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
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
  $handler->display->display_options['relationships']['field_sections_value']['label'] = 'section';
  $handler->display->display_options['relationships']['field_sections_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_sections_value']['delta'] = '-1';
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['label'] = '';
  $handler->display->display_options['fields']['field_seats_filled']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['empty'] = '0';
  $handler->display->display_options['fields']['field_seats_filled']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Sort criterion: COUNT(Content: Title) */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['group_type'] = 'count';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Field collection item: Year (field_year) */
  $handler->display->display_options['arguments']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['arguments']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['arguments']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['arguments']['field_year_value']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['arguments']['field_year_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_year_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_year_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_year_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_year_value']['limit'] = '0';
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
  /* Filter criterion: Field collection item: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_value']['id'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_value']['field'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_campus_value']['value'] = array(
    'up' => 'up',
  );
  /* Filter criterion: Field collection item: Seats filled (field_seats_filled) */
  $handler->display->display_options['filters']['field_seats_filled_value']['id'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['filters']['field_seats_filled_value']['field'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['operator'] = 'not empty';

  /* Display: by Academic Home */
  $handler = $view->new_display('page', 'by Academic Home', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_abbreviation',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['title'] = 'Courses by Academic Unit';
  $handler->display->display_options['style_options']['type'] = 'PieChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['3d'] = 1;
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Offering */
  $handler->display->display_options['relationships']['field_offerings_value']['id'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['table'] = 'field_data_field_offerings';
  $handler->display->display_options['relationships']['field_offerings_value']['field'] = 'field_offerings_value';
  $handler->display->display_options['relationships']['field_offerings_value']['ui_name'] = 'Offering';
  $handler->display->display_options['relationships']['field_offerings_value']['label'] = 'Offering';
  $handler->display->display_options['relationships']['field_offerings_value']['delta'] = '-1';
  /* Relationship: Unit */
  $handler->display->display_options['relationships']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['ui_name'] = 'Unit';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['label'] = 'Unit';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Abbreviation */
  $handler->display->display_options['fields']['field_abbreviation']['id'] = 'field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['table'] = 'field_data_field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['field'] = 'field_abbreviation';
  $handler->display->display_options['fields']['field_abbreviation']['relationship'] = 'field_academic_home_target_id';
  $handler->display->display_options['fields']['field_abbreviation']['label'] = '';
  $handler->display->display_options['fields']['field_abbreviation']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Field collection item: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['relationship'] = 'field_offerings_value';
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
  $handler->display->display_options['path'] = 'college_data/au';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Academic Unit';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-college-data';
  $handler->display->display_options['menu']['context'] = 0;
  $export['college_data'] = $view;

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
  $handler->display->display_options['fields']['field_university_bulletin']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_university_bulletin']['type'] = 'link_label';

  /* Display: TA Tab */
  $handler = $view->new_display('page', 'TA Tab', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teaching Assistant Resources';
  $handler->display->display_options['display_description'] = 'Teaching assistant area for documents and resources';
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
  $handler->display->display_options['title'] = 'Courses Overview';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
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
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_seats_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_seats_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
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
  /* Filter criterion: Field collection item: Number of Seats (field_seats_offered) */
  $handler->display->display_options['filters']['field_seats_offered_value']['id'] = 'field_seats_offered_value';
  $handler->display->display_options['filters']['field_seats_offered_value']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['filters']['field_seats_offered_value']['field'] = 'field_seats_offered_value';
  $handler->display->display_options['filters']['field_seats_offered_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_seats_offered_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_seats_offered_value']['group'] = 1;
  /* Filter criterion: Field collection item: Seats filled (field_seats_filled) */
  $handler->display->display_options['filters']['field_seats_filled_value']['id'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['filters']['field_seats_filled_value']['field'] = 'field_seats_filled_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_seats_filled_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_seats_filled_value']['group'] = 1;
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
  /* Filter criterion: Field collection item: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_value']['id'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_value']['field'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['relationship'] = 'field_sections_value';
  $handler->display->display_options['filters']['field_campus_value']['group'] = 1;
  $handler->display->display_options['filters']['field_campus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator_id'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['label'] = 'Campus';
  $handler->display->display_options['filters']['field_campus_value']['expose']['operator'] = 'field_campus_value_op';
  $handler->display->display_options['filters']['field_campus_value']['expose']['identifier'] = 'field_campus_value';
  $handler->display->display_options['filters']['field_campus_value']['expose']['remember_roles'] = array(
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
  /* Relationship: Unit */
  $handler->display->display_options['relationships']['field_academic_home_target_id']['id'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['table'] = 'field_data_field_academic_home';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['field'] = 'field_academic_home_target_id';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['ui_name'] = 'Unit';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['label'] = 'Unit';
  $handler->display->display_options['relationships']['field_academic_home_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
    'empty' => 0,
  );
  $handler->display->display_options['fields']['field_sections']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sections']['multi_type'] = 'ol';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_academic_home_target_id';
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
  $handler->display->display_options['path'] = 'node/%/unit_offerings';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Offerings';
  $handler->display->display_options['menu']['description'] = 'Offerings of this course';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data Table */
  $handler = $view->new_display('attachment', 'Data Table', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_year' => 'field_year',
    'field_semester' => 'field_semester',
    'field_campus' => 'field_campus',
    'field_seats_filled' => 'field_seats_filled',
    'field_seats_offered' => 'field_seats_offered',
    'field_ratio' => 'field_ratio',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_semester' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_campus' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seats_filled' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seats_offered' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ratio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
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
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Ratio */
  $handler->display->display_options['fields']['field_ratio']['id'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['table'] = 'field_data_field_ratio';
  $handler->display->display_options['fields']['field_ratio']['field'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_ratio']['empty'] = '0';
  $handler->display->display_options['fields']['field_ratio']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '% Filled';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '1';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_seats_filled] / [field_seats_offered]) * 100';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page' => 'page',
    'page_4' => 'page_4',
    'page_5' => 'page_5',
    'default' => 0,
    'page_3' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Export */
  $handler = $view->new_display('views_data_export', 'Export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title-enrollment-data.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
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
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Seats filled */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Number of Seats */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Ratio */
  $handler->display->display_options['fields']['field_ratio']['id'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['table'] = 'field_data_field_ratio';
  $handler->display->display_options['fields']['field_ratio']['field'] = 'field_ratio';
  $handler->display->display_options['fields']['field_ratio']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_ratio']['empty'] = '-';
  $handler->display->display_options['fields']['field_ratio']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/unit_offerings/export';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page' => 'page',
    'page_4' => 'page_4',
    'page_5' => 'page_5',
    'default' => 0,
    'page_3' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Campus */
  $handler = $view->new_display('page', 'Campus', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Campus';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_campus',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['relationship'] = 'field_sections_value';
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/unit_offerings/campus';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Campus';
  $handler->display->display_options['menu']['description'] = 'Enrollment data by campus';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Semester */
  $handler = $view->new_display('page', 'Semester', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Semester';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_semester',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_semester']['label'] = '';
  $handler->display->display_options['fields']['field_semester']['element_label_colon'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/unit_offerings/semester';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Semester';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for this course';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Year';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_year',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_offerings_value';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['type'] = 'date_default';
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/unit_offerings/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for the year';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Program */
  $handler = $view->new_display('page', 'Program', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Program';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Relationship: Program */
  $handler->display->display_options['relationships']['field_program_classification_target_id']['id'] = 'field_program_classification_target_id';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['table'] = 'field_data_field_program_classification';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['field'] = 'field_program_classification_target_id';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['relationship'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['ui_name'] = 'Program';
  $handler->display->display_options['relationships']['field_program_classification_target_id']['label'] = 'Program';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_program_classification_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'node/%/unit_offerings/programs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Programs';
  $handler->display->display_options['menu']['description'] = 'Enrollment data for the Academic Unit';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Course */
  $handler = $view->new_display('page', 'Course', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Enrollments per Course';
  $handler->display->display_options['display_description'] = 'Enrollment data about a course';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['title'] = '%1 Enrollments';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_academic_home_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: SUM(Field collection item: Seats filled) */
  $handler->display->display_options['fields']['field_seats_filled']['id'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['table'] = 'field_data_field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['field'] = 'field_seats_filled';
  $handler->display->display_options['fields']['field_seats_filled']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_filled']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_filled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_filled']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_seats_filled']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_seats_filled']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  /* Field: SUM(Field collection item: Number of Seats) */
  $handler->display->display_options['fields']['field_seats_offered']['id'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['table'] = 'field_data_field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['field'] = 'field_seats_offered';
  $handler->display->display_options['fields']['field_seats_offered']['relationship'] = 'field_sections_value';
  $handler->display->display_options['fields']['field_seats_offered']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_seats_offered']['label'] = 'Offered';
  $handler->display->display_options['fields']['field_seats_offered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seats_offered']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_seats_offered']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  $handler->display->display_options['path'] = 'node/%/unit_offerings/course';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Course';
  $handler->display->display_options['menu']['description'] = 'Enrollment data per course';
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
