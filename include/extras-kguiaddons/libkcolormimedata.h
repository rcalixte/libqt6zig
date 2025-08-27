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

void KColorMimeData_PopulateMimeData(QMimeData* param1, const QColor* param2);
bool KColorMimeData_CanDecode(const QMimeData* param1);
QColor* KColorMimeData_FromMimeData(const QMimeData* param1);
QDrag* KColorMimeData_CreateDrag(const QColor* param1, QObject* param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
