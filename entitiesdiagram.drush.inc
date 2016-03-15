<?php

/**
 * Implements hook_drush_command().
 */
function entitiesdiagram_drush_command() {
  $items['entitiesdiagram'] = array(
    'description' => 'Generate a graph of the entities and fields.',
    'aliases' => array('ed'),
    'options' => array(
      'include_fields' => 'Include fields',
      'entity_type' => 'Select a single entity type',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'core' => array('7+'),
    'drupal dependencies' => array('field'),
    'examples' => array(
      'drush entitiesdiagram | dot -Gratio=0.7 -Eminlen=2 -T png -o ./test.png' => 'Generate the Entity-Relationship graph for the current site and export it has a PNG image.',
      'drush entitiesdiagram --include_fields --entity_type=node | dot -Gratio=0.7 -Eminlen=2 -T png -o ./test.png' => 'Generate the Entity-Relationship graph for a entity type site including fields and export it has a PNG image.',
    ),
  );
  return $items;
}

function drush_entitiesdiagram() {
  $include_fields = drush_get_option('include_fields', FALSE);
  $entity_type = drush_get_option('entity_type', FALSE);
  $graph =  entitiesdiagram_entitygraph($include_fields, $entity_type);
  echo entitiesdiagram_entitygraph_generate($graph);
}
