#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKFILECOPYTOMENU_H
#define SRC_EXTRAS_KIOC_LIBKFILECOPYTOMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFileCopyToMenu KFileCopyToMenu;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWidget QWidget;
#endif

KFileCopyToMenu* KFileCopyToMenu_new(QWidget* parentWidget);
QMetaObject* KFileCopyToMenu_MetaObject(const KFileCopyToMenu* self);
void* KFileCopyToMenu_Metacast(KFileCopyToMenu* self, const char* param1);
int KFileCopyToMenu_Metacall(KFileCopyToMenu* self, int param1, int param2, void** param3);
libqt_string KFileCopyToMenu_Tr(const char* s);
void KFileCopyToMenu_SetUrls(KFileCopyToMenu* self, const libqt_list /* of QUrl* */ urls);
void KFileCopyToMenu_SetReadOnly(KFileCopyToMenu* self, bool ro);
void KFileCopyToMenu_AddActionsTo(const KFileCopyToMenu* self, QMenu* menu);
void KFileCopyToMenu_SetAutoErrorHandlingEnabled(KFileCopyToMenu* self, bool b);
void KFileCopyToMenu_Error(KFileCopyToMenu* self, int errorCode, const libqt_string message);
void KFileCopyToMenu_Connect_Error(KFileCopyToMenu* self, intptr_t slot);
libqt_string KFileCopyToMenu_Tr2(const char* s, const char* c);
libqt_string KFileCopyToMenu_Tr3(const char* s, const char* c, int n);
void KFileCopyToMenu_OnMetacall(KFileCopyToMenu* self, intptr_t slot);
int KFileCopyToMenu_QBaseMetacall(KFileCopyToMenu* self, int param1, int param2, void** param3);
bool KFileCopyToMenu_Event(KFileCopyToMenu* self, QEvent* event);
void KFileCopyToMenu_OnEvent(KFileCopyToMenu* self, intptr_t slot);
bool KFileCopyToMenu_QBaseEvent(KFileCopyToMenu* self, QEvent* event);
bool KFileCopyToMenu_EventFilter(KFileCopyToMenu* self, QObject* watched, QEvent* event);
void KFileCopyToMenu_OnEventFilter(KFileCopyToMenu* self, intptr_t slot);
bool KFileCopyToMenu_QBaseEventFilter(KFileCopyToMenu* self, QObject* watched, QEvent* event);
void KFileCopyToMenu_TimerEvent(KFileCopyToMenu* self, QTimerEvent* event);
void KFileCopyToMenu_OnTimerEvent(KFileCopyToMenu* self, intptr_t slot);
void KFileCopyToMenu_QBaseTimerEvent(KFileCopyToMenu* self, QTimerEvent* event);
void KFileCopyToMenu_ChildEvent(KFileCopyToMenu* self, QChildEvent* event);
void KFileCopyToMenu_OnChildEvent(KFileCopyToMenu* self, intptr_t slot);
void KFileCopyToMenu_QBaseChildEvent(KFileCopyToMenu* self, QChildEvent* event);
void KFileCopyToMenu_CustomEvent(KFileCopyToMenu* self, QEvent* event);
void KFileCopyToMenu_OnCustomEvent(KFileCopyToMenu* self, intptr_t slot);
void KFileCopyToMenu_QBaseCustomEvent(KFileCopyToMenu* self, QEvent* event);
void KFileCopyToMenu_ConnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal);
void KFileCopyToMenu_OnConnectNotify(KFileCopyToMenu* self, intptr_t slot);
void KFileCopyToMenu_QBaseConnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal);
void KFileCopyToMenu_DisconnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal);
void KFileCopyToMenu_OnDisconnectNotify(KFileCopyToMenu* self, intptr_t slot);
void KFileCopyToMenu_QBaseDisconnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal);
QObject* KFileCopyToMenu_Sender(const KFileCopyToMenu* self);
void KFileCopyToMenu_OnSender(const KFileCopyToMenu* self, intptr_t slot);
QObject* KFileCopyToMenu_QBaseSender(const KFileCopyToMenu* self);
int KFileCopyToMenu_SenderSignalIndex(const KFileCopyToMenu* self);
void KFileCopyToMenu_OnSenderSignalIndex(const KFileCopyToMenu* self, intptr_t slot);
int KFileCopyToMenu_QBaseSenderSignalIndex(const KFileCopyToMenu* self);
int KFileCopyToMenu_Receivers(const KFileCopyToMenu* self, const char* signal);
void KFileCopyToMenu_OnReceivers(const KFileCopyToMenu* self, intptr_t slot);
int KFileCopyToMenu_QBaseReceivers(const KFileCopyToMenu* self, const char* signal);
bool KFileCopyToMenu_IsSignalConnected(const KFileCopyToMenu* self, const QMetaMethod* signal);
void KFileCopyToMenu_OnIsSignalConnected(const KFileCopyToMenu* self, intptr_t slot);
bool KFileCopyToMenu_QBaseIsSignalConnected(const KFileCopyToMenu* self, const QMetaMethod* signal);
void KFileCopyToMenu_Delete(KFileCopyToMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
