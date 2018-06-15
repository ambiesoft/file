TARGET = file
TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += ..

DEFINES += "HAVE_CONFIG_H=1"

SOURCES += \
    apprentice.c \
    apptype.c \
    ascmagic.c \
    asctime_r.c \
    asprintf.c \
    buffer.c \
    cdf.c \
    cdf_time.c \
    compress.c \
    ctime_r.c \
    der.c \
    dprintf.c \
    encoding.c \
    file.c \
    fmtcheck.c \
    fsmagic.c \
    funcs.c \
    getline.c \
    getopt_long.c \
    gmtime_r.c \
    is_tar.c \
    localtime_r.c \
    magic.c \
    pread.c \
    print.c \
    readcdf.c \
    readelf.c \
    seccomp.c \
    softmagic.c \
    strcasestr.c \
    strlcat.c \
    strlcpy.c \
    teststrchr.c \
    vasprintf.c \
    myhelp.c

HEADERS += \	
        file.h \
    cdf.h \
    der.h \
    elfclass.h \
    file.h \
    file_opts.h \
    mygetopt.h \
    patchlevel.h \
    readelf.h \
    tar.h \
    ../config.h \
    myhelp.h

LIBS += -lgnurx -lz -lShlwapi

