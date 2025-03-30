#pragma once
#ifndef SRC_CHARTSC_LIBQPIEMODELMAPPER_H
#define SRC_CHARTSC_LIBQPIEMODELMAPPER_H

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
typedef struct QPieModelMapper QPieModelMapper;
typedef struct QPieSeries QPieSeries;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QMetaObject* QPieModelMapper_MetaObject(const QPieModelMapper* self);
void* QPieModelMapper_Metacast(QPieModelMapper* self, const char* param1);
int QPieModelMapper_Metacall(QPieModelMapper* self, int param1, int param2, void** param3);
libqt_string QPieModelMapper_Tr(const char* s);
libqt_string QPieModelMapper_Tr2(const char* s, const char* c);
libqt_string QPieModelMapper_Tr3(const char* s, const char* c, int n);
bool QPieModelMapper_Event(QPieModelMapper* self, QEvent* event);
bool QPieModelMapper_EventFilter(QPieModelMapper* self, QObject* watched, QEvent* event);
void QPieModelMapper_Delete(QPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
