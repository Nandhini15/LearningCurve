<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "unbeleadsable";
$conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);

if(isset($_POST['register']))
{
    $Firstname = $_POST['Firstname'];
    $Lastname = $_POST['Lastname'];
    $email = $_POST['email'];
    $phoneno = $_POST['phoneno'];
    $message = $_POST['message'];
    $sql = "INSERT INTO `testformevaluation` (`Firstname`, `Lastname`, `email`, `phoneno`, `message`)
    VALUES (:Firstname, :Lastname, :email, :phoneno, :message)";
    $pdoResult = $conn->prepare($sql);
    $arr_val = array(":Firstname"=>$Firstname,":Lastname"=>$Lastname,":email"=>$email,":phoneno"=>$phoneno,":message"=>$message);
    if($pdoResult){
      var_dump($arr_val);
      echo 'yes';
    }

    if($pdoResult->execute($arr_val))
    {
    echo 'New record created successfully';
    }
    else
    {
    echo 'Not inserted';
    }
  }
?>
