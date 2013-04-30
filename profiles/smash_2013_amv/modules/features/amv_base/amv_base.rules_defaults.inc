<?php
/**
 * @file
 * amv_base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function amv_base_default_rules_configuration() {
  $items = array();
  $items['rules_email_check'] = entity_import('rules_config', '{ "rules_email_check" : {
      "LABEL" : "Email check",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "views_rules_condition" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "amv" : "amv" } } } },
        { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "1" : "1" } } } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_email_address" } },
        { "views_rules_condition_count_rows" : {
            "view" : "submissions_by_email",
            "display_name" : "default",
            "arguments" : "test",
            "op" : "\\u003E",
            "value" : "2"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "Sorry, we couldn\\u0027t accept your submission. You are allowed to submit a maximum of three (3) entries for the SMASH! 2013 AMV Competition. If you believe you haven\\u0027t already submitted this many, please contact \\u003Ca href=\\u0022mailto:amv@smash.org.au\\u0022\\u003Eamv@smash.org.au\\u003C\\/a\\u003E immediately.",
            "type" : "error"
          }
        },
        { "redirect" : { "url" : "amvs" } }
      ]
    }
  }');
  return $items;
}
