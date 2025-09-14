#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKURIFILTERSEARCHPROVIDERACTIONS_H
#define SRC_EXTRAS_KIOC_LIBKURIFILTERSEARCHPROVIDERACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__KUriFilterSearchProviderActions)
typedef KIO::KUriFilterSearchProviderActions KIO__KUriFilterSearchProviderActions;
#endif
#else
typedef struct KIO__KUriFilterSearchProviderActions KIO__KUriFilterSearchProviderActions;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KIO__KUriFilterSearchProviderActions* KIO__KUriFilterSearchProviderActions_new();
KIO__KUriFilterSearchProviderActions* KIO__KUriFilterSearchProviderActions_new2(QObject* parent);
QMetaObject* KIO__KUriFilterSearchProviderActions_MetaObject(const KIO__KUriFilterSearchProviderActions* self);
void* KIO__KUriFilterSearchProviderActions_Metacast(KIO__KUriFilterSearchProviderActions* self, const char* param1);
int KIO__KUriFilterSearchProviderActions_Metacall(KIO__KUriFilterSearchProviderActions* self, int param1, int param2, void** param3);
libqt_string KIO__KUriFilterSearchProviderActions_Tr(const char* s);
libqt_string KIO__KUriFilterSearchProviderActions_SelectedText(const KIO__KUriFilterSearchProviderActions* self);
void KIO__KUriFilterSearchProviderActions_SetSelectedText(KIO__KUriFilterSearchProviderActions* self, const libqt_string selectedText);
void KIO__KUriFilterSearchProviderActions_AddWebShortcutsToMenu(KIO__KUriFilterSearchProviderActions* self, QMenu* menu);
libqt_string KIO__KUriFilterSearchProviderActions_Tr2(const char* s, const char* c);
libqt_string KIO__KUriFilterSearchProviderActions_Tr3(const char* s, const char* c, int n);
void KIO__KUriFilterSearchProviderActions_OnMetacall(KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
int KIO__KUriFilterSearchProviderActions_QBaseMetacall(KIO__KUriFilterSearchProviderActions* self, int param1, int param2, void** param3);
bool KIO__KUriFilterSearchProviderActions_Event(KIO__KUriFilterSearchProviderActions* self, QEvent* event);
void KIO__KUriFilterSearchProviderActions_OnEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
bool KIO__KUriFilterSearchProviderActions_QBaseEvent(KIO__KUriFilterSearchProviderActions* self, QEvent* event);
bool KIO__KUriFilterSearchProviderActions_EventFilter(KIO__KUriFilterSearchProviderActions* self, QObject* watched, QEvent* event);
void KIO__KUriFilterSearchProviderActions_OnEventFilter(KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
bool KIO__KUriFilterSearchProviderActions_QBaseEventFilter(KIO__KUriFilterSearchProviderActions* self, QObject* watched, QEvent* event);
void KIO__KUriFilterSearchProviderActions_TimerEvent(KIO__KUriFilterSearchProviderActions* self, QTimerEvent* event);
void KIO__KUriFilterSearchProviderActions_OnTimerEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
void KIO__KUriFilterSearchProviderActions_QBaseTimerEvent(KIO__KUriFilterSearchProviderActions* self, QTimerEvent* event);
void KIO__KUriFilterSearchProviderActions_ChildEvent(KIO__KUriFilterSearchProviderActions* self, QChildEvent* event);
void KIO__KUriFilterSearchProviderActions_OnChildEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
void KIO__KUriFilterSearchProviderActions_QBaseChildEvent(KIO__KUriFilterSearchProviderActions* self, QChildEvent* event);
void KIO__KUriFilterSearchProviderActions_CustomEvent(KIO__KUriFilterSearchProviderActions* self, QEvent* event);
void KIO__KUriFilterSearchProviderActions_OnCustomEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
void KIO__KUriFilterSearchProviderActions_QBaseCustomEvent(KIO__KUriFilterSearchProviderActions* self, QEvent* event);
void KIO__KUriFilterSearchProviderActions_ConnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
void KIO__KUriFilterSearchProviderActions_OnConnectNotify(KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
void KIO__KUriFilterSearchProviderActions_QBaseConnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
void KIO__KUriFilterSearchProviderActions_DisconnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
void KIO__KUriFilterSearchProviderActions_OnDisconnectNotify(KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
void KIO__KUriFilterSearchProviderActions_QBaseDisconnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
QObject* KIO__KUriFilterSearchProviderActions_Sender(const KIO__KUriFilterSearchProviderActions* self);
void KIO__KUriFilterSearchProviderActions_OnSender(const KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
QObject* KIO__KUriFilterSearchProviderActions_QBaseSender(const KIO__KUriFilterSearchProviderActions* self);
int KIO__KUriFilterSearchProviderActions_SenderSignalIndex(const KIO__KUriFilterSearchProviderActions* self);
void KIO__KUriFilterSearchProviderActions_OnSenderSignalIndex(const KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
int KIO__KUriFilterSearchProviderActions_QBaseSenderSignalIndex(const KIO__KUriFilterSearchProviderActions* self);
int KIO__KUriFilterSearchProviderActions_Receivers(const KIO__KUriFilterSearchProviderActions* self, const char* signal);
void KIO__KUriFilterSearchProviderActions_OnReceivers(const KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
int KIO__KUriFilterSearchProviderActions_QBaseReceivers(const KIO__KUriFilterSearchProviderActions* self, const char* signal);
bool KIO__KUriFilterSearchProviderActions_IsSignalConnected(const KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
void KIO__KUriFilterSearchProviderActions_OnIsSignalConnected(const KIO__KUriFilterSearchProviderActions* self, intptr_t slot);
bool KIO__KUriFilterSearchProviderActions_QBaseIsSignalConnected(const KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
void KIO__KUriFilterSearchProviderActions_Delete(KIO__KUriFilterSearchProviderActions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
