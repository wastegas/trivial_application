#include <gtk/gtk.h>

#include "exampleapp.h"
#include "exampleappwin.h"
#include "exampleappprefs.h"

struct _ExampleAppPrefs
{
  GtkDialog parent;
};

typedef struct _ExampleAppPrefsPrivate ExampleAppPrefsPrivate;

struct _ExampleAppPrefsPrivate
{
  GSettings *settings;
  GtkWidget *font;
  GtkWidget *transition;
};

G_DEFINE_TYPE_PRIVATE(ExampleAppPrefs, example_app_prefs, GTK_TYPE_DIALOG)

static void
example_app_prefs_init(ExampleAppPrefs *prefs)
{
  ExampleAppPrefs *priv;

  priv = example_app_prefs_get_instance_private(prefs);
  gtk_widget_init_template(GTK_WIDGET(prefs));
  priv->settings = g_settings_new("org.gtk.exampleapp");

  g_settings_bind(priv->settings, "font",
                  priv->font, "font",
                  G_SETTINGS_BIND_DEFAULT);

  g_settings_bind(priv->setting, "transition",
                  priv->transition, "transition",
                  G_SETTINGS_BIND_DEFAULT);
}

static void
example_app_prefs_dispose(GObject *object)
{
  ExampleAppPrefsPrivate *priv;

  priv = example_app_prefs_get_instance_private(EXAMPLE_APP_PREFS(object));
  g_clear_object(&priv->settings);

  G_OBJECT_CLASS(example_app_prefs_parent_class)->dispose (object);
}

static void
example_app_prefs_class_init(ExampleAppPrefsClass *class)
{
  G_OBJECT_CLASS(class)->dispose = example_app_prefs_dispose;

  gtk_widget_class_set_template_from_resource(GTK_WIDGET_CLASS(class),
                                              "/Users/Ronnie/Documents/gtk/trivial_application/src/prefs.ui");
  gtk_widget_class_bind_template_child_private(GTK_WIDGET_CLASS(class), ExampleAppPrefs, font);
  gtk_widget_class_bind_template_child_private(GTK_WIDGET_CLASS(class), ExampleAppPrefs, transition);
}

ExampleAppPrefs *
example_app_prefs_new(ExampleAppWin *win)
{
  return g_object_new(EXAMPLE_APP_PREFS_TYPE, "transition-for", win, "use-header-bar", TRUE, NULL);
}
