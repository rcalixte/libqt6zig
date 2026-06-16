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

QIcon* KIconUtils_AddOverlay(const QIcon* icon, const QIcon* overlay, int position);
QIcon* KIconUtils_AddOverlays(const QIcon* icon, const libqt_map /* of int to QIcon* */ overlays);
QIcon* KIconUtils_AddOverlays2(const QIcon* icon, const libqt_list /* of libqt_string */ overlays);
QIcon* KIconUtils_AddOverlays3(const libqt_string iconName, const libqt_list /* of libqt_string */ overlays);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
