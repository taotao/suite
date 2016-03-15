PROJECT_SRC = \
	echoworld/echoworld.h \
	src/echoworld/echoworld.c

AM_CFLAGS = \
	-Wall -W \
	-I$(srcdir)/../libfoo

LDADD= \
	../libfoo/libfoo.la


bin_PROGRAMS = bin/echoworld
bin_echoworld_SOURCES = \
	$(PROJECT_SRC) \
	src/main.c
bin_echoworld_LDADD = \
	$(LDADD)
