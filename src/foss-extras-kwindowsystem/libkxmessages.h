#pragma once
#ifndef FOSS_EXTRAS_KWINDOWSYSTEM_LIBKXMESSAGES_H
#define FOSS_EXTRAS_KWINDOWSYSTEM_LIBKXMESSAGES_H

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

#ifdef __linux__
KXMessages* KXMessages_new();
#endif
#ifdef __linux__
KXMessages* KXMessages_new2(xcb_connection_t* connection, uint32_t rootWindow);
#endif
#ifdef __linux__
KXMessages* KXMessages_new3(const char* accept_broadcast);
#endif
#ifdef __linux__
KXMessages* KXMessages_new4(const char* accept_broadcast, QObject* parent);
#endif
#ifdef __linux__
KXMessages* KXMessages_new5(xcb_connection_t* connection, uint32_t rootWindow, const char* accept_broadcast);
#endif
#ifdef __linux__
KXMessages* KXMessages_new6(xcb_connection_t* connection, uint32_t rootWindow, const char* accept_broadcast, QObject* parent);
#endif
#ifdef __linux__
QMetaObject* KXMessages_MetaObject(const KXMessages* self);
#endif
#ifdef __linux__
void* KXMessages_Metacast(KXMessages* self, const char* param1);
#endif
#ifdef __linux__
int KXMessages_Metacall(KXMessages* self, int param1, int param2, void** param3);
#endif
#ifdef __linux__
libqt_string KXMessages_Tr(const char* s);
#endif
#ifdef __linux__
void KXMessages_BroadcastMessage(KXMessages* self, const char* msg_type, const libqt_string message);
#endif
#ifdef __linux__
bool KXMessages_BroadcastMessageX(xcb_connection_t* c, const char* msg_type, const libqt_string message, int screenNumber);
#endif
#ifdef __linux__
void KXMessages_GotMessage(KXMessages* self, const libqt_string message);
#endif
void KXMessages_Connect_GotMessage(KXMessages* self, intptr_t slot);
#ifdef __linux__
libqt_string KXMessages_Tr2(const char* s, const char* c);
#endif
#ifdef __linux__
libqt_string KXMessages_Tr3(const char* s, const char* c, int n);
#endif
#ifdef __linux__
void KXMessages_BroadcastMessage3(KXMessages* self, const char* msg_type, const libqt_string message, int screen);
#endif
#ifdef __linux__
void KXMessages_OnMetaObject(const KXMessages* self, intptr_t slot);
#endif
#ifdef __linux__
QMetaObject* KXMessages_SuperMetaObject(const KXMessages* self);
#endif
#ifdef __linux__
void KXMessages_OnMetacast(KXMessages* self, intptr_t slot);
#endif
#ifdef __linux__
void* KXMessages_SuperMetacast(KXMessages* self, const char* param1);
#endif
#ifdef __linux__
void KXMessages_OnMetacall(KXMessages* self, intptr_t slot);
#endif
#ifdef __linux__
int KXMessages_SuperMetacall(KXMessages* self, int param1, int param2, void** param3);
#endif
bool KXMessages_Event(KXMessages* self, QEvent* event);
void KXMessages_OnEvent(KXMessages* self, intptr_t slot);
bool KXMessages_SuperEvent(KXMessages* self, QEvent* event);
bool KXMessages_EventFilter(KXMessages* self, QObject* watched, QEvent* event);
void KXMessages_OnEventFilter(KXMessages* self, intptr_t slot);
bool KXMessages_SuperEventFilter(KXMessages* self, QObject* watched, QEvent* event);
void KXMessages_TimerEvent(KXMessages* self, QTimerEvent* event);
void KXMessages_OnTimerEvent(KXMessages* self, intptr_t slot);
void KXMessages_SuperTimerEvent(KXMessages* self, QTimerEvent* event);
void KXMessages_ChildEvent(KXMessages* self, QChildEvent* event);
void KXMessages_OnChildEvent(KXMessages* self, intptr_t slot);
void KXMessages_SuperChildEvent(KXMessages* self, QChildEvent* event);
void KXMessages_CustomEvent(KXMessages* self, QEvent* event);
void KXMessages_OnCustomEvent(KXMessages* self, intptr_t slot);
void KXMessages_SuperCustomEvent(KXMessages* self, QEvent* event);
void KXMessages_ConnectNotify(KXMessages* self, const QMetaMethod* signal);
void KXMessages_OnConnectNotify(KXMessages* self, intptr_t slot);
void KXMessages_SuperConnectNotify(KXMessages* self, const QMetaMethod* signal);
void KXMessages_DisconnectNotify(KXMessages* self, const QMetaMethod* signal);
void KXMessages_OnDisconnectNotify(KXMessages* self, intptr_t slot);
void KXMessages_SuperDisconnectNotify(KXMessages* self, const QMetaMethod* signal);
QObject* KXMessages_Sender(const KXMessages* self);
void KXMessages_OnSender(const KXMessages* self, intptr_t slot);
QObject* KXMessages_SuperSender(const KXMessages* self);
int KXMessages_SenderSignalIndex(const KXMessages* self);
void KXMessages_OnSenderSignalIndex(const KXMessages* self, intptr_t slot);
int KXMessages_SuperSenderSignalIndex(const KXMessages* self);
int KXMessages_Receivers(const KXMessages* self, const char* signal);
void KXMessages_OnReceivers(const KXMessages* self, intptr_t slot);
int KXMessages_SuperReceivers(const KXMessages* self, const char* signal);
bool KXMessages_IsSignalConnected(const KXMessages* self, const QMetaMethod* signal);
void KXMessages_OnIsSignalConnected(const KXMessages* self, intptr_t slot);
bool KXMessages_SuperIsSignalConnected(const KXMessages* self, const QMetaMethod* signal);
void KXMessages_Delete(KXMessages* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
