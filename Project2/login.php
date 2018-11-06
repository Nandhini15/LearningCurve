<?php include("jquery.js") ?>

<div id="id01" class="modal">
  <form class="modal-content animate"method="post" action="action.php">
    <div class="container credit">
      <label for="uname"><b>Username</b></label>
      <input type="text" required name="username" id="username"  placeholder="Enter Username">
      <label for="psw"><b>Password</b></label>
      <input type="password" required name="password" id="password" placeholder="Enter Password">
      <button type="submit" name="register" id="register">Login</button>
      <label>
        <input type="checkbox" checked="checked" name="remember"> Remember me
      </label>
    </div>
    <div class="container credited" style="background-color:#f1f1f1">
      <button type="button" onclick="document.location.href ='/landing.php';" class="cancelbtn">Cancel</button>
      <span class="psw">Forgot <a href="#">password?</a></span>
    </div>
  </form>
</div>
<p id="result"></p>
<script>
 $(document).ready(function(){
   $('#register').click(function(e){
     var ress = $('#password').val();
     var username = $('#username').val();
     var password = $.md5(ress);
     console.log(password);
     if(username != '' && password != ''){
        $.ajax({
          url:"action.php",
          method:"POST",
          data:{username:username, password:password},
          success:function(data){
            if(data == 'No')
            {
              alert("Wrong Data");
            }else{
              $('#id01').hide();
              loaction.reload();
            }
          }
        });
     }else{
       alert("Both fields are required");
     }
   });
 });
</script>
	<link rel="stylesheet" href="/login-style.css">
