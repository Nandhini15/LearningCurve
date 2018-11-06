<?php
class RoyalData{
  public static function connection(){
   static $data;
    if($data === NULL){
      $data = mysqli_connect('localhost', 'root', '', 'royal-le-page');
    }
    return $data;
  }
  public static function insert(){
    $data = self::connection();
    $sessionId=$_SESSION["sessionId"];
    $username=$_SESSION["username"];
    $sessionStart=date ("Y-m-d H:i:s",$_SESSION["started"]);
    $session_end = date ("Y-m-d H:i:s",$_SESSION["started"]);
    $activity = "";
    var_dump($username);
    var_dump($sessionStart);
   $insert_results = mysqli_query($data, "INSERT INTO user_activity (session_id, user_id, session_start, session_end, activity) VALUES ('$sessionId','$username', '$sessionStart', '$session_end', '$activity')");
   var_dump($data->error);
    return $data;

  }

public static function update(){
    $data = self::connection();
    $sessionId=$_SESSION["sessionId"];
    $session_end = date ("Y-m-d H:i:s",time());
    $activity =$_SESSION["activity"];

  ///  if(isset($username && $sessionStart)){
      mysqli_query($data, "UPDATE user_activity SET session_end='$session_end', activity='$activity' WHERE session_id='$sessionId'");
  //  }
}
//yet to modify
public static function deletion($activity_id, $table_name){
  $data = self::connection();
  $delete_result = mysqli_query($data, "DELETE FROM $table_name WHERE activity_id=$activity_id");
  return $delete_result;
}
public static function select($table_name){
  $data = self::connection();
  $select_result = mysqli_query($data, "SELECT * FROM $table_name");

  while($rsl = mysqli_fetch_array($select_result))
  {
    $output[] = $rsl;
  }

  return $output;
}
}
?>
