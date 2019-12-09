<?php
/**
 * @file
 * feature_event_institution_project.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_event_institution_project_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Hauptmenü',
    'description' => 'Das <em>Hauptmenü</em> wird oft benutzt, um die Hauptbereiche der Website anzuzeigen, häufig in einer Top-Navigationsleiste.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Das <em>Hauptmenü</em> wird oft benutzt, um die Hauptbereiche der Website anzuzeigen, häufig in einer Top-Navigationsleiste.');
  t('Hauptmenü');

  return $menus;
}
