<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Testimonials block'),
  'description' => t('Displays a sample front page block'),
  'single' => TRUE,
  'category' => array(t('Isis One')),
  'render callback' => 'vih_plugins_testimonials_block_content_type_render',
);


/**
 * Render Callback
 */
function vih_plugins_testimonials_block_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<!-- TESTIMONIALS -->
<section class="alternate">
  <div class="container">
    <article>
      <div class="owl-carousel text-center" data-navigation="false" data-singleitem="true" data-autoplay="true" data-transition="false"><!-- data-transition : fade or false (false = slide) -->
        <div class="item dragCursor"><!-- client 1 -->
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc. Nam et lacus neque. Sed volutpat ante id mauris laoreet vestibulum. Nam blandit felis non neque cursus aliquet.</p>
          <cite><strong>Arnold Doe</strong> / Customer</cite>
        </div>
        <div class="item dragCursor"><!-- client 2 -->
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc.</p>
          <cite><strong>John Doe</strong> / Customer</cite>
        </div>
        <div class="item dragCursor"><!-- client 3 -->
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc. Nam et lacus neque. Sed volutpat ante id mauris laoreet vestibulum. Nam blandit felis non neque cursus aliquet.</p>
          <cite><strong>Isis Doe</strong> / Customer</cite>
        </div>
        <div class="item dragCursor"><!-- client 4 -->
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc.</p>
          <cite><strong>Irina Doe</strong> / Customer</cite>
        </div>
      </div>
    </article>
  </div>
</section>';

  return $block;
}

