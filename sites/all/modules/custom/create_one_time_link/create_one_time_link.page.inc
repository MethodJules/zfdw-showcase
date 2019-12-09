<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 19.10.18
 * Time: 10:13
 */

function create_one_time_link_page() {
    //add css
    drupal_add_css(drupal_get_path('module', 'create_one_time_link') . '/css/create_one_time_link.css');


    $table = create_one_time_link_create_table();
    $form_email_links = drupal_get_form('form_create_one_time_link_create_link');

    return  $table . drupal_render($form_email_links);

}


function create_one_time_link_create_table() {
    if(db_table_exists('create_one_time_link_emails')) {
        $result = db_select('create_one_time_link_emails', 'emails')
            ->fields('emails')
            ->execute()
            ->fetchAll();
    } else {
        drupal_set_message("The table 'create_one_time_link_emails' does not exist, please reinstall the module");

    }



    $header = array('Name' , 'Projekt', 'Email', 'Link', 'Email Sent', 'Action');



    $rows = array();
    foreach ($result as $result_row) {
        $row = array(
          'Name' => $result_row->salutation . '<br/> ' . $result->title . ' ' . $result_row->firstname . ' ' . $result_row->surname,
          'Projekt' => _get_title_from_project($result_row->project),
          'Email' => $result_row->email,
          'Link' => $result_row->link,
          'Email Sent' => $result_row->email_sent,
          'Action' => ($result_row->email_sent === 'no') ? "<div id='cotl'><a class='send_email' href='./send_email/" . $result_row->link_email_id . "' >Send Email</a></div>" : "<div id='cotl'><a class='email_sent' href='#'>Email was sent</a></div>" ,

        );

        array_push($rows, $row);
    }




    $table = theme('table', array('header' => $header, 'rows' => $rows));

    return $table;

}