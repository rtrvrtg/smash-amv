/**
 * @file
 * Javascript to enable client side uploading of files to S3.
 */

(function ($) {
  

  Shov3FileUpload = {};
  Drupal.behaviors.Shov3FileUpload = {};

  Shov3FileUpload.handleUpload = function(file_selector, $form, triggering_element) {
    // Retrieve the file object.
    $file = $(file_selector);
    f = $file[0].files[0];

    if (typeof f != 'undefined') {

      // Instantiate Shov3.
      var fileUpload = new Shov3({
        bucket:       Drupal.settings.Shov3File.bucket,
        acl:          Drupal.settings.Shov3File.acl,
        redirect:     '/',
        contentType:  f.type,
        folder:       Drupal.settings.Shov3File.folder,
        aws_key:      Drupal.settings.Shov3File.key, 
        presignURL:   '/ajax/shov3-sign',
      }, $);

      // Complete upload.
      // Sets hidden Drupal form file field variables up.
      // @TODO: Check for upload failure!
      var completeUpload = function(response) {
        var result = fileUpload.getPresignResult();
        if (!result) return; // @TODO error!

        var parentElem = $file.parent();

        parentElem.find('input[name$="[filemime]"]').val(f.type);
        parentElem.find('input[name$="[filesize]"]').val(f.size);
        parentElem.find('input[name$="[filename]"]').val(result.destination);
        
        $form.find('input[type="submit"]').removeAttr('disabled');
        
        var button_id = parentElem.find('input.shov3-file-form-submit').attr('id');
        ajax = Drupal.ajax[button_id];
        ajax.form.ajaxSubmit(ajax.options);
      };

      // Runs a progress bar element.
      var progressBar = function(name, container) {
        var pName = name.replace(/[^a-zA-Z0-9_-]/, '');
        var progress = $('<progress />', {
          id: pName
        });
        $(container).append(progress);

        // Create usable object.
        var that = {};
        // Update and, when finished, remove.
        that.update = function(e) {
          var prog = $('#' + pName);
          var removing = false;
          var remove = function() {
            if (!!removing) return;
            removing = true;
            setTimeout(function(){ prog.slideUp('slow', function(){ $(this).remove(); }); }, 1000);  
          };
          if (e.lengthComputable) {
            prog.attr({ value: e.loaded, max: e.total });
            if (e.loaded == e.total) remove();
            if (e.eventPhase == 2) remove();
          }
        };
        
        return that;
      };

      // Prime file reader and send
      var r = new FileReader();
      
      r.onload = function (oFREvent) {
        if (oFREvent.eventPhase != 2) return;
        
        var finalData = fileUpload.getAB(oFREvent.target.result);
        var pb = progressBar(f.name, $('#' + triggering_element).parent());

        fileUpload.send(finalData, f.name, f.type, f.size, completeUpload, pb.update, {
          triggering_element: triggering_element,
          form_build_id: $form.find('input[name="form_build_id"]').val()
        });
      };

      r.readAsBinaryString(f);

    } else {
      $form.submit();
    }
  }

  /**
   * Implements Drupal.behaviors.
   */
  Drupal.behaviors.Shov3FileUpload.attach = function(context, settings) {
    var targetButton = 'form.shov3-file-upload-form input.shov3-file-form-submit';

    // This takes care of preventing Drupal's AJAX framework.
    $(targetButton).unbind('mousedown');

    // Intercept click events for submit buttons in forms with a CORS upload
    // field so we can process the upload to S3 and then actually submit the
    // form when it's all taken care of.
    $(targetButton, context).one('click', function(e) {
      $form = $(this).parents('form');

      // Disable all the submit buttons, we'll submit the form via JS after
      // file uploads are complete.
      $form.find('input[type="submit"]').attr('disabled', 'disabled');

      var triggering_element = $(this).attr('name');
      Shov3FileUpload.handleUpload('.shov3-file-upload-file', $form, triggering_element);
      return false;
    });
  };


})(jQuery);
