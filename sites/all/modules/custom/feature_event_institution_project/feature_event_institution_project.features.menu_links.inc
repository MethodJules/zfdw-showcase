<?php
/**
 * @file
 * feature_event_institution_project.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_event_institution_project_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_bersicht:wissenskarten.
  $menu_links['main-menu_bersicht:wissenskarten'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wissenskarten',
    'router_path' => 'wissenskarten',
    'link_title' => 'Übersicht',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_bersicht:wissenskarten',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_wissenskarte:wissenskarten',
  );
  // Exported menu link: main-menu_events:eventmap.
  $menu_links['main-menu_events:eventmap'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eventmap',
    'router_path' => 'eventmap',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_events:eventmap',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_map:researchsites',
  );
  // Exported menu link: main-menu_hinzufgen:node/add/wissenskarte.
  $menu_links['main-menu_hinzufgen:node/add/wissenskarte'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/wissenskarte',
    'router_path' => 'node/add/wissenskarte',
    'link_title' => 'Hinzufügen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_hinzufgen:node/add/wissenskarte',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_wissenskarte:wissenskarten',
  );
  // Exported menu link: main-menu_map-projects:researchprojects.
  $menu_links['main-menu_map-projects:researchprojects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'researchprojects',
    'router_path' => 'researchprojects',
    'link_title' => 'Map Projects',
    'options' => array(
      'identifier' => 'main-menu_map-projects:researchprojects',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_map:researchsites',
  );
  // Exported menu link: main-menu_map-research-results:researchresults.
  $menu_links['main-menu_map-research-results:researchresults'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'researchresults',
    'router_path' => 'researchresults',
    'link_title' => 'Map Research Results',
    'options' => array(
      'identifier' => 'main-menu_map-research-results:researchresults',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_map:researchsites',
  );
  // Exported menu link: main-menu_map-research-sites:researchsites.
  $menu_links['main-menu_map-research-sites:researchsites'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'researchsites',
    'router_path' => 'researchsites',
    'link_title' => 'Map Research Sites',
    'options' => array(
      'identifier' => 'main-menu_map-research-sites:researchsites',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_map:researchsites',
  );
  // Exported menu link: main-menu_map:researchsites.
  $menu_links['main-menu_map:researchsites'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'researchsites',
    'router_path' => 'researchsites',
    'link_title' => 'Map',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_map:researchsites',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_wissenskarte:wissenskarten.
  $menu_links['main-menu_wissenskarte:wissenskarten'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wissenskarten',
    'router_path' => 'wissenskarten',
    'link_title' => 'Wissenskarte',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_wissenskarte:wissenskarten',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: navigation_event:node/add/event.
  $menu_links['navigation_event:node/add/event'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => 'Alle Events des Förderschwerpunkts können hier eingetragen werden.',
      ),
      'identifier' => 'navigation_event:node/add/event',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Event');
  t('Events');
  t('Hinzufügen');
  t('Map');
  t('Map Projects');
  t('Map Research Results');
  t('Map Research Sites');
  t('Wissenskarte');
  t('Übersicht');

  return $menu_links;
}
