# Background
My employer's website was flagged by Google as "hacked" a week and a half ago. Since that time, the other web and security team members and I have been pouring over logs attempting to figure out what has happened. Eventually, we nailed down that files were being uploaded to our server as temporary files through Drupal's AJAX file uploader via public webforms without the form truly being submitted and the appropriate parties notified that a submission had occurred. 

To prevent this, we wrote this module. The goal of it is to prevent the exploitation of AJAX file uploads in forms by limiting who is allowed to use AJAX file uploads in the first place. Our site has a large anonymous user base that needs to upload files via the Webform module on a regular basis. As such, anyone can submit files to our server without actually submitting the entire webform through Drupal's AJAX file upload process. Despite the fact that these files are removed eventually during a cron run, we found that this presented a security flaw that was difficult to monitor.

Though it is possible Drupal will create a patch to attempt to lessen the impact of this easily exploitable feature, in the meantime, we felt that it was important to develop something to prevent our site from being targeted. We do not need our anonymous users to be able to use the AJAX file upload at all, so the easiest solution for us was to disable it. It was also important to us to add in our modification without changing anything inside of core Drupal or the Webform module itself. 

To do this, our module hooks into the theme functions Drupal core and webforms use when making file upload fields. In our custom hook functions, we perform a check to make sure the current user has permission to use AJAX file uploads. If the user does not have permission, the parts of the array that would be rendered into the 'Upload' and 'Remove' buttons are removed so that they never appear on the page. After the unnecessary pieces are removed (or kept if the user does have permission), the default core or webform theme functions are called so that the end output is otherwise the same as it is by default. 

When the module is enabled, only admins are given the option to use AJAX file uploads. However, for our site that does not allow anyone to make a user account on their own, I think it is safe to give these permissions to all authenticated users. 

The only configuration necessary for this module is granting the permission options for users. There are no other settings or interfaces. When this module is turned off, AJAX file uploads will return to their normal configuration. 

# How to Use
1. Download this repo and add the ajax_upload_disabler folder to your sites/all/modules folder within your Drupal site.
2. Log into your Drupal site and turn on the module. 
3. Configure the module permissions to grant/remove the ability to use AJAX file uploads to roles. 
