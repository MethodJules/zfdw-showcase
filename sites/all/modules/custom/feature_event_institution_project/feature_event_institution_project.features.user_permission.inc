<?php
/**
 * @file
 * feature_event_institution_project.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_event_institution_project_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create institution content'.
  $permissions['create institution content'] = array(
    'name' => 'create institution content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create projekt content'.
  $permissions['create projekt content'] = array(
    'name' => 'create projekt content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any institution content'.
  $permissions['delete any institution content'] = array(
    'name' => 'delete any institution content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any projekt content'.
  $permissions['delete any projekt content'] = array(
    'name' => 'delete any projekt content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own institution content'.
  $permissions['delete own institution content'] = array(
    'name' => 'delete own institution content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own projekt content'.
  $permissions['delete own projekt content'] = array(
    'name' => 'delete own projekt content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in institution_funktion'.
  $permissions['delete terms in institution_funktion'] = array(
    'name' => 'delete terms in institution_funktion',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any institution content'.
  $permissions['edit any institution content'] = array(
    'name' => 'edit any institution content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any projekt content'.
  $permissions['edit any projekt content'] = array(
    'name' => 'edit any projekt content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own institution content'.
  $permissions['edit own institution content'] = array(
    'name' => 'edit own institution content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own projekt content'.
  $permissions['edit own projekt content'] = array(
    'name' => 'edit own projekt content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in institution_funktion'.
  $permissions['edit terms in institution_funktion'] = array(
    'name' => 'edit terms in institution_funktion',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
