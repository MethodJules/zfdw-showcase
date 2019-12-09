<?php
/**
 * @file
 * feature_event_institution_project.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function feature_event_institution_project_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Projektstart darf nicht in der Zukunft liegen';
  $rule->name = 'projektstart_darf_nicht_in_der_z';
  $rule->field_name = 'field_projektzeitraum';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'projekt';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => '',
    'max' => 'now',
    'reverse' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      12 => 0,
      13 => 0,
      14 => 0,
      15 => 0,
      16 => 0,
      17 => 0,
      18 => 0,
      19 => 0,
      20 => 0,
      21 => 0,
      22 => 0,
      23 => 0,
      24 => 0,
      25 => 0,
      26 => 0,
      27 => 0,
      28 => 0,
      29 => 0,
      30 => 0,
      31 => 0,
      32 => 0,
      33 => 0,
      34 => 0,
      35 => 0,
      36 => 0,
      37 => 0,
      38 => 0,
      39 => 0,
      40 => 0,
      41 => 0,
      42 => 0,
      43 => 0,
      44 => 0,
      45 => 0,
      46 => 0,
      52 => 0,
      53 => 0,
      54 => 0,
      55 => 0,
      56 => 0,
      57 => 0,
      58 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Das Startdatum darf nicht in der Zukunft liegen.';
  $export['projektstart_darf_nicht_in_der_z'] = $rule;

  return $export;
}
