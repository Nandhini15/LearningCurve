<!DOCTYPE html>
  <html lang="en">
  <head>
    <title>Royal LePage</title>
    <meta charset="utf-8">
	  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
	  <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="Protection Royale is a unique insurance program designed to support clients who are transacting in residential real estate through a participating Royal LePage broker">
	  <meta name="keywords" content="...">
	  <meta name="author" content="...">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-slider/10.0.2/css/bootstrap-slider.min.css" />
    <link rel="stylesheet" href="https://fonts.googleapis.com/icon?family=Material+Icons">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
   	<link rel="stylesheet" href="style.css">
    <link rel="stylesheet" type="text/css" href="custom-contact.css">
    <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/33.1/jquery.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-slider/10.0.2/bootstrap-slider.min.js"></script>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  </head>
  <body class="home-page">
   <nav class="navbar navbar-fixed-top">
    <div class="container-fluid" id="navbar-container">
     <div class="row">
      <div class="col-md-6 navbar-header">
       <a class="navbar-brand" href="/" title="Royal LePage">
        <img class="logo hidden-sm" alt="Royal LePage" src="">
        <img class="logo-sm hidden-lg hidden-md hidden-xs" alt="Royal LePage" src="">
      </a>
     </div>
    </div>
   </div>
  </nav>
  <div class="home-page" id="header-section">
   <div class="container-fluid">
  	<div class="row">
  	 <div class="col-md-12 header-content" id="buySell">
  		<h1 class="header-title margintop">
    	 <b>Thinking to Buy / Sell a home ?? Seeking answers to all your queries ??</b><br/>
       <b>Contact Us! We can help</b>
  		</h1>
    </div>
  		<div class="col-md-12 text-justify marginBottom">
  		<button class="information" href="#"><b>FIND UR PERFECT AGENT</b> </button>
  		</div>
  	 	 <div class="col-md-8 col-md-offset-0" id="form-sec">
        <div class="panel panel-default">
         <div class="panel-heading" id="head-sec">
          <h1 class="panel-title" id="text-head"><center>Initiate your first step to Buy/Sell a home.Benefit from Free Legal Assistance!!</center></h1>
           </div>
           <div class="divider" id="divide">
             <i class="fa fa-user bg-white"></i>
           </div>
          	<div class="panel-body">
          	 <form role="form" id="myForm" method="post" action="insert.php">
          		<div class="row">
          		 <div class="col-xs-6 col-sm-6 col-md-6">
          			<div class="form-group">
          			 <input type="text" required name="Firstname" id="Firstname" class="form-control input-sm" placeholder="Fullname*">
          			</div>
          		 </div>

          	   <div class="col-xs-6 col-sm-6 col-md-6">
          	    <div class="form-group">
          			 <input type="email" required name="email" id="email" class="form-control input-sm" placeholder="email-id*">
          			</div>
          		 </div>
               <div class="col-md-12 col-md-offset-5 clearfix" id="value">
   			<a id="button-send" class="btn btn-primary btn-lg" style="background-color: #e3eaa7; border-color: #e3eaa7; color:black; margin-top: 10px; margin-left: 10px;">
   		  	<i class="fa fa-send"></i> Value My Home
   			</a>
   		</div>

     				</div>

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
          							}
          					).done(function(data){
          					$("form")[0].reset();
          			  		alert("success");
          					}).fail(function(){
          		  			alert("fail");
          						});
          					});
         </script>
        </div>
       </div>
     </div>

     </div>
    </div>
   </div>
    <?php include("footer.php") ?>
