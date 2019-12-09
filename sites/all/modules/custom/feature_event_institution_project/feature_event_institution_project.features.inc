<?php
/**
 * @file
 * feature_event_institution_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_event_institution_project_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_event_institution_project_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_event_institution_project_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Alle Events des Förderschwerpunkts können hier eingetragen werden.'),
      'has_title' => '1',
      'title_label' => t('Name des Events'),
      'help' => '',
    ),
    'institution' => array(
      'name' => t('Institution'),
      'base' => 'node_content',
      'description' => t('Eine neue Institution hinzufügen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'projekt' => array(
      'name' => t('Projekt'),
      'base' => 'node_content',
      'description' => t('Ein neues Projekt hinzufügen'),
      'has_title' => '1',
      'title_label' => t('Projektname'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
