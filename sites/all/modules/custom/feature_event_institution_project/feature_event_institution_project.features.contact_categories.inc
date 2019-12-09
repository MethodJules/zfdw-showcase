<?php
/**
 * @file
 * feature_event_institution_project.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function feature_event_institution_project_contact_categories_defaults() {
  return array(
    'Kontaktanfrage' => array(
      'category' => 'Kontaktanfrage',
      'recipients' => 'hoferj@uni-hildesheim.de',
      'reply' => 'Vielen Dank für Ihre Anfrage.',
      'weight' => 0,
      'selected' => 1,
      'page_title' => NULL,
      'page_info' => NULL,
    ),
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'hoferj@uni-hildesheim.de',
      'reply' => 'Vielen Dank für Ihr Feedback!',
      'weight' => 0,
      'selected' => 0,
      'page_title' => NULL,
      'page_info' => NULL,
    ),
  );
}
