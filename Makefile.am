ACLOCAL_AMFLAGS = -I m4 --install
AM_CFLAGS = -I$(top_srcdir)/include $(EXAMPLE_APP_CFLAGS)
bin_PROGRAMS = example_app
dist_example_app_SOURCES = src/main.c
include_HEADERS = include/exampleapp.h
example_app_LDADD = $(EXAMPLE_APP_LIBS)
