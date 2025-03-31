#pragma once
#ifndef SRC_CHARTSC_LIBQSCATTERSERIES_H
#define SRC_CHARTSC_LIBQSCATTERSERIES_H

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
typedef struct QBrush QBrush;
typedef struct QChart QChart;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QImage QImage;
typedef struct QLinearGradient QLinearGradient;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QScatterSeries QScatterSeries;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QXYSeries QXYSeries;
#endif

#ifdef __cplusplus
typedef QScatterSeries::MarkerShape MarkerShape; // C++ enum
#else
typedef int MarkerShape; // C ABI enum
#endif

QScatterSeries* QScatterSeries_new();
QScatterSeries* QScatterSeries_new2(QObject* parent);
QMetaObject* QScatterSeries_MetaObject(const QScatterSeries* self);
void* QScatterSeries_Metacast(QScatterSeries* self, const char* param1);
int QScatterSeries_Metacall(QScatterSeries* self, int param1, int param2, void** param3);
void QScatterSeries_OnMetacall(QScatterSeries* self, intptr_t slot);
int QScatterSeries_QBaseMetacall(QScatterSeries* self, int param1, int param2, void** param3);
libqt_string QScatterSeries_Tr(const char* s);
int QScatterSeries_Type(const QScatterSeries* self);
void QScatterSeries_OnType(const QScatterSeries* self, intptr_t slot);
int QScatterSeries_QBaseType(const QScatterSeries* self);
void QScatterSeries_SetPen(QScatterSeries* self, QPen* pen);
void QScatterSeries_OnSetPen(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseSetPen(QScatterSeries* self, QPen* pen);
void QScatterSeries_SetBrush(QScatterSeries* self, QBrush* brush);
void QScatterSeries_OnSetBrush(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseSetBrush(QScatterSeries* self, QBrush* brush);
QBrush* QScatterSeries_Brush(const QScatterSeries* self);
void QScatterSeries_SetColor(QScatterSeries* self, QColor* color);
void QScatterSeries_OnSetColor(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseSetColor(QScatterSeries* self, QColor* color);
QColor* QScatterSeries_Color(const QScatterSeries* self);
void QScatterSeries_OnColor(const QScatterSeries* self, intptr_t slot);
QColor* QScatterSeries_QBaseColor(const QScatterSeries* self);
void QScatterSeries_SetBorderColor(QScatterSeries* self, QColor* color);
QColor* QScatterSeries_BorderColor(const QScatterSeries* self);
int QScatterSeries_MarkerShape(const QScatterSeries* self);
void QScatterSeries_SetMarkerShape(QScatterSeries* self, int shape);
double QScatterSeries_MarkerSize(const QScatterSeries* self);
void QScatterSeries_SetMarkerSize(QScatterSeries* self, double size);
void QScatterSeries_ColorChanged(QScatterSeries* self, QColor* color);
void QScatterSeries_Connect_ColorChanged(QScatterSeries* self, intptr_t slot);
void QScatterSeries_BorderColorChanged(QScatterSeries* self, QColor* color);
void QScatterSeries_Connect_BorderColorChanged(QScatterSeries* self, intptr_t slot);
void QScatterSeries_MarkerShapeChanged(QScatterSeries* self, int shape);
void QScatterSeries_Connect_MarkerShapeChanged(QScatterSeries* self, intptr_t slot);
void QScatterSeries_MarkerSizeChanged(QScatterSeries* self, double size);
void QScatterSeries_Connect_MarkerSizeChanged(QScatterSeries* self, intptr_t slot);
libqt_string QScatterSeries_Tr2(const char* s, const char* c);
libqt_string QScatterSeries_Tr3(const char* s, const char* c, int n);
bool QScatterSeries_Event(QScatterSeries* self, QEvent* event);
void QScatterSeries_OnEvent(QScatterSeries* self, intptr_t slot);
bool QScatterSeries_QBaseEvent(QScatterSeries* self, QEvent* event);
bool QScatterSeries_EventFilter(QScatterSeries* self, QObject* watched, QEvent* event);
void QScatterSeries_OnEventFilter(QScatterSeries* self, intptr_t slot);
bool QScatterSeries_QBaseEventFilter(QScatterSeries* self, QObject* watched, QEvent* event);
void QScatterSeries_TimerEvent(QScatterSeries* self, QTimerEvent* event);
void QScatterSeries_OnTimerEvent(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseTimerEvent(QScatterSeries* self, QTimerEvent* event);
void QScatterSeries_ChildEvent(QScatterSeries* self, QChildEvent* event);
void QScatterSeries_OnChildEvent(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseChildEvent(QScatterSeries* self, QChildEvent* event);
void QScatterSeries_CustomEvent(QScatterSeries* self, QEvent* event);
void QScatterSeries_OnCustomEvent(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseCustomEvent(QScatterSeries* self, QEvent* event);
void QScatterSeries_ConnectNotify(QScatterSeries* self, QMetaMethod* signal);
void QScatterSeries_OnConnectNotify(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseConnectNotify(QScatterSeries* self, QMetaMethod* signal);
void QScatterSeries_DisconnectNotify(QScatterSeries* self, QMetaMethod* signal);
void QScatterSeries_OnDisconnectNotify(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseDisconnectNotify(QScatterSeries* self, QMetaMethod* signal);
QObject* QScatterSeries_Sender(const QScatterSeries* self);
void QScatterSeries_OnSender(const QScatterSeries* self, intptr_t slot);
QObject* QScatterSeries_QBaseSender(const QScatterSeries* self);
int QScatterSeries_SenderSignalIndex(const QScatterSeries* self);
void QScatterSeries_OnSenderSignalIndex(const QScatterSeries* self, intptr_t slot);
int QScatterSeries_QBaseSenderSignalIndex(const QScatterSeries* self);
int QScatterSeries_Receivers(const QScatterSeries* self, const char* signal);
void QScatterSeries_OnReceivers(const QScatterSeries* self, intptr_t slot);
int QScatterSeries_QBaseReceivers(const QScatterSeries* self, const char* signal);
bool QScatterSeries_IsSignalConnected(const QScatterSeries* self, QMetaMethod* signal);
void QScatterSeries_OnIsSignalConnected(const QScatterSeries* self, intptr_t slot);
bool QScatterSeries_QBaseIsSignalConnected(const QScatterSeries* self, QMetaMethod* signal);
void QScatterSeries_Delete(QScatterSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
