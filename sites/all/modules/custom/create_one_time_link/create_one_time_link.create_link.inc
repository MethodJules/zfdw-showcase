<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 19.10.18
 * Time: 11:36
 */

function create_one_time_link_create_link($user_name, $project) {
    //Get project name
    $project_titles = _get_titles_from_projects();
    $project_title = $project_titles[$project]; //TODO refactor variable name project


    //Get nid of proejct name

    $result = db_select('node', 'n')
        ->fields('n', array('nid'))
        ->condition('type', 'projekt')
        ->condition('title', $project_title)
        ->execute()
        ->fetchAssoc();

    $nid = $result['nid'];




    //TODO get uid of user-name

    $timestamp = REQUEST_TIME;
    $expire_timestamp = strtotime('+1 week');

    $result = db_select('users', 'u')
        ->fields('u', array('uid'))
        ->condition('name', $user_name)
        ->execute()
        ->fetchAssoc();

    //dsm($result);

    $account = user_load($result['uid']); //Parameterisieren

    //dsm('Account:');
    //dsm($account);

    if(is_null($nid)){
        $redirect = 'projekt';
    } else {
        $redirect = 'projekt_' . $nid;
    }
    $options = array('absolute' => TRUE);


    $hashed_pass = user_pass_rehash($account->pass, $expire_timestamp, $account->login, $account->uid);
    $url = url("zfdw-one-time-login/" . $account->uid . "/" . $timestamp . "/" .
        $expire_timestamp . "/" . $hashed_pass . '/' . $redirect, $options);


    if(db_table_exists('create_one_time_link')){
        db_insert('create_one_time_link')
            ->fields(array(
                'uid' => $account->uid,
                'timestamp' => $timestamp,
                'expire_timestamp' => $expire_timestamp,
                'hashed_pass' => $hashed_pass,
                'redirect' => $redirect,
            ))
            ->execute();
    } else {
        drupal_set_message("The table 'create_one_time_link' does not exist, please reinstall the module");
    }

    //send_mail($url);
    return $url;

}
