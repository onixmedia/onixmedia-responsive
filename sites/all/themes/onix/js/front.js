var scrollWindowTo;
var scrollWindowToElement;

(function ($) {

  Drupal.behaviors.googlemap  = {
    attach: function(context) {
      var latlng = new google.maps.LatLng(25.6736,-100.337727);
      var myOptions = {
        zoom: 13,
        center: latlng,
        mapTypeId: google.maps.MapTypeId.ROADMAP
      };
      var map = new google.maps.Map(document.getElementById("mapa_onix"), myOptions);
      var contentString = '<div class="infowindow"><b>OnixMedia</b> <br/>Matamoros 1528 Ote.<br/>Col. Obispado,<br/>Monterrey<br/>Nuevo Le&oacute;n <br/>+(52) 818 123-2713 </div>';
      var infowindow = new google.maps.InfoWindow({
          content: contentString
      });
      var marker = new google.maps.Marker({
          position: latlng,
          map: map,
          title:"OnixMedia (Monterrey)"
      });
      google.maps.event.addListener(marker, 'click', function() {
        infowindow.open(map,marker);
      });
    }
  };
  
  Drupal.behaviors.scrolling = {
    attach: function(context) {
  		$('a[href*=#]').click(function(event) {
        event.preventDefault();
        if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'')
        && location.hostname == this.hostname) {
          var $target = $(this.hash);
          $target = $target.length && $target || $('[name=' + this.hash.slice(1) +']'); 
          if ($target.length) {
            scrollWindowTo($target.offset().top);
            return false;
          }
        }
      });
      
      if ( !Drupal.settings.onix.mobile )
      {
        $(window).scroll(function () { 
          var scrollTop = $(window).scrollTop();
          if(scrollTop < 109){
              $('.header-content').removeClass('floating');
          }else{
            $('.header-content').addClass('floating');       
          }
        });
      }
    }
  };  
  
  Drupal.behaviors.proyectos = {
    attach: function(context) 
    {
      $('.view-projects h3:last').addClass('last');
      $('.view-projects .proyectos-tab:last').addClass('last');
      Drupal.settings.onix.accordion = $( "#block-views-projects-block .view-content" ).accordion({ autoHeight: false });
      $( "#block-views-projects-block .view-content" ).bind('accordionchange', function(event, ui) {
        scrollWindowToElement($(ui.newHeader));
      });
    }
  };
  
  Drupal.behaviors.solutions = {
    attach: function (context)
    {
      $('#block-views-solutions-block').appendTo('#block-views-slideshow-block');
      $('.view-solutions .attachment').hide();
      
      //
      // scrollable
      //
      $('.view-solutions .attachment .view-header').prependTo('.view-solutions .attachment');
      $('.view-solutions .attachment').before('<a class="s-prev">&nbsp;</a><a class="s-next">&nbsp;</a>');
      $('.view-solutions .attachment .view-solutions').scrollable({ prev: '.s-prev', next: '.s-next' });
      Drupal.settings.onix.solutions = $('.view-solutions .attachment .view-solutions').data('scrollable');
      $('.s-prev, .s-next').hide();
      
      //
      // open
      //
      $('.view-solutions .plus').click(function()
      {
        $('#block-views-slideshow-block').addClass('expanded');
        $('.view-solutions:first > .view-content').hide();
        $('.view-solutions .attachment, .s-prev, .s-next').show();
        Drupal.settings.onix.solutions.seekTo($('.view-solutions .plus').index(this));
        
        // scroll a elemento
        Drupal.settings.onix.scrolltop = $(window).scrollTop();
        scrollWindowToElement('.view-solutions');
      });
      
      //
      // close
      //
      $('.view-solutions .close').click(function()
      {
        $('#block-views-slideshow-block').removeClass('expanded');
        $('.view-solutions:first > .view-content').show();
        $('.view-solutions .attachment, .s-prev, .s-next').hide();
        
        scrollWindowTo(Drupal.settings.onix.scrolltop);
      });
    }
  }
  
  /**
   * Upper stage slideshow
   */
  Drupal.behaviors.slideshow = {
    attach: function (context)
    {
      $('#block-views-solutions-block > .content').prepend('<div class="navi clearfix"></div>');
      $('.view-slideshow').scrollable({ circular: true }).autoscroll({ interval: 5000 }).navigator();
      Drupal.settings.onix.slideshow = $('.view-slideshow').data('scrollable');
    }
  }
  
  /**
   * Capacidades slideshow
   */
  Drupal.behaviors.knowledge = {
    attach: function (context)
    {
      $('.view-knowledge').before('<div class="knowledge-nav clearfix"></div>');
      $('.view-knowledge h3').each(function(i)
      {
        $('.knowledge-nav').append('<a href="#'+i+'">'+$(this).html()+'</a>');
        $(this).remove();
      });
      $('.knowledge-nav a:first').addClass('active');
      $('.view-knowledge').scrollable().navigator({ navi: '.knowledge-nav' });
      Drupal.settings.onix.knowledge = $('.view-knowledge').data('scrollable');
    }
  }
  
  /**
   * Responsiveness, reset scrollable and accordion state
   */
  Drupal.behaviors.responsive = {
    attach: function (context)
    {
      $(window).resize(function()
      {
        //Drupal.settings.onix.accordion.accordion('activate', 0);
        //Drupal.settings.onix.slideshow.seekTo(0);
        //Drupal.settings.onix.solutions.seekTo(0);
        //Drupal.settings.onix.knowledge.seekTo(0);
      });
    }
  }
  
  /**
   ** Funciones para mover al usuario en scroll vertical
   **/
  scrollWindowTo = function (yPos)
  {
    var delta = (Drupal.settings.onix.mobile) ? 0 : 110;
    var targetOffset = yPos - delta;

    $('html,body').animate({scrollTop: targetOffset}, 1000);
  };
  scrollWindowToElement = function (name)
  {
    scrollWindowTo( $(name).offset().top );
  };
  
}(jQuery));