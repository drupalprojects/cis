<?php
/**
 * @file
 * cis_ux.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cis_ux_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cis-faculty_blocks';
  $context->description = 'Faculty courses authored block';
  $context->tag = 'CIS';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'person' => 'person',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cis_faculty_courses-block' => array(
          'module' => 'views',
          'delta' => 'cis_faculty_courses-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CIS');
  t('Faculty courses authored block');
  $export['cis-faculty_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cis-management';
  $context->description = 'Management and administrative blocks';
  $context->tag = 'CIS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin*' => '~admin*',
        '~node/edit/*' => '~node/edit/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'regions_admin_left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CIS');
  t('Management and administrative blocks');
  $export['cis-management'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cis-news';
  $context->description = 'News block related to an entity in the system';
  $context->tag = 'News';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'academic_unit' => 'academic_unit',
        'college_services' => 'college_services',
        'course' => 'course',
        'person' => 'person',
        'program' => 'program',
        'service' => 'service',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-person_in_the_news-block' => array(
          'module' => 'views',
          'delta' => 'person_in_the_news-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('News block related to an entity in the system');
  $export['cis-news'] = $context;

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
        'views-cis_course_blocks-block' => array(
          'module' => 'views',
          'delta' => 'cis_course_blocks-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-author_block-block' => array(
          'module' => 'views',
          'delta' => 'author_block-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
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
