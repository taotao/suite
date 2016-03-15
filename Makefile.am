PROJECT_SRC = \
	foo/foo.h \
	src/foo/foo.c

AM_CFLAGS = \
	-Wall -W

ACLOCAL_AMFLAGS = -I m4

lib_LTLIBRARIES = libfoo.la
libfoo_la_SOURCES = \
	$(PROJECT_SRC)

libfoo_la_LDFLAGS = \
	-shared \
	-release $(VERSION)
