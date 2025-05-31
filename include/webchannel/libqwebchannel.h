#pragma once
#ifndef SRC_WEBCHANNELC_LIBQWEBCHANNEL_H
#define SRC_WEBCHANNELC_LIBQWEBCHANNEL_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWebChannel QWebChannel;
typedef struct QWebChannelAbstractTransport QWebChannelAbstractTransport;
#endif

QWebChannel* QWebChannel_new();
QWebChannel* QWebChannel_new2(QObject* parent);
QMetaObject* QWebChannel_MetaObject(const QWebChannel* self);
void* QWebChannel_Metacast(QWebChannel* self, const char* param1);
int QWebChannel_Metacall(QWebChannel* self, int param1, int param2, void** param3);
void QWebChannel_OnMetacall(QWebChannel* self, intptr_t slot);
int QWebChannel_QBaseMetacall(QWebChannel* self, int param1, int param2, void** param3);
libqt_string QWebChannel_Tr(const char* s);
void QWebChannel_RegisterObjects(QWebChannel* self, const libqt_map /* of libqt_string to QObject* */ objects);
libqt_map /* of libqt_string to QObject* */ QWebChannel_RegisteredObjects(const QWebChannel* self);
void QWebChannel_RegisterObject(QWebChannel* self, const libqt_string id, QObject* object);
void QWebChannel_DeregisterObject(QWebChannel* self, QObject* object);
bool QWebChannel_BlockUpdates(const QWebChannel* self);
void QWebChannel_SetBlockUpdates(QWebChannel* self, bool block);
int QWebChannel_PropertyUpdateInterval(const QWebChannel* self);
void QWebChannel_SetPropertyUpdateInterval(QWebChannel* self, int ms);
void QWebChannel_BlockUpdatesChanged(QWebChannel* self, bool block);
void QWebChannel_Connect_BlockUpdatesChanged(QWebChannel* self, intptr_t slot);
void QWebChannel_ConnectTo(QWebChannel* self, QWebChannelAbstractTransport* transport);
void QWebChannel_DisconnectFrom(QWebChannel* self, QWebChannelAbstractTransport* transport);
libqt_string QWebChannel_Tr2(const char* s, const char* c);
libqt_string QWebChannel_Tr3(const char* s, const char* c, int n);
bool QWebChannel_Event(QWebChannel* self, QEvent* event);
void QWebChannel_OnEvent(QWebChannel* self, intptr_t slot);
bool QWebChannel_QBaseEvent(QWebChannel* self, QEvent* event);
bool QWebChannel_EventFilter(QWebChannel* self, QObject* watched, QEvent* event);
void QWebChannel_OnEventFilter(QWebChannel* self, intptr_t slot);
bool QWebChannel_QBaseEventFilter(QWebChannel* self, QObject* watched, QEvent* event);
void QWebChannel_TimerEvent(QWebChannel* self, QTimerEvent* event);
void QWebChannel_OnTimerEvent(QWebChannel* self, intptr_t slot);
void QWebChannel_QBaseTimerEvent(QWebChannel* self, QTimerEvent* event);
void QWebChannel_ChildEvent(QWebChannel* self, QChildEvent* event);
void QWebChannel_OnChildEvent(QWebChannel* self, intptr_t slot);
void QWebChannel_QBaseChildEvent(QWebChannel* self, QChildEvent* event);
void QWebChannel_CustomEvent(QWebChannel* self, QEvent* event);
void QWebChannel_OnCustomEvent(QWebChannel* self, intptr_t slot);
void QWebChannel_QBaseCustomEvent(QWebChannel* self, QEvent* event);
void QWebChannel_ConnectNotify(QWebChannel* self, const QMetaMethod* signal);
void QWebChannel_OnConnectNotify(QWebChannel* self, intptr_t slot);
void QWebChannel_QBaseConnectNotify(QWebChannel* self, const QMetaMethod* signal);
void QWebChannel_DisconnectNotify(QWebChannel* self, const QMetaMethod* signal);
void QWebChannel_OnDisconnectNotify(QWebChannel* self, intptr_t slot);
void QWebChannel_QBaseDisconnectNotify(QWebChannel* self, const QMetaMethod* signal);
QObject* QWebChannel_Sender(const QWebChannel* self);
void QWebChannel_OnSender(const QWebChannel* self, intptr_t slot);
QObject* QWebChannel_QBaseSender(const QWebChannel* self);
int QWebChannel_SenderSignalIndex(const QWebChannel* self);
void QWebChannel_OnSenderSignalIndex(const QWebChannel* self, intptr_t slot);
int QWebChannel_QBaseSenderSignalIndex(const QWebChannel* self);
int QWebChannel_Receivers(const QWebChannel* self, const char* signal);
void QWebChannel_OnReceivers(const QWebChannel* self, intptr_t slot);
int QWebChannel_QBaseReceivers(const QWebChannel* self, const char* signal);
bool QWebChannel_IsSignalConnected(const QWebChannel* self, const QMetaMethod* signal);
void QWebChannel_OnIsSignalConnected(const QWebChannel* self, intptr_t slot);
bool QWebChannel_QBaseIsSignalConnected(const QWebChannel* self, const QMetaMethod* signal);
void QWebChannel_Delete(QWebChannel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
