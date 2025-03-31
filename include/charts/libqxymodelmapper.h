#pragma once
#ifndef SRC_CHARTSC_LIBQXYMODELMAPPER_H
#define SRC_CHARTSC_LIBQXYMODELMAPPER_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QXYModelMapper QXYModelMapper;
typedef struct QXYSeries QXYSeries;
#endif

QMetaObject* QXYModelMapper_MetaObject(const QXYModelMapper* self);
void* QXYModelMapper_Metacast(QXYModelMapper* self, const char* param1);
int QXYModelMapper_Metacall(QXYModelMapper* self, int param1, int param2, void** param3);
libqt_string QXYModelMapper_Tr(const char* s);
libqt_string QXYModelMapper_Tr2(const char* s, const char* c);
libqt_string QXYModelMapper_Tr3(const char* s, const char* c, int n);
bool QXYModelMapper_Event(QXYModelMapper* self, QEvent* event);
bool QXYModelMapper_EventFilter(QXYModelMapper* self, QObject* watched, QEvent* event);
void QXYModelMapper_Delete(QXYModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
