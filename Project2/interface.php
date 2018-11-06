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
  <link rel="stylesheet" href="assets/custom.css">
  <link rel="stylesheet" href="/assets/custom-contact.css">
  <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-slider/10.0.2/bootstrap-slider.min.js"></script>
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <script src="/jquery.md5.js"></script>
</head>
<body class="home-page">
  <!-- Preloader -->
  <div id="preloader">
    <div class="aligner">
      <div class="spinner">
        <div class="bar1"></div>
        <div class="bar2"></div>
        <div class="bar3"></div>
        <div class="bar4"></div>
        <div class="bar5"></div>
      </div>
    </div>
  </div>
<nav class="navbar navbar-fixed-top">
 <div class="container-fluid" id="navbar-container">
  <div class="row">
   <div class="col-md-6 navbar-header">
    <button type="button" class="navbar-toggle visible-xs collapsed" data-toggle="collapse" data-target="#onepage-nav">
     <i class="fa fa-bars"></i>
      <span class="sr-only">Toggle navigation</span>
       <span class="icon-bar"></span>
       <span class="icon-bar"></span>
       <span class="icon-bar"></span>
       <span class="icon-bar"></span>
       <span class="icon-bar"></span>
    </button>
    <a class="navbar-brand" href="/" title="Royal LePage">
      <img class="logo hidden-sm" alt="Royal LePage" src="/img/logo.png">
      <img class="logo-sm hidden-lg hidden-md hidden-xs" alt="Royal LePage" src="/img/logo.png">
    </a>
  </div>
  <div class="col-md-6 collapse navbar-collapse" id="onepage-nav">
   <ul class="nav navbar-nav ml-auto" id="navigation">

    <li>
      <a href="#credentials" class="links" data-target="#credentials">Credentials</a>
    </li>
    <li>
      <a href="#search-intro" class="links" data-target="#search-intro">User Activity</a>
    </li>

    <li>
      <a href="/logout.php" class="links" >Logout</a>
    </li>
   </ul>
  </div>
 </div>
</div>
</nav>
<div>
  <section id="credentials">
      <?php include("credentials.php") ?>
  </section>
  <section id="search-intro">
    <?php include("log-activity.php") ?>
  </section>
</div>
<script>
$(document).ready(function(){
 $(".links").click(function(){
  $('html, body').animate({
   scrollTop: $($(this).attr('href')).offset().top
   }, 500);
 });
});
</script>
