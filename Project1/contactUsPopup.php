<!DOCTYPE html>
<html>
<head>
	<title> Evaluation Form </title>
	<script
  src="https://code.jquery.com/jquery-3.3.1.min.js"
  integrity="sha256-FgpCb/KJQlLNfOu91ta32o/NMZxltwRo8QtmkMRdAu8="
  crossorigin="anonymous"></script>
	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
	<link rel="stylesheet" type="text/css" href="custom.css">
</head>
<body onload="func();">
	<div class="container">
		<div class="row		centered-form">
			<div class="col-xs-12 col-sm-8 col-md-4 col-sm-offset-2 cd-mdoffset-4">
				<div class="panel panel-default">
					<div class="panel-heading">
						<h3 class="panel-title">Please Fill in ur details!!</h3>
					</div>
					<div class="panel-body">
						<form role="form" id="myForm" method="post" action="insert.php">
							<div class="row">
								<div class="col-xs-6 col-sm-6 col-md-6">
									<div class="form-group">
										<input type="text" required name="Firstname" id="Firstname" class="form-control input-sm" placeholder="Firstname">
									</div>
								</div>
								<div class="col-xs-6 col-sm-6 col-md-6">
									<div class="form-group">
										<input type="text" required name="Lastname" id="Lastname" class="form-control input-sm" placeholder="Lastname">
									</div>
								</div>
								<div class="col-xs-6 col-sm-6 col-md-6">
									<div class="form-group">
										<input type="email" required name="email" id="email" class="form-control input-sm" placeholder="email-id">
									</div>
								</div>
								<div class="col-xs-6 col-sm-6 col-md-6">
									<div class="form-group">
										<input type="phoneno" required name="phoneno" id="phoneno" class="form-control input-sm" placeholder="phoneno">
									</div>
								</div>
								<div class="col-xs-12">
							<div class="form=group">
								<textarea class="form-control" name="message" id="message" rows="4" placeholder="Leave ur message here"></textarea>
							</div>
						</div>
					</div>
					</br>
           <div class="clearfix">
							<button type="submit" name="register" value="Submit">Submit</button>
							<button type="reset" value="Reset">Reset</button>
						</div>
					</form>
					<p id="result"></p>
					<script>
					$("form").submit(function(e){
						e.preventDefault();

						$.post(
							`insert.php`, <!--where to submit the data-->
							$("form :input").serializeArray(),
							<!-- call back func to get the server response-->
              function(result){
                console.log(result);
							}
						).done(function(data){
							$("form")[0].reset();
							alert("success");

						}).fail(function(){
							alert("fail");
						});


					});


					function createCookie(name,value,days) {
           if (days) {
           var date = new Date();
           date.setTime(date.getTime()+(days*24*60*60*1000));
           var expires = "; expires="+date.toGMTString();
          }
          else var expires = "";
          document.cookie = name+"="+value+expires+"; path=/";
          }
				
					function eraseCookie(name) {
					  createCookie(name,"",-1);
					}
					function func(){
					createCookie('Test','5',10);
				}
					</script>


				 </div>
				</div>
			</div>
		</div>
</div>



	<!-- jQuery library -->
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>

<!-- Latest compiled JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
</body>
</html>
