#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKFILEUTILS_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKFILEUTILS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFileUtils KFileUtils;
typedef struct QUrl QUrl;
#endif

libqt_string KFileUtils_SuggestName(const QUrl* baseURL, const libqt_string oldName);
libqt_string KFileUtils_MakeSuggestedName(const libqt_string oldName);
libqt_list /* of libqt_string */ KFileUtils_FindAllUniqueFiles(const libqt_list /* of libqt_string */ dirs, const libqt_list /* of libqt_string */ nameFilters);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
