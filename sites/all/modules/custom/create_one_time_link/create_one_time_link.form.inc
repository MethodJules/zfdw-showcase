<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 19.10.18
 * Time: 10:20
 */

function form_create_one_time_link_create_link($form, &$form_state) {

    $form['salutation'] = array(
        '#type' => 'select',
        '#title' => t('Salutation'),
        '#options' => array("Herr" => "Herr", "Frau" => "Frau"),
    );

    $form['title'] = array(
        '#type' => 'select',
        '#title' => t('Titel'),
        '#options' => array("Prof. Dr. Dr." => "Prof. Dr. Dr.", "Prof. Dr." => "Prof. Dr.", "Dr. Dr." => "Dr. Dr.", "Dr." => "Dr."),
        '#empty_value' => "",
    );


    $form['firstname'] = array(
        '#type' => 'textfield',
        '#title' => t('First name'),
        '#description' => t("Please insert the first name")
    );

    $form['surname'] = array(
        '#type' => 'textfield',
        '#title' => t('Surname'),
        '#description' => t("Please insert the surname")
    );

    $form['email'] = array(
        '#type' => 'textfield',
        '#title' => t('Email'),
        '#description' => t('Please enter an email address'),
    );

    $form['project'] = array(
        '#type' => 'select',
        '#title' => 'Projekt',
        '#description' => t('Please choose a project'),
        '#options' => _get_titles_from_projects(),
        '#empty_value' => "",
    );




    $form['submit_button'] = array(
        '#type' => 'submit',
        '#value' => t('Add email Address'),
    );

    return $form;
}




function form_create_one_time_link_create_link_validate($form, &$form_state) {
    // form validate
    if (!valid_email_address($form_state['values']['email'])) {
        form_set_error('mail', t('You must enter a valid e-mail address.'));
    }

    //check if email address already exists in database


}

function form_create_one_time_link_create_link_submit($form, &$form_state) {

    $salutation = $form_state['values']['salutation'];
    $title = $form_state['values']['title'];
    $firstname = $form_state['values'] ['firstname'];
    $surname = $form_state['values']['surname'];
    $project = $form_state['values']['project'];
    $email = $form_state['values']['email'];


    $user_name = _create_dummy_user();





    variable_set('create_one_time_link_email_body', $form_state['values']['email_body']);
    //dsm($email);
    $link = create_one_time_link_create_link($user_name, $project);
    $email_sent = 'no';
    //dsm('Email: ' . $email . ' Link: ' . $link . ' Email Sent: ' . $email_sent );
    if(db_table_exists('create_one_time_link_emails')){
        db_insert('create_one_time_link_emails')
            ->fields(array(
                'salutation' => $salutation,
                'title' => $title,
                'firstname' => $firstname,
                'surname' => $surname,
                'project' => $project,
                'email' => $email,
                'link' => $link,
                'email_sent' => $email_sent,
            ))
            ->execute();
    } else {
        drupal_set_message("The table 'create_one_time_link_emails' does not exist, please reinstall the module");
    }
}




function _create_dummy_user() {
    $password = user_password(8);
    $user_anonym_nr = variable_get('user_anonym_nr') + 1;
    variable_set('user_anonym_nr', $user_anonym_nr);

    //set up user fields
    $fields = array(
        'name' => 'user' . $user_anonym_nr,
        'mail' => 'user_name_' . $user_anonym_nr . '@example.com',
        'pass' => $password,
        'status' => 1,
        'init' => 'email address',
        'roles' => array(
            DRUPAL_AUTHENTICATED_RID => 'authenticated user',
        ),
    );

    //the first parameter is left blank so a new user is created
    try {
        $account = user_save('', $fields);
    } catch (Exception $e) {
        watchdog_exception('error', $e);
    }
    watchdog('status', 'New user --' . $fields['name'] . '-- was created');

    return $fields['name'];
}