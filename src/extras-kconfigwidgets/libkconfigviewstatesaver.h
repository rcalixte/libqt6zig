#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBKCONFIGVIEWSTATESAVER_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBKCONFIGVIEWSTATESAVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfigGroup KConfigGroup;
typedef struct KConfigViewStateSaver KConfigViewStateSaver;
typedef struct KViewStateSerializer KViewStateSerializer;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KConfigViewStateSaver* KConfigViewStateSaver_new();
KConfigViewStateSaver* KConfigViewStateSaver_new2(QObject* parent);
QMetaObject* KConfigViewStateSaver_MetaObject(const KConfigViewStateSaver* self);
void* KConfigViewStateSaver_Metacast(KConfigViewStateSaver* self, const char* param1);
int KConfigViewStateSaver_Metacall(KConfigViewStateSaver* self, int param1, int param2, void** param3);
libqt_string KConfigViewStateSaver_Tr(const char* s);
void KConfigViewStateSaver_SaveState(KConfigViewStateSaver* self, KConfigGroup* configGroup);
void KConfigViewStateSaver_RestoreState(KConfigViewStateSaver* self, const KConfigGroup* configGroup);
libqt_string KConfigViewStateSaver_Tr2(const char* s, const char* c);
libqt_string KConfigViewStateSaver_Tr3(const char* s, const char* c, int n);
void KConfigViewStateSaver_OnMetacall(KConfigViewStateSaver* self, intptr_t slot);
int KConfigViewStateSaver_QBaseMetacall(KConfigViewStateSaver* self, int param1, int param2, void** param3);
QModelIndex* KConfigViewStateSaver_IndexFromConfigString(const KConfigViewStateSaver* self, const QAbstractItemModel* model, const libqt_string key);
void KConfigViewStateSaver_OnIndexFromConfigString(const KConfigViewStateSaver* self, intptr_t slot);
QModelIndex* KConfigViewStateSaver_QBaseIndexFromConfigString(const KConfigViewStateSaver* self, const QAbstractItemModel* model, const libqt_string key);
libqt_string KConfigViewStateSaver_IndexToConfigString(const KConfigViewStateSaver* self, const QModelIndex* index);
void KConfigViewStateSaver_OnIndexToConfigString(const KConfigViewStateSaver* self, intptr_t slot);
libqt_string KConfigViewStateSaver_QBaseIndexToConfigString(const KConfigViewStateSaver* self, const QModelIndex* index);
bool KConfigViewStateSaver_Event(KConfigViewStateSaver* self, QEvent* event);
void KConfigViewStateSaver_OnEvent(KConfigViewStateSaver* self, intptr_t slot);
bool KConfigViewStateSaver_QBaseEvent(KConfigViewStateSaver* self, QEvent* event);
bool KConfigViewStateSaver_EventFilter(KConfigViewStateSaver* self, QObject* watched, QEvent* event);
void KConfigViewStateSaver_OnEventFilter(KConfigViewStateSaver* self, intptr_t slot);
bool KConfigViewStateSaver_QBaseEventFilter(KConfigViewStateSaver* self, QObject* watched, QEvent* event);
void KConfigViewStateSaver_TimerEvent(KConfigViewStateSaver* self, QTimerEvent* event);
void KConfigViewStateSaver_OnTimerEvent(KConfigViewStateSaver* self, intptr_t slot);
void KConfigViewStateSaver_QBaseTimerEvent(KConfigViewStateSaver* self, QTimerEvent* event);
void KConfigViewStateSaver_ChildEvent(KConfigViewStateSaver* self, QChildEvent* event);
void KConfigViewStateSaver_OnChildEvent(KConfigViewStateSaver* self, intptr_t slot);
void KConfigViewStateSaver_QBaseChildEvent(KConfigViewStateSaver* self, QChildEvent* event);
void KConfigViewStateSaver_CustomEvent(KConfigViewStateSaver* self, QEvent* event);
void KConfigViewStateSaver_OnCustomEvent(KConfigViewStateSaver* self, intptr_t slot);
void KConfigViewStateSaver_QBaseCustomEvent(KConfigViewStateSaver* self, QEvent* event);
void KConfigViewStateSaver_ConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
void KConfigViewStateSaver_OnConnectNotify(KConfigViewStateSaver* self, intptr_t slot);
void KConfigViewStateSaver_QBaseConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
void KConfigViewStateSaver_DisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
void KConfigViewStateSaver_OnDisconnectNotify(KConfigViewStateSaver* self, intptr_t slot);
void KConfigViewStateSaver_QBaseDisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
QObject* KConfigViewStateSaver_Sender(const KConfigViewStateSaver* self);
void KConfigViewStateSaver_OnSender(const KConfigViewStateSaver* self, intptr_t slot);
QObject* KConfigViewStateSaver_QBaseSender(const KConfigViewStateSaver* self);
int KConfigViewStateSaver_SenderSignalIndex(const KConfigViewStateSaver* self);
void KConfigViewStateSaver_OnSenderSignalIndex(const KConfigViewStateSaver* self, intptr_t slot);
int KConfigViewStateSaver_QBaseSenderSignalIndex(const KConfigViewStateSaver* self);
int KConfigViewStateSaver_Receivers(const KConfigViewStateSaver* self, const char* signal);
void KConfigViewStateSaver_OnReceivers(const KConfigViewStateSaver* self, intptr_t slot);
int KConfigViewStateSaver_QBaseReceivers(const KConfigViewStateSaver* self, const char* signal);
bool KConfigViewStateSaver_IsSignalConnected(const KConfigViewStateSaver* self, const QMetaMethod* signal);
void KConfigViewStateSaver_OnIsSignalConnected(const KConfigViewStateSaver* self, intptr_t slot);
bool KConfigViewStateSaver_QBaseIsSignalConnected(const KConfigViewStateSaver* self, const QMetaMethod* signal);
void KConfigViewStateSaver_Delete(KConfigViewStateSaver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
