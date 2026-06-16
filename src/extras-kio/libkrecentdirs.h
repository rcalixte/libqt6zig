#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKRECENTDIRS_H
#define SRC_EXTRAS_KIOC_LIBKRECENTDIRS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KRecentDirs KRecentDirs;
#endif

libqt_list /* of libqt_string */ KRecentDirs_List(const libqt_string fileClass);
libqt_string KRecentDirs_Dir(const libqt_string fileClass);
void KRecentDirs_Add(const libqt_string fileClass, const libqt_string directory);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
