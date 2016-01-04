<?php

/**
 * Implements hook_drush_command().
 */
function entityrelationships_drush_command() {
  $items['entityrelations'] = array(
    'description' => 'Generate a graph of the entities and fields.',
    'aliases' => array('ers'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'core' => array('7+'),
    'drupal dependencies' => array('field'),
    'examples' => array(
      'drush entityrelations | dot -Gratio=0.7 -Eminlen=2 -T png -o ./test.png' => 'Generate the Entity-Relationship graph for the current site and export it has a PNG image.',
    ),
  );
  return $items;
}

function drush_entityrelationships_entityrelations() {
  $graph =  entityrelationships_entitygraph(TRUE);
  echo entityrelationship_entitygraph_generate($graph);
}
