#include <gtk/gtk.h>

#include "exampleapp.h"
#include "exampleappwin.h"

struct _ExampleAppWindow
{
  GtkApplicationWindow parent;
};

G_DEFINE_TYPE(ExampleAppWindow, example_app_window, GTK_TYPE_APPLICATION_WINDOW);

static void
example_app_window_init(ExampleAppWindow *app)
{
  gtk_widget_init_template(GTK_WIDGET(app));
}

static void
example_app_window_class_init(ExampleAppWindowClass *class)
{
  gtk_widget_class_set_template_from_resource(GTK_WIDGET_CLASS (class),
                                              "/Users/Ronnie/Documents/gtk/trivial_application/src/window.ui");
}

ExampleAppWindow *
example_app_window_new(ExampleApp *app)
{
  return g_object_new(EXAMPLE_APP_WINDOW_TYPE,
                      "application",
                      app,
                      NULL);
}

void
example_app_window_open(ExampleAppWindow *win,
                        GFile *file)
{
}
