
  <?php
   include('logserver.php');
  ?>
  <!DOCTYPE html>
  <html>
  <head>
  <title> Database records: </title>
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-slider/10.0.2/css/bootstrap-slider.min.css" />
  <!-- Latest compiled and minified JavaScript -->
  <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-slider/10.0.2/bootstrap-slider.min.js"></script>
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
  <link rel="stylesheet" type="text/css" href="../assets/style-fetch.css">
</head>
<body>
  <?php if (isset($_SESSION['msg'])): ?>
    <div class="msg">
      <?php
        echo $_SESSION['msg'];
        unset($_SESSION['msg']);
       ?>
    </div>
  <?php endif ?>
  <table>
    <thead>
      <tr>
        <th>session_start</th>
        <th>session_end</th>
        <th>user_id</th>
        <th>activity</th>
        <th colspan="2">Action</th>
      </tr>
    </thead>
    <tbody>
      <?php foreach ($rsl as $row) {?>
          <tr>
           <td><?php echo $row['session_start']; ?></td>
           <td><?php echo $row['session_end']; ?></td>
           <td><?php echo $row['user_id']; ?></td>
           <td><?php echo $row['activity']; ?></td>
           <td>
             <a class="del_btn" href="logserver.php?del=<?php echo $row['activity_id']; ?>">Delete</a>
           </td>
           </tr>
    <?php } ?>
  </tbody>
  <input type="hidden" name="activity_id" value="<?php echo $activity_id; ?>">
  </table>

  
 </body>
 </html>
