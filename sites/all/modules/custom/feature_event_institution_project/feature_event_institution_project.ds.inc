<?php
/**
 * @file
 * feature_event_institution_project.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_event_institution_project_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|projekt|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'projekt';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'projekt_fe' => array(
      'weight' => '7',
      'label' => 'above',
      'format' => 'default',
    ),
    'projekt_zugeordnete_forschungser' => array(
      'weight' => '6',
      'label' => 'above',
      'format' => 'default',
    ),
  );
  $export['node|projekt|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|projekt|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'projekt';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'icon' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'title',
      ),
    ),
  );
  $export['node|projekt|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|projekt|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'projekt';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'projekt_fe' => array(
      'weight' => '3',
      'label' => 'above',
      'format' => 'default',
    ),
    'projekt_zugeordnete_forschungser' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|projekt|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|wissenskarte|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'wissenskarte';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'icon' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'title',
      ),
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author_linked',
    ),
  );
  $export['node|wissenskarte|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function feature_event_institution_project_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'icon';
  $ds_field->label = 'Content Type Icon';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<i class="icon <?php print $entity->type; ?>" aria-hidden="true" title="[node:content-type:name]"></i>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['icon'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_event_institution_project_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|projekt|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'projekt';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_abk_rzung_projekt',
        1 => 'field_webseite_projekt',
        2 => 'field_f_rderprogramm',
        3 => 'field_f_rdersumme',
        4 => 'field_projektzeitraum',
        5 => 'field_kurzbeschreibung',
        6 => 'projekt_zugeordnete_forschungser',
        7 => 'projekt_fe',
        8 => 'field_projektleiter',
        9 => 'field_projektmitarbeiter',
        10 => 'field_projektpartner',
        11 => 'field_umpartner',
        12 => 'field_institutionen',
      ),
    ),
    'fields' => array(
      'field_abk_rzung_projekt' => 'ds_content',
      'field_webseite_projekt' => 'ds_content',
      'field_f_rderprogramm' => 'ds_content',
      'field_f_rdersumme' => 'ds_content',
      'field_projektzeitraum' => 'ds_content',
      'field_kurzbeschreibung' => 'ds_content',
      'projekt_zugeordnete_forschungser' => 'ds_content',
      'projekt_fe' => 'ds_content',
      'field_projektleiter' => 'ds_content',
      'field_projektmitarbeiter' => 'ds_content',
      'field_projektpartner' => 'ds_content',
      'field_umpartner' => 'ds_content',
      'field_institutionen' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|projekt|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|projekt|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'projekt';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'icon',
        1 => 'title',
        2 => 'field_webseite_projekt',
      ),
      'left' => array(
        3 => 'field_projektleiter',
        4 => 'field_kurzbeschreibung',
      ),
    ),
    'fields' => array(
      'icon' => 'header',
      'title' => 'header',
      'field_webseite_projekt' => 'header',
      'field_projektleiter' => 'left',
      'field_kurzbeschreibung' => 'left',
    ),
    'classes' => array(
      'layout_class' => array(
        'search-result' => 'search-result',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|projekt|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|projekt|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'projekt';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_kurzbeschreibung',
        2 => 'projekt_zugeordnete_forschungser',
        3 => 'projekt_fe',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_kurzbeschreibung' => 'ds_content',
      'projekt_zugeordnete_forschungser' => 'ds_content',
      'projekt_fe' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|projekt|teaser'] = $ds_layout;

  return $export;
}
