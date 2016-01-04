This module generates a graph of the entities, fields and their
relationship of a particular installation of Drupal 7. This enables a quick
overview of your Drupal 7 entities and bundles.

# Usage Drush

    $ drush entitygraph | dot -Gratio=0.7 -Eminlen=2 -T png -o ./test.png

# Usage UI

go to URL `admin/entity-relations/<type>/<display_filds>` to see one entity type or, to see all entities  `admin/entity-relations`

### example:
Display only Nodes with no fields:
* ```http://mywesite.com/entity-relations/node/false```

Display all entities:
* ```http://mywesite.com/entity-relations```

Generates a graph in the PNG format.

![entity_relations___productivity](https://cloud.githubusercontent.com/assets/165644/12092755/ad4bb60e-b307-11e5-904f-a75ee8db7b5c.png)
