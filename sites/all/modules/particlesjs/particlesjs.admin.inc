<?php

/**
 * @file
 * Particles.js settings.
 */

/**
 * Implements hook_admin_form().
 */
function particlesjs_admin_form() {
  $form = array();

  // Try to load the particles.js.js library.
  $library = libraries_load('particles.js.js');
  if ($library && !empty($library['loaded'])) {

    drupal_set_message(
      t(
        'Particles.js installed, version @version. <a href="@report">Full report</a>', array(
          '@version' => $library['version'],
          '@report' => url('admin/reports/libraries/particles.js.js'),
        )
      )
    );

    $form['particlesjs_load'] = array(
      '#type' => 'checkbox',
      '#title' => t('Load Particles.js library on every page'),
      '#description' => t('Check to load Particles.js library on every page. Beware, it is bad practice, you really should load it in a hook in a custom module or better, attach it to a render array. See README.md.'),
      '#default_value' => variable_get('particlesjs_load', FALSE),
    );

  }

  // Else don't provide settings.
  else {
    drupal_set_message(t('Particles.js not installed.'), 'warning');
  }

  return system_settings_form($form);
}
