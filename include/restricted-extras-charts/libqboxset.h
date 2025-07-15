#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBOXSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBOXSET_H

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
typedef struct QBoxSet QBoxSet;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QTimerEvent QTimerEvent;
#endif

QBoxSet* QBoxSet_new();
QBoxSet* QBoxSet_new2(const double le, const double lq, const double m, const double uq, const double ue);
QBoxSet* QBoxSet_new3(const libqt_string label);
QBoxSet* QBoxSet_new4(const libqt_string label, QObject* parent);
QBoxSet* QBoxSet_new5(const double le, const double lq, const double m, const double uq, const double ue, const libqt_string label);
QBoxSet* QBoxSet_new6(const double le, const double lq, const double m, const double uq, const double ue, const libqt_string label, QObject* parent);
QMetaObject* QBoxSet_MetaObject(const QBoxSet* self);
void* QBoxSet_Metacast(QBoxSet* self, const char* param1);
int QBoxSet_Metacall(QBoxSet* self, int param1, int param2, void** param3);
void QBoxSet_OnMetacall(QBoxSet* self, intptr_t slot);
int QBoxSet_QBaseMetacall(QBoxSet* self, int param1, int param2, void** param3);
libqt_string QBoxSet_Tr(const char* s);
void QBoxSet_Append(QBoxSet* self, const double value);
void QBoxSet_Append2(QBoxSet* self, const libqt_list /* of double */ values);
void QBoxSet_Clear(QBoxSet* self);
void QBoxSet_SetLabel(QBoxSet* self, const libqt_string label);
libqt_string QBoxSet_Label(const QBoxSet* self);
QBoxSet* QBoxSet_OperatorShiftLeft(QBoxSet* self, const double* value);
void QBoxSet_SetValue(QBoxSet* self, const int index, const double value);
double QBoxSet_At(const QBoxSet* self, const int index);
double QBoxSet_OperatorSubscript(const QBoxSet* self, const int index);
int QBoxSet_Count(const QBoxSet* self);
void QBoxSet_SetPen(QBoxSet* self, const QPen* pen);
QPen* QBoxSet_Pen(const QBoxSet* self);
void QBoxSet_SetBrush(QBoxSet* self, const QBrush* brush);
QBrush* QBoxSet_Brush(const QBoxSet* self);
void QBoxSet_Clicked(QBoxSet* self);
void QBoxSet_Connect_Clicked(QBoxSet* self, intptr_t slot);
void QBoxSet_Hovered(QBoxSet* self, bool status);
void QBoxSet_Connect_Hovered(QBoxSet* self, intptr_t slot);
void QBoxSet_Pressed(QBoxSet* self);
void QBoxSet_Connect_Pressed(QBoxSet* self, intptr_t slot);
void QBoxSet_Released(QBoxSet* self);
void QBoxSet_Connect_Released(QBoxSet* self, intptr_t slot);
void QBoxSet_DoubleClicked(QBoxSet* self);
void QBoxSet_Connect_DoubleClicked(QBoxSet* self, intptr_t slot);
void QBoxSet_PenChanged(QBoxSet* self);
void QBoxSet_Connect_PenChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_BrushChanged(QBoxSet* self);
void QBoxSet_Connect_BrushChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_ValuesChanged(QBoxSet* self);
void QBoxSet_Connect_ValuesChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_ValueChanged(QBoxSet* self, int index);
void QBoxSet_Connect_ValueChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_Cleared(QBoxSet* self);
void QBoxSet_Connect_Cleared(QBoxSet* self, intptr_t slot);
libqt_string QBoxSet_Tr2(const char* s, const char* c);
libqt_string QBoxSet_Tr3(const char* s, const char* c, int n);
bool QBoxSet_Event(QBoxSet* self, QEvent* event);
void QBoxSet_OnEvent(QBoxSet* self, intptr_t slot);
bool QBoxSet_QBaseEvent(QBoxSet* self, QEvent* event);
bool QBoxSet_EventFilter(QBoxSet* self, QObject* watched, QEvent* event);
void QBoxSet_OnEventFilter(QBoxSet* self, intptr_t slot);
bool QBoxSet_QBaseEventFilter(QBoxSet* self, QObject* watched, QEvent* event);
void QBoxSet_TimerEvent(QBoxSet* self, QTimerEvent* event);
void QBoxSet_OnTimerEvent(QBoxSet* self, intptr_t slot);
void QBoxSet_QBaseTimerEvent(QBoxSet* self, QTimerEvent* event);
void QBoxSet_ChildEvent(QBoxSet* self, QChildEvent* event);
void QBoxSet_OnChildEvent(QBoxSet* self, intptr_t slot);
void QBoxSet_QBaseChildEvent(QBoxSet* self, QChildEvent* event);
void QBoxSet_CustomEvent(QBoxSet* self, QEvent* event);
void QBoxSet_OnCustomEvent(QBoxSet* self, intptr_t slot);
void QBoxSet_QBaseCustomEvent(QBoxSet* self, QEvent* event);
void QBoxSet_ConnectNotify(QBoxSet* self, const QMetaMethod* signal);
void QBoxSet_OnConnectNotify(QBoxSet* self, intptr_t slot);
void QBoxSet_QBaseConnectNotify(QBoxSet* self, const QMetaMethod* signal);
void QBoxSet_DisconnectNotify(QBoxSet* self, const QMetaMethod* signal);
void QBoxSet_OnDisconnectNotify(QBoxSet* self, intptr_t slot);
void QBoxSet_QBaseDisconnectNotify(QBoxSet* self, const QMetaMethod* signal);
QObject* QBoxSet_Sender(const QBoxSet* self);
void QBoxSet_OnSender(const QBoxSet* self, intptr_t slot);
QObject* QBoxSet_QBaseSender(const QBoxSet* self);
int QBoxSet_SenderSignalIndex(const QBoxSet* self);
void QBoxSet_OnSenderSignalIndex(const QBoxSet* self, intptr_t slot);
int QBoxSet_QBaseSenderSignalIndex(const QBoxSet* self);
int QBoxSet_Receivers(const QBoxSet* self, const char* signal);
void QBoxSet_OnReceivers(const QBoxSet* self, intptr_t slot);
int QBoxSet_QBaseReceivers(const QBoxSet* self, const char* signal);
bool QBoxSet_IsSignalConnected(const QBoxSet* self, const QMetaMethod* signal);
void QBoxSet_OnIsSignalConnected(const QBoxSet* self, intptr_t slot);
bool QBoxSet_QBaseIsSignalConnected(const QBoxSet* self, const QMetaMethod* signal);
void QBoxSet_Delete(QBoxSet* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
