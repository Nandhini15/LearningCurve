<div class="modal fade" id="contactUsModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel">
 <div class="modal-dialog modal-lg" role="document">
  <div class="modal-content">
    <div class="modal-header">
      <button type="button" class="close" data-dismiss="modal" aria-label="Close">
        <span aria-hidden="true">&times;</span>
      </button>
      <h4 class="modal-title" id="myModalLabel">
        <strong>Contact Us</strong>
      </h4>
    </div>
	   <div class="modal-body row">
      <div id="formDiv">
			 <form role="form" id="Evaluation-form" class="container-fluid" method="post" action="insert.php">
				<div class="row">
         <h4 class="col-6 formHeader">Please complete the form below in order to contact us</h4>
        </div>
       <br/>
       <input type="hidden" name="contactUs">
       <input type="hidden" name="lang" value="EN">
       <div>
				<div class="col-xs-6 col-sm-6 col-md-6">
			   <div class="form-group row">
					<input type="text" required name="Firstname" id="Firstname" class="form-control col-sm-3" placeholder="Firstname">
				 </div>
				 <div class="form-group row">
					<input type="text" required name="Lastname" id="Lastname" class="form-control col-sm-3" placeholder="Lastname">
				 </div>
				 <div class="form-group row">
					<input type="email" required name="email" id="email" class="form-control col-sm-3" placeholder="email-id">
				 </div>
				 <div class="form-group row">
				  <input type="phoneno" required name="phoneno" id="phoneno" class="form-control col-sm-3" placeholder="phoneno">
				 </div>
         <div class="form=group row">
    			<textarea class="form-control col-sm-3" name="message" id="message" rows="7" placeholder="Leave ur message here"></textarea>
    		</div>
        <div class="clearfix">
       	 <button type="submit" name="register" value="Submit">
           <i class="fa fa-send">
           </i>Submit</button>
       	 <button type="reset" value="Reset">Reset</button>
       	</div>
        <div class="row text-center">
        <div id="successContactPopup" hidden="true">Message sent! We'll get in touch with you shortly.</div>
         <div id="errorContactPopup"></div>
        </div>
			 </div>
      </div>
     </form>
    </div>
   </div>
	</div>
 </div>
</div>
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
		}).done(function(data){
			$("form")[0].reset();
			alert("success");
		}).fail(function(){
			alert("fail");
		});
	});
</script>
</body>
</html>
