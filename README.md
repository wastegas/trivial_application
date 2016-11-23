A trivial GTK+ application
==========================

You can follow the [guide](https://developer.gnome.org/gtk3/stable/ch01s04.html) on the [GNOME Developer Center](https://developer.gnome.org/) website.

Requirements
------------
Download [GTK+](https://www.gtk.org/download/index.php) for your OS.

Generate resource and settings schema files
----------------------
In the src directory:

    glib-compile-resources exampleapp.gresource.xml --target=resources.c --generate-source
    glib-compile-schemas --strict --dry-run --schema-file=preference.gschema.xml
    glib-compile-schemas --strict --schema-file=preference.gschema.xml --targetdir=.

Installing
----------
You can use the usual

    ./configure
    make
    make install

For OSX
Run the commands above from the [jhbuild shell](https://wiki.gnome.org/Projects/GTK+/OSX/Building).
