<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">

  <?php print $picture ?>

  <?php if ($page == 0) : ?>
    <h2 class="node-title">
       <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>
    
  <span class="submitted">
    <?php print $submitted; ?>
  </span>
    
  <?php if ($taxonomy): ?>
    <div class="taxonomy">
      Tagged: <?php print $terms; ?>
    </div>
  <?php endif; ?>
    
  <div class="content">
    <?php print $content; ?>
  </div>
    
  <?php if ($links) : ?>
    <div class="nodeLinks">
      <?php print $links; ?>
    </div>
  <?php endif; ?>
  
</div>
