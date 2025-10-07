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
libqt_string KLinkItemSelectionModel_Tr(const char* s);
QItemSelectionModel* KLinkItemSelectionModel_LinkedItemSelectionModel(const KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_SetLinkedItemSelectionModel(KLinkItemSelectionModel* self, QItemSelectionModel* selectionModel);
void KLinkItemSelectionModel_Select(KLinkItemSelectionModel* self, const QModelIndex* index, int command);
void KLinkItemSelectionModel_Select2(KLinkItemSelectionModel* self, const QItemSelection* selection, int command);
void KLinkItemSelectionModel_LinkedItemSelectionModelChanged(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_Connect_LinkedItemSelectionModelChanged(KLinkItemSelectionModel* self, intptr_t slot);
libqt_string KLinkItemSelectionModel_Tr2(const char* s, const char* c);
libqt_string KLinkItemSelectionModel_Tr3(const char* s, const char* c, int n);
void KLinkItemSelectionModel_OnMetacall(KLinkItemSelectionModel* self, intptr_t slot);
int KLinkItemSelectionModel_QBaseMetacall(KLinkItemSelectionModel* self, int param1, int param2, void** param3);
void KLinkItemSelectionModel_OnSelect(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseSelect(KLinkItemSelectionModel* self, const QModelIndex* index, int command);
void KLinkItemSelectionModel_OnSelect2(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseSelect2(KLinkItemSelectionModel* self, const QItemSelection* selection, int command);
void KLinkItemSelectionModel_SetCurrentIndex(KLinkItemSelectionModel* self, const QModelIndex* index, int command);
void KLinkItemSelectionModel_OnSetCurrentIndex(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseSetCurrentIndex(KLinkItemSelectionModel* self, const QModelIndex* index, int command);
void KLinkItemSelectionModel_Clear(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnClear(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseClear(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_Reset(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnReset(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseReset(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_ClearCurrentIndex(KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnClearCurrentIndex(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseClearCurrentIndex(KLinkItemSelectionModel* self);
bool KLinkItemSelectionModel_Event(KLinkItemSelectionModel* self, QEvent* event);
void KLinkItemSelectionModel_OnEvent(KLinkItemSelectionModel* self, intptr_t slot);
bool KLinkItemSelectionModel_QBaseEvent(KLinkItemSelectionModel* self, QEvent* event);
bool KLinkItemSelectionModel_EventFilter(KLinkItemSelectionModel* self, QObject* watched, QEvent* event);
void KLinkItemSelectionModel_OnEventFilter(KLinkItemSelectionModel* self, intptr_t slot);
bool KLinkItemSelectionModel_QBaseEventFilter(KLinkItemSelectionModel* self, QObject* watched, QEvent* event);
void KLinkItemSelectionModel_TimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event);
void KLinkItemSelectionModel_OnTimerEvent(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseTimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event);
void KLinkItemSelectionModel_ChildEvent(KLinkItemSelectionModel* self, QChildEvent* event);
void KLinkItemSelectionModel_OnChildEvent(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseChildEvent(KLinkItemSelectionModel* self, QChildEvent* event);
void KLinkItemSelectionModel_CustomEvent(KLinkItemSelectionModel* self, QEvent* event);
void KLinkItemSelectionModel_OnCustomEvent(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseCustomEvent(KLinkItemSelectionModel* self, QEvent* event);
void KLinkItemSelectionModel_ConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_OnConnectNotify(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_DisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_OnDisconnectNotify(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseDisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_EmitSelectionChanged(KLinkItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
void KLinkItemSelectionModel_OnEmitSelectionChanged(KLinkItemSelectionModel* self, intptr_t slot);
void KLinkItemSelectionModel_QBaseEmitSelectionChanged(KLinkItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
QObject* KLinkItemSelectionModel_Sender(const KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnSender(const KLinkItemSelectionModel* self, intptr_t slot);
QObject* KLinkItemSelectionModel_QBaseSender(const KLinkItemSelectionModel* self);
int KLinkItemSelectionModel_SenderSignalIndex(const KLinkItemSelectionModel* self);
void KLinkItemSelectionModel_OnSenderSignalIndex(const KLinkItemSelectionModel* self, intptr_t slot);
int KLinkItemSelectionModel_QBaseSenderSignalIndex(const KLinkItemSelectionModel* self);
int KLinkItemSelectionModel_Receivers(const KLinkItemSelectionModel* self, const char* signal);
void KLinkItemSelectionModel_OnReceivers(const KLinkItemSelectionModel* self, intptr_t slot);
int KLinkItemSelectionModel_QBaseReceivers(const KLinkItemSelectionModel* self, const char* signal);
bool KLinkItemSelectionModel_IsSignalConnected(const KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_OnIsSignalConnected(const KLinkItemSelectionModel* self, intptr_t slot);
bool KLinkItemSelectionModel_QBaseIsSignalConnected(const KLinkItemSelectionModel* self, const QMetaMethod* signal);
void KLinkItemSelectionModel_Delete(KLinkItemSelectionModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
