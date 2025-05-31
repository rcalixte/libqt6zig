#pragma once
#ifndef SRC_WEBCHANNELC_LIBQQMLWEBCHANNEL_H
#define SRC_WEBCHANNELC_LIBQQMLWEBCHANNEL_H

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
typedef struct QQmlWebChannel QQmlWebChannel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWebChannel QWebChannel;
#endif

QQmlWebChannel* QQmlWebChannel_new();
QQmlWebChannel* QQmlWebChannel_new2(QObject* parent);
QMetaObject* QQmlWebChannel_MetaObject(const QQmlWebChannel* self);
void* QQmlWebChannel_Metacast(QQmlWebChannel* self, const char* param1);
int QQmlWebChannel_Metacall(QQmlWebChannel* self, int param1, int param2, void** param3);
void QQmlWebChannel_OnMetacall(QQmlWebChannel* self, intptr_t slot);
int QQmlWebChannel_QBaseMetacall(QQmlWebChannel* self, int param1, int param2, void** param3);
libqt_string QQmlWebChannel_Tr(const char* s);
void QQmlWebChannel_RegisterObjects(QQmlWebChannel* self, const libqt_map /* of libqt_string to QVariant* */ objects);
void QQmlWebChannel_ConnectTo(QQmlWebChannel* self, QObject* transport);
void QQmlWebChannel_DisconnectFrom(QQmlWebChannel* self, QObject* transport);
libqt_string QQmlWebChannel_Tr2(const char* s, const char* c);
libqt_string QQmlWebChannel_Tr3(const char* s, const char* c, int n);
bool QQmlWebChannel_Event(QQmlWebChannel* self, QEvent* event);
void QQmlWebChannel_OnEvent(QQmlWebChannel* self, intptr_t slot);
bool QQmlWebChannel_QBaseEvent(QQmlWebChannel* self, QEvent* event);
bool QQmlWebChannel_EventFilter(QQmlWebChannel* self, QObject* watched, QEvent* event);
void QQmlWebChannel_OnEventFilter(QQmlWebChannel* self, intptr_t slot);
bool QQmlWebChannel_QBaseEventFilter(QQmlWebChannel* self, QObject* watched, QEvent* event);
void QQmlWebChannel_TimerEvent(QQmlWebChannel* self, QTimerEvent* event);
void QQmlWebChannel_OnTimerEvent(QQmlWebChannel* self, intptr_t slot);
void QQmlWebChannel_QBaseTimerEvent(QQmlWebChannel* self, QTimerEvent* event);
void QQmlWebChannel_ChildEvent(QQmlWebChannel* self, QChildEvent* event);
void QQmlWebChannel_OnChildEvent(QQmlWebChannel* self, intptr_t slot);
void QQmlWebChannel_QBaseChildEvent(QQmlWebChannel* self, QChildEvent* event);
void QQmlWebChannel_CustomEvent(QQmlWebChannel* self, QEvent* event);
void QQmlWebChannel_OnCustomEvent(QQmlWebChannel* self, intptr_t slot);
void QQmlWebChannel_QBaseCustomEvent(QQmlWebChannel* self, QEvent* event);
void QQmlWebChannel_ConnectNotify(QQmlWebChannel* self, const QMetaMethod* signal);
void QQmlWebChannel_OnConnectNotify(QQmlWebChannel* self, intptr_t slot);
void QQmlWebChannel_QBaseConnectNotify(QQmlWebChannel* self, const QMetaMethod* signal);
void QQmlWebChannel_DisconnectNotify(QQmlWebChannel* self, const QMetaMethod* signal);
void QQmlWebChannel_OnDisconnectNotify(QQmlWebChannel* self, intptr_t slot);
void QQmlWebChannel_QBaseDisconnectNotify(QQmlWebChannel* self, const QMetaMethod* signal);
QObject* QQmlWebChannel_Sender(const QQmlWebChannel* self);
void QQmlWebChannel_OnSender(const QQmlWebChannel* self, intptr_t slot);
QObject* QQmlWebChannel_QBaseSender(const QQmlWebChannel* self);
int QQmlWebChannel_SenderSignalIndex(const QQmlWebChannel* self);
void QQmlWebChannel_OnSenderSignalIndex(const QQmlWebChannel* self, intptr_t slot);
int QQmlWebChannel_QBaseSenderSignalIndex(const QQmlWebChannel* self);
int QQmlWebChannel_Receivers(const QQmlWebChannel* self, const char* signal);
void QQmlWebChannel_OnReceivers(const QQmlWebChannel* self, intptr_t slot);
int QQmlWebChannel_QBaseReceivers(const QQmlWebChannel* self, const char* signal);
bool QQmlWebChannel_IsSignalConnected(const QQmlWebChannel* self, const QMetaMethod* signal);
void QQmlWebChannel_OnIsSignalConnected(const QQmlWebChannel* self, intptr_t slot);
bool QQmlWebChannel_QBaseIsSignalConnected(const QQmlWebChannel* self, const QMetaMethod* signal);
void QQmlWebChannel_Delete(QQmlWebChannel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
