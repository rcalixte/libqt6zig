#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKICONUTILS_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKICONUTILS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KIconUtils KIconUtils;
typedef struct QIcon QIcon;
#endif

QIcon* KIconUtils_AddOverlay(const QIcon* param1, const QIcon* param2, int param3);
QIcon* KIconUtils_AddOverlays(const QIcon* param1, const libqt_map /* of int to QIcon* */ param2);
QIcon* KIconUtils_AddOverlays2(const QIcon* param1, const libqt_list /* of libqt_string */ param2);
QIcon* KIconUtils_AddOverlays3(const libqt_string param1, const libqt_list /* of libqt_string */ param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
