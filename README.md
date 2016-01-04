This Drush command generates a graph of the entities, fields and their
relationship of a particular installation of Drupal.

# Usage Drush

    $ drush entitygraph | dot -Gratio=0.7 -Eminlen=2 -T png -o ./test.png
    
# Usage UI

go to URL `admin/entity-relations/<type>/<display_filds>` to see one entity type or, to see all entities  `admin/entity-relations`

example: display onlu Nodes with no fields
```http://mywesite.com/entity-relations/node/false```

Generates a graph in the PNG format.

# Caveats

* The command extracts the relationship information from the foreign key
  definition of entity types and fields.


