<?php
/**
 * @file
 * cis_design.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function cis_design_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'screenshots';
  $preset->title = 'Screenshots';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'screenshot';
  $preset->options = array(
    'animation' => 'slide',
    'animationDuration' => 400,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 5000,
    'animationLoop' => 1,
    'randomize' => 0,
    'slideToStart' => 0,
    'directionNav' => 1,
    'controlNav' => 1,
    'keyboardNav' => 1,
    'mousewheel' => 1,
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'pauseOnAction' => 1,
    'controlsContainer' => '.flex-nav-container',
    'manualControls' => '',
  );
  $export['screenshots'] = $preset;

  return $export;
}
