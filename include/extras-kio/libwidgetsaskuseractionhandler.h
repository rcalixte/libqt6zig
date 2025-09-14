#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBWIDGETSASKUSERACTIONHANDLER_H
#define SRC_EXTRAS_KIOC_LIBWIDGETSASKUSERACTIONHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__AskUserActionInterface)
typedef KIO::AskUserActionInterface KIO__AskUserActionInterface;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__WidgetsAskUserActionHandler)
typedef KIO::WidgetsAskUserActionHandler KIO__WidgetsAskUserActionHandler;
#endif
#else
typedef struct KIO__AskUserActionInterface KIO__AskUserActionInterface;
typedef struct KIO__WidgetsAskUserActionHandler KIO__WidgetsAskUserActionHandler;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

KIO__WidgetsAskUserActionHandler* KIO__WidgetsAskUserActionHandler_new();
KIO__WidgetsAskUserActionHandler* KIO__WidgetsAskUserActionHandler_new2(QObject* parent);
QMetaObject* KIO__WidgetsAskUserActionHandler_MetaObject(const KIO__WidgetsAskUserActionHandler* self);
void* KIO__WidgetsAskUserActionHandler_Metacast(KIO__WidgetsAskUserActionHandler* self, const char* param1);
int KIO__WidgetsAskUserActionHandler_Metacall(KIO__WidgetsAskUserActionHandler* self, int param1, int param2, void** param3);
libqt_string KIO__WidgetsAskUserActionHandler_Tr(const char* s);
void KIO__WidgetsAskUserActionHandler_AskUserRename(KIO__WidgetsAskUserActionHandler* self, KJob* job, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest, const QDateTime* ctimeSrc, const QDateTime* ctimeDest, const QDateTime* mtimeSrc, const QDateTime* mtimeDest);
void KIO__WidgetsAskUserActionHandler_AskUserSkip(KIO__WidgetsAskUserActionHandler* self, KJob* job, int options, const libqt_string error_text);
void KIO__WidgetsAskUserActionHandler_AskUserDelete(KIO__WidgetsAskUserActionHandler* self, const libqt_list /* of QUrl* */ urls, int deletionType, int confirmationType, QWidget* parent);
void KIO__WidgetsAskUserActionHandler_RequestUserMessageBox(KIO__WidgetsAskUserActionHandler* self, int typeVal, const libqt_string text, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondaryActionText, const libqt_string primaryActionIconName, const libqt_string secondaryActionIconName, const libqt_string dontAskAgainName, const libqt_string details, QWidget* parent);
void KIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors(KIO__WidgetsAskUserActionHandler* self, const libqt_map /* of libqt_string to QVariant* */ sslErrorData, QWidget* parent);
void KIO__WidgetsAskUserActionHandler_SetWindow(KIO__WidgetsAskUserActionHandler* self, QWidget* window);
libqt_string KIO__WidgetsAskUserActionHandler_Tr2(const char* s, const char* c);
libqt_string KIO__WidgetsAskUserActionHandler_Tr3(const char* s, const char* c, int n);
void KIO__WidgetsAskUserActionHandler_OnMetacall(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
int KIO__WidgetsAskUserActionHandler_QBaseMetacall(KIO__WidgetsAskUserActionHandler* self, int param1, int param2, void** param3);
void KIO__WidgetsAskUserActionHandler_OnAskUserRename(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
void KIO__WidgetsAskUserActionHandler_QBaseAskUserRename(KIO__WidgetsAskUserActionHandler* self, KJob* job, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest, const QDateTime* ctimeSrc, const QDateTime* ctimeDest, const QDateTime* mtimeSrc, const QDateTime* mtimeDest);
void KIO__WidgetsAskUserActionHandler_OnAskUserSkip(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
void KIO__WidgetsAskUserActionHandler_QBaseAskUserSkip(KIO__WidgetsAskUserActionHandler* self, KJob* job, int options, const libqt_string error_text);
void KIO__WidgetsAskUserActionHandler_OnAskUserDelete(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
void KIO__WidgetsAskUserActionHandler_QBaseAskUserDelete(KIO__WidgetsAskUserActionHandler* self, const libqt_list /* of QUrl* */ urls, int deletionType, int confirmationType, QWidget* parent);
void KIO__WidgetsAskUserActionHandler_OnRequestUserMessageBox(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
void KIO__WidgetsAskUserActionHandler_QBaseRequestUserMessageBox(KIO__WidgetsAskUserActionHandler* self, int typeVal, const libqt_string text, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondaryActionText, const libqt_string primaryActionIconName, const libqt_string secondaryActionIconName, const libqt_string dontAskAgainName, const libqt_string details, QWidget* parent);
void KIO__WidgetsAskUserActionHandler_OnAskIgnoreSslErrors(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
void KIO__WidgetsAskUserActionHandler_QBaseAskIgnoreSslErrors(KIO__WidgetsAskUserActionHandler* self, const libqt_map /* of libqt_string to QVariant* */ sslErrorData, QWidget* parent);
bool KIO__WidgetsAskUserActionHandler_Event(KIO__WidgetsAskUserActionHandler* self, QEvent* event);
void KIO__WidgetsAskUserActionHandler_OnEvent(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
bool KIO__WidgetsAskUserActionHandler_QBaseEvent(KIO__WidgetsAskUserActionHandler* self, QEvent* event);
bool KIO__WidgetsAskUserActionHandler_EventFilter(KIO__WidgetsAskUserActionHandler* self, QObject* watched, QEvent* event);
void KIO__WidgetsAskUserActionHandler_OnEventFilter(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
bool KIO__WidgetsAskUserActionHandler_QBaseEventFilter(KIO__WidgetsAskUserActionHandler* self, QObject* watched, QEvent* event);
void KIO__WidgetsAskUserActionHandler_TimerEvent(KIO__WidgetsAskUserActionHandler* self, QTimerEvent* event);
void KIO__WidgetsAskUserActionHandler_OnTimerEvent(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
void KIO__WidgetsAskUserActionHandler_QBaseTimerEvent(KIO__WidgetsAskUserActionHandler* self, QTimerEvent* event);
void KIO__WidgetsAskUserActionHandler_ChildEvent(KIO__WidgetsAskUserActionHandler* self, QChildEvent* event);
void KIO__WidgetsAskUserActionHandler_OnChildEvent(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
void KIO__WidgetsAskUserActionHandler_QBaseChildEvent(KIO__WidgetsAskUserActionHandler* self, QChildEvent* event);
void KIO__WidgetsAskUserActionHandler_CustomEvent(KIO__WidgetsAskUserActionHandler* self, QEvent* event);
void KIO__WidgetsAskUserActionHandler_OnCustomEvent(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
void KIO__WidgetsAskUserActionHandler_QBaseCustomEvent(KIO__WidgetsAskUserActionHandler* self, QEvent* event);
void KIO__WidgetsAskUserActionHandler_ConnectNotify(KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
void KIO__WidgetsAskUserActionHandler_OnConnectNotify(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
void KIO__WidgetsAskUserActionHandler_QBaseConnectNotify(KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
void KIO__WidgetsAskUserActionHandler_DisconnectNotify(KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
void KIO__WidgetsAskUserActionHandler_OnDisconnectNotify(KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
void KIO__WidgetsAskUserActionHandler_QBaseDisconnectNotify(KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
QObject* KIO__WidgetsAskUserActionHandler_Sender(const KIO__WidgetsAskUserActionHandler* self);
void KIO__WidgetsAskUserActionHandler_OnSender(const KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
QObject* KIO__WidgetsAskUserActionHandler_QBaseSender(const KIO__WidgetsAskUserActionHandler* self);
int KIO__WidgetsAskUserActionHandler_SenderSignalIndex(const KIO__WidgetsAskUserActionHandler* self);
void KIO__WidgetsAskUserActionHandler_OnSenderSignalIndex(const KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
int KIO__WidgetsAskUserActionHandler_QBaseSenderSignalIndex(const KIO__WidgetsAskUserActionHandler* self);
int KIO__WidgetsAskUserActionHandler_Receivers(const KIO__WidgetsAskUserActionHandler* self, const char* signal);
void KIO__WidgetsAskUserActionHandler_OnReceivers(const KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
int KIO__WidgetsAskUserActionHandler_QBaseReceivers(const KIO__WidgetsAskUserActionHandler* self, const char* signal);
bool KIO__WidgetsAskUserActionHandler_IsSignalConnected(const KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
void KIO__WidgetsAskUserActionHandler_OnIsSignalConnected(const KIO__WidgetsAskUserActionHandler* self, intptr_t slot);
bool KIO__WidgetsAskUserActionHandler_QBaseIsSignalConnected(const KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
void KIO__WidgetsAskUserActionHandler_Delete(KIO__WidgetsAskUserActionHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
