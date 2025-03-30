#pragma once
#ifndef SRC_CHARTSC_LIBQABSTRACTSERIES_H
#define SRC_CHARTSC_LIBQABSTRACTSERIES_H

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
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChart QChart;
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

#ifdef __cplusplus
typedef QAbstractSeries::SeriesType SeriesType; // C++ enum
#else
typedef int SeriesType; // C ABI enum
#endif

QMetaObject* QAbstractSeries_MetaObject(const QAbstractSeries* self);
void* QAbstractSeries_Metacast(QAbstractSeries* self, const char* param1);
int QAbstractSeries_Metacall(QAbstractSeries* self, int param1, int param2, void** param3);
libqt_string QAbstractSeries_Tr(const char* s);
int QAbstractSeries_Type(const QAbstractSeries* self);
void QAbstractSeries_SetName(QAbstractSeries* self, libqt_string name);
libqt_string QAbstractSeries_Name(const QAbstractSeries* self);
void QAbstractSeries_SetVisible(QAbstractSeries* self);
bool QAbstractSeries_IsVisible(const QAbstractSeries* self);
double QAbstractSeries_Opacity(const QAbstractSeries* self);
void QAbstractSeries_SetOpacity(QAbstractSeries* self, double opacity);
void QAbstractSeries_SetUseOpenGL(QAbstractSeries* self);
bool QAbstractSeries_UseOpenGL(const QAbstractSeries* self);
QChart* QAbstractSeries_Chart(const QAbstractSeries* self);
bool QAbstractSeries_AttachAxis(QAbstractSeries* self, QAbstractAxis* axis);
bool QAbstractSeries_DetachAxis(QAbstractSeries* self, QAbstractAxis* axis);
libqt_list /* of QAbstractAxis* */ QAbstractSeries_AttachedAxes(QAbstractSeries* self);
void QAbstractSeries_Show(QAbstractSeries* self);
void QAbstractSeries_Hide(QAbstractSeries* self);
void QAbstractSeries_NameChanged(QAbstractSeries* self);
void QAbstractSeries_Connect_NameChanged(QAbstractSeries* self, intptr_t slot);
void QAbstractSeries_VisibleChanged(QAbstractSeries* self);
void QAbstractSeries_Connect_VisibleChanged(QAbstractSeries* self, intptr_t slot);
void QAbstractSeries_OpacityChanged(QAbstractSeries* self);
void QAbstractSeries_Connect_OpacityChanged(QAbstractSeries* self, intptr_t slot);
void QAbstractSeries_UseOpenGLChanged(QAbstractSeries* self);
void QAbstractSeries_Connect_UseOpenGLChanged(QAbstractSeries* self, intptr_t slot);
libqt_string QAbstractSeries_Tr2(const char* s, const char* c);
libqt_string QAbstractSeries_Tr3(const char* s, const char* c, int n);
void QAbstractSeries_SetVisible1(QAbstractSeries* self, bool visible);
void QAbstractSeries_SetUseOpenGL1(QAbstractSeries* self, bool enable);
bool QAbstractSeries_Event(QAbstractSeries* self, QEvent* event);
bool QAbstractSeries_EventFilter(QAbstractSeries* self, QObject* watched, QEvent* event);
void QAbstractSeries_Delete(QAbstractSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
