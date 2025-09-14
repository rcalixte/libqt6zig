#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKFILEPREVIEWGENERATOR_H
#define SRC_EXTRAS_KIOC_LIBKFILEPREVIEWGENERATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAbstractViewAdapter KAbstractViewAdapter;
typedef struct KFilePreviewGenerator KFilePreviewGenerator;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KFilePreviewGenerator* KFilePreviewGenerator_new(QAbstractItemView* parent);
KFilePreviewGenerator* KFilePreviewGenerator_new2(KAbstractViewAdapter* parent, QAbstractProxyModel* model);
QMetaObject* KFilePreviewGenerator_MetaObject(const KFilePreviewGenerator* self);
void* KFilePreviewGenerator_Metacast(KFilePreviewGenerator* self, const char* param1);
int KFilePreviewGenerator_Metacall(KFilePreviewGenerator* self, int param1, int param2, void** param3);
libqt_string KFilePreviewGenerator_Tr(const char* s);
void KFilePreviewGenerator_SetPreviewShown(KFilePreviewGenerator* self, bool show);
bool KFilePreviewGenerator_IsPreviewShown(const KFilePreviewGenerator* self);
void KFilePreviewGenerator_SetEnabledPlugins(KFilePreviewGenerator* self, const libqt_list /* of libqt_string */ list);
libqt_list /* of libqt_string */ KFilePreviewGenerator_EnabledPlugins(const KFilePreviewGenerator* self);
void KFilePreviewGenerator_UpdateIcons(KFilePreviewGenerator* self);
void KFilePreviewGenerator_CancelPreviews(KFilePreviewGenerator* self);
libqt_string KFilePreviewGenerator_Tr2(const char* s, const char* c);
libqt_string KFilePreviewGenerator_Tr3(const char* s, const char* c, int n);
void KFilePreviewGenerator_OnMetacall(KFilePreviewGenerator* self, intptr_t slot);
int KFilePreviewGenerator_QBaseMetacall(KFilePreviewGenerator* self, int param1, int param2, void** param3);
bool KFilePreviewGenerator_Event(KFilePreviewGenerator* self, QEvent* event);
void KFilePreviewGenerator_OnEvent(KFilePreviewGenerator* self, intptr_t slot);
bool KFilePreviewGenerator_QBaseEvent(KFilePreviewGenerator* self, QEvent* event);
bool KFilePreviewGenerator_EventFilter(KFilePreviewGenerator* self, QObject* watched, QEvent* event);
void KFilePreviewGenerator_OnEventFilter(KFilePreviewGenerator* self, intptr_t slot);
bool KFilePreviewGenerator_QBaseEventFilter(KFilePreviewGenerator* self, QObject* watched, QEvent* event);
void KFilePreviewGenerator_TimerEvent(KFilePreviewGenerator* self, QTimerEvent* event);
void KFilePreviewGenerator_OnTimerEvent(KFilePreviewGenerator* self, intptr_t slot);
void KFilePreviewGenerator_QBaseTimerEvent(KFilePreviewGenerator* self, QTimerEvent* event);
void KFilePreviewGenerator_ChildEvent(KFilePreviewGenerator* self, QChildEvent* event);
void KFilePreviewGenerator_OnChildEvent(KFilePreviewGenerator* self, intptr_t slot);
void KFilePreviewGenerator_QBaseChildEvent(KFilePreviewGenerator* self, QChildEvent* event);
void KFilePreviewGenerator_CustomEvent(KFilePreviewGenerator* self, QEvent* event);
void KFilePreviewGenerator_OnCustomEvent(KFilePreviewGenerator* self, intptr_t slot);
void KFilePreviewGenerator_QBaseCustomEvent(KFilePreviewGenerator* self, QEvent* event);
void KFilePreviewGenerator_ConnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal);
void KFilePreviewGenerator_OnConnectNotify(KFilePreviewGenerator* self, intptr_t slot);
void KFilePreviewGenerator_QBaseConnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal);
void KFilePreviewGenerator_DisconnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal);
void KFilePreviewGenerator_OnDisconnectNotify(KFilePreviewGenerator* self, intptr_t slot);
void KFilePreviewGenerator_QBaseDisconnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal);
QObject* KFilePreviewGenerator_Sender(const KFilePreviewGenerator* self);
void KFilePreviewGenerator_OnSender(const KFilePreviewGenerator* self, intptr_t slot);
QObject* KFilePreviewGenerator_QBaseSender(const KFilePreviewGenerator* self);
int KFilePreviewGenerator_SenderSignalIndex(const KFilePreviewGenerator* self);
void KFilePreviewGenerator_OnSenderSignalIndex(const KFilePreviewGenerator* self, intptr_t slot);
int KFilePreviewGenerator_QBaseSenderSignalIndex(const KFilePreviewGenerator* self);
int KFilePreviewGenerator_Receivers(const KFilePreviewGenerator* self, const char* signal);
void KFilePreviewGenerator_OnReceivers(const KFilePreviewGenerator* self, intptr_t slot);
int KFilePreviewGenerator_QBaseReceivers(const KFilePreviewGenerator* self, const char* signal);
bool KFilePreviewGenerator_IsSignalConnected(const KFilePreviewGenerator* self, const QMetaMethod* signal);
void KFilePreviewGenerator_OnIsSignalConnected(const KFilePreviewGenerator* self, intptr_t slot);
bool KFilePreviewGenerator_QBaseIsSignalConnected(const KFilePreviewGenerator* self, const QMetaMethod* signal);
void KFilePreviewGenerator_Delete(KFilePreviewGenerator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
