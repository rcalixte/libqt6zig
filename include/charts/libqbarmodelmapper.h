#pragma once
#ifndef SRC_CHARTSC_LIBQBARMODELMAPPER_H
#define SRC_CHARTSC_LIBQBARMODELMAPPER_H

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
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBarModelMapper QBarModelMapper;
typedef struct QBindingStorage QBindingStorage;
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

QMetaObject* QBarModelMapper_MetaObject(const QBarModelMapper* self);
void* QBarModelMapper_Metacast(QBarModelMapper* self, const char* param1);
int QBarModelMapper_Metacall(QBarModelMapper* self, int param1, int param2, void** param3);
libqt_string QBarModelMapper_Tr(const char* s);
libqt_string QBarModelMapper_Tr2(const char* s, const char* c);
libqt_string QBarModelMapper_Tr3(const char* s, const char* c, int n);
bool QBarModelMapper_Event(QBarModelMapper* self, QEvent* event);
bool QBarModelMapper_EventFilter(QBarModelMapper* self, QObject* watched, QEvent* event);
void QBarModelMapper_Delete(QBarModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
