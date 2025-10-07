#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBKMODELINDEXPROXYMAPPER_H
#define SRC_EXTRAS_KITEMMODELSC_LIBKMODELINDEXPROXYMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KModelIndexProxyMapper KModelIndexProxyMapper;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KModelIndexProxyMapper* KModelIndexProxyMapper_new(const QAbstractItemModel* leftModel, const QAbstractItemModel* rightModel);
KModelIndexProxyMapper* KModelIndexProxyMapper_new2(const QAbstractItemModel* leftModel, const QAbstractItemModel* rightModel, QObject* parent);
QMetaObject* KModelIndexProxyMapper_MetaObject(const KModelIndexProxyMapper* self);
void* KModelIndexProxyMapper_Metacast(KModelIndexProxyMapper* self, const char* param1);
int KModelIndexProxyMapper_Metacall(KModelIndexProxyMapper* self, int param1, int param2, void** param3);
libqt_string KModelIndexProxyMapper_Tr(const char* s);
QModelIndex* KModelIndexProxyMapper_MapLeftToRight(const KModelIndexProxyMapper* self, const QModelIndex* index);
QModelIndex* KModelIndexProxyMapper_MapRightToLeft(const KModelIndexProxyMapper* self, const QModelIndex* index);
QItemSelection* KModelIndexProxyMapper_MapSelectionLeftToRight(const KModelIndexProxyMapper* self, const QItemSelection* selection);
QItemSelection* KModelIndexProxyMapper_MapSelectionRightToLeft(const KModelIndexProxyMapper* self, const QItemSelection* selection);
bool KModelIndexProxyMapper_IsConnected(const KModelIndexProxyMapper* self);
void KModelIndexProxyMapper_IsConnectedChanged(KModelIndexProxyMapper* self);
void KModelIndexProxyMapper_Connect_IsConnectedChanged(KModelIndexProxyMapper* self, intptr_t slot);
libqt_string KModelIndexProxyMapper_Tr2(const char* s, const char* c);
libqt_string KModelIndexProxyMapper_Tr3(const char* s, const char* c, int n);
void KModelIndexProxyMapper_OnMetacall(KModelIndexProxyMapper* self, intptr_t slot);
int KModelIndexProxyMapper_QBaseMetacall(KModelIndexProxyMapper* self, int param1, int param2, void** param3);
bool KModelIndexProxyMapper_Event(KModelIndexProxyMapper* self, QEvent* event);
void KModelIndexProxyMapper_OnEvent(KModelIndexProxyMapper* self, intptr_t slot);
bool KModelIndexProxyMapper_QBaseEvent(KModelIndexProxyMapper* self, QEvent* event);
bool KModelIndexProxyMapper_EventFilter(KModelIndexProxyMapper* self, QObject* watched, QEvent* event);
void KModelIndexProxyMapper_OnEventFilter(KModelIndexProxyMapper* self, intptr_t slot);
bool KModelIndexProxyMapper_QBaseEventFilter(KModelIndexProxyMapper* self, QObject* watched, QEvent* event);
void KModelIndexProxyMapper_TimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event);
void KModelIndexProxyMapper_OnTimerEvent(KModelIndexProxyMapper* self, intptr_t slot);
void KModelIndexProxyMapper_QBaseTimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event);
void KModelIndexProxyMapper_ChildEvent(KModelIndexProxyMapper* self, QChildEvent* event);
void KModelIndexProxyMapper_OnChildEvent(KModelIndexProxyMapper* self, intptr_t slot);
void KModelIndexProxyMapper_QBaseChildEvent(KModelIndexProxyMapper* self, QChildEvent* event);
void KModelIndexProxyMapper_CustomEvent(KModelIndexProxyMapper* self, QEvent* event);
void KModelIndexProxyMapper_OnCustomEvent(KModelIndexProxyMapper* self, intptr_t slot);
void KModelIndexProxyMapper_QBaseCustomEvent(KModelIndexProxyMapper* self, QEvent* event);
void KModelIndexProxyMapper_ConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
void KModelIndexProxyMapper_OnConnectNotify(KModelIndexProxyMapper* self, intptr_t slot);
void KModelIndexProxyMapper_QBaseConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
void KModelIndexProxyMapper_DisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
void KModelIndexProxyMapper_OnDisconnectNotify(KModelIndexProxyMapper* self, intptr_t slot);
void KModelIndexProxyMapper_QBaseDisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
QObject* KModelIndexProxyMapper_Sender(const KModelIndexProxyMapper* self);
void KModelIndexProxyMapper_OnSender(const KModelIndexProxyMapper* self, intptr_t slot);
QObject* KModelIndexProxyMapper_QBaseSender(const KModelIndexProxyMapper* self);
int KModelIndexProxyMapper_SenderSignalIndex(const KModelIndexProxyMapper* self);
void KModelIndexProxyMapper_OnSenderSignalIndex(const KModelIndexProxyMapper* self, intptr_t slot);
int KModelIndexProxyMapper_QBaseSenderSignalIndex(const KModelIndexProxyMapper* self);
int KModelIndexProxyMapper_Receivers(const KModelIndexProxyMapper* self, const char* signal);
void KModelIndexProxyMapper_OnReceivers(const KModelIndexProxyMapper* self, intptr_t slot);
int KModelIndexProxyMapper_QBaseReceivers(const KModelIndexProxyMapper* self, const char* signal);
bool KModelIndexProxyMapper_IsSignalConnected(const KModelIndexProxyMapper* self, const QMetaMethod* signal);
void KModelIndexProxyMapper_OnIsSignalConnected(const KModelIndexProxyMapper* self, intptr_t slot);
bool KModelIndexProxyMapper_QBaseIsSignalConnected(const KModelIndexProxyMapper* self, const QMetaMethod* signal);
void KModelIndexProxyMapper_Delete(KModelIndexProxyMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
