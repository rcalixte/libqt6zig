#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBDNDPOPUPMENUPLUGIN_H
#define SRC_EXTRAS_KIOC_LIBDNDPOPUPMENUPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__DndPopupMenuPlugin)
typedef KIO::DndPopupMenuPlugin KIO__DndPopupMenuPlugin;
#endif
#else
typedef struct KFileItemListProperties KFileItemListProperties;
typedef struct KIO__DndPopupMenuPlugin KIO__DndPopupMenuPlugin;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__DndPopupMenuPlugin* KIO__DndPopupMenuPlugin_new(QObject* parent);
QMetaObject* KIO__DndPopupMenuPlugin_MetaObject(const KIO__DndPopupMenuPlugin* self);
void* KIO__DndPopupMenuPlugin_Metacast(KIO__DndPopupMenuPlugin* self, const char* param1);
int KIO__DndPopupMenuPlugin_Metacall(KIO__DndPopupMenuPlugin* self, int param1, int param2, void** param3);
libqt_string KIO__DndPopupMenuPlugin_Tr(const char* s);
libqt_list /* of QAction* */ KIO__DndPopupMenuPlugin_Setup(KIO__DndPopupMenuPlugin* self, const KFileItemListProperties* popupMenuInfo, const QUrl* destination);
libqt_string KIO__DndPopupMenuPlugin_Tr2(const char* s, const char* c);
libqt_string KIO__DndPopupMenuPlugin_Tr3(const char* s, const char* c, int n);
void KIO__DndPopupMenuPlugin_OnMetacall(KIO__DndPopupMenuPlugin* self, intptr_t slot);
int KIO__DndPopupMenuPlugin_QBaseMetacall(KIO__DndPopupMenuPlugin* self, int param1, int param2, void** param3);
void KIO__DndPopupMenuPlugin_OnSetup(KIO__DndPopupMenuPlugin* self, intptr_t slot);
libqt_list /* of QAction* */ KIO__DndPopupMenuPlugin_QBaseSetup(KIO__DndPopupMenuPlugin* self, const KFileItemListProperties* popupMenuInfo, const QUrl* destination);
bool KIO__DndPopupMenuPlugin_Event(KIO__DndPopupMenuPlugin* self, QEvent* event);
void KIO__DndPopupMenuPlugin_OnEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot);
bool KIO__DndPopupMenuPlugin_QBaseEvent(KIO__DndPopupMenuPlugin* self, QEvent* event);
bool KIO__DndPopupMenuPlugin_EventFilter(KIO__DndPopupMenuPlugin* self, QObject* watched, QEvent* event);
void KIO__DndPopupMenuPlugin_OnEventFilter(KIO__DndPopupMenuPlugin* self, intptr_t slot);
bool KIO__DndPopupMenuPlugin_QBaseEventFilter(KIO__DndPopupMenuPlugin* self, QObject* watched, QEvent* event);
void KIO__DndPopupMenuPlugin_TimerEvent(KIO__DndPopupMenuPlugin* self, QTimerEvent* event);
void KIO__DndPopupMenuPlugin_OnTimerEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot);
void KIO__DndPopupMenuPlugin_QBaseTimerEvent(KIO__DndPopupMenuPlugin* self, QTimerEvent* event);
void KIO__DndPopupMenuPlugin_ChildEvent(KIO__DndPopupMenuPlugin* self, QChildEvent* event);
void KIO__DndPopupMenuPlugin_OnChildEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot);
void KIO__DndPopupMenuPlugin_QBaseChildEvent(KIO__DndPopupMenuPlugin* self, QChildEvent* event);
void KIO__DndPopupMenuPlugin_CustomEvent(KIO__DndPopupMenuPlugin* self, QEvent* event);
void KIO__DndPopupMenuPlugin_OnCustomEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot);
void KIO__DndPopupMenuPlugin_QBaseCustomEvent(KIO__DndPopupMenuPlugin* self, QEvent* event);
void KIO__DndPopupMenuPlugin_ConnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal);
void KIO__DndPopupMenuPlugin_OnConnectNotify(KIO__DndPopupMenuPlugin* self, intptr_t slot);
void KIO__DndPopupMenuPlugin_QBaseConnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal);
void KIO__DndPopupMenuPlugin_DisconnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal);
void KIO__DndPopupMenuPlugin_OnDisconnectNotify(KIO__DndPopupMenuPlugin* self, intptr_t slot);
void KIO__DndPopupMenuPlugin_QBaseDisconnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal);
QObject* KIO__DndPopupMenuPlugin_Sender(const KIO__DndPopupMenuPlugin* self);
void KIO__DndPopupMenuPlugin_OnSender(const KIO__DndPopupMenuPlugin* self, intptr_t slot);
QObject* KIO__DndPopupMenuPlugin_QBaseSender(const KIO__DndPopupMenuPlugin* self);
int KIO__DndPopupMenuPlugin_SenderSignalIndex(const KIO__DndPopupMenuPlugin* self);
void KIO__DndPopupMenuPlugin_OnSenderSignalIndex(const KIO__DndPopupMenuPlugin* self, intptr_t slot);
int KIO__DndPopupMenuPlugin_QBaseSenderSignalIndex(const KIO__DndPopupMenuPlugin* self);
int KIO__DndPopupMenuPlugin_Receivers(const KIO__DndPopupMenuPlugin* self, const char* signal);
void KIO__DndPopupMenuPlugin_OnReceivers(const KIO__DndPopupMenuPlugin* self, intptr_t slot);
int KIO__DndPopupMenuPlugin_QBaseReceivers(const KIO__DndPopupMenuPlugin* self, const char* signal);
bool KIO__DndPopupMenuPlugin_IsSignalConnected(const KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal);
void KIO__DndPopupMenuPlugin_OnIsSignalConnected(const KIO__DndPopupMenuPlugin* self, intptr_t slot);
bool KIO__DndPopupMenuPlugin_QBaseIsSignalConnected(const KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal);
void KIO__DndPopupMenuPlugin_Delete(KIO__DndPopupMenuPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
