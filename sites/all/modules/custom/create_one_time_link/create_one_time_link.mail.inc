<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 19.10.18
 * Time: 11:37
 */

function create_one_time_link_email($email_link_id) {

    //dsm($email_link_id);
    //get email address
    if(db_table_exists('create_one_time_link_emails')) {
        $result = db_select('create_one_time_link_emails', 'emails')
            ->fields('emails')
            ->condition('link_email_id', $email_link_id, '=')
            ->execute()
            ->fetchAll();
    } else {
        drupal_set_message("The table 'create_one_time_link_emails' does not exist, please reinstall the module");

    }

    foreach ($result as $row) {
        $email = $row->email;

        $emailSalutation = "<p>Sehr geehrte(r) " . $row->salutation . ($row->title='' ? "": " " .$row->title ) . " ". $row->firstname . " " . $row->surname . "</p>";

        $emailBody = $emailSalutation . "<p>für das im Aufbau befindliche Zentrum für Digitalen Wandel (ZfDW) an der Universität Hildesheim 
                                            ermitteln wir Projekte, die einen Bezug zum Thema Digitalisierung aufweisen. Wir möchten Sie daher bitten ihre Projekte
                                            in unserem Portal anzulegen, um eine interne und regionale, nationale und internationale Vernetzung der Forschenden zu unterstützen.</p>"

                                          ."<p>Damit wir Ihnen ein umfangreiches Angebot an Vernetzungspotential bieten können, brauchen wir Ihre Hilfe. 
                                            Forschen, lehren oder publizieren Sie mit Bezug zum Thema Digitalisierung? 
                                            Dann möchten wir gerne mehr darüber erfahren und die Projekte in unser Portal aufnehmen. 
                                            Ihnen steht dafür ein Onlinefragebogen zur Verfügung. </p>"

                                        ."<p>Der Fragebogen ist zurzeit noch in der Betaphase. Sie könne aber schon Projekte, Publikationen, Abschlussarbeiten und Forschungsergebnisse anlegen. 
                                            Einige Ihrer Projekte haben wir bereits in die Datenbank eingepflegt. 
                                            Sie können die Angaben bearbeiten und ergänzen. 
                                            Das Anlegen und Bearbeiten von Einträgen erfolgt dabei vollkommen anonym. </p>"


                                        ."<p>Sie würden uns sehr helfen, wenn Sie zeitnah - am besten bis zum 15. November - neue Projekte anlegen bzw. vorhandene Projekte bearbeiten könnten. 
                                            Um ein Projekt anzulegen, klicken Sie bitte auf diesen Link: " ."<a href='" . $row->link ."'>" . $row->link ."</a></p>"
                                        ."<p>Bei inhaltlichen Fragen steht Ihnen das Team (".
                                            "<a href='mailto:baucom@uni-hildesheim.de'>Martina Baucom</a>" .
                                             ", " . "<a href='mailto:mario.datts@uni-hildesheim.de'>Mario Datts</a>"
                                               . " und " . "<a href='mailto:hehrwil@uni-hildesheim.de'>Wilfried Hehr</a>"

                                             .") für das Portal des Zentrums für digitalen Wandel gerne zur Verfügung. </p>"
                                            . "<p>Bei technischen Problemen oder Anregungen wenden Sie sich bitte an <a href='mailto:hoferj@uni-hildesheim.de'>Julien Hofer</a>.</p>";
        $emailSubject = "Zentrum für digitalen Wandel";
        $emailFrom = "zfdw-portal@uni-hildesheim.de";

        $params = array(
            'subject' => $emailSubject,
            'body' => $emailBody,
        );

        drupal_mail('create_one_time_link', 'one_time_link', $email, language_default(), $params, $emailFrom);
        drupal_set_message("Mail wurde versendet!");

        db_update('create_one_time_link_emails')
            ->fields(array(
                'email_sent' => 'yes',
            ))
            ->condition('link_email_id', $email_link_id, '=')
            ->execute();

    }

    drupal_goto('one_time_link/create');



    //$email = "hoferj@uni-hildesheim.de"; //TODO parameterisieruen


}

function create_one_time_link_mail($key, &$message, $params) {
    switch ($key) {
        case 'one_time_link':
            $headers = array(
                'MIME-Version' => '1.0',
                'Content-Type' => 'text/html; charset=UTF-8; format=flowed',
                'Content-Transfer-Encoding' => '8Bit',
                'X-Mailer' => 'Drupal'
            );

            foreach ($headers as $key => $value) {
                $message['headers'][$key] = $value;
            }
            $message['subject'] = $params['subject'];
            $message['body'] = array(0 => t($params['body']));
            break;
    }
}