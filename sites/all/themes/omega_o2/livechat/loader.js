



                document.addEventListener("DOMContentLoaded", function(event) {

                    odoo.define('web.session', function (require) {
                        var Session = require('web.Session');
                        var modules = odoo._modules;
                        return new Session(undefined, "https://odoo.abesim.com", {modules:modules, use_cors: false});
                    });


                    odoo.define('im_livechat.livesupport', function (require) {

                    });
                });


