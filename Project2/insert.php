<?php
$Firstname = $_POST['Firstname'];
$Lastname = $_POST['Lastname'];
$email = $_POST['email'];
$phoneno = $_POST['phoneno'];
$message = $_POST['message'];
$to = "nandhininandhu94@gmail.com";
$subject = "Test Check";
$body = "firstname: ".$Firstname."\n"."lastname: ".$Lastname."\n"."email: ".$email."\n"."phone: ".$phoneno."\n"."message: ".$message;
$success=mail($to,$subject,$body);
if($success)
{
  return "Message has been sent";
}
else
{
  return "Sorry, May be some problem";
}
$con = new mysqli('localhost','root','','unbeleadsable');
if($con->connect_error)
{
  return 'database connection error';
}
  $stmt = $con->prepare("INSERT INTO `testformevaluation`(Firstname, Lastname, email, phoneno, message) VALUES(?, ?, ?, ?, ?)");
  $stmt->bind_param("sssis",$Firstname,$Lastname,$email,$phoneno,$message);
  $stmt->execute();
 ?>
