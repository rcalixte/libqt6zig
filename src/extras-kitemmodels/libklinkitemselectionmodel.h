#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBKLINKITEMSELECTIONMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBKLINKITEMSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLinkItemSelectionModel KLinkItemSelectionModel;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KLinkItemSelectionModel* KLinkItemSelectionModel_new(QAbstractItemModel* targetModel, QItemSelectionModel* linkedItemSelectionModel);
KLinkItemSelectionModel* KLinkItemSelectionModel_new2();
KLinkItemSelectionModel* KLinkItemSelectionModel_new3(QAbstractItemModel* targetModel, QItemSelectionModel* linkedItemSelectionModel, QObject* parent);
KLinkItemSelectionModel* KLinkItemSelectionModel_new4(QObject* parent);
QMetaObject* KLinkItemSelectionModel_MetaObject(const KLinkItemSelectionModel* self);
void* KLinkItemSelectionModel_Metacast(KLinkItemSelectionModel* self, const char* param1);
int KLinkItemSelectionModel_Metacall(KLinkItemSelectionModel* self, int param1, int param2, void** param3);
QItemSelectionModel* KLinkItemSelectionModel_LinkedItemSelectionModel(const KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_SetLinkedItemSelectionModel(KLinkItemSelectionModel* self, QItemSelectionModel* selectionModel);
void KLinkItemSelectionModel_Select(KLinkItemSelectionModel* self, const QModelIndex* index, int command);
void KLinkItemSelectionModel_Select2(KLinkItemSelectionModel* self, const QItemSelection* selection, int command);
void KLinkItemSelectionModel_LinkedItemSelectionModelChanged(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_Connect_LinkedItemSelectionModelChanged(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_OnMetaObject(const KLinkItemSelectionModel* self, intptr_t slot);
QMetaObject* KLinkItemSelectionModel_SuperMetaObject(const KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnMetacast(KLinkItemSelectionModel* self, intptr_t slot);
void* KLinkItemSelectionModel_SuperMetacast(KLinkItemSelectionModel* self, const char* param1);
void KLinkItemSelectionModel_OnMetacall(KLinkItemSelectionModel* self, intptr_t slot);
int KLinkItemSelectionModel_SuperMetacall(KLinkItemSelectionModel* self, int param1, int param2, void** param3);
void KLinkItemSelectionModel_OnSelect(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperSelect(KLinkItemSelectionModel* self, const QModelIndex* index, int command);
void KLinkItemSelectionModel_OnSelect2(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperSelect2(KLinkItemSelectionModel* self, const QItemSelection* selection, int command);
void KLinkItemSelectionModel_SetCurrentIndex(KLinkItemSelectionModel* self, const QModelIndex* index, int command);
void KLinkItemSelectionModel_OnSetCurrentIndex(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperSetCurrentIndex(KLinkItemSelectionModel* self, const QModelIndex* index, int command);
void KLinkItemSelectionModel_Clear(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnClear(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperClear(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_Reset(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnReset(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperReset(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_ClearCurrentIndex(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnClearCurrentIndex(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperClearCurrentIndex(KLinkItemSelectionModel* self);
bool KLinkItemSelectionModel_Event(KLinkItemSelectionModel* self, QEvent* event);
void KLinkItemSelectionModel_OnEvent(KLinkItemSelectionModel* self, intptr_t slot);
bool KLinkItemSelectionModel_SuperEvent(KLinkItemSelectionModel* self, QEvent* event);
bool KLinkItemSelectionModel_EventFilter(KLinkItemSelectionModel* self, QObject* watched, QEvent* event);
void KLinkItemSelectionModel_OnEventFilter(KLinkItemSelectionModel* self, intptr_t slot);
bool KLinkItemSelectionModel_SuperEventFilter(KLinkItemSelectionModel* self, QObject* watched, QEvent* event);
void KLinkItemSelectionModel_TimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event);
void KLinkItemSelectionModel_OnTimerEvent(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperTimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event);
void KLinkItemSelectionModel_ChildEvent(KLinkItemSelectionModel* self, QChildEvent* event);
void KLinkItemSelectionModel_OnChildEvent(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperChildEvent(KLinkItemSelectionModel* self, QChildEvent* event);
void KLinkItemSelectionModel_CustomEvent(KLinkItemSelectionModel* self, QEvent* event);
void KLinkItemSelectionModel_OnCustomEvent(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperCustomEvent(KLinkItemSelectionModel* self, QEvent* event);
void KLinkItemSelectionModel_ConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_OnConnectNotify(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_DisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_OnDisconnectNotify(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperDisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_EmitSelectionChanged(KLinkItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
void KLinkItemSelectionModel_OnEmitSelectionChanged(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_SuperEmitSelectionChanged(KLinkItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
QObject* KLinkItemSelectionModel_Sender(const KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnSender(const KLinkItemSelectionModel* self, intptr_t slot);
QObject* KLinkItemSelectionModel_SuperSender(const KLinkItemSelectionModel* self);
int KLinkItemSelectionModel_SenderSignalIndex(const KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnSenderSignalIndex(const KLinkItemSelectionModel* self, intptr_t slot);
int KLinkItemSelectionModel_SuperSenderSignalIndex(const KLinkItemSelectionModel* self);
int KLinkItemSelectionModel_Receivers(const KLinkItemSelectionModel* self, const char* signal);
void KLinkItemSelectionModel_OnReceivers(const KLinkItemSelectionModel* self, intptr_t slot);
int KLinkItemSelectionModel_SuperReceivers(const KLinkItemSelectionModel* self, const char* signal);
bool KLinkItemSelectionModel_IsSignalConnected(const KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_OnIsSignalConnected(const KLinkItemSelectionModel* self, intptr_t slot);
bool KLinkItemSelectionModel_SuperIsSignalConnected(const KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_Delete(KLinkItemSelectionModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
