<?php

$conn = mysqli_connect("project1", "root", "", "unbeleadsable");
$result = mysqli_query($conn, "SELECT * FROM testformevaluation");

$data = array();
while ($row = mysqli_fetch_assoc($result))
{
  $data[] = $row;
}
 json_encode($data);

 ?>
