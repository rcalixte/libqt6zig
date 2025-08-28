#pragma once
#ifndef SRCC_LIBQSOCKETNOTIFIER_H
#define SRCC_LIBQSOCKETNOTIFIER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

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
typedef struct QSocketDescriptor QSocketDescriptor;
typedef struct QSocketNotifier QSocketNotifier;
typedef struct QTimerEvent QTimerEvent;
#endif

QSocketNotifier* QSocketNotifier_new(int param1);
QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2);
QSocketNotifier* QSocketNotifier_new3(int param1, QObject* parent);
QSocketNotifier* QSocketNotifier_new4(intptr_t socket, int param2, QObject* parent);
QMetaObject* QSocketNotifier_MetaObject(const QSocketNotifier* self);
void* QSocketNotifier_Metacast(QSocketNotifier* self, const char* param1);
int QSocketNotifier_Metacall(QSocketNotifier* self, int param1, int param2, void** param3);
libqt_string QSocketNotifier_Tr(const char* s);
void QSocketNotifier_SetSocket(QSocketNotifier* self, intptr_t socket);
intptr_t QSocketNotifier_Socket(const QSocketNotifier* self);
int QSocketNotifier_Type(const QSocketNotifier* self);
bool QSocketNotifier_IsValid(const QSocketNotifier* self);
bool QSocketNotifier_IsEnabled(const QSocketNotifier* self);
void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled);
bool QSocketNotifier_Event(QSocketNotifier* self, QEvent* param1);
libqt_string QSocketNotifier_Tr2(const char* s, const char* c);
libqt_string QSocketNotifier_Tr3(const char* s, const char* c, int n);
void QSocketNotifier_OnMetacall(QSocketNotifier* self, intptr_t slot);
int QSocketNotifier_QBaseMetacall(QSocketNotifier* self, int param1, int param2, void** param3);
void QSocketNotifier_OnEvent(QSocketNotifier* self, intptr_t slot);
bool QSocketNotifier_QBaseEvent(QSocketNotifier* self, QEvent* param1);
bool QSocketNotifier_EventFilter(QSocketNotifier* self, QObject* watched, QEvent* event);
void QSocketNotifier_OnEventFilter(QSocketNotifier* self, intptr_t slot);
bool QSocketNotifier_QBaseEventFilter(QSocketNotifier* self, QObject* watched, QEvent* event);
void QSocketNotifier_TimerEvent(QSocketNotifier* self, QTimerEvent* event);
void QSocketNotifier_OnTimerEvent(QSocketNotifier* self, intptr_t slot);
void QSocketNotifier_QBaseTimerEvent(QSocketNotifier* self, QTimerEvent* event);
void QSocketNotifier_ChildEvent(QSocketNotifier* self, QChildEvent* event);
void QSocketNotifier_OnChildEvent(QSocketNotifier* self, intptr_t slot);
void QSocketNotifier_QBaseChildEvent(QSocketNotifier* self, QChildEvent* event);
void QSocketNotifier_CustomEvent(QSocketNotifier* self, QEvent* event);
void QSocketNotifier_OnCustomEvent(QSocketNotifier* self, intptr_t slot);
void QSocketNotifier_QBaseCustomEvent(QSocketNotifier* self, QEvent* event);
void QSocketNotifier_ConnectNotify(QSocketNotifier* self, const QMetaMethod* signal);
void QSocketNotifier_OnConnectNotify(QSocketNotifier* self, intptr_t slot);
void QSocketNotifier_QBaseConnectNotify(QSocketNotifier* self, const QMetaMethod* signal);
void QSocketNotifier_DisconnectNotify(QSocketNotifier* self, const QMetaMethod* signal);
void QSocketNotifier_OnDisconnectNotify(QSocketNotifier* self, intptr_t slot);
void QSocketNotifier_QBaseDisconnectNotify(QSocketNotifier* self, const QMetaMethod* signal);
QObject* QSocketNotifier_Sender(const QSocketNotifier* self);
void QSocketNotifier_OnSender(const QSocketNotifier* self, intptr_t slot);
QObject* QSocketNotifier_QBaseSender(const QSocketNotifier* self);
int QSocketNotifier_SenderSignalIndex(const QSocketNotifier* self);
void QSocketNotifier_OnSenderSignalIndex(const QSocketNotifier* self, intptr_t slot);
int QSocketNotifier_QBaseSenderSignalIndex(const QSocketNotifier* self);
int QSocketNotifier_Receivers(const QSocketNotifier* self, const char* signal);
void QSocketNotifier_OnReceivers(const QSocketNotifier* self, intptr_t slot);
int QSocketNotifier_QBaseReceivers(const QSocketNotifier* self, const char* signal);
bool QSocketNotifier_IsSignalConnected(const QSocketNotifier* self, const QMetaMethod* signal);
void QSocketNotifier_OnIsSignalConnected(const QSocketNotifier* self, intptr_t slot);
bool QSocketNotifier_QBaseIsSignalConnected(const QSocketNotifier* self, const QMetaMethod* signal);
void QSocketNotifier_Connect_Activated(QSocketNotifier* self, intptr_t slot);
void QSocketNotifier_Delete(QSocketNotifier* self);

QSocketDescriptor* QSocketDescriptor_new(const QSocketDescriptor* other);
QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* other);
QSocketDescriptor* QSocketDescriptor_new3();
QSocketDescriptor* QSocketDescriptor_new4(const QSocketDescriptor* param1);
QSocketDescriptor* QSocketDescriptor_new5(int descriptor);
void QSocketDescriptor_CopyAssign(QSocketDescriptor* self, QSocketDescriptor* other);
void QSocketDescriptor_MoveAssign(QSocketDescriptor* self, QSocketDescriptor* other);
int QSocketDescriptor_ToInt(const QSocketDescriptor* self);
bool QSocketDescriptor_IsValid(const QSocketDescriptor* self);
void QSocketDescriptor_Delete(QSocketDescriptor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
