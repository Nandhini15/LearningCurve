<?php
$Title = $_POST['Title'];
$Description = $_POST['Description'];
$to = "nandhininandhu94@gmail.com";
$subject = "Test Check";
$body = "Title: ".$Title."\n"."Description: ".$Description;
$success=mail($to,$subject,$body);
if($success)
{
  return "Message has been sent";
}
else
{
  return "Sorry, May be some problem";
}
$con = new mysqli('localhost','root','','royal-le-page');
if($con->connect_error)
{
  return 'database connection error';
}

$stmt = $con->prepare("INSERT INTO `features`(Title, Description) VALUES(?, ?)");
$stmt->bind_param("sssis",$Title,$Description);
$stmt->execute();
 ?>
