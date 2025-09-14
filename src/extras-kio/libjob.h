#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBJOB_H
#define SRC_EXTRAS_KIOC_LIBJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KIO KIO;
typedef struct QUrl QUrl;
#endif

libqt_string KIO_BuildErrorString(int param1, const libqt_string param2);
libqt_string KIO_RawErrorDetail(int param1, const libqt_string param2, const QUrl* param3, int param4);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
