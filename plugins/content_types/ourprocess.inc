<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Our process block'),
  'description' => t('Displays a sample front page block'),
  'single' => TRUE,
  'category' => array(t('Isis One')),
  'render callback' => 'vih_plugins_ourprocess_block_content_type_render',
);


/**
 * Render Callback
 */
function vih_plugins_ourprocess_block_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<!-- OUR PROCESS -->
<section id="process" class="alternate arrow-down">

    <header class="text-center animate_fade_in">
      <h1>Our Process</h1>
      <p>WE FIND SIMPLE SOLUTIONS TO COMPLEX PROBLEMS</p>
    </header>

    <div class="divider"><!-- lines divider --></div>

    <article class="animate_fade_in">

      <!-- Nav tabs [steps style] -->
      <div class="text-center">
        <ul class="nav nav-tabs bstrap-tabs">
          <li class="active"><a href="#step1" data-toggle="tab"><i class="icon-calendar"></i>ANALYSIS</a></li>
          <li><a href="#step2" data-toggle="tab"><i class="icon-pencil"></i>PLANNING</a></li>
          <li><a href="#step3" data-toggle="tab"><i class="icon-beaker"></i>DEVELOPMENT</a></li>
          <li><a href="#step4" data-toggle="tab"><i class="icon-thumbs-up"></i>DELIVERY</a></li>
        </ul>
      </div>

      <!-- Tab panes [steps style] -->
      <div class="tab-content bstrap-tabs">

        <!-- STEP 1 -->
        <div class="tab-pane fade in active" id="step1">
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc. </p>
          <p>Nam et lacus neque. Sed volutpat ante id mauris laoreet vestibulum. Nam blandit felis non neque cursus aliquet. Morbi vel enim dignissim massa dignissim commodo vitae quis tellus. Nunc non mollis nulla. </p>
          <p>Sed consectetur elit id mi consectetur bibendum. Ut enim massa, sodales tempor convallis et, iaculis ac massa. Etiam suscipit nisl eget lorem pellentesque quis iaculis mi mattis. Aliquam sit amet purus lectus. Maecenas tempor ornare sollicitudin. </p>
        </div>

        <!-- STEP 2 -->
        <div class="tab-pane fade" id="step2">
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc.  Nam et lacus neque. Sed volutpat ante id mauris laoreet vestibulum. Nam blandit felis non neque cursus aliquet. Morbi vel enim dignissim massa dignissim commodo vitae quis tellus. Nunc non mollis nulla. </p>
          <p>Nam et lacus neque. Sed volutpat ante id mauris laoreet vestibulum. Nam blandit felis non neque cursus aliquet. Morbi vel enim dignissim massa dignissim commodo vitae quis tellus. Nunc non mollis nulla. Nam et lacus neque. Sed volutpat ante id mauris laoreet vestibulum. Nam blandit felis non neque cursus aliquet. Morbi vel enim dignissim massa dignissim commodo vitae quis tellus. Nunc non mollis nulla. </p>
          <p>Sed consectetur elit id mi consectetur bibendum. Ut enim massa, sodales tempor convallis et, iaculis ac massa. Etiam suscipit nisl eget lorem pellentesque quis iaculis mi mattis. Aliquam sit amet purus lectus. Maecenas tempor ornare sollicitudin.</p>
        </div>

        <!-- STEP 3 -->
        <div class="tab-pane fade" id="step3">
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc. </p>
          <p>Nam et lacus neque. Sed volutpat ante id mauris laoreet vestibulum. Nam blandit felis non neque cursus aliquet. Morbi vel enim dignissim massa dignissim commodo vitae quis tellus. Nunc non mollis nulla. </p>
          <p>Sed consectetur elit id mi consectetur bibendum. Ut enim massa, sodales tempor convallis et, iaculis ac massa. Etiam suscipit nisl eget lorem pellentesque quis iaculis mi mattis. Aliquam sit amet purus lectus. Maecenas tempor ornare sollicitudin.</p>
        </div>

        <!-- STEP 4 -->
        <div class="tab-pane fade" id="step4">
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc.  Nam et lacus neque. Sed volutpat ante id mauris laoreet vestibulum. Nam blandit felis non neque cursus aliquet. Morbi vel enim dignissim massa dignissim commodo vitae quis tellus. Nunc non mollis nulla.  Sed consectetur elit id mi consectetur bibendum. Ut enim massa, sodales tempor convallis et, iaculis ac massa. Etiam suscipit nisl eget lorem pellentesque quis iaculis mi mattis. Aliquam sit amet purus lectus. Maecenas tempor ornare sollicitudin. </p>
        </div>
      </div>

    </article>

</section>
<!-- /OUR PROCESS -->';

  return $block;
}
