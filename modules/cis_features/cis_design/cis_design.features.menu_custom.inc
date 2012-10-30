<?php
/**
 * @file
 * cis_design.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cis_design_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-college-data.
  $menus['menu-college-data'] = array(
    'menu_name' => 'menu-college-data',
    'title' => 'College Data',
    'description' => 'Menu items related to College data',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('College Data');
  t('Menu items related to College data');


  return $menus;
}
