<?php
/**
 * @file
 * cis_design.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cis_design_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'college_data';
  $context->description = 'Add block to the college data section of the website';
  $context->tag = 'College';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'college_data*' => 'college_data*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-college-data' => array(
          'module' => 'menu',
          'delta' => 'menu-college-data',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add block to the college data section of the website');
  t('College');
  $export['college_data'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'course-display';
  $context->description = 'The layout and blocks that make up a course display, only active on the coure node';
  $context->tag = 'Course';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'course' => 'course',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/*' => 'node/*',
        '~node/*/*' => '~node/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-course_slider-block_2' => array(
          'module' => 'views',
          'delta' => 'course_slider-block_2',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-course_slider-block' => array(
          'module' => 'views',
          'delta' => 'course_slider-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-course_slider-block_3' => array(
          'module' => 'views',
          'delta' => 'course_slider-block_3',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'course_display',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Course');
  t('The layout and blocks that make up a course display, only active on the coure node');
  $export['course-display'] = $context;

  return $export;
}
