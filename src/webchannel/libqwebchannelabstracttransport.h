#pragma once
#ifndef SRC_WEBCHANNELC_LIBQWEBCHANNELABSTRACTTRANSPORT_H
#define SRC_WEBCHANNELC_LIBQWEBCHANNELABSTRACTTRANSPORT_H

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
typedef struct QJsonObject QJsonObject;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWebChannelAbstractTransport QWebChannelAbstractTransport;
#endif

QWebChannelAbstractTransport* QWebChannelAbstractTransport_new();
QWebChannelAbstractTransport* QWebChannelAbstractTransport_new2(QObject* parent);
QMetaObject* QWebChannelAbstractTransport_MetaObject(const QWebChannelAbstractTransport* self);
void* QWebChannelAbstractTransport_Metacast(QWebChannelAbstractTransport* self, const char* param1);
int QWebChannelAbstractTransport_Metacall(QWebChannelAbstractTransport* self, int param1, int param2, void** param3);
void QWebChannelAbstractTransport_SendMessage(QWebChannelAbstractTransport* self, const QJsonObject* message);
void QWebChannelAbstractTransport_MessageReceived(QWebChannelAbstractTransport* self, const QJsonObject* message, QWebChannelAbstractTransport* transport);
void QWebChannelAbstractTransport_Connect_MessageReceived(QWebChannelAbstractTransport* self, intptr_t slot);
void QWebChannelAbstractTransport_OnMetaObject(const QWebChannelAbstractTransport* self, intptr_t slot);
QMetaObject* QWebChannelAbstractTransport_SuperMetaObject(const QWebChannelAbstractTransport* self);
void QWebChannelAbstractTransport_OnMetacast(QWebChannelAbstractTransport* self, intptr_t slot);
void* QWebChannelAbstractTransport_SuperMetacast(QWebChannelAbstractTransport* self, const char* param1);
void QWebChannelAbstractTransport_OnMetacall(QWebChannelAbstractTransport* self, intptr_t slot);
int QWebChannelAbstractTransport_SuperMetacall(QWebChannelAbstractTransport* self, int param1, int param2, void** param3);
void QWebChannelAbstractTransport_OnSendMessage(QWebChannelAbstractTransport* self, intptr_t slot);
void QWebChannelAbstractTransport_SuperSendMessage(QWebChannelAbstractTransport* self, const QJsonObject* message);
bool QWebChannelAbstractTransport_Event(QWebChannelAbstractTransport* self, QEvent* event);
void QWebChannelAbstractTransport_OnEvent(QWebChannelAbstractTransport* self, intptr_t slot);
bool QWebChannelAbstractTransport_SuperEvent(QWebChannelAbstractTransport* self, QEvent* event);
bool QWebChannelAbstractTransport_EventFilter(QWebChannelAbstractTransport* self, QObject* watched, QEvent* event);
void QWebChannelAbstractTransport_OnEventFilter(QWebChannelAbstractTransport* self, intptr_t slot);
bool QWebChannelAbstractTransport_SuperEventFilter(QWebChannelAbstractTransport* self, QObject* watched, QEvent* event);
void QWebChannelAbstractTransport_TimerEvent(QWebChannelAbstractTransport* self, QTimerEvent* event);
void QWebChannelAbstractTransport_OnTimerEvent(QWebChannelAbstractTransport* self, intptr_t slot);
void QWebChannelAbstractTransport_SuperTimerEvent(QWebChannelAbstractTransport* self, QTimerEvent* event);
void QWebChannelAbstractTransport_ChildEvent(QWebChannelAbstractTransport* self, QChildEvent* event);
void QWebChannelAbstractTransport_OnChildEvent(QWebChannelAbstractTransport* self, intptr_t slot);
void QWebChannelAbstractTransport_SuperChildEvent(QWebChannelAbstractTransport* self, QChildEvent* event);
void QWebChannelAbstractTransport_CustomEvent(QWebChannelAbstractTransport* self, QEvent* event);
void QWebChannelAbstractTransport_OnCustomEvent(QWebChannelAbstractTransport* self, intptr_t slot);
void QWebChannelAbstractTransport_SuperCustomEvent(QWebChannelAbstractTransport* self, QEvent* event);
void QWebChannelAbstractTransport_ConnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal);
void QWebChannelAbstractTransport_OnConnectNotify(QWebChannelAbstractTransport* self, intptr_t slot);
void QWebChannelAbstractTransport_SuperConnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal);
void QWebChannelAbstractTransport_DisconnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal);
void QWebChannelAbstractTransport_OnDisconnectNotify(QWebChannelAbstractTransport* self, intptr_t slot);
void QWebChannelAbstractTransport_SuperDisconnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal);
QObject* QWebChannelAbstractTransport_Sender(const QWebChannelAbstractTransport* self);
void QWebChannelAbstractTransport_OnSender(const QWebChannelAbstractTransport* self, intptr_t slot);
QObject* QWebChannelAbstractTransport_SuperSender(const QWebChannelAbstractTransport* self);
int QWebChannelAbstractTransport_SenderSignalIndex(const QWebChannelAbstractTransport* self);
void QWebChannelAbstractTransport_OnSenderSignalIndex(const QWebChannelAbstractTransport* self, intptr_t slot);
int QWebChannelAbstractTransport_SuperSenderSignalIndex(const QWebChannelAbstractTransport* self);
int QWebChannelAbstractTransport_Receivers(const QWebChannelAbstractTransport* self, const char* signal);
void QWebChannelAbstractTransport_OnReceivers(const QWebChannelAbstractTransport* self, intptr_t slot);
int QWebChannelAbstractTransport_SuperReceivers(const QWebChannelAbstractTransport* self, const char* signal);
bool QWebChannelAbstractTransport_IsSignalConnected(const QWebChannelAbstractTransport* self, const QMetaMethod* signal);
void QWebChannelAbstractTransport_OnIsSignalConnected(const QWebChannelAbstractTransport* self, intptr_t slot);
bool QWebChannelAbstractTransport_SuperIsSignalConnected(const QWebChannelAbstractTransport* self, const QMetaMethod* signal);
void QWebChannelAbstractTransport_Delete(QWebChannelAbstractTransport* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
