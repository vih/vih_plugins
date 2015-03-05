<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Node submitted'),
  'icon' => 'icon_node.png',
  'description' => t('The date submitted and author.'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Node'),
  'defaults' => array(
    'format' => 'small',
  ),
);

/**
 * Render the custom content type.
 */
function vih_plugins_node_submitted_content_type_render($subtype, $conf, $panel_args, $context) {
  /** @var ctools_context $context */
  if (empty($context) || empty($context->data)) {
    return null;
  }

  // Get a shortcut to the node.
  /** @var stdClass $node */
  $node = $context->data;
  $user = user_load($node->uid);

  t('Submitted by !username on !datetime', array(
    '!username' => check_plain(format_username($user)),
    '!datetime' => format_date($node->created, $conf['format'])
  ));

  // Build the content type block.
  $block = new stdClass();
  $block->module  = 'node_submitted';
  $block->title   = t('Submitted');
  $block->content =   t('Submitted by !username on !datetime', array(
    '!username' => check_plain(format_username($user)),
    '!datetime' => format_date($node->created, $conf['format'])
  ));
  $block->delta   = $node->nid;

  return $block;
}

/**
 * Returns an edit form for custom type settings.
 */
function vih_plugins_node_submitted_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $date_types = array();

  foreach (system_get_date_types() as $date_type => $definition) {
    $date_types[$date_type] = format_date(REQUEST_TIME, $date_type);
  }
  $form['format'] = array(
    '#title' => t('Date format'),
    '#type' => 'select',
    '#options' => $date_types,
    '#default_value' => $conf['format'],
  );
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function vih_plugins_node_submitted_content_type_edit_form_submit($form, &$form_state) {
  // Copy everything from our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Returns the administrative title for a type.
 */
function vih_plugins_node_submitted_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" created date', array('@s' => $context->identifier));
}
