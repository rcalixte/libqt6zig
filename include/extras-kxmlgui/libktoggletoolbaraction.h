#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKTOGGLETOOLBARACTION_H
#define SRC_EXTRAS_KXMLGUIC_LIBKTOGGLETOOLBARACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KToggleAction KToggleAction;
typedef struct KToggleToolBarAction KToggleToolBarAction;
typedef struct KToolBar KToolBar;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KToggleToolBarAction* KToggleToolBarAction_new(KToolBar* toolBar, const libqt_string text, QObject* parent);
QMetaObject* KToggleToolBarAction_MetaObject(const KToggleToolBarAction* self);
void* KToggleToolBarAction_Metacast(KToggleToolBarAction* self, const char* param1);
int KToggleToolBarAction_Metacall(KToggleToolBarAction* self, int param1, int param2, void** param3);
libqt_string KToggleToolBarAction_Tr(const char* s);
KToolBar* KToggleToolBarAction_ToolBar(KToggleToolBarAction* self);
bool KToggleToolBarAction_EventFilter(KToggleToolBarAction* self, QObject* watched, QEvent* event);
libqt_string KToggleToolBarAction_Tr2(const char* s, const char* c);
libqt_string KToggleToolBarAction_Tr3(const char* s, const char* c, int n);
void KToggleToolBarAction_OnMetacall(KToggleToolBarAction* self, intptr_t slot);
int KToggleToolBarAction_QBaseMetacall(KToggleToolBarAction* self, int param1, int param2, void** param3);
void KToggleToolBarAction_OnEventFilter(KToggleToolBarAction* self, intptr_t slot);
bool KToggleToolBarAction_QBaseEventFilter(KToggleToolBarAction* self, QObject* watched, QEvent* event);
bool KToggleToolBarAction_Event(KToggleToolBarAction* self, QEvent* param1);
void KToggleToolBarAction_OnEvent(KToggleToolBarAction* self, intptr_t slot);
bool KToggleToolBarAction_QBaseEvent(KToggleToolBarAction* self, QEvent* param1);
void KToggleToolBarAction_TimerEvent(KToggleToolBarAction* self, QTimerEvent* event);
void KToggleToolBarAction_OnTimerEvent(KToggleToolBarAction* self, intptr_t slot);
void KToggleToolBarAction_QBaseTimerEvent(KToggleToolBarAction* self, QTimerEvent* event);
void KToggleToolBarAction_ChildEvent(KToggleToolBarAction* self, QChildEvent* event);
void KToggleToolBarAction_OnChildEvent(KToggleToolBarAction* self, intptr_t slot);
void KToggleToolBarAction_QBaseChildEvent(KToggleToolBarAction* self, QChildEvent* event);
void KToggleToolBarAction_CustomEvent(KToggleToolBarAction* self, QEvent* event);
void KToggleToolBarAction_OnCustomEvent(KToggleToolBarAction* self, intptr_t slot);
void KToggleToolBarAction_QBaseCustomEvent(KToggleToolBarAction* self, QEvent* event);
void KToggleToolBarAction_ConnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal);
void KToggleToolBarAction_OnConnectNotify(KToggleToolBarAction* self, intptr_t slot);
void KToggleToolBarAction_QBaseConnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal);
void KToggleToolBarAction_DisconnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal);
void KToggleToolBarAction_OnDisconnectNotify(KToggleToolBarAction* self, intptr_t slot);
void KToggleToolBarAction_QBaseDisconnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal);
QObject* KToggleToolBarAction_Sender(const KToggleToolBarAction* self);
void KToggleToolBarAction_OnSender(const KToggleToolBarAction* self, intptr_t slot);
QObject* KToggleToolBarAction_QBaseSender(const KToggleToolBarAction* self);
int KToggleToolBarAction_SenderSignalIndex(const KToggleToolBarAction* self);
void KToggleToolBarAction_OnSenderSignalIndex(const KToggleToolBarAction* self, intptr_t slot);
int KToggleToolBarAction_QBaseSenderSignalIndex(const KToggleToolBarAction* self);
int KToggleToolBarAction_Receivers(const KToggleToolBarAction* self, const char* signal);
void KToggleToolBarAction_OnReceivers(const KToggleToolBarAction* self, intptr_t slot);
int KToggleToolBarAction_QBaseReceivers(const KToggleToolBarAction* self, const char* signal);
bool KToggleToolBarAction_IsSignalConnected(const KToggleToolBarAction* self, const QMetaMethod* signal);
void KToggleToolBarAction_OnIsSignalConnected(const KToggleToolBarAction* self, intptr_t slot);
bool KToggleToolBarAction_QBaseIsSignalConnected(const KToggleToolBarAction* self, const QMetaMethod* signal);
void KToggleToolBarAction_Delete(KToggleToolBarAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
