#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKVIEWSTATEMAINTAINERBASE_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKVIEWSTATEMAINTAINERBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KViewStateMaintainerBase KViewStateMaintainerBase;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KViewStateMaintainerBase* KViewStateMaintainerBase_new();
KViewStateMaintainerBase* KViewStateMaintainerBase_new2(QObject* parent);
QMetaObject* KViewStateMaintainerBase_MetaObject(const KViewStateMaintainerBase* self);
void* KViewStateMaintainerBase_Metacast(KViewStateMaintainerBase* self, const char* param1);
int KViewStateMaintainerBase_Metacall(KViewStateMaintainerBase* self, int param1, int param2, void** param3);
void KViewStateMaintainerBase_SetSelectionModel(KViewStateMaintainerBase* self, QItemSelectionModel* selectionModel);
QItemSelectionModel* KViewStateMaintainerBase_SelectionModel(const KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_SetView(KViewStateMaintainerBase* self, QAbstractItemView* view);
QAbstractItemView* KViewStateMaintainerBase_View(const KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_SaveState(KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_RestoreState(KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_OnMetaObject(const KViewStateMaintainerBase* self, intptr_t slot);
QMetaObject* KViewStateMaintainerBase_SuperMetaObject(const KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_OnMetacast(KViewStateMaintainerBase* self, intptr_t slot);
void* KViewStateMaintainerBase_SuperMetacast(KViewStateMaintainerBase* self, const char* param1);
void KViewStateMaintainerBase_OnMetacall(KViewStateMaintainerBase* self, intptr_t slot);
int KViewStateMaintainerBase_SuperMetacall(KViewStateMaintainerBase* self, int param1, int param2, void** param3);
void KViewStateMaintainerBase_OnSaveState(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_SuperSaveState(KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_OnRestoreState(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_SuperRestoreState(KViewStateMaintainerBase* self);
bool KViewStateMaintainerBase_Event(KViewStateMaintainerBase* self, QEvent* event);
void KViewStateMaintainerBase_OnEvent(KViewStateMaintainerBase* self, intptr_t slot);
bool KViewStateMaintainerBase_SuperEvent(KViewStateMaintainerBase* self, QEvent* event);
bool KViewStateMaintainerBase_EventFilter(KViewStateMaintainerBase* self, QObject* watched, QEvent* event);
void KViewStateMaintainerBase_OnEventFilter(KViewStateMaintainerBase* self, intptr_t slot);
bool KViewStateMaintainerBase_SuperEventFilter(KViewStateMaintainerBase* self, QObject* watched, QEvent* event);
void KViewStateMaintainerBase_TimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event);
void KViewStateMaintainerBase_OnTimerEvent(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_SuperTimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event);
void KViewStateMaintainerBase_ChildEvent(KViewStateMaintainerBase* self, QChildEvent* event);
void KViewStateMaintainerBase_OnChildEvent(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_SuperChildEvent(KViewStateMaintainerBase* self, QChildEvent* event);
void KViewStateMaintainerBase_CustomEvent(KViewStateMaintainerBase* self, QEvent* event);
void KViewStateMaintainerBase_OnCustomEvent(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_SuperCustomEvent(KViewStateMaintainerBase* self, QEvent* event);
void KViewStateMaintainerBase_ConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
void KViewStateMaintainerBase_OnConnectNotify(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_SuperConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
void KViewStateMaintainerBase_DisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
void KViewStateMaintainerBase_OnDisconnectNotify(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_SuperDisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
QObject* KViewStateMaintainerBase_Sender(const KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_OnSender(const KViewStateMaintainerBase* self, intptr_t slot);
QObject* KViewStateMaintainerBase_SuperSender(const KViewStateMaintainerBase* self);
int KViewStateMaintainerBase_SenderSignalIndex(const KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_OnSenderSignalIndex(const KViewStateMaintainerBase* self, intptr_t slot);
int KViewStateMaintainerBase_SuperSenderSignalIndex(const KViewStateMaintainerBase* self);
int KViewStateMaintainerBase_Receivers(const KViewStateMaintainerBase* self, const char* signal);
void KViewStateMaintainerBase_OnReceivers(const KViewStateMaintainerBase* self, intptr_t slot);
int KViewStateMaintainerBase_SuperReceivers(const KViewStateMaintainerBase* self, const char* signal);
bool KViewStateMaintainerBase_IsSignalConnected(const KViewStateMaintainerBase* self, const QMetaMethod* signal);
void KViewStateMaintainerBase_OnIsSignalConnected(const KViewStateMaintainerBase* self, intptr_t slot);
bool KViewStateMaintainerBase_SuperIsSignalConnected(const KViewStateMaintainerBase* self, const QMetaMethod* signal);
void KViewStateMaintainerBase_Delete(KViewStateMaintainerBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
