<?php


function views_rules_condition_rules_condition_info() {
	return array(
    'views_rules_condition_count_rows' => array(
      'label' => t('Count view rows and check number'),
      'parameter' => array(
        'view' => array(
          'type' => 'text',
          'label' => t('View name'),
        ),
        'display_name' => array(
          'type' => 'text',
          'label' => t('Display name'),
          'description' => t('Name of the View display. (Leave blank to use Default.)'),
          'allow null' => TRUE,
        ),
        'arguments' => array(
          'type' => 'text',
          'label' => t('View arguments'),
          'description' => t('Split arguments with slashes.'),
          'allow null' => TRUE,
        ),
        'op' => array(
          'type' => 'text',
          'label' => t('Operator'),
          'description' => t('The comparison operator.'),
          'optional' => TRUE,
          'default value' => '==',
          'options list' => 'rules_condition_data_is_operator_options',
          'restriction' => 'input',
        ),
        'value' => array(
          'type' => 'integer',
          'label' => t('Integer value'),
          'description' => t('The value to compare the count of the view rows with.'),
          'allow null' => TRUE,
        ),
      ),
      'group' => t('Views Rules Conditions'),
    ),
  );
}

function views_rules_condition_count_rows($view, $display_name = 'default', $arguments = '', $op = '==', $value = 0) {
  module_load_include('inc', 'rules', 'modules/data.eval');

  $count = 0;

  $view = views_get_view($view);
  if (is_object($view)) {
    if (!empty($arguments)) {
      $args_array = explode('/', $arguments); // @TODO make nicer
      $view->set_arguments($args_array);
    }
    $view->set_display($display_name);
    $view->pre_execute();
    $view->execute();
    $count = count($view->result);
  }

  return rules_condition_data_is($count, $op, $value);
}
