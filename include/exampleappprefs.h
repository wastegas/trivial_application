#ifndef __EXAMPLEPREFS_H
#define __EXAMPLEPREFS_H

#include <gtk/gtk.h>
#include "exampleappwin.h"

#define EXAMPLE_APP_PREFS_TYPE (example_app_pref_get_type())
G_DECLARE_FINAL_TYPE (ExampleAppPrefs, example_app_prefs, EXAMPLE, APP_PREFS, GtkDialog)

ExampleAppPrefs   *example_app_prefs_new    (ExampleAppWindow *win);

#endif /* __EXAMPLEPREFS_H */
