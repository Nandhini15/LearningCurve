  <?php
class Database{

  public static function connected(){
   static $db;
    if($db === NULL){
      $db = mysqli_connect('localhost', 'root', '', 'unbeleadsable');
    }
    return $db;
  }
  public static function insertion($table_name, $feilds){
    $db = self::connected();
    $feild_set = implode(",", $feilds);
    $Firstname = $_POST['Firstname'];
    $Lastname = $_POST['Lastname'];
    $email = $_POST['email'];
    $phoneno = $_POST['phoneno'];
    $message = $_POST['message'];
  //  $insert_result = mysqli_query($db, "INSERT INTO testformevaluation (Firstname, Lastname, email, phoneno, message) VALUES ('$Firstname', '$Lastname', '$email', '$phoneno', '$message')");
    //return $insert_result;
    $query = "INSERT INTO $table_name (Firstname, Lastname, email, phoneno, message) VALUES ($feild_set)";
    mysqli_query($db, $query);
  }
  public static function updation($table_name, $id){
    $db = self::connected();
    $Firstname = mysqli_real_escape_string($db, $_POST['Firstname']);
    $Lastname = mysqli_real_escape_string($db, $_POST['Lastname']);
    $email = mysqli_real_escape_string($db, $_POST['email']);
    $phoneno = mysqli_real_escape_string($db, $_POST['phoneno']);
    $message = mysqli_real_escape_string($db, $_POST['message']);
    //$id = mysqli_real_escape_string($db, $_POST['id']);
    mysqli_query($db, "UPDATE $table_name SET Firstname='$Firstname', Lastname='$Lastname', email='$email', phoneno='$phoneno', message='$message' WHERE id=$id");

  }
  public static function deletion($id, $table_name){
    $db = self::connected();
    $delete_result = mysqli_query($db, "DELETE FROM $table_name WHERE id=$id");
    return $delete_result;
  }
  public static function selection($table_name){
    $db = self::connected();
    $select_result = mysqli_query($db, "SELECT * FROM $table_name");

    while($rsl = mysqli_fetch_array($select_result))
    {
      $output[] = $rsl;
    }

    return $output;
  }
  public static function edit($id, $table_name){
      $db = self::connected();

      $edit_result = mysqli_query($db, "SELECT * FROM $table_name WHERE id=$id");
      while($records = mysqli_fetch_array($edit_result)){
        $rec_output = $records;
      }
      return $rec_output;
  }
}
?>
