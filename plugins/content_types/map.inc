<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Map'),
  'single' => TRUE,
  'category' => array(t('Isis One')),
  'edit form' => 'vih_plugins_map_content_type_form',
  'render callback' => 'vih_plugins_map_content_type_render',
);

/**
 * Settings Form
 */
function vih_plugins_map_content_type_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => !empty($conf['title']) ? $conf['title'] : t('Map'),
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  $form['width'] = array(
    '#type' => 'textfield',
    '#title' => t('Width'),
    '#size' => 10,
    '#required' => TRUE,
    '#default_value' => !empty($conf['width']) ? $conf['width'] : 320,
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  $form['height'] = array(
    '#type' => 'textfield',
    '#title' => t('Height'),
    '#size' => 10,
    '#required' => TRUE,
    '#default_value' => !empty($conf['height']) ? $conf['height'] : 200,
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  $form['show_address'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show address'),
    '#description' => t('Show the address under the map.'),
    '#default_value' => !empty($conf['show_address']) ? $conf['show_address'] : 0,
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  return $form;
}

function vih_plugins_map_content_type_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render Callback
 */
function vih_plugins_map_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<!-- GOOGLE MAP -->
<section id="googleMap" class="noindicator nomargin nopadding">
    <div class="container">
        <address class="animate_fade_in">
            <strong class="font-dosis fsize20">LETS GET IN TOUCH</strong>
            <ul>
                <li class="address-sprite address">
  Melbourne<br />
                    PO Box 21132<br />
                    Here Weare St, Melbourne<br />
                    Vivas 2355 Australia<br />
                </li>
                <li class="address-sprite phone">
  Phone: 1-800-565-2390
  </li>
                <li class="address-sprite email">
  support@yourname.com
    </li>
            </ul>
        </address>
    </div>

    <div id="gmap"></div>
</section>
<!-- GOOGLE MAP -->';

  return $block;
}
