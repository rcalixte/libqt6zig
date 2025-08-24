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
void KViewStateMaintainerBase_OnMetacall(KViewStateMaintainerBase* self, intptr_t slot);
int KViewStateMaintainerBase_QBaseMetacall(KViewStateMaintainerBase* self, int param1, int param2, void** param3);
libqt_string KViewStateMaintainerBase_Tr(const char* s);
void KViewStateMaintainerBase_SetSelectionModel(KViewStateMaintainerBase* self, QItemSelectionModel* selectionModel);
QItemSelectionModel* KViewStateMaintainerBase_SelectionModel(const KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_SetView(KViewStateMaintainerBase* self, QAbstractItemView* view);
QAbstractItemView* KViewStateMaintainerBase_View(const KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_SaveState(KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_OnSaveState(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_QBaseSaveState(KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_RestoreState(KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_OnRestoreState(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_QBaseRestoreState(KViewStateMaintainerBase* self);
libqt_string KViewStateMaintainerBase_Tr2(const char* s, const char* c);
libqt_string KViewStateMaintainerBase_Tr3(const char* s, const char* c, int n);
bool KViewStateMaintainerBase_Event(KViewStateMaintainerBase* self, QEvent* event);
void KViewStateMaintainerBase_OnEvent(KViewStateMaintainerBase* self, intptr_t slot);
bool KViewStateMaintainerBase_QBaseEvent(KViewStateMaintainerBase* self, QEvent* event);
bool KViewStateMaintainerBase_EventFilter(KViewStateMaintainerBase* self, QObject* watched, QEvent* event);
void KViewStateMaintainerBase_OnEventFilter(KViewStateMaintainerBase* self, intptr_t slot);
bool KViewStateMaintainerBase_QBaseEventFilter(KViewStateMaintainerBase* self, QObject* watched, QEvent* event);
void KViewStateMaintainerBase_TimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event);
void KViewStateMaintainerBase_OnTimerEvent(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_QBaseTimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event);
void KViewStateMaintainerBase_ChildEvent(KViewStateMaintainerBase* self, QChildEvent* event);
void KViewStateMaintainerBase_OnChildEvent(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_QBaseChildEvent(KViewStateMaintainerBase* self, QChildEvent* event);
void KViewStateMaintainerBase_CustomEvent(KViewStateMaintainerBase* self, QEvent* event);
void KViewStateMaintainerBase_OnCustomEvent(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_QBaseCustomEvent(KViewStateMaintainerBase* self, QEvent* event);
void KViewStateMaintainerBase_ConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
void KViewStateMaintainerBase_OnConnectNotify(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_QBaseConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
void KViewStateMaintainerBase_DisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
void KViewStateMaintainerBase_OnDisconnectNotify(KViewStateMaintainerBase* self, intptr_t slot);
void KViewStateMaintainerBase_QBaseDisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
QObject* KViewStateMaintainerBase_Sender(const KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_OnSender(const KViewStateMaintainerBase* self, intptr_t slot);
QObject* KViewStateMaintainerBase_QBaseSender(const KViewStateMaintainerBase* self);
int KViewStateMaintainerBase_SenderSignalIndex(const KViewStateMaintainerBase* self);
void KViewStateMaintainerBase_OnSenderSignalIndex(const KViewStateMaintainerBase* self, intptr_t slot);
int KViewStateMaintainerBase_QBaseSenderSignalIndex(const KViewStateMaintainerBase* self);
int KViewStateMaintainerBase_Receivers(const KViewStateMaintainerBase* self, const char* signal);
void KViewStateMaintainerBase_OnReceivers(const KViewStateMaintainerBase* self, intptr_t slot);
int KViewStateMaintainerBase_QBaseReceivers(const KViewStateMaintainerBase* self, const char* signal);
bool KViewStateMaintainerBase_IsSignalConnected(const KViewStateMaintainerBase* self, const QMetaMethod* signal);
void KViewStateMaintainerBase_OnIsSignalConnected(const KViewStateMaintainerBase* self, intptr_t slot);
bool KViewStateMaintainerBase_QBaseIsSignalConnected(const KViewStateMaintainerBase* self, const QMetaMethod* signal);
void KViewStateMaintainerBase_Delete(KViewStateMaintainerBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
