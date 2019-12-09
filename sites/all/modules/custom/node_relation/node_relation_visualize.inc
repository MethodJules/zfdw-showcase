<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 17.02.18
 * Time: 18:41
 */

function node_relation_visualize() {
    //TODO SQL erstellen
    //SELECT * FROM field_data_field_institutionen
    $sql = "SELECT * FROM {field_data_field_institutionen}";

    $result = db_query($sql);
    $result = $result->fetchAll();
    //dsm($result);

    $sources = array();
    $targets = array();
    foreach ($result as $line) {
        //Save sources
        $sources[] = $line->entity_id;

        //Save targets
        $targets[] = $line->field_institutionen_target_id;
    }

    dsm($sources);
    dsm($targets);
    $string = "";
    //TODO Edges speichern
    for ($i=0;$i <=23;$i++) {
        $string .= "Source: " . $sources[$i] . "-------> Target: " . $targets[$i] . '<br>';
    }

    $node_fields = field_info_instances('node', 'projekt');
    //dsm($node_fields);






    return $string;
}



