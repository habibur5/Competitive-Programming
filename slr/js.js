window.addEventListener('DOMContentLoaded', function() {
    jQuery(function($){
        jQuery('.thwvsf-wrapper-ul .thwvsf-wrapper-item-li .thwvsf-item-span').html(function (i, html) {
            return html.replace(/\-(.*$)/, ' <span class=\"gaming_topup_gt\">$1</span>')
        })
    })
    });
    document.addEventListener('DOMContentLoaded', function() {
        var triggers = document.querySelectorAll('.woocommerce-product-gallery__trigger');
        triggers.forEach(function(trigger) {
            trigger.addEventListener('click', function(e) {
                e.preventDefault(); // Prevent the default action
            });
        });
    });
    