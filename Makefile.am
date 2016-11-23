ACLOCAL_AMFLAGS = -I m4 --install
AM_CFLAGS = -I$(top_srcdir)/include $(EXAMPLE_APP_CFLAGS)
bin_PROGRAMS = example_app
dist_example_app_SOURCES = src/main.c \
						   src/exampleapp.c \
						   src/exampleappwin.c \
						   src/exampleappprefs.c \
						   src/resources.c

include_HEADERS = 	include/exampleapp.h \
				  	include/exampleappwin.h \
					include/exampleappprefs.h



example_app_LDADD = $(EXAMPLE_APP_LIBS)

EXTRA_DIST = \
			 src/window.ui \
			 src/menu.ui \
			 src/prefs.ui \
			 src/exampleapp.gresource.xml \
			 src/preference.gschema.xml
