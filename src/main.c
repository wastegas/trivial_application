#include <gtk/gtk.h>

#include "exampleapp.h"

int
main(int argc, char *argv[])
{

  g_setenv("GSETTINGS_SCHEMA_DIR", ".", FALSE);

  return g_application_run(G_APPLICATION (example_app_new()), argc, argv);
}
