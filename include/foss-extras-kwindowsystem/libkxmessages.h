#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKXMESSAGES_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKXMESSAGES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KXMessages KXMessages;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KXMessages* KXMessages_new();
KXMessages* KXMessages_new2(const char* accept_broadcast);
KXMessages* KXMessages_new3(const char* accept_broadcast, QObject* parent);
QMetaObject* KXMessages_MetaObject(const KXMessages* self);
void* KXMessages_Metacast(KXMessages* self, const char* param1);
int KXMessages_Metacall(KXMessages* self, int param1, int param2, void** param3);
libqt_string KXMessages_Tr(const char* s);
void KXMessages_BroadcastMessage(KXMessages* self, const char* msg_type, const libqt_string message);
void KXMessages_GotMessage(KXMessages* self, const libqt_string message);
void KXMessages_Connect_GotMessage(KXMessages* self, intptr_t slot);
libqt_string KXMessages_Tr2(const char* s, const char* c);
libqt_string KXMessages_Tr3(const char* s, const char* c, int n);
void KXMessages_BroadcastMessage3(KXMessages* self, const char* msg_type, const libqt_string message, int screen);
void KXMessages_OnMetacall(KXMessages* self, intptr_t slot);
int KXMessages_QBaseMetacall(KXMessages* self, int param1, int param2, void** param3);
bool KXMessages_Event(KXMessages* self, QEvent* event);
void KXMessages_OnEvent(KXMessages* self, intptr_t slot);
bool KXMessages_QBaseEvent(KXMessages* self, QEvent* event);
bool KXMessages_EventFilter(KXMessages* self, QObject* watched, QEvent* event);
void KXMessages_OnEventFilter(KXMessages* self, intptr_t slot);
bool KXMessages_QBaseEventFilter(KXMessages* self, QObject* watched, QEvent* event);
void KXMessages_TimerEvent(KXMessages* self, QTimerEvent* event);
void KXMessages_OnTimerEvent(KXMessages* self, intptr_t slot);
void KXMessages_QBaseTimerEvent(KXMessages* self, QTimerEvent* event);
void KXMessages_ChildEvent(KXMessages* self, QChildEvent* event);
void KXMessages_OnChildEvent(KXMessages* self, intptr_t slot);
void KXMessages_QBaseChildEvent(KXMessages* self, QChildEvent* event);
void KXMessages_CustomEvent(KXMessages* self, QEvent* event);
void KXMessages_OnCustomEvent(KXMessages* self, intptr_t slot);
void KXMessages_QBaseCustomEvent(KXMessages* self, QEvent* event);
void KXMessages_ConnectNotify(KXMessages* self, const QMetaMethod* signal);
void KXMessages_OnConnectNotify(KXMessages* self, intptr_t slot);
void KXMessages_QBaseConnectNotify(KXMessages* self, const QMetaMethod* signal);
void KXMessages_DisconnectNotify(KXMessages* self, const QMetaMethod* signal);
void KXMessages_OnDisconnectNotify(KXMessages* self, intptr_t slot);
void KXMessages_QBaseDisconnectNotify(KXMessages* self, const QMetaMethod* signal);
QObject* KXMessages_Sender(const KXMessages* self);
void KXMessages_OnSender(const KXMessages* self, intptr_t slot);
QObject* KXMessages_QBaseSender(const KXMessages* self);
int KXMessages_SenderSignalIndex(const KXMessages* self);
void KXMessages_OnSenderSignalIndex(const KXMessages* self, intptr_t slot);
int KXMessages_QBaseSenderSignalIndex(const KXMessages* self);
int KXMessages_Receivers(const KXMessages* self, const char* signal);
void KXMessages_OnReceivers(const KXMessages* self, intptr_t slot);
int KXMessages_QBaseReceivers(const KXMessages* self, const char* signal);
bool KXMessages_IsSignalConnected(const KXMessages* self, const QMetaMethod* signal);
void KXMessages_OnIsSignalConnected(const KXMessages* self, intptr_t slot);
bool KXMessages_QBaseIsSignalConnected(const KXMessages* self, const QMetaMethod* signal);
void KXMessages_Delete(KXMessages* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
