#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONSC_LIBKNOTIFICATIONREPLYACTION_H
#define SRC_EXTRAS_KNOTIFICATIONSC_LIBKNOTIFICATIONREPLYACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KNotificationReplyAction KNotificationReplyAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KNotificationReplyAction* KNotificationReplyAction_new(const libqt_string label);
QMetaObject* KNotificationReplyAction_MetaObject(const KNotificationReplyAction* self);
void* KNotificationReplyAction_Metacast(KNotificationReplyAction* self, const char* param1);
int KNotificationReplyAction_Metacall(KNotificationReplyAction* self, int param1, int param2, void** param3);
libqt_string KNotificationReplyAction_Tr(const char* s);
libqt_string KNotificationReplyAction_Label(const KNotificationReplyAction* self);
void KNotificationReplyAction_SetLabel(KNotificationReplyAction* self, const libqt_string label);
libqt_string KNotificationReplyAction_PlaceholderText(const KNotificationReplyAction* self);
void KNotificationReplyAction_SetPlaceholderText(KNotificationReplyAction* self, const libqt_string placeholderText);
libqt_string KNotificationReplyAction_SubmitButtonText(const KNotificationReplyAction* self);
void KNotificationReplyAction_SetSubmitButtonText(KNotificationReplyAction* self, const libqt_string submitButtonText);
libqt_string KNotificationReplyAction_SubmitButtonIconName(const KNotificationReplyAction* self);
void KNotificationReplyAction_SetSubmitButtonIconName(KNotificationReplyAction* self, const libqt_string submitButtonIconName);
int KNotificationReplyAction_FallbackBehavior(const KNotificationReplyAction* self);
void KNotificationReplyAction_SetFallbackBehavior(KNotificationReplyAction* self, int fallbackBehavior);
void KNotificationReplyAction_Replied(KNotificationReplyAction* self, const libqt_string text);
void KNotificationReplyAction_Connect_Replied(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_Activated(KNotificationReplyAction* self);
void KNotificationReplyAction_Connect_Activated(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_LabelChanged(KNotificationReplyAction* self);
void KNotificationReplyAction_Connect_LabelChanged(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_PlaceholderTextChanged(KNotificationReplyAction* self);
void KNotificationReplyAction_Connect_PlaceholderTextChanged(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_SubmitButtonTextChanged(KNotificationReplyAction* self);
void KNotificationReplyAction_Connect_SubmitButtonTextChanged(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_SubmitButtonIconNameChanged(KNotificationReplyAction* self);
void KNotificationReplyAction_Connect_SubmitButtonIconNameChanged(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_FallbackBehaviorChanged(KNotificationReplyAction* self);
void KNotificationReplyAction_Connect_FallbackBehaviorChanged(KNotificationReplyAction* self, intptr_t slot);
libqt_string KNotificationReplyAction_Tr2(const char* s, const char* c);
libqt_string KNotificationReplyAction_Tr3(const char* s, const char* c, int n);
void KNotificationReplyAction_OnMetacall(KNotificationReplyAction* self, intptr_t slot);
int KNotificationReplyAction_QBaseMetacall(KNotificationReplyAction* self, int param1, int param2, void** param3);
bool KNotificationReplyAction_Event(KNotificationReplyAction* self, QEvent* event);
void KNotificationReplyAction_OnEvent(KNotificationReplyAction* self, intptr_t slot);
bool KNotificationReplyAction_QBaseEvent(KNotificationReplyAction* self, QEvent* event);
bool KNotificationReplyAction_EventFilter(KNotificationReplyAction* self, QObject* watched, QEvent* event);
void KNotificationReplyAction_OnEventFilter(KNotificationReplyAction* self, intptr_t slot);
bool KNotificationReplyAction_QBaseEventFilter(KNotificationReplyAction* self, QObject* watched, QEvent* event);
void KNotificationReplyAction_TimerEvent(KNotificationReplyAction* self, QTimerEvent* event);
void KNotificationReplyAction_OnTimerEvent(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_QBaseTimerEvent(KNotificationReplyAction* self, QTimerEvent* event);
void KNotificationReplyAction_ChildEvent(KNotificationReplyAction* self, QChildEvent* event);
void KNotificationReplyAction_OnChildEvent(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_QBaseChildEvent(KNotificationReplyAction* self, QChildEvent* event);
void KNotificationReplyAction_CustomEvent(KNotificationReplyAction* self, QEvent* event);
void KNotificationReplyAction_OnCustomEvent(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_QBaseCustomEvent(KNotificationReplyAction* self, QEvent* event);
void KNotificationReplyAction_ConnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal);
void KNotificationReplyAction_OnConnectNotify(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_QBaseConnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal);
void KNotificationReplyAction_DisconnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal);
void KNotificationReplyAction_OnDisconnectNotify(KNotificationReplyAction* self, intptr_t slot);
void KNotificationReplyAction_QBaseDisconnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal);
QObject* KNotificationReplyAction_Sender(const KNotificationReplyAction* self);
void KNotificationReplyAction_OnSender(const KNotificationReplyAction* self, intptr_t slot);
QObject* KNotificationReplyAction_QBaseSender(const KNotificationReplyAction* self);
int KNotificationReplyAction_SenderSignalIndex(const KNotificationReplyAction* self);
void KNotificationReplyAction_OnSenderSignalIndex(const KNotificationReplyAction* self, intptr_t slot);
int KNotificationReplyAction_QBaseSenderSignalIndex(const KNotificationReplyAction* self);
int KNotificationReplyAction_Receivers(const KNotificationReplyAction* self, const char* signal);
void KNotificationReplyAction_OnReceivers(const KNotificationReplyAction* self, intptr_t slot);
int KNotificationReplyAction_QBaseReceivers(const KNotificationReplyAction* self, const char* signal);
bool KNotificationReplyAction_IsSignalConnected(const KNotificationReplyAction* self, const QMetaMethod* signal);
void KNotificationReplyAction_OnIsSignalConnected(const KNotificationReplyAction* self, intptr_t slot);
bool KNotificationReplyAction_QBaseIsSignalConnected(const KNotificationReplyAction* self, const QMetaMethod* signal);
void KNotificationReplyAction_Delete(KNotificationReplyAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
