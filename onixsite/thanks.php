<? echo '<?xml version="1.0" encoding="UTF-8"?>'; ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
    <title>Onix Media</title>
    <?
    $lang = $_GET['lang'];
    
    if($lang=="es"){
        echo '<link type="text/css" rel="stylesheet" href="./css/style_es.css" />';
        $idioma = "in spanish";
    }else{
        echo '<link type="text/css" rel="stylesheet" href="./css/style.css" />';
        $idioma = "in english";
    }
    ?>
</head>
<body class="thanks">
    
    <?php

    $fname = $_POST['first_name'];
    $lname = $_POST['last_name'];
    $company = $_POST['company'];
    $email = $_POST['email'];
    $phone = $_POST['phone'];
    $msg = $_POST['message'];
    $interests = $_POST['interest'];
    $contact = $_POST['contactme'];
    
    if(empty($interests)) 
    {
      $interestsF = "The user didn't specify any interests.";
    } 
    else 
    {
      $N = count($interests);
      $interestsF = "The user's interests are: ";  
      for($i=0; $i < $N; $i++)
      {
        if($i== $N-1){
            $interestsF .= $interests[$i].".";
        }else{
            $interestsF .= $interests[$i].", ";
        }
      }
    }
    
    if(empty($contact)) 
    {
      $contactF = "The user didn't specify a way to be contacted.";
    } 
    else 
    {
      $N = count($contact);
      $contactF = "The user prefers to be contacted via: ";  
      for($i=0; $i < $N; $i++)
      {
        if($i== $N-1){
            $contactF .= $contact[$i].".";
        }else{
            $contactF .= $contact[$i].", ";
        }
      }
    }
    
    $to = "danilo@onixmedia.net";
    $subject = $fname .' '. $lname .' tried to contact you through Onix Media\'s contact form.';
    $headers = 'From: contact@onixmedia.net';
    $body = $fname ." ". $lname ." from ". $company ." tried to contact you through Onix Media's contact form '.$idioma.'. His contact information is the next: \n Name: ".$fname ." ". $lname ."\n\r Email: ".$email."\n\r Phone number: ".$phone."\n\r\n\r Together with his information he left the following message: \n\r ".$msg."\n\r".$interestsF."\n\r".$contactF;

    if(isset($_POST['first_name'])){
        mail($to, $subject, $body, $headers);
    }
    
?>
          <div id="container">
        <div id="header">
            <div id="header-inner">
                <div id="logo">
                    <a href="index.php<? if($lang=="es"){echo '?lang=es';} ?>" id="img-logo">Onix Media, Frameworks for Digital Content</a>
                </div>
                <div id="head-menu">
                    <a id="langotggle_no" class="incontact" href="index.php<? if($lang!="es"){echo '?lang=es';} ?>"><? if($lang!="es"){echo 'Espa&ntilde;ol';}else{echo 'English';} ?></a>
                    <a id="contactbtn_no" class="addhover" href="contact.php<? if($lang=="es"){echo '?lang=es';} ?>">Contact<? if($lang=="es"){echo 'o';} ?></a>
                </div>
            </div>
        </div>
        <div id="main">
            <div id="main-inner">
                
                <h1 id="thanksHead"><? if($lang=="es"){echo 'Gracias por contactarnos. Un representante de OnixMedia enviar&aacute; en breve la informaci&oacute;n solicitada.';}else{ echo 'Thank you for contacting us. An OnixMedia representative will respond promptly with the information requested.'; } ?> </h1>
                
                <a href="index.php<? if($lang=="es"){echo '?lang=es';} ?>" id="thanksBack"><? if($lang=="es"){echo '&laquo;&nbsp;&nbsp;&nbsp;&nbsp;Regresar a la p&aacute;gina de inicio';}else{ echo '&laquo;&nbsp;&nbsp;&nbsp;&nbsp;Back to Homepage'; } ?></a>
                
            </div>
            <div id="footer">
                <a href="http://www.onixmedia.net/" id="onixlink" class="footlinks firstlink">onixmedia.net</a>
                <a href="index.php<? if($lang=="es"){echo '?lang=es';} ?>" id="homelink" class="footlinks">Home</a>
                <a href="contact.php<? if($lang=="es"){echo '?lang=es';} ?>" id="contactlink" class="footlinks">Contact</a>
            <div id="links"> </div>
        </div>
        </div>
        
      </div>
    <div id="closure"><? if($lang=="es"){echo '&copy;Copyright 2010 Derechos Reservados C&oacute;digo Onix, S.A. de C.V.<br />OnixMedia is a registred trademark of Codigo Onix S.A. de C.V., iPad&reg; and iPhone are registered trademarks of Apple Computer, Inc. USA';}else{ echo '&copy;Copyright 2010 C&oacute;digo Onix, S.A. de C.V.<br /> OnixMedia is a registred trademark of Codigo Onix S.A. de C.V., iPad&reg; and iPhone are registered trademarks of Apple Computer, Inc. USA'; } ?></div>
    

</body>
</html>
