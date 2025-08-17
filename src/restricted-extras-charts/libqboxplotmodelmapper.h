#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBOXPLOTMODELMAPPER_H

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
typedef struct QBoxPlotModelMapper QBoxPlotModelMapper;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QBoxPlotModelMapper_MetaObject(const QBoxPlotModelMapper* self);
void* QBoxPlotModelMapper_Metacast(QBoxPlotModelMapper* self, const char* param1);
int QBoxPlotModelMapper_Metacall(QBoxPlotModelMapper* self, int param1, int param2, void** param3);
libqt_string QBoxPlotModelMapper_Tr(const char* s);
libqt_string QBoxPlotModelMapper_Tr2(const char* s, const char* c);
libqt_string QBoxPlotModelMapper_Tr3(const char* s, const char* c, int n);
void QBoxPlotModelMapper_Delete(QBoxPlotModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
