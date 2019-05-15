if DEBUG
DEBUG_CFLAGS = -I$(top_srcdir)/debug
DEBUG_LIBS = $(top_builddir)/debug/libdebug.a
else
DEBUG_CFLAGS =
DEBUG_LIBS =
endif

AM_CPPFLAGS = \
	-DLOCALEDIR=\"$(localedir)\" \
	-DDOCDIR=\"$(docdir)\" \
	-I$(top_srcdir)/lib \
    -pthread -mms-bitfields \
    -I$(MSYSTEM_PREFIX)/include \
    -I$(MSYSTEM_PREFIX)/$(MSYSTEM_CHOST)/include

bin_PROGRAMS = fsv

noinst_HEADERS = \
    about.h     \
    animation.h \
    callbacks.h \
    camera.h    \
    colexp.h    \
    color.h     \
    common.h    \
    dialog.h    \
    dirtree.h   \
    filelist.h  \
    fnmatch.h \
    fsv.h       \
    fsv3d.h     \
    geometry.h  \
    gui.h       \
    fnmatch.h \
    ogl.h       \
    scanfs.h    \
    tmaptext.h  \
    viewport.h  \
    window.h 

fsv_SOURCES = \
	about.c \
	animation.c \
	callbacks.c \
	camera.c \
	colexp.c \
	color.c \
	common.c \
	dialog.c \
	dirtree.c \
	filelist.c \
    fnmatch.c \
	fsv.c \
	geometry.c \
	gui.c \
	ogl.c \
	scanfs.c \
	tmaptext.c \
	viewport.c \
	window.c

fsv_LDADD = \
	$(DEBUG_LIBS) \
	$(top_builddir)/lib/libmisc.a \
    -L$(MSYSTEM_PREFIX)/lib \
    -L$(MSYSTEM_PREFIX)/$(MSYSTEM_CHOST)/lib

EXTRA_DIST = \
	xmaps/back.xpm \
	xmaps/birdseye_view.xpm \
	xmaps/blockdev.xpm \
	xmaps/button_cancel.xpm \
	xmaps/button_ok.xpm \
	xmaps/cd-root.xpm \
	xmaps/cd-up.xpm \
	xmaps/chardev.xpm \
	xmaps/charset.xbm \
	xmaps/fifo.xpm \
	xmaps/folder.xpm \
	xmaps/fsv-icon.xpm \
	xmaps/mini-blockdev.xpm \
	xmaps/mini-chardev.xpm \
	xmaps/mini-fifo.xpm \
	xmaps/mini-folder-open.xpm \
	xmaps/mini-folder.xpm \
	xmaps/mini-regfile.xpm \
	xmaps/mini-socket.xpm \
	xmaps/mini-symlink.xpm \
	xmaps/mini-unknown.xpm \
	xmaps/regfile.xpm \
	xmaps/socket.xpm \
	xmaps/symlink.xpm \
	xmaps/unknown.xpm
