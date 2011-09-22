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
            var targetOffset = $target.offset().top - 110;
            $('html,body').animate({scrollTop: targetOffset}, 1000);
            return false;
          }
        }
      });
      
      $(window).scroll(function () { 
        var scrollTop = $(window).scrollTop();
        if(scrollTop < 109){
            $('.header-content').removeClass('floating');
        }else{
          $('.header-content').addClass('floating');       
        }
        //console.log("scrolltop: "+scrollTop);
      });

    }
  };  
  
  Drupal.behaviors.proyectos = {
    attach: function(context) {
      //$('.view-projects .view-content').accordion();
      $( "#block-views-projects-block .view-content" ).accordion();      
    }
  };
  
  Drupal.behaviors.solutions = {
    attach: function (context)
    {
      $('#block-views-solutions-block').appendTo('#block-views-slideshow-block');
    }
  }
  
}(jQuery));
