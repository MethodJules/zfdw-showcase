INTRODUCTION
------------

The form_wissenskarte_module module allows users to create knowledge maps from standard images.


REQUIREMENTS
------------

This module requires the following modules:

 * views, entityreference_view_widget: To select portal content in a modal window for knowledge map areas.
 * Morphsearch, morphsearch_searchresults: To link drawn knowledge map areas to your portal's content.
     Module works without these but they are added by default for maximum knowledge map features.


RECOMMENDED MODULES
-------------------
 * jq_maphighlight: Adds visual highlighting options.
 * imagemap_resizer: By default areas are saved based the the image's original size. If the image is scaled on your site
     you need this module to resize the drawn areas to the image size (responsiveness).
 * Entityreference (https://www.drupal.org/project/entityreference): To attach morphological tags of the morphsearch
    module to the knowledge map.
 * Fivestar (https://www.drupal.org/project/fivestar): To rate knowledge maps by stars in comments.


INSTALLATION
------------

This module can be installed like any other Drupal module:
 1. Place it in the custom modules directory for your site (e.g. sites/all/modules/custom).
 2. Enable it on the 'admin/modules' page.
 3. This module identifies knowledge map images by the assigned image styles (e.g. css class 'image-style-wissenkarte').
    Make sure your theme adds css classes of image styles to images (Drupal 7 standard theme does not do it).


CONFIGURATION
-------------

The module has no menu or modifiable settings. There is no configuration.

