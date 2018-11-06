<?php
$Firstname = $_POST['Firstname'];
$Lastname = $_POST['Lastname'];
$email = $_POST['email'];
$phoneno = $_POST['phoneno'];
$message = $_POST['message'];

$to = "dev@shoogamarketing.com";
$subject = "Test Check";
$body = "firstname: ".$Firstname."\n"."lastname: ".$Lastname."\n"."email: ".$email."\n"."phone: ".$phoneno."\n"."message: ".$message;
if(mail($to,$subject,$body)){
  echo "sent";
}else {
  echo "not sent";
}
$con = new mysqli('localhost','root','','unbeleadsable');
if($con->connect_error){
    echo 'database connection error';
  }

  $stmt = $con->prepare("INSERT INTO `testformevaluation`(Firstname, Lastname, email, phoneno, message) VALUES(?, ?, ?, ?, ?)");
  $stmt->bind_param("sssis",$Firstname,$Lastname,$email,$phoneno,$message);

  $stmt->execute();

 ?>
