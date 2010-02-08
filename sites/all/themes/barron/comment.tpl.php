<div class="comment<?php print ($comment->new) ? ' comment-new' : ''; print ' '. $status; print ' '. $zebra; ?>">
  
  <?php if ($picture) { print $picture; } ?>

  <?php if ($comment->new): ?>
    <span class="new"><?php print $new ?></span>
  <?php endif; ?>

  <h3 class="commen-title">
    <?php print $title; ?>
  </h3>

  <div class="submitted">
    <?php print $submitted ?>
  </div>

  <div class="content">
    <?php print $content ?>
    <?php if ($signature): ?>
      <div class="user-signature clear-block">
        <?php print $signature ?>
      </div>
    <?php endif; ?>
  </div>

  <div class="links">
    <?php print $links; ?>
  </div>
</div>