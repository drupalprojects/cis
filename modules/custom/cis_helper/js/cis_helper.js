(function ($) {
  $(document).ready(function(){
	  $('#edit-course').change(function(){
			// hide options related to a new course if it exists
		  if ($(this).val() != 'new') {
				$('#edit-new-course').addClass('hide_form_field');
				$('#edit-services').val('course');
			}
			else {
				$('#edit-new-course').removeClass('hide_form_field');
			}
		});
		$('#edit-course').change();
	});
})(jQuery);