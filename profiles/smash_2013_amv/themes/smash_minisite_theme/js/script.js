/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

$(document).ready(function(){

// Place your code here.
  
  var assignActivity = function(button) {
    var isDepartment = button.parents('.pane-departments').length > 0;
    if (isDepartment) {
      $('.pane-positions').find('.view-content .active').removeClass('active');
    }
    button.closest('.pane-departments, .pane-positions').find('.view-content .active').removeClass('active');
    button.addClass('active');
  };

  var History = window.History, // Note: We are using a capital H instead of a lower h
	State = History.getState();
	
	// Bind to State Change
	History.Adapter.bind(window,'statechange',function(){ // Note: We are using statechange instead of popstate
		var State = History.getState();
		if (!!State.data.state) {
      var button = $('.view-content a[href$="request/' + State.data.state + '/nojs"]', '.pane-departments, .pane-positions');
      if (button.length > 0 && !button.hasClass('active')) {
        // @TODO: refine back behaviour
        button.click();
        assignActivity(button);
      }
		}
	});

  $('.pane-departments, .pane-positions').delegate('.view-content a', 'mouseup', function(e){
    assignActivity($(this));
    var uri = this.href.replace(/^[a-z]*:\/\/[^\/]*\//, '').replace(/^request\//, '').replace(/\/(nojs)$/, '');
    History.pushState({ state: uri }, $(this).text(), '/' + uri);
  });
  
  var uri = window.location.href.replace(/^[a-z]*:\/\/[^\/]*\//, '');
  History.pushState({ state: uri }, document.title, '/' + uri);
  
  // $('#content form textarea').elastic();
  
  
  
  
  $.fn.smashThemeFormInit = function(data) {
    $('#content form textarea').elastic();
    
    // Makes multiple table fields display in dynamic fashion
    $('table.field-multiple-table, table.auto-display-table').each(function(){
      var ctx = this;
      
      var consolidate = function(){
        var values = [];
        $('input[type="text"]', ctx).each(function(){
          if ($(this).val().length > 0) {
            values.push($(this).val());
          }
        });
        
        var index = 0;
        var flipped = false;
        $('input[type="text"]', ctx).each(function(){
          var newval = !!values[index] ? values[index] : '';
          $(this).val(newval);
          if (newval != '') {
            $(this).closest('tr').show();
          }
          else {
            if (!!flipped) {
              $(this).closest('tr').hide();
            }
            flipped = true;
          }
          index++;
        });
      };
      
      $('tbody tr', ctx).not('tr:first-child').hide();
      
      $('.delta-order').hide();
      
      $('input[type="text"]', ctx).keyup(function(){
        var val = $(this).val();
        var next = $(this).closest('tr').next();
        if (val.length > 0) {
          next.show('fast');
        }
        else {
          if (next.length > 0 && next.find('input[type="text"]').val().length == 0) {
            next.hide('fast');
          }
        }
      }).blur(function(){
        consolidate();
      });
    });
  };
  $.fn.smashThemeFormInit();

});

})(jQuery, Drupal, this, this.document);
