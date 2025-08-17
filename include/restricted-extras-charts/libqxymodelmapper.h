#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQXYMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QXYModelMapper QXYModelMapper;
typedef struct QXYSeries QXYSeries;
#endif

QMetaObject* QXYModelMapper_MetaObject(const QXYModelMapper* self);
void* QXYModelMapper_Metacast(QXYModelMapper* self, const char* param1);
int QXYModelMapper_Metacall(QXYModelMapper* self, int param1, int param2, void** param3);
libqt_string QXYModelMapper_Tr(const char* s);
libqt_string QXYModelMapper_Tr2(const char* s, const char* c);
libqt_string QXYModelMapper_Tr3(const char* s, const char* c, int n);
void QXYModelMapper_Delete(QXYModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
