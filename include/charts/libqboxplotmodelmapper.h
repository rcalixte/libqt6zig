#pragma once
#ifndef SRC_CHARTSC_LIBQBOXPLOTMODELMAPPER_H
#define SRC_CHARTSC_LIBQBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBoxPlotModelMapper QBoxPlotModelMapper;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QMetaObject* QBoxPlotModelMapper_MetaObject(const QBoxPlotModelMapper* self);
void* QBoxPlotModelMapper_Metacast(QBoxPlotModelMapper* self, const char* param1);
int QBoxPlotModelMapper_Metacall(QBoxPlotModelMapper* self, int param1, int param2, void** param3);
libqt_string QBoxPlotModelMapper_Tr(const char* s);
libqt_string QBoxPlotModelMapper_Tr2(const char* s, const char* c);
libqt_string QBoxPlotModelMapper_Tr3(const char* s, const char* c, int n);
bool QBoxPlotModelMapper_Event(QBoxPlotModelMapper* self, QEvent* event);
bool QBoxPlotModelMapper_EventFilter(QBoxPlotModelMapper* self, QObject* watched, QEvent* event);
void QBoxPlotModelMapper_Delete(QBoxPlotModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
