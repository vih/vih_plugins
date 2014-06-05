<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Contact callout block'),
  'description' => t('Displays a sample front page block'),
  'single' => TRUE,
  'category' => array(t('Isis One')),
  'render callback' => 'vih_plugins_contact_callout_block_content_type_render',
);


/**
 * Render Callback
 */
function vih_plugins_contact_callout_block_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<!-- CONTACT -->
<section id="contact">

    <header class="text-center">
      <h1>CONTACT</h1>
    </header>

    <div class="divider"><!-- lines divider --></div>

    <article>
      <p class="text-center big-paragraph">
        Drop us a line or just say <strong><em>Hello!</em></strong>
        <small class="fsize15 block">
          Lorem ipsum dolor sit amet, <strong>consectetur adipiscing</strong> elit. <br />
          Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc.
        </small>
      </p>
    </article>

</section>
<!-- /CONTACT -->';

  return $block;
}
