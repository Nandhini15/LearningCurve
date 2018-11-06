<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "royal-le-page";
$conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
if(isset($_POST['save']))
{
  $Title = $_POST['Title'];
  $Description = $_POST['Description'];
  $sqll = "INSERT INTO `features` (`Title`, `Description`) VALUES (:Title, :Description)";
  $pdoResult = $conn->prepare($sqll);
  $arr_vall = array(":Title"=>$Title,":Description"=>$Description);
  if($pdoResult)
  {
    var_dump($arr_vall);
    echo 'yes';
  }
  if($pdoResult->execute($arr_vall))
  {
    echo 'New record created successfully';
  }
  else
  {
    echo 'Not inserted';
  }
}
?>
