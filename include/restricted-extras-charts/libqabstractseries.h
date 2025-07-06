#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQABSTRACTSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQABSTRACTSERIES_H

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
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChart QChart;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QAbstractSeries_MetaObject(const QAbstractSeries* self);
void* QAbstractSeries_Metacast(QAbstractSeries* self, const char* param1);
int QAbstractSeries_Metacall(QAbstractSeries* self, int param1, int param2, void** param3);
libqt_string QAbstractSeries_Tr(const char* s);
int QAbstractSeries_Type(const QAbstractSeries* self);
void QAbstractSeries_SetName(QAbstractSeries* self, const libqt_string name);
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
void QAbstractSeries_Delete(QAbstractSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
