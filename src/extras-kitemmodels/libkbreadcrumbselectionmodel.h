#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBKBREADCRUMBSELECTIONMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBKBREADCRUMBSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KBreadcrumbSelectionModel KBreadcrumbSelectionModel;
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

KBreadcrumbSelectionModel* KBreadcrumbSelectionModel_new(QItemSelectionModel* selectionModel);
KBreadcrumbSelectionModel* KBreadcrumbSelectionModel_new2(QItemSelectionModel* selectionModel, int target);
KBreadcrumbSelectionModel* KBreadcrumbSelectionModel_new3(QItemSelectionModel* selectionModel, QObject* parent);
KBreadcrumbSelectionModel* KBreadcrumbSelectionModel_new4(QItemSelectionModel* selectionModel, int target, QObject* parent);
QMetaObject* KBreadcrumbSelectionModel_MetaObject(const KBreadcrumbSelectionModel* self);
void* KBreadcrumbSelectionModel_Metacast(KBreadcrumbSelectionModel* self, const char* param1);
int KBreadcrumbSelectionModel_Metacall(KBreadcrumbSelectionModel* self, int param1, int param2, void** param3);
libqt_string KBreadcrumbSelectionModel_Tr(const char* s);
bool KBreadcrumbSelectionModel_IsActualSelectionIncluded(const KBreadcrumbSelectionModel* self);
void KBreadcrumbSelectionModel_SetActualSelectionIncluded(KBreadcrumbSelectionModel* self, bool isActualSelectionIncluded);
int KBreadcrumbSelectionModel_BreadcrumbLength(const KBreadcrumbSelectionModel* self);
void KBreadcrumbSelectionModel_SetBreadcrumbLength(KBreadcrumbSelectionModel* self, int breadcrumbLength);
void KBreadcrumbSelectionModel_Select(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command);
void KBreadcrumbSelectionModel_Select2(KBreadcrumbSelectionModel* self, const QItemSelection* selection, int command);
libqt_string KBreadcrumbSelectionModel_Tr2(const char* s, const char* c);
libqt_string KBreadcrumbSelectionModel_Tr3(const char* s, const char* c, int n);
void KBreadcrumbSelectionModel_OnMetacall(KBreadcrumbSelectionModel* self, intptr_t slot);
int KBreadcrumbSelectionModel_QBaseMetacall(KBreadcrumbSelectionModel* self, int param1, int param2, void** param3);
void KBreadcrumbSelectionModel_OnSelect(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseSelect(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command);
void KBreadcrumbSelectionModel_OnSelect2(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseSelect2(KBreadcrumbSelectionModel* self, const QItemSelection* selection, int command);
void KBreadcrumbSelectionModel_SetCurrentIndex(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command);
void KBreadcrumbSelectionModel_OnSetCurrentIndex(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseSetCurrentIndex(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command);
void KBreadcrumbSelectionModel_Clear(KBreadcrumbSelectionModel* self);
void KBreadcrumbSelectionModel_OnClear(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseClear(KBreadcrumbSelectionModel* self);
void KBreadcrumbSelectionModel_Reset(KBreadcrumbSelectionModel* self);
void KBreadcrumbSelectionModel_OnReset(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseReset(KBreadcrumbSelectionModel* self);
void KBreadcrumbSelectionModel_ClearCurrentIndex(KBreadcrumbSelectionModel* self);
void KBreadcrumbSelectionModel_OnClearCurrentIndex(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseClearCurrentIndex(KBreadcrumbSelectionModel* self);
bool KBreadcrumbSelectionModel_Event(KBreadcrumbSelectionModel* self, QEvent* event);
void KBreadcrumbSelectionModel_OnEvent(KBreadcrumbSelectionModel* self, intptr_t slot);
bool KBreadcrumbSelectionModel_QBaseEvent(KBreadcrumbSelectionModel* self, QEvent* event);
bool KBreadcrumbSelectionModel_EventFilter(KBreadcrumbSelectionModel* self, QObject* watched, QEvent* event);
void KBreadcrumbSelectionModel_OnEventFilter(KBreadcrumbSelectionModel* self, intptr_t slot);
bool KBreadcrumbSelectionModel_QBaseEventFilter(KBreadcrumbSelectionModel* self, QObject* watched, QEvent* event);
void KBreadcrumbSelectionModel_TimerEvent(KBreadcrumbSelectionModel* self, QTimerEvent* event);
void KBreadcrumbSelectionModel_OnTimerEvent(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseTimerEvent(KBreadcrumbSelectionModel* self, QTimerEvent* event);
void KBreadcrumbSelectionModel_ChildEvent(KBreadcrumbSelectionModel* self, QChildEvent* event);
void KBreadcrumbSelectionModel_OnChildEvent(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseChildEvent(KBreadcrumbSelectionModel* self, QChildEvent* event);
void KBreadcrumbSelectionModel_CustomEvent(KBreadcrumbSelectionModel* self, QEvent* event);
void KBreadcrumbSelectionModel_OnCustomEvent(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseCustomEvent(KBreadcrumbSelectionModel* self, QEvent* event);
void KBreadcrumbSelectionModel_ConnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
void KBreadcrumbSelectionModel_OnConnectNotify(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseConnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
void KBreadcrumbSelectionModel_DisconnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
void KBreadcrumbSelectionModel_OnDisconnectNotify(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseDisconnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
void KBreadcrumbSelectionModel_EmitSelectionChanged(KBreadcrumbSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
void KBreadcrumbSelectionModel_OnEmitSelectionChanged(KBreadcrumbSelectionModel* self, intptr_t slot);
void KBreadcrumbSelectionModel_QBaseEmitSelectionChanged(KBreadcrumbSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
QObject* KBreadcrumbSelectionModel_Sender(const KBreadcrumbSelectionModel* self);
void KBreadcrumbSelectionModel_OnSender(const KBreadcrumbSelectionModel* self, intptr_t slot);
QObject* KBreadcrumbSelectionModel_QBaseSender(const KBreadcrumbSelectionModel* self);
int KBreadcrumbSelectionModel_SenderSignalIndex(const KBreadcrumbSelectionModel* self);
void KBreadcrumbSelectionModel_OnSenderSignalIndex(const KBreadcrumbSelectionModel* self, intptr_t slot);
int KBreadcrumbSelectionModel_QBaseSenderSignalIndex(const KBreadcrumbSelectionModel* self);
int KBreadcrumbSelectionModel_Receivers(const KBreadcrumbSelectionModel* self, const char* signal);
void KBreadcrumbSelectionModel_OnReceivers(const KBreadcrumbSelectionModel* self, intptr_t slot);
int KBreadcrumbSelectionModel_QBaseReceivers(const KBreadcrumbSelectionModel* self, const char* signal);
bool KBreadcrumbSelectionModel_IsSignalConnected(const KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
void KBreadcrumbSelectionModel_OnIsSignalConnected(const KBreadcrumbSelectionModel* self, intptr_t slot);
bool KBreadcrumbSelectionModel_QBaseIsSignalConnected(const KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
void KBreadcrumbSelectionModel_Delete(KBreadcrumbSelectionModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
