#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKCOLORMIMEDATA_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKCOLORMIMEDATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KColorMimeData KColorMimeData;
typedef struct QColor QColor;
typedef struct QDrag QDrag;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
#endif

void KColorMimeData_PopulateMimeData(QMimeData* mimeData, const QColor* color);
bool KColorMimeData_CanDecode(const QMimeData* mimeData);
QColor* KColorMimeData_FromMimeData(const QMimeData* mimeData);
QDrag* KColorMimeData_CreateDrag(const QColor* color, QObject* dragsource);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
