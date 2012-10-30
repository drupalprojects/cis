<?php
/**
 * @file
 * cis_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cis_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cis_types_node_info() {
  $items = array(
    'academic_unit' => array(
      'name' => t('Academic Unit'),
      'base' => 'node_content',
      'description' => t('Academic home, unit, department, or school that courses can then be associated to.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A course that we have on the books to help with management'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'isbn2node_book' => array(
      'name' => t('Material'),
      'base' => 'node_content',
      'description' => t('Information about material needed to take a course.  The default fields are for textbooks but they can be repurposed for other items.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'program' => array(
      'name' => t('Program'),
      'base' => 'node_content',
      'description' => t('Program of courses'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
