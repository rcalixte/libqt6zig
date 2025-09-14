#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKOVERLAYICONPLUGIN_H
#define SRC_EXTRAS_KIOC_LIBKOVERLAYICONPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KOverlayIconPlugin KOverlayIconPlugin;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KOverlayIconPlugin* KOverlayIconPlugin_new();
KOverlayIconPlugin* KOverlayIconPlugin_new2(QObject* parent);
QMetaObject* KOverlayIconPlugin_MetaObject(const KOverlayIconPlugin* self);
void* KOverlayIconPlugin_Metacast(KOverlayIconPlugin* self, const char* param1);
int KOverlayIconPlugin_Metacall(KOverlayIconPlugin* self, int param1, int param2, void** param3);
libqt_string KOverlayIconPlugin_Tr(const char* s);
libqt_list /* of libqt_string */ KOverlayIconPlugin_GetOverlays(KOverlayIconPlugin* self, const QUrl* item);
void KOverlayIconPlugin_OverlaysChanged(KOverlayIconPlugin* self, const QUrl* url, const libqt_list /* of libqt_string */ overlays);
void KOverlayIconPlugin_Connect_OverlaysChanged(KOverlayIconPlugin* self, intptr_t slot);
libqt_string KOverlayIconPlugin_Tr2(const char* s, const char* c);
libqt_string KOverlayIconPlugin_Tr3(const char* s, const char* c, int n);
void KOverlayIconPlugin_OnMetacall(KOverlayIconPlugin* self, intptr_t slot);
int KOverlayIconPlugin_QBaseMetacall(KOverlayIconPlugin* self, int param1, int param2, void** param3);
void KOverlayIconPlugin_OnGetOverlays(KOverlayIconPlugin* self, intptr_t slot);
libqt_list /* of libqt_string */ KOverlayIconPlugin_QBaseGetOverlays(KOverlayIconPlugin* self, const QUrl* item);
bool KOverlayIconPlugin_Event(KOverlayIconPlugin* self, QEvent* event);
void KOverlayIconPlugin_OnEvent(KOverlayIconPlugin* self, intptr_t slot);
bool KOverlayIconPlugin_QBaseEvent(KOverlayIconPlugin* self, QEvent* event);
bool KOverlayIconPlugin_EventFilter(KOverlayIconPlugin* self, QObject* watched, QEvent* event);
void KOverlayIconPlugin_OnEventFilter(KOverlayIconPlugin* self, intptr_t slot);
bool KOverlayIconPlugin_QBaseEventFilter(KOverlayIconPlugin* self, QObject* watched, QEvent* event);
void KOverlayIconPlugin_TimerEvent(KOverlayIconPlugin* self, QTimerEvent* event);
void KOverlayIconPlugin_OnTimerEvent(KOverlayIconPlugin* self, intptr_t slot);
void KOverlayIconPlugin_QBaseTimerEvent(KOverlayIconPlugin* self, QTimerEvent* event);
void KOverlayIconPlugin_ChildEvent(KOverlayIconPlugin* self, QChildEvent* event);
void KOverlayIconPlugin_OnChildEvent(KOverlayIconPlugin* self, intptr_t slot);
void KOverlayIconPlugin_QBaseChildEvent(KOverlayIconPlugin* self, QChildEvent* event);
void KOverlayIconPlugin_CustomEvent(KOverlayIconPlugin* self, QEvent* event);
void KOverlayIconPlugin_OnCustomEvent(KOverlayIconPlugin* self, intptr_t slot);
void KOverlayIconPlugin_QBaseCustomEvent(KOverlayIconPlugin* self, QEvent* event);
void KOverlayIconPlugin_ConnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal);
void KOverlayIconPlugin_OnConnectNotify(KOverlayIconPlugin* self, intptr_t slot);
void KOverlayIconPlugin_QBaseConnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal);
void KOverlayIconPlugin_DisconnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal);
void KOverlayIconPlugin_OnDisconnectNotify(KOverlayIconPlugin* self, intptr_t slot);
void KOverlayIconPlugin_QBaseDisconnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal);
QObject* KOverlayIconPlugin_Sender(const KOverlayIconPlugin* self);
void KOverlayIconPlugin_OnSender(const KOverlayIconPlugin* self, intptr_t slot);
QObject* KOverlayIconPlugin_QBaseSender(const KOverlayIconPlugin* self);
int KOverlayIconPlugin_SenderSignalIndex(const KOverlayIconPlugin* self);
void KOverlayIconPlugin_OnSenderSignalIndex(const KOverlayIconPlugin* self, intptr_t slot);
int KOverlayIconPlugin_QBaseSenderSignalIndex(const KOverlayIconPlugin* self);
int KOverlayIconPlugin_Receivers(const KOverlayIconPlugin* self, const char* signal);
void KOverlayIconPlugin_OnReceivers(const KOverlayIconPlugin* self, intptr_t slot);
int KOverlayIconPlugin_QBaseReceivers(const KOverlayIconPlugin* self, const char* signal);
bool KOverlayIconPlugin_IsSignalConnected(const KOverlayIconPlugin* self, const QMetaMethod* signal);
void KOverlayIconPlugin_OnIsSignalConnected(const KOverlayIconPlugin* self, intptr_t slot);
bool KOverlayIconPlugin_QBaseIsSignalConnected(const KOverlayIconPlugin* self, const QMetaMethod* signal);
void KOverlayIconPlugin_Delete(KOverlayIconPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
