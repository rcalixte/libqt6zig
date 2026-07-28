#pragma once
#ifndef EXTRAS_KIO_LIBJOB_H
#define EXTRAS_KIO_LIBJOB_H

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

libqt_string KIO_BuildErrorString(int errorCode, const libqt_string errorText);
libqt_string KIO_RawErrorDetail(int errorCode, const libqt_string errorText, const QUrl* reqUrl, int method);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
