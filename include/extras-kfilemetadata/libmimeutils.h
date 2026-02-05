#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBMIMEUTILS_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBMIMEUTILS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMimeDatabase QMimeDatabase;
typedef struct QMimeType QMimeType;
#endif

QMimeType* KFileMetaData__MimeUtils_StrictMimeType(const libqt_string param1, const QMimeDatabase* param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
