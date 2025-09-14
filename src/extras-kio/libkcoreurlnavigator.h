#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKCOREURLNAVIGATOR_H
#define SRC_EXTRAS_KIOC_LIBKCOREURLNAVIGATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCoreUrlNavigator KCoreUrlNavigator;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

KCoreUrlNavigator* KCoreUrlNavigator_new();
KCoreUrlNavigator* KCoreUrlNavigator_new2(const QUrl* url);
KCoreUrlNavigator* KCoreUrlNavigator_new3(const QUrl* url, QObject* parent);
QMetaObject* KCoreUrlNavigator_MetaObject(const KCoreUrlNavigator* self);
void* KCoreUrlNavigator_Metacast(KCoreUrlNavigator* self, const char* param1);
int KCoreUrlNavigator_Metacall(KCoreUrlNavigator* self, int param1, int param2, void** param3);
libqt_string KCoreUrlNavigator_Tr(const char* s);
QUrl* KCoreUrlNavigator_CurrentLocationUrl(const KCoreUrlNavigator* self);
void KCoreUrlNavigator_SetCurrentLocationUrl(KCoreUrlNavigator* self, const QUrl* url);
void KCoreUrlNavigator_CurrentLocationUrlChanged(KCoreUrlNavigator* self);
void KCoreUrlNavigator_CurrentUrlAboutToChange(KCoreUrlNavigator* self, const QUrl* newUrl);
int KCoreUrlNavigator_HistorySize(const KCoreUrlNavigator* self);
void KCoreUrlNavigator_HistorySizeChanged(KCoreUrlNavigator* self);
void KCoreUrlNavigator_UrlSelectionRequested(KCoreUrlNavigator* self, const QUrl* url);
int KCoreUrlNavigator_HistoryIndex(const KCoreUrlNavigator* self);
void KCoreUrlNavigator_HistoryIndexChanged(KCoreUrlNavigator* self);
void KCoreUrlNavigator_HistoryChanged(KCoreUrlNavigator* self);
QUrl* KCoreUrlNavigator_LocationUrl(const KCoreUrlNavigator* self);
void KCoreUrlNavigator_SaveLocationState(KCoreUrlNavigator* self, const QVariant* state);
QVariant* KCoreUrlNavigator_LocationState(const KCoreUrlNavigator* self);
bool KCoreUrlNavigator_GoBack(KCoreUrlNavigator* self);
bool KCoreUrlNavigator_GoForward(KCoreUrlNavigator* self);
bool KCoreUrlNavigator_GoUp(KCoreUrlNavigator* self);
libqt_string KCoreUrlNavigator_Tr2(const char* s, const char* c);
libqt_string KCoreUrlNavigator_Tr3(const char* s, const char* c, int n);
QUrl* KCoreUrlNavigator_LocationUrl1(const KCoreUrlNavigator* self, int historyIndex);
QVariant* KCoreUrlNavigator_LocationState1(const KCoreUrlNavigator* self, int historyIndex);
void KCoreUrlNavigator_OnMetacall(KCoreUrlNavigator* self, intptr_t slot);
int KCoreUrlNavigator_QBaseMetacall(KCoreUrlNavigator* self, int param1, int param2, void** param3);
bool KCoreUrlNavigator_Event(KCoreUrlNavigator* self, QEvent* event);
void KCoreUrlNavigator_OnEvent(KCoreUrlNavigator* self, intptr_t slot);
bool KCoreUrlNavigator_QBaseEvent(KCoreUrlNavigator* self, QEvent* event);
bool KCoreUrlNavigator_EventFilter(KCoreUrlNavigator* self, QObject* watched, QEvent* event);
void KCoreUrlNavigator_OnEventFilter(KCoreUrlNavigator* self, intptr_t slot);
bool KCoreUrlNavigator_QBaseEventFilter(KCoreUrlNavigator* self, QObject* watched, QEvent* event);
void KCoreUrlNavigator_TimerEvent(KCoreUrlNavigator* self, QTimerEvent* event);
void KCoreUrlNavigator_OnTimerEvent(KCoreUrlNavigator* self, intptr_t slot);
void KCoreUrlNavigator_QBaseTimerEvent(KCoreUrlNavigator* self, QTimerEvent* event);
void KCoreUrlNavigator_ChildEvent(KCoreUrlNavigator* self, QChildEvent* event);
void KCoreUrlNavigator_OnChildEvent(KCoreUrlNavigator* self, intptr_t slot);
void KCoreUrlNavigator_QBaseChildEvent(KCoreUrlNavigator* self, QChildEvent* event);
void KCoreUrlNavigator_CustomEvent(KCoreUrlNavigator* self, QEvent* event);
void KCoreUrlNavigator_OnCustomEvent(KCoreUrlNavigator* self, intptr_t slot);
void KCoreUrlNavigator_QBaseCustomEvent(KCoreUrlNavigator* self, QEvent* event);
void KCoreUrlNavigator_ConnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal);
void KCoreUrlNavigator_OnConnectNotify(KCoreUrlNavigator* self, intptr_t slot);
void KCoreUrlNavigator_QBaseConnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal);
void KCoreUrlNavigator_DisconnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal);
void KCoreUrlNavigator_OnDisconnectNotify(KCoreUrlNavigator* self, intptr_t slot);
void KCoreUrlNavigator_QBaseDisconnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal);
QObject* KCoreUrlNavigator_Sender(const KCoreUrlNavigator* self);
void KCoreUrlNavigator_OnSender(const KCoreUrlNavigator* self, intptr_t slot);
QObject* KCoreUrlNavigator_QBaseSender(const KCoreUrlNavigator* self);
int KCoreUrlNavigator_SenderSignalIndex(const KCoreUrlNavigator* self);
void KCoreUrlNavigator_OnSenderSignalIndex(const KCoreUrlNavigator* self, intptr_t slot);
int KCoreUrlNavigator_QBaseSenderSignalIndex(const KCoreUrlNavigator* self);
int KCoreUrlNavigator_Receivers(const KCoreUrlNavigator* self, const char* signal);
void KCoreUrlNavigator_OnReceivers(const KCoreUrlNavigator* self, intptr_t slot);
int KCoreUrlNavigator_QBaseReceivers(const KCoreUrlNavigator* self, const char* signal);
bool KCoreUrlNavigator_IsSignalConnected(const KCoreUrlNavigator* self, const QMetaMethod* signal);
void KCoreUrlNavigator_OnIsSignalConnected(const KCoreUrlNavigator* self, intptr_t slot);
bool KCoreUrlNavigator_QBaseIsSignalConnected(const KCoreUrlNavigator* self, const QMetaMethod* signal);
void KCoreUrlNavigator_Delete(KCoreUrlNavigator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
