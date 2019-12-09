# Particles.js library wrapper for Drupal

This is a very simple module providing a wrapper for the Particles.js library : https://vincentgarreau.com/particles.js/

## Installation

Install Libraries API : https://www.drupal.org/project/libraries

Download a Particles.js release on https://github.com/VincentGarreau/particles.js/releases

Extract it to sites/all/libraries/particles.js. You must have a sites/all/libraries/particles.js/particles.js file.

Enable this module.

Check that the library is detected at /admin/reports/libraries/particles.js

## Usage

### Attach or load the library

The prefered way to load the library is to attach it to a render array:

    $build['my_render_array']['#attached']['libraries_load'][] = array('particles.js');

You can load load it manually in a hook in a custom module, too:

    libraries_load('particles.js');

Finally, for convenience you can load it on every page if you check the checkbox on admin/config/user-interface/particlesjs, but please remember it's bad practice.

### Add the div for Particles.js

Somewhere in your template, add a div:

    <div id="particles-js"></div>

### Call it in your JS

Default settings:

    particlesJS.load('particles-js');

To customize your particules, copy particles.js/demo/particles.json somewhere in your theme, customize it and call it:

    particlesJS.load('particles-js', '/sites/all/themes/my_custom_theme/particles.json');

## Credits

+ Vincent Garreau, Particles.js creator (https://github.com/VincentGarreau)
+ Guillaume Duveau, creator and maintainer of this module (https://guillaumeduveau.com / https://www.drupal.org/user/173213)
