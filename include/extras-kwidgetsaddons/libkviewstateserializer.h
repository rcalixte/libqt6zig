#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKVIEWSTATESERIALIZER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKVIEWSTATESERIALIZER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KViewStateSerializer KViewStateSerializer;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KViewStateSerializer* KViewStateSerializer_new();
KViewStateSerializer* KViewStateSerializer_new2(QObject* parent);
QMetaObject* KViewStateSerializer_MetaObject(const KViewStateSerializer* self);
void* KViewStateSerializer_Metacast(KViewStateSerializer* self, const char* param1);
int KViewStateSerializer_Metacall(KViewStateSerializer* self, int param1, int param2, void** param3);
void KViewStateSerializer_OnMetacall(KViewStateSerializer* self, intptr_t slot);
int KViewStateSerializer_QBaseMetacall(KViewStateSerializer* self, int param1, int param2, void** param3);
libqt_string KViewStateSerializer_Tr(const char* s);
QAbstractItemView* KViewStateSerializer_View(const KViewStateSerializer* self);
void KViewStateSerializer_SetView(KViewStateSerializer* self, QAbstractItemView* view);
QItemSelectionModel* KViewStateSerializer_SelectionModel(const KViewStateSerializer* self);
void KViewStateSerializer_SetSelectionModel(KViewStateSerializer* self, QItemSelectionModel* selectionModel);
libqt_list /* of libqt_string */ KViewStateSerializer_SelectionKeys(const KViewStateSerializer* self);
libqt_list /* of libqt_string */ KViewStateSerializer_ExpansionKeys(const KViewStateSerializer* self);
libqt_string KViewStateSerializer_CurrentIndexKey(const KViewStateSerializer* self);
libqt_pair /* tuple of int and int */ KViewStateSerializer_ScrollState(const KViewStateSerializer* self);
void KViewStateSerializer_RestoreSelection(KViewStateSerializer* self, const libqt_list /* of libqt_string */ indexStrings);
void KViewStateSerializer_RestoreCurrentItem(KViewStateSerializer* self, const libqt_string indexString);
void KViewStateSerializer_RestoreExpanded(KViewStateSerializer* self, const libqt_list /* of libqt_string */ indexStrings);
void KViewStateSerializer_RestoreScrollState(KViewStateSerializer* self, int verticalScoll, int horizontalScroll);
QModelIndex* KViewStateSerializer_IndexFromConfigString(const KViewStateSerializer* self, const QAbstractItemModel* model, const libqt_string key);
void KViewStateSerializer_OnIndexFromConfigString(const KViewStateSerializer* self, intptr_t slot);
QModelIndex* KViewStateSerializer_QBaseIndexFromConfigString(const KViewStateSerializer* self, const QAbstractItemModel* model, const libqt_string key);
libqt_string KViewStateSerializer_IndexToConfigString(const KViewStateSerializer* self, const QModelIndex* index);
void KViewStateSerializer_OnIndexToConfigString(const KViewStateSerializer* self, intptr_t slot);
libqt_string KViewStateSerializer_QBaseIndexToConfigString(const KViewStateSerializer* self, const QModelIndex* index);
libqt_string KViewStateSerializer_Tr2(const char* s, const char* c);
libqt_string KViewStateSerializer_Tr3(const char* s, const char* c, int n);
bool KViewStateSerializer_Event(KViewStateSerializer* self, QEvent* event);
void KViewStateSerializer_OnEvent(KViewStateSerializer* self, intptr_t slot);
bool KViewStateSerializer_QBaseEvent(KViewStateSerializer* self, QEvent* event);
bool KViewStateSerializer_EventFilter(KViewStateSerializer* self, QObject* watched, QEvent* event);
void KViewStateSerializer_OnEventFilter(KViewStateSerializer* self, intptr_t slot);
bool KViewStateSerializer_QBaseEventFilter(KViewStateSerializer* self, QObject* watched, QEvent* event);
void KViewStateSerializer_TimerEvent(KViewStateSerializer* self, QTimerEvent* event);
void KViewStateSerializer_OnTimerEvent(KViewStateSerializer* self, intptr_t slot);
void KViewStateSerializer_QBaseTimerEvent(KViewStateSerializer* self, QTimerEvent* event);
void KViewStateSerializer_ChildEvent(KViewStateSerializer* self, QChildEvent* event);
void KViewStateSerializer_OnChildEvent(KViewStateSerializer* self, intptr_t slot);
void KViewStateSerializer_QBaseChildEvent(KViewStateSerializer* self, QChildEvent* event);
void KViewStateSerializer_CustomEvent(KViewStateSerializer* self, QEvent* event);
void KViewStateSerializer_OnCustomEvent(KViewStateSerializer* self, intptr_t slot);
void KViewStateSerializer_QBaseCustomEvent(KViewStateSerializer* self, QEvent* event);
void KViewStateSerializer_ConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
void KViewStateSerializer_OnConnectNotify(KViewStateSerializer* self, intptr_t slot);
void KViewStateSerializer_QBaseConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
void KViewStateSerializer_DisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
void KViewStateSerializer_OnDisconnectNotify(KViewStateSerializer* self, intptr_t slot);
void KViewStateSerializer_QBaseDisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
void KViewStateSerializer_RestoreState(KViewStateSerializer* self);
void KViewStateSerializer_OnRestoreState(KViewStateSerializer* self, intptr_t slot);
void KViewStateSerializer_QBaseRestoreState(KViewStateSerializer* self);
QObject* KViewStateSerializer_Sender(const KViewStateSerializer* self);
void KViewStateSerializer_OnSender(const KViewStateSerializer* self, intptr_t slot);
QObject* KViewStateSerializer_QBaseSender(const KViewStateSerializer* self);
int KViewStateSerializer_SenderSignalIndex(const KViewStateSerializer* self);
void KViewStateSerializer_OnSenderSignalIndex(const KViewStateSerializer* self, intptr_t slot);
int KViewStateSerializer_QBaseSenderSignalIndex(const KViewStateSerializer* self);
int KViewStateSerializer_Receivers(const KViewStateSerializer* self, const char* signal);
void KViewStateSerializer_OnReceivers(const KViewStateSerializer* self, intptr_t slot);
int KViewStateSerializer_QBaseReceivers(const KViewStateSerializer* self, const char* signal);
bool KViewStateSerializer_IsSignalConnected(const KViewStateSerializer* self, const QMetaMethod* signal);
void KViewStateSerializer_OnIsSignalConnected(const KViewStateSerializer* self, intptr_t slot);
bool KViewStateSerializer_QBaseIsSignalConnected(const KViewStateSerializer* self, const QMetaMethod* signal);
void KViewStateSerializer_Delete(KViewStateSerializer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
