#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONSC_LIBKNOTIFICATION_H
#define SRC_EXTRAS_KNOTIFICATIONSC_LIBKNOTIFICATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KNotification KNotification;
typedef struct KNotificationAction KNotificationAction;
typedef struct KNotificationReplyAction KNotificationReplyAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWindow QWindow;
#endif

KNotificationAction* KNotificationAction_new();
KNotificationAction* KNotificationAction_new2(const libqt_string label);
KNotificationAction* KNotificationAction_new3(QObject* parent);
QMetaObject* KNotificationAction_MetaObject(const KNotificationAction* self);
void* KNotificationAction_Metacast(KNotificationAction* self, const char* param1);
int KNotificationAction_Metacall(KNotificationAction* self, int param1, int param2, void** param3);
libqt_string KNotificationAction_Tr(const char* s);
libqt_string KNotificationAction_Label(const KNotificationAction* self);
void KNotificationAction_SetLabel(KNotificationAction* self, const libqt_string label);
void KNotificationAction_Activated(KNotificationAction* self);
void KNotificationAction_Connect_Activated(KNotificationAction* self, intptr_t slot);
void KNotificationAction_LabelChanged(KNotificationAction* self, const libqt_string label);
void KNotificationAction_Connect_LabelChanged(KNotificationAction* self, intptr_t slot);
libqt_string KNotificationAction_Tr2(const char* s, const char* c);
libqt_string KNotificationAction_Tr3(const char* s, const char* c, int n);
void KNotificationAction_OnMetacall(KNotificationAction* self, intptr_t slot);
int KNotificationAction_QBaseMetacall(KNotificationAction* self, int param1, int param2, void** param3);
bool KNotificationAction_Event(KNotificationAction* self, QEvent* event);
void KNotificationAction_OnEvent(KNotificationAction* self, intptr_t slot);
bool KNotificationAction_QBaseEvent(KNotificationAction* self, QEvent* event);
bool KNotificationAction_EventFilter(KNotificationAction* self, QObject* watched, QEvent* event);
void KNotificationAction_OnEventFilter(KNotificationAction* self, intptr_t slot);
bool KNotificationAction_QBaseEventFilter(KNotificationAction* self, QObject* watched, QEvent* event);
void KNotificationAction_TimerEvent(KNotificationAction* self, QTimerEvent* event);
void KNotificationAction_OnTimerEvent(KNotificationAction* self, intptr_t slot);
void KNotificationAction_QBaseTimerEvent(KNotificationAction* self, QTimerEvent* event);
void KNotificationAction_ChildEvent(KNotificationAction* self, QChildEvent* event);
void KNotificationAction_OnChildEvent(KNotificationAction* self, intptr_t slot);
void KNotificationAction_QBaseChildEvent(KNotificationAction* self, QChildEvent* event);
void KNotificationAction_CustomEvent(KNotificationAction* self, QEvent* event);
void KNotificationAction_OnCustomEvent(KNotificationAction* self, intptr_t slot);
void KNotificationAction_QBaseCustomEvent(KNotificationAction* self, QEvent* event);
void KNotificationAction_ConnectNotify(KNotificationAction* self, const QMetaMethod* signal);
void KNotificationAction_OnConnectNotify(KNotificationAction* self, intptr_t slot);
void KNotificationAction_QBaseConnectNotify(KNotificationAction* self, const QMetaMethod* signal);
void KNotificationAction_DisconnectNotify(KNotificationAction* self, const QMetaMethod* signal);
void KNotificationAction_OnDisconnectNotify(KNotificationAction* self, intptr_t slot);
void KNotificationAction_QBaseDisconnectNotify(KNotificationAction* self, const QMetaMethod* signal);
QObject* KNotificationAction_Sender(const KNotificationAction* self);
void KNotificationAction_OnSender(const KNotificationAction* self, intptr_t slot);
QObject* KNotificationAction_QBaseSender(const KNotificationAction* self);
int KNotificationAction_SenderSignalIndex(const KNotificationAction* self);
void KNotificationAction_OnSenderSignalIndex(const KNotificationAction* self, intptr_t slot);
int KNotificationAction_QBaseSenderSignalIndex(const KNotificationAction* self);
int KNotificationAction_Receivers(const KNotificationAction* self, const char* signal);
void KNotificationAction_OnReceivers(const KNotificationAction* self, intptr_t slot);
int KNotificationAction_QBaseReceivers(const KNotificationAction* self, const char* signal);
bool KNotificationAction_IsSignalConnected(const KNotificationAction* self, const QMetaMethod* signal);
void KNotificationAction_OnIsSignalConnected(const KNotificationAction* self, intptr_t slot);
bool KNotificationAction_QBaseIsSignalConnected(const KNotificationAction* self, const QMetaMethod* signal);
void KNotificationAction_Delete(KNotificationAction* self);

KNotification* KNotification_new(const libqt_string eventId);
KNotification* KNotification_new2(const libqt_string eventId, int flags);
KNotification* KNotification_new3(const libqt_string eventId, int flags, QObject* parent);
QMetaObject* KNotification_MetaObject(const KNotification* self);
void* KNotification_Metacast(KNotification* self, const char* param1);
int KNotification_Metacall(KNotification* self, int param1, int param2, void** param3);
libqt_string KNotification_Tr(const char* s);
libqt_string KNotification_EventId(const KNotification* self);
void KNotification_SetEventId(KNotification* self, const libqt_string eventId);
libqt_string KNotification_Title(const KNotification* self);
void KNotification_SetTitle(KNotification* self, const libqt_string title);
libqt_string KNotification_Text(const KNotification* self);
void KNotification_SetText(KNotification* self, const libqt_string text);
libqt_string KNotification_IconName(const KNotification* self);
void KNotification_SetIconName(KNotification* self, const libqt_string icon);
QPixmap* KNotification_Pixmap(const KNotification* self);
void KNotification_SetPixmap(KNotification* self, const QPixmap* pix);
KNotificationAction* KNotification_DefaultAction(const KNotification* self);
KNotificationAction* KNotification_AddDefaultAction(KNotification* self, const libqt_string label);
KNotificationAction* KNotification_AddAction(KNotification* self, const libqt_string label);
void KNotification_ClearActions(KNotification* self);
KNotificationReplyAction* KNotification_ReplyAction(const KNotification* self);
int KNotification_Flags(const KNotification* self);
void KNotification_SetFlags(KNotification* self, const int* flags);
libqt_string KNotification_ComponentName(const KNotification* self);
void KNotification_SetComponentName(KNotification* self, const libqt_string componentName);
libqt_list /* of QUrl* */ KNotification_Urls(const KNotification* self);
void KNotification_SetUrls(KNotification* self, const libqt_list /* of QUrl* */ urls);
int KNotification_Urgency(const KNotification* self);
void KNotification_SetUrgency(KNotification* self, int urgency);
void KNotification_SetWindow(KNotification* self, QWindow* window);
QWindow* KNotification_Window(const KNotification* self);
libqt_string KNotification_AppName(const KNotification* self);
bool KNotification_IsAutoDelete(const KNotification* self);
void KNotification_SetAutoDelete(KNotification* self, bool autoDelete);
libqt_string KNotification_XdgActivationToken(const KNotification* self);
void KNotification_Closed(KNotification* self);
void KNotification_Connect_Closed(KNotification* self, intptr_t slot);
void KNotification_Ignored(KNotification* self);
void KNotification_Connect_Ignored(KNotification* self, intptr_t slot);
void KNotification_EventIdChanged(KNotification* self);
void KNotification_Connect_EventIdChanged(KNotification* self, intptr_t slot);
void KNotification_TitleChanged(KNotification* self);
void KNotification_Connect_TitleChanged(KNotification* self, intptr_t slot);
void KNotification_TextChanged(KNotification* self);
void KNotification_Connect_TextChanged(KNotification* self, intptr_t slot);
void KNotification_IconNameChanged(KNotification* self);
void KNotification_Connect_IconNameChanged(KNotification* self, intptr_t slot);
void KNotification_DefaultActionChanged(KNotification* self);
void KNotification_Connect_DefaultActionChanged(KNotification* self, intptr_t slot);
void KNotification_ActionsChanged(KNotification* self);
void KNotification_Connect_ActionsChanged(KNotification* self, intptr_t slot);
void KNotification_FlagsChanged(KNotification* self);
void KNotification_Connect_FlagsChanged(KNotification* self, intptr_t slot);
void KNotification_ComponentNameChanged(KNotification* self);
void KNotification_Connect_ComponentNameChanged(KNotification* self, intptr_t slot);
void KNotification_UrlsChanged(KNotification* self);
void KNotification_Connect_UrlsChanged(KNotification* self, intptr_t slot);
void KNotification_UrgencyChanged(KNotification* self);
void KNotification_Connect_UrgencyChanged(KNotification* self, intptr_t slot);
void KNotification_AutoDeleteChanged(KNotification* self);
void KNotification_Connect_AutoDeleteChanged(KNotification* self, intptr_t slot);
void KNotification_XdgActivationTokenChanged(KNotification* self);
void KNotification_Connect_XdgActivationTokenChanged(KNotification* self, intptr_t slot);
void KNotification_HintsChanged(KNotification* self);
void KNotification_Connect_HintsChanged(KNotification* self, intptr_t slot);
void KNotification_Close(KNotification* self);
void KNotification_SendEvent(KNotification* self);
void KNotification_SetHint(KNotification* self, const libqt_string hint, const QVariant* value);
libqt_map /* of libqt_string to QVariant* */ KNotification_Hints(const KNotification* self);
void KNotification_SetHints(KNotification* self, const libqt_map /* of libqt_string to QVariant* */ hints);
KNotification* KNotification_Event(const libqt_string eventId, const libqt_string title, const libqt_string text);
KNotification* KNotification_Event2(const libqt_string eventId);
KNotification* KNotification_Event3(int eventId);
KNotification* KNotification_Event4(int eventId, const libqt_string title, const libqt_string text, const QPixmap* pixmap);
KNotification* KNotification_Event5(const libqt_string eventId, const libqt_string title, const libqt_string text, const libqt_string iconName);
KNotification* KNotification_Event6(int eventId, const libqt_string title, const libqt_string text, const libqt_string iconName);
KNotification* KNotification_Event7(int eventId, const libqt_string title, const libqt_string text);
void KNotification_Beep();
libqt_string KNotification_Tr2(const char* s, const char* c);
libqt_string KNotification_Tr3(const char* s, const char* c, int n);
KNotification* KNotification_Event42(const libqt_string eventId, const libqt_string title, const libqt_string text, const QPixmap* pixmap);
KNotification* KNotification_Event52(const libqt_string eventId, const libqt_string title, const libqt_string text, const QPixmap* pixmap, const int* flags);
KNotification* KNotification_Event62(const libqt_string eventId, const libqt_string title, const libqt_string text, const QPixmap* pixmap, const int* flags, const libqt_string componentName);
KNotification* KNotification_Event22(const libqt_string eventId, const libqt_string text);
KNotification* KNotification_Event32(const libqt_string eventId, const libqt_string text, const QPixmap* pixmap);
KNotification* KNotification_Event43(const libqt_string eventId, const libqt_string text, const QPixmap* pixmap, const int* flags);
KNotification* KNotification_Event53(const libqt_string eventId, const libqt_string text, const QPixmap* pixmap, const int* flags, const libqt_string componentName);
KNotification* KNotification_Event23(int eventId, const libqt_string text);
KNotification* KNotification_Event33(int eventId, const libqt_string text, const QPixmap* pixmap);
KNotification* KNotification_Event44(int eventId, const libqt_string text, const QPixmap* pixmap, const int* flags);
KNotification* KNotification_Event54(int eventId, const libqt_string title, const libqt_string text, const QPixmap* pixmap, const int* flags);
KNotification* KNotification_Event55(const libqt_string eventId, const libqt_string title, const libqt_string text, const libqt_string iconName, const int* flags);
KNotification* KNotification_Event63(const libqt_string eventId, const libqt_string title, const libqt_string text, const libqt_string iconName, const int* flags, const libqt_string componentName);
KNotification* KNotification_Event56(int eventId, const libqt_string title, const libqt_string text, const libqt_string iconName, const int* flags);
KNotification* KNotification_Event45(int eventId, const libqt_string title, const libqt_string text, const int* flags);
void KNotification_Beep1(const libqt_string reason);
void KNotification_OnMetacall(KNotification* self, intptr_t slot);
int KNotification_QBaseMetacall(KNotification* self, int param1, int param2, void** param3);
bool KNotification_EventFilter(KNotification* self, QObject* watched, QEvent* event);
void KNotification_OnEventFilter(KNotification* self, intptr_t slot);
bool KNotification_QBaseEventFilter(KNotification* self, QObject* watched, QEvent* event);
void KNotification_TimerEvent(KNotification* self, QTimerEvent* event);
void KNotification_OnTimerEvent(KNotification* self, intptr_t slot);
void KNotification_QBaseTimerEvent(KNotification* self, QTimerEvent* event);
void KNotification_ChildEvent(KNotification* self, QChildEvent* event);
void KNotification_OnChildEvent(KNotification* self, intptr_t slot);
void KNotification_QBaseChildEvent(KNotification* self, QChildEvent* event);
void KNotification_CustomEvent(KNotification* self, QEvent* event);
void KNotification_OnCustomEvent(KNotification* self, intptr_t slot);
void KNotification_QBaseCustomEvent(KNotification* self, QEvent* event);
void KNotification_ConnectNotify(KNotification* self, const QMetaMethod* signal);
void KNotification_OnConnectNotify(KNotification* self, intptr_t slot);
void KNotification_QBaseConnectNotify(KNotification* self, const QMetaMethod* signal);
void KNotification_DisconnectNotify(KNotification* self, const QMetaMethod* signal);
void KNotification_OnDisconnectNotify(KNotification* self, intptr_t slot);
void KNotification_QBaseDisconnectNotify(KNotification* self, const QMetaMethod* signal);
QObject* KNotification_Sender(const KNotification* self);
void KNotification_OnSender(const KNotification* self, intptr_t slot);
QObject* KNotification_QBaseSender(const KNotification* self);
int KNotification_SenderSignalIndex(const KNotification* self);
void KNotification_OnSenderSignalIndex(const KNotification* self, intptr_t slot);
int KNotification_QBaseSenderSignalIndex(const KNotification* self);
int KNotification_Receivers(const KNotification* self, const char* signal);
void KNotification_OnReceivers(const KNotification* self, intptr_t slot);
int KNotification_QBaseReceivers(const KNotification* self, const char* signal);
bool KNotification_IsSignalConnected(const KNotification* self, const QMetaMethod* signal);
void KNotification_OnIsSignalConnected(const KNotification* self, intptr_t slot);
bool KNotification_QBaseIsSignalConnected(const KNotification* self, const QMetaMethod* signal);
void KNotification_Delete(KNotification* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
