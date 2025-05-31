#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBARMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBARMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBarModelMapper QBarModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QBarModelMapper_MetaObject(const QBarModelMapper* self);
void* QBarModelMapper_Metacast(QBarModelMapper* self, const char* param1);
int QBarModelMapper_Metacall(QBarModelMapper* self, int param1, int param2, void** param3);
libqt_string QBarModelMapper_Tr(const char* s);
libqt_string QBarModelMapper_Tr2(const char* s, const char* c);
libqt_string QBarModelMapper_Tr3(const char* s, const char* c, int n);
void QBarModelMapper_Delete(QBarModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
