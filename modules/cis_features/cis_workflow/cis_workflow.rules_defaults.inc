<?php
/**
 * @file
 * cis_workflow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cis_workflow_default_rules_configuration() {
  $items = array();
  $items['rules_course_has_changed'] = entity_import('rules_config', '{ "rules_course_has_changed" : {
      "LABEL" : "Course changed by someone other then ID of record",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "course" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "course" : "course" } } } },
        { "NOT data_is" : {
            "data" : [ "node:field-instructional-designer:uid" ],
            "value" : [ "site:current-user:uid" ]
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-instructional-designer:mail" ],
            "subject" : "CIS Course Update: [node:title] has been updated",
            "message" : "The College Course Information System would like to let you know that [node:title] has been updated.  You are receiving this email because you are the Instructional Designer of record.\\r\\n\\r\\nYou may want to review [node:title] by going to [node:url]",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
