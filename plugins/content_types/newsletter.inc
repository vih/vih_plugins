<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Newsletter block'),
  'description' => t('Displays a sample front page block'),
  'single' => TRUE,
  'category' => array(t('Isis One')),
  'render callback' => 'vih_plugins_newsletter_block_content_type_render',
);


/**
 * Render Callback
 */
function vih_plugins_newsletter_block_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<!-- NEWSLETTER SUBSCRIBE -->
<section class="util-row">
  <div class="container">

    <div class="row">

      <!-- left -->
      <div class="col-md-7 nopadding-left">
        <h3>NEWSLETTER</h3>
        <p>Subscribe to our newsletter and stay updated on the release.</p>
      </div>



      <!-- right -->
      <div class="col-md-5 text-right separator newsletter-subscribe nopadding-right">

        <!-- form -->
        <form id="newsletterForm" method="post" action="php/newsletter.php">
          <div class="row">
            <div class="col-lg-12">
              <div class="input-group bordered input-group-lg">
                <!-- input field -->
                <input required type="email" name="newsletter_email" id="newsletter_email" class="form-control" placeholder="johndoe@domain.com" />

                <!-- action button -->
										<span class="input-group-btn">
											<input type="hidden" name="newsletter_captcha" id="newsletter_captcha" value="" /><!-- hidden field - humans should not see it, only spam bots will see it -->
											<button id="newsletter-subscribe" class="nomargin btn btn-primary">SUBSCRIBE</button>
										</span>
              </div>
            </div>
          </div>
        </form>
        <!-- /form -->

      </div>

    </div>

  </div>
</section>
<!-- /NEWSLETTER SUBSCRIBE -->
<!-- NEWSLETTER MODAL -->
<div class="modal fade contactModal" id="newsletterModal" tabindex="-1" role="dialog" aria-labelledby="myNewsletterLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">

      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
        <h4 class="modal-title" id="myNewsletterLabel"><i class="fa fa-envelope-o"></i> <span class="font600">Subscribed</span></h4>
      </div>

      <div class="modal-body">

        <p>
          Thank you for your subscription!
        </p>

      </div>

      <div class="modal-footer">
        <button class="btn btn-default btn-sm fullwidth" data-dismiss="modal">OK, CLOSE</button>
      </div>

    </div><!-- /.modal-content -->
  </div><!-- /.modal-dialog -->
</div>
<!-- /NEWSLETTER MODAL -->
';

  return $block;
}

