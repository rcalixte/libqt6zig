#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQSPLINESERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQSPLINESERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QLineSeries QLineSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QSplineSeries QSplineSeries;
typedef struct QTimerEvent QTimerEvent;
typedef struct QXYSeries QXYSeries;
#endif

QSplineSeries* QSplineSeries_new();
QSplineSeries* QSplineSeries_new2(QObject* parent);
QMetaObject* QSplineSeries_MetaObject(const QSplineSeries* self);
void* QSplineSeries_Metacast(QSplineSeries* self, const char* param1);
int QSplineSeries_Metacall(QSplineSeries* self, int param1, int param2, void** param3);
void QSplineSeries_OnMetacall(QSplineSeries* self, intptr_t slot);
int QSplineSeries_QBaseMetacall(QSplineSeries* self, int param1, int param2, void** param3);
libqt_string QSplineSeries_Tr(const char* s);
int QSplineSeries_Type(const QSplineSeries* self);
void QSplineSeries_OnType(const QSplineSeries* self, intptr_t slot);
int QSplineSeries_QBaseType(const QSplineSeries* self);
libqt_string QSplineSeries_Tr2(const char* s, const char* c);
libqt_string QSplineSeries_Tr3(const char* s, const char* c, int n);
void QSplineSeries_SetPen(QSplineSeries* self, const QPen* pen);
void QSplineSeries_OnSetPen(QSplineSeries* self, intptr_t slot);
void QSplineSeries_QBaseSetPen(QSplineSeries* self, const QPen* pen);
void QSplineSeries_SetBrush(QSplineSeries* self, const QBrush* brush);
void QSplineSeries_OnSetBrush(QSplineSeries* self, intptr_t slot);
void QSplineSeries_QBaseSetBrush(QSplineSeries* self, const QBrush* brush);
void QSplineSeries_SetColor(QSplineSeries* self, const QColor* color);
void QSplineSeries_OnSetColor(QSplineSeries* self, intptr_t slot);
void QSplineSeries_QBaseSetColor(QSplineSeries* self, const QColor* color);
QColor* QSplineSeries_Color(const QSplineSeries* self);
void QSplineSeries_OnColor(const QSplineSeries* self, intptr_t slot);
QColor* QSplineSeries_QBaseColor(const QSplineSeries* self);
bool QSplineSeries_Event(QSplineSeries* self, QEvent* event);
void QSplineSeries_OnEvent(QSplineSeries* self, intptr_t slot);
bool QSplineSeries_QBaseEvent(QSplineSeries* self, QEvent* event);
bool QSplineSeries_EventFilter(QSplineSeries* self, QObject* watched, QEvent* event);
void QSplineSeries_OnEventFilter(QSplineSeries* self, intptr_t slot);
bool QSplineSeries_QBaseEventFilter(QSplineSeries* self, QObject* watched, QEvent* event);
void QSplineSeries_TimerEvent(QSplineSeries* self, QTimerEvent* event);
void QSplineSeries_OnTimerEvent(QSplineSeries* self, intptr_t slot);
void QSplineSeries_QBaseTimerEvent(QSplineSeries* self, QTimerEvent* event);
void QSplineSeries_ChildEvent(QSplineSeries* self, QChildEvent* event);
void QSplineSeries_OnChildEvent(QSplineSeries* self, intptr_t slot);
void QSplineSeries_QBaseChildEvent(QSplineSeries* self, QChildEvent* event);
void QSplineSeries_CustomEvent(QSplineSeries* self, QEvent* event);
void QSplineSeries_OnCustomEvent(QSplineSeries* self, intptr_t slot);
void QSplineSeries_QBaseCustomEvent(QSplineSeries* self, QEvent* event);
void QSplineSeries_ConnectNotify(QSplineSeries* self, const QMetaMethod* signal);
void QSplineSeries_OnConnectNotify(QSplineSeries* self, intptr_t slot);
void QSplineSeries_QBaseConnectNotify(QSplineSeries* self, const QMetaMethod* signal);
void QSplineSeries_DisconnectNotify(QSplineSeries* self, const QMetaMethod* signal);
void QSplineSeries_OnDisconnectNotify(QSplineSeries* self, intptr_t slot);
void QSplineSeries_QBaseDisconnectNotify(QSplineSeries* self, const QMetaMethod* signal);
QObject* QSplineSeries_Sender(const QSplineSeries* self);
void QSplineSeries_OnSender(const QSplineSeries* self, intptr_t slot);
QObject* QSplineSeries_QBaseSender(const QSplineSeries* self);
int QSplineSeries_SenderSignalIndex(const QSplineSeries* self);
void QSplineSeries_OnSenderSignalIndex(const QSplineSeries* self, intptr_t slot);
int QSplineSeries_QBaseSenderSignalIndex(const QSplineSeries* self);
int QSplineSeries_Receivers(const QSplineSeries* self, const char* signal);
void QSplineSeries_OnReceivers(const QSplineSeries* self, intptr_t slot);
int QSplineSeries_QBaseReceivers(const QSplineSeries* self, const char* signal);
bool QSplineSeries_IsSignalConnected(const QSplineSeries* self, const QMetaMethod* signal);
void QSplineSeries_OnIsSignalConnected(const QSplineSeries* self, intptr_t slot);
bool QSplineSeries_QBaseIsSignalConnected(const QSplineSeries* self, const QMetaMethod* signal);
void QSplineSeries_Delete(QSplineSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
