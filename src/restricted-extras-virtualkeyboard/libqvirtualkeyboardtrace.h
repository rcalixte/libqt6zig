#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDTRACE_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDTRACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVirtualKeyboardTrace QVirtualKeyboardTrace;
#endif

QVirtualKeyboardTrace* QVirtualKeyboardTrace_new();
QVirtualKeyboardTrace* QVirtualKeyboardTrace_new2(QObject* parent);
QMetaObject* QVirtualKeyboardTrace_MetaObject(const QVirtualKeyboardTrace* self);
void* QVirtualKeyboardTrace_Metacast(QVirtualKeyboardTrace* self, const char* param1);
int QVirtualKeyboardTrace_Metacall(QVirtualKeyboardTrace* self, int param1, int param2, void** param3);
libqt_string QVirtualKeyboardTrace_Tr(const char* s);
int QVirtualKeyboardTrace_TraceId(const QVirtualKeyboardTrace* self);
void QVirtualKeyboardTrace_SetTraceId(QVirtualKeyboardTrace* self, int id);
libqt_list /* of libqt_string */ QVirtualKeyboardTrace_Channels(const QVirtualKeyboardTrace* self);
void QVirtualKeyboardTrace_SetChannels(QVirtualKeyboardTrace* self, const libqt_list /* of libqt_string */ channels);
int QVirtualKeyboardTrace_Length(const QVirtualKeyboardTrace* self);
libqt_list /* of QVariant* */ QVirtualKeyboardTrace_Points(const QVirtualKeyboardTrace* self);
int QVirtualKeyboardTrace_AddPoint(QVirtualKeyboardTrace* self, const QPointF* point);
void QVirtualKeyboardTrace_SetChannelData(QVirtualKeyboardTrace* self, const libqt_string channel, int index, const QVariant* data);
libqt_list /* of QVariant* */ QVirtualKeyboardTrace_ChannelData(const QVirtualKeyboardTrace* self, const libqt_string channel);
bool QVirtualKeyboardTrace_IsFinal(const QVirtualKeyboardTrace* self);
void QVirtualKeyboardTrace_SetFinal(QVirtualKeyboardTrace* self, bool final);
bool QVirtualKeyboardTrace_IsCanceled(const QVirtualKeyboardTrace* self);
void QVirtualKeyboardTrace_SetCanceled(QVirtualKeyboardTrace* self, bool canceled);
double QVirtualKeyboardTrace_Opacity(const QVirtualKeyboardTrace* self);
void QVirtualKeyboardTrace_SetOpacity(QVirtualKeyboardTrace* self, double opacity);
void QVirtualKeyboardTrace_StartHideTimer(QVirtualKeyboardTrace* self, int delayMs);
void QVirtualKeyboardTrace_TimerEvent(QVirtualKeyboardTrace* self, QTimerEvent* event);
void QVirtualKeyboardTrace_TraceIdChanged(QVirtualKeyboardTrace* self, int traceId);
void QVirtualKeyboardTrace_Connect_TraceIdChanged(QVirtualKeyboardTrace* self, intptr_t slot);
void QVirtualKeyboardTrace_ChannelsChanged(QVirtualKeyboardTrace* self);
void QVirtualKeyboardTrace_Connect_ChannelsChanged(QVirtualKeyboardTrace* self, intptr_t slot);
void QVirtualKeyboardTrace_LengthChanged(QVirtualKeyboardTrace* self, int length);
void QVirtualKeyboardTrace_Connect_LengthChanged(QVirtualKeyboardTrace* self, intptr_t slot);
void QVirtualKeyboardTrace_FinalChanged(QVirtualKeyboardTrace* self, bool isFinal);
void QVirtualKeyboardTrace_Connect_FinalChanged(QVirtualKeyboardTrace* self, intptr_t slot);
void QVirtualKeyboardTrace_CanceledChanged(QVirtualKeyboardTrace* self, bool isCanceled);
void QVirtualKeyboardTrace_Connect_CanceledChanged(QVirtualKeyboardTrace* self, intptr_t slot);
void QVirtualKeyboardTrace_OpacityChanged(QVirtualKeyboardTrace* self, double opacity);
void QVirtualKeyboardTrace_Connect_OpacityChanged(QVirtualKeyboardTrace* self, intptr_t slot);
libqt_string QVirtualKeyboardTrace_Tr2(const char* s, const char* c);
libqt_string QVirtualKeyboardTrace_Tr3(const char* s, const char* c, int n);
libqt_list /* of QVariant* */ QVirtualKeyboardTrace_Points1(const QVirtualKeyboardTrace* self, int pos);
libqt_list /* of QVariant* */ QVirtualKeyboardTrace_Points2(const QVirtualKeyboardTrace* self, int pos, int count);
libqt_list /* of QVariant* */ QVirtualKeyboardTrace_ChannelData2(const QVirtualKeyboardTrace* self, const libqt_string channel, int pos);
libqt_list /* of QVariant* */ QVirtualKeyboardTrace_ChannelData3(const QVirtualKeyboardTrace* self, const libqt_string channel, int pos, int count);
void QVirtualKeyboardTrace_OnMetaObject(const QVirtualKeyboardTrace* self, intptr_t slot);
QMetaObject* QVirtualKeyboardTrace_SuperMetaObject(const QVirtualKeyboardTrace* self);
void QVirtualKeyboardTrace_OnMetacast(QVirtualKeyboardTrace* self, intptr_t slot);
void* QVirtualKeyboardTrace_SuperMetacast(QVirtualKeyboardTrace* self, const char* param1);
void QVirtualKeyboardTrace_OnMetacall(QVirtualKeyboardTrace* self, intptr_t slot);
int QVirtualKeyboardTrace_SuperMetacall(QVirtualKeyboardTrace* self, int param1, int param2, void** param3);
void QVirtualKeyboardTrace_OnTimerEvent(QVirtualKeyboardTrace* self, intptr_t slot);
void QVirtualKeyboardTrace_SuperTimerEvent(QVirtualKeyboardTrace* self, QTimerEvent* event);
bool QVirtualKeyboardTrace_Event(QVirtualKeyboardTrace* self, QEvent* event);
void QVirtualKeyboardTrace_OnEvent(QVirtualKeyboardTrace* self, intptr_t slot);
bool QVirtualKeyboardTrace_SuperEvent(QVirtualKeyboardTrace* self, QEvent* event);
bool QVirtualKeyboardTrace_EventFilter(QVirtualKeyboardTrace* self, QObject* watched, QEvent* event);
void QVirtualKeyboardTrace_OnEventFilter(QVirtualKeyboardTrace* self, intptr_t slot);
bool QVirtualKeyboardTrace_SuperEventFilter(QVirtualKeyboardTrace* self, QObject* watched, QEvent* event);
void QVirtualKeyboardTrace_ChildEvent(QVirtualKeyboardTrace* self, QChildEvent* event);
void QVirtualKeyboardTrace_OnChildEvent(QVirtualKeyboardTrace* self, intptr_t slot);
void QVirtualKeyboardTrace_SuperChildEvent(QVirtualKeyboardTrace* self, QChildEvent* event);
void QVirtualKeyboardTrace_CustomEvent(QVirtualKeyboardTrace* self, QEvent* event);
void QVirtualKeyboardTrace_OnCustomEvent(QVirtualKeyboardTrace* self, intptr_t slot);
void QVirtualKeyboardTrace_SuperCustomEvent(QVirtualKeyboardTrace* self, QEvent* event);
void QVirtualKeyboardTrace_ConnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal);
void QVirtualKeyboardTrace_OnConnectNotify(QVirtualKeyboardTrace* self, intptr_t slot);
void QVirtualKeyboardTrace_SuperConnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal);
void QVirtualKeyboardTrace_DisconnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal);
void QVirtualKeyboardTrace_OnDisconnectNotify(QVirtualKeyboardTrace* self, intptr_t slot);
void QVirtualKeyboardTrace_SuperDisconnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal);
QObject* QVirtualKeyboardTrace_Sender(const QVirtualKeyboardTrace* self);
void QVirtualKeyboardTrace_OnSender(const QVirtualKeyboardTrace* self, intptr_t slot);
QObject* QVirtualKeyboardTrace_SuperSender(const QVirtualKeyboardTrace* self);
int QVirtualKeyboardTrace_SenderSignalIndex(const QVirtualKeyboardTrace* self);
void QVirtualKeyboardTrace_OnSenderSignalIndex(const QVirtualKeyboardTrace* self, intptr_t slot);
int QVirtualKeyboardTrace_SuperSenderSignalIndex(const QVirtualKeyboardTrace* self);
int QVirtualKeyboardTrace_Receivers(const QVirtualKeyboardTrace* self, const char* signal);
void QVirtualKeyboardTrace_OnReceivers(const QVirtualKeyboardTrace* self, intptr_t slot);
int QVirtualKeyboardTrace_SuperReceivers(const QVirtualKeyboardTrace* self, const char* signal);
bool QVirtualKeyboardTrace_IsSignalConnected(const QVirtualKeyboardTrace* self, const QMetaMethod* signal);
void QVirtualKeyboardTrace_OnIsSignalConnected(const QVirtualKeyboardTrace* self, intptr_t slot);
bool QVirtualKeyboardTrace_SuperIsSignalConnected(const QVirtualKeyboardTrace* self, const QMetaMethod* signal);
void QVirtualKeyboardTrace_Delete(QVirtualKeyboardTrace* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
