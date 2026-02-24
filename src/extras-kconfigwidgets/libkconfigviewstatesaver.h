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
void KConfigViewStateSaver_SaveState(KConfigViewStateSaver* self, KConfigGroup* configGroup);
void KConfigViewStateSaver_RestoreState(KConfigViewStateSaver* self, const KConfigGroup* configGroup);
void KConfigViewStateSaver_OnMetaObject(const KConfigViewStateSaver* self, intptr_t slot);
QMetaObject* KConfigViewStateSaver_SuperMetaObject(const KConfigViewStateSaver* self);
void KConfigViewStateSaver_OnMetacast(KConfigViewStateSaver* self, intptr_t slot);
void* KConfigViewStateSaver_SuperMetacast(KConfigViewStateSaver* self, const char* param1);
void KConfigViewStateSaver_OnMetacall(KConfigViewStateSaver* self, intptr_t slot);
int KConfigViewStateSaver_SuperMetacall(KConfigViewStateSaver* self, int param1, int param2, void** param3);
QModelIndex* KConfigViewStateSaver_IndexFromConfigString(const KConfigViewStateSaver* self, const QAbstractItemModel* model, const libqt_string key);
void KConfigViewStateSaver_OnIndexFromConfigString(const KConfigViewStateSaver* self, intptr_t slot);
QModelIndex* KConfigViewStateSaver_SuperIndexFromConfigString(const KConfigViewStateSaver* self, const QAbstractItemModel* model, const libqt_string key);
libqt_string KConfigViewStateSaver_IndexToConfigString(const KConfigViewStateSaver* self, const QModelIndex* index);
void KConfigViewStateSaver_OnIndexToConfigString(const KConfigViewStateSaver* self, intptr_t slot);
libqt_string KConfigViewStateSaver_SuperIndexToConfigString(const KConfigViewStateSaver* self, const QModelIndex* index);
bool KConfigViewStateSaver_Event(KConfigViewStateSaver* self, QEvent* event);
void KConfigViewStateSaver_OnEvent(KConfigViewStateSaver* self, intptr_t slot);
bool KConfigViewStateSaver_SuperEvent(KConfigViewStateSaver* self, QEvent* event);
bool KConfigViewStateSaver_EventFilter(KConfigViewStateSaver* self, QObject* watched, QEvent* event);
void KConfigViewStateSaver_OnEventFilter(KConfigViewStateSaver* self, intptr_t slot);
bool KConfigViewStateSaver_SuperEventFilter(KConfigViewStateSaver* self, QObject* watched, QEvent* event);
void KConfigViewStateSaver_TimerEvent(KConfigViewStateSaver* self, QTimerEvent* event);
void KConfigViewStateSaver_OnTimerEvent(KConfigViewStateSaver* self, intptr_t slot);
void KConfigViewStateSaver_SuperTimerEvent(KConfigViewStateSaver* self, QTimerEvent* event);
void KConfigViewStateSaver_ChildEvent(KConfigViewStateSaver* self, QChildEvent* event);
void KConfigViewStateSaver_OnChildEvent(KConfigViewStateSaver* self, intptr_t slot);
void KConfigViewStateSaver_SuperChildEvent(KConfigViewStateSaver* self, QChildEvent* event);
void KConfigViewStateSaver_CustomEvent(KConfigViewStateSaver* self, QEvent* event);
void KConfigViewStateSaver_OnCustomEvent(KConfigViewStateSaver* self, intptr_t slot);
void KConfigViewStateSaver_SuperCustomEvent(KConfigViewStateSaver* self, QEvent* event);
void KConfigViewStateSaver_ConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
void KConfigViewStateSaver_OnConnectNotify(KConfigViewStateSaver* self, intptr_t slot);
void KConfigViewStateSaver_SuperConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
void KConfigViewStateSaver_DisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
void KConfigViewStateSaver_OnDisconnectNotify(KConfigViewStateSaver* self, intptr_t slot);
void KConfigViewStateSaver_SuperDisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
QObject* KConfigViewStateSaver_Sender(const KConfigViewStateSaver* self);
void KConfigViewStateSaver_OnSender(const KConfigViewStateSaver* self, intptr_t slot);
QObject* KConfigViewStateSaver_SuperSender(const KConfigViewStateSaver* self);
int KConfigViewStateSaver_SenderSignalIndex(const KConfigViewStateSaver* self);
void KConfigViewStateSaver_OnSenderSignalIndex(const KConfigViewStateSaver* self, intptr_t slot);
int KConfigViewStateSaver_SuperSenderSignalIndex(const KConfigViewStateSaver* self);
int KConfigViewStateSaver_Receivers(const KConfigViewStateSaver* self, const char* signal);
void KConfigViewStateSaver_OnReceivers(const KConfigViewStateSaver* self, intptr_t slot);
int KConfigViewStateSaver_SuperReceivers(const KConfigViewStateSaver* self, const char* signal);
bool KConfigViewStateSaver_IsSignalConnected(const KConfigViewStateSaver* self, const QMetaMethod* signal);
void KConfigViewStateSaver_OnIsSignalConnected(const KConfigViewStateSaver* self, intptr_t slot);
bool KConfigViewStateSaver_SuperIsSignalConnected(const KConfigViewStateSaver* self, const QMetaMethod* signal);
void KConfigViewStateSaver_Delete(KConfigViewStateSaver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
