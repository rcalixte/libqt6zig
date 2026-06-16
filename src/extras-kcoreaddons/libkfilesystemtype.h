#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKFILESYSTEMTYPE_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKFILESYSTEMTYPE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFileSystemType KFileSystemType;
#endif

int KFileSystemType_FileSystemType(const libqt_string path);
libqt_string KFileSystemType_FileSystemName(int type);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
