<?php
/**
 * @file
 * feature_event_institution_project.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function feature_event_institution_project_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Transferpartner',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '14780537-5f73-46e5-8912-dd462c91cc9d',
    'vocabulary_machine_name' => 'institution_funktion',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Umsetzungspartner',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '68cca3a7-0242-4a9f-9aab-42c5cf9dd9f5',
    'vocabulary_machine_name' => 'institution_funktion',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstige',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '6d785e0f-f08b-40a6-9ed7-044576520528',
    'vocabulary_machine_name' => 'institution_funktion',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
