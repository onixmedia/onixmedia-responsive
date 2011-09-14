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
      //$("#mapa_onix").attr("position", "absolute");
    }
  };
  
  Drupal.behaviors.proyectos = {
    attach: function(context) {
      $('.view-projects .view-content').accordion();
    }
  };

}(jQuery));
