<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Counters block'),
  'description' => t('Displays a sample front page block'),
  'single' => TRUE,
  'category' => array(t('Isis One')),
  'render callback' => 'vih_plugins_counters_block_content_type_render',
);


/**
 * Render Callback
 */
function vih_plugins_counters_block_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<!-- SKILLS -->
<section class="util-row">


  <!-- /CIRCLE SKILLS -->
  <article class="text-center">

    <div class="skill">
      <h2><span class="countTo">1303</span></h2>
      <h3>HAPPY CLIENTS</h3>
      <i class="fa fa-glass"></i>
    </div>
<!--
    <div class="skill">
      <h2>10/10</h2>
      <h3>CODING</h3>
      <i class="fa fa-code"></i>
    </div>
-->
    <div class="skill">
      <h2>10/10</h2>
      <h3>SUPPORT</h3>
      <i class="fa fa-comments"></i>
    </div>

    <div class="skill">
      <h2><span class="countTo">1766</span></h2>
      <h3>FACEBOOK</h3>
      <i class="fa fa-facebook"></i>
    </div>

  </article>
  <!-- /CIRCLE SKILLS -->

</section>
<!-- SKILLS -->
';

  return $block;
}


