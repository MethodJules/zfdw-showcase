<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 01.11.18
 * Time: 09:42
 */



function _get_titles_from_projects() {
    $titles = db_select("node", "n")
        ->fields("n", array('title'))
        ->condition('type', 'projekt')
        ->condition('status', 1)
        ->orderBy('created', 'ASC')
        ->execute()->fetchCol();

    //dsm($titles);

    return $titles;
}

function _get_title_from_project($project) {
    $titles = _get_titles_from_projects();
    $title = $titles[$project];
    return $title;
}