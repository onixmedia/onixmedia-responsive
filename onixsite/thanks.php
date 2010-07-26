<? echo '<?xml version="1.0" encoding="UTF-8"?>'; ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
    <title>Onix Media</title>
    <link type="text/css" rel="stylesheet" href="./css/style.css" />
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
    
    $to = "mr.mmss@gmail.com";
    $subject = $fname .' '. $lname .' tried to contact you through Onix Media\'s contact form.';
    $headers = 'From: onixcontact@onixmedia.com';
    $body = $fname ." ". $lname ." from ". $company ." tried to contact you through Onix Media's contact form. His contact information is the next: \n Name: ".$fname ." ". $lname ."\n\r Email: ".$email."\n\r Phone number: ".$phone."\n\r\n\r Together with his information he left the following message: \n\r ".$msg."\n\r".$interestsF."\n\r".$contactF;

    mail($to, $subject, $body, $headers);
    
?>
          <div id="container">
        <div id="header">
            <div id="logo">
                <a href="#" id="img-logo">Onix Media, Frameworks for Digital Content</a>
            </div>
            <div id="head-menu">
                <a id="contactbtn" href="#">Contact</a>
            </div>
        </div>
        <div id="main">
            <div id="main-inner">
                
                <h1 id="thanksHead">Thank you for contacting us. An OnixMedia representative will respond promptly with the information requested. </h1>
                
                <a href="index.html" id="thanksBack">Back to Homepage</a>
                
            </div>
            <div id="footer">
                <a href="http://www.onixmedia.net/" id="onixlink" class="footlinks firstlink">onixmedia.net</a>
                <a href="/" id="homelink" class="footlinks">Home</a>
                <a href="contact.html" id="contactlink" class="footlinks">Contact</a>
            <div id="links"> </div>
        </div>
        </div>
        
      </div>
      <div id="closure"><img src="images/closure.png" alt="&copy;Copyright 2010 Código Onix, S.A. de C.V. OnixMedia is a registred trademark of Codigo Onix S.A. de C.V., iPad® and iPhone are registered trademarks of Apple Computer, Inc. USA" /></div>
    

</body>
</html>
