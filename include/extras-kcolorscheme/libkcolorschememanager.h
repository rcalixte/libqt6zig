#pragma once
#ifndef SRC_EXTRAS_KCOLORSCHEMEC_LIBKCOLORSCHEMEMANAGER_H
#define SRC_EXTRAS_KCOLORSCHEMEC_LIBKCOLORSCHEMEMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KColorSchemeManager KColorSchemeManager;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KColorSchemeManager* KColorSchemeManager_new();
KColorSchemeManager* KColorSchemeManager_new2(QObject* parent);
QMetaObject* KColorSchemeManager_MetaObject(const KColorSchemeManager* self);
void* KColorSchemeManager_Metacast(KColorSchemeManager* self, const char* param1);
int KColorSchemeManager_Metacall(KColorSchemeManager* self, int param1, int param2, void** param3);
libqt_string KColorSchemeManager_Tr(const char* s);
QAbstractItemModel* KColorSchemeManager_Model(const KColorSchemeManager* self);
QModelIndex* KColorSchemeManager_IndexForSchemeId(const KColorSchemeManager* self, const libqt_string id);
QModelIndex* KColorSchemeManager_IndexForScheme(const KColorSchemeManager* self, const libqt_string name);
void KColorSchemeManager_SaveSchemeToConfigFile(const KColorSchemeManager* self, const libqt_string schemeName);
void KColorSchemeManager_SetAutosaveChanges(KColorSchemeManager* self, bool autosaveChanges);
libqt_string KColorSchemeManager_ActiveSchemeId(const KColorSchemeManager* self);
libqt_string KColorSchemeManager_ActiveSchemeName(const KColorSchemeManager* self);
KColorSchemeManager* KColorSchemeManager_Instance();
void KColorSchemeManager_ActivateScheme(KColorSchemeManager* self, const QModelIndex* index);
libqt_string KColorSchemeManager_Tr2(const char* s, const char* c);
libqt_string KColorSchemeManager_Tr3(const char* s, const char* c, int n);
void KColorSchemeManager_OnMetacall(KColorSchemeManager* self, intptr_t slot);
int KColorSchemeManager_QBaseMetacall(KColorSchemeManager* self, int param1, int param2, void** param3);
bool KColorSchemeManager_Event(KColorSchemeManager* self, QEvent* event);
void KColorSchemeManager_OnEvent(KColorSchemeManager* self, intptr_t slot);
bool KColorSchemeManager_QBaseEvent(KColorSchemeManager* self, QEvent* event);
bool KColorSchemeManager_EventFilter(KColorSchemeManager* self, QObject* watched, QEvent* event);
void KColorSchemeManager_OnEventFilter(KColorSchemeManager* self, intptr_t slot);
bool KColorSchemeManager_QBaseEventFilter(KColorSchemeManager* self, QObject* watched, QEvent* event);
void KColorSchemeManager_TimerEvent(KColorSchemeManager* self, QTimerEvent* event);
void KColorSchemeManager_OnTimerEvent(KColorSchemeManager* self, intptr_t slot);
void KColorSchemeManager_QBaseTimerEvent(KColorSchemeManager* self, QTimerEvent* event);
void KColorSchemeManager_ChildEvent(KColorSchemeManager* self, QChildEvent* event);
void KColorSchemeManager_OnChildEvent(KColorSchemeManager* self, intptr_t slot);
void KColorSchemeManager_QBaseChildEvent(KColorSchemeManager* self, QChildEvent* event);
void KColorSchemeManager_CustomEvent(KColorSchemeManager* self, QEvent* event);
void KColorSchemeManager_OnCustomEvent(KColorSchemeManager* self, intptr_t slot);
void KColorSchemeManager_QBaseCustomEvent(KColorSchemeManager* self, QEvent* event);
void KColorSchemeManager_ConnectNotify(KColorSchemeManager* self, const QMetaMethod* signal);
void KColorSchemeManager_OnConnectNotify(KColorSchemeManager* self, intptr_t slot);
void KColorSchemeManager_QBaseConnectNotify(KColorSchemeManager* self, const QMetaMethod* signal);
void KColorSchemeManager_DisconnectNotify(KColorSchemeManager* self, const QMetaMethod* signal);
void KColorSchemeManager_OnDisconnectNotify(KColorSchemeManager* self, intptr_t slot);
void KColorSchemeManager_QBaseDisconnectNotify(KColorSchemeManager* self, const QMetaMethod* signal);
QObject* KColorSchemeManager_Sender(const KColorSchemeManager* self);
void KColorSchemeManager_OnSender(const KColorSchemeManager* self, intptr_t slot);
QObject* KColorSchemeManager_QBaseSender(const KColorSchemeManager* self);
int KColorSchemeManager_SenderSignalIndex(const KColorSchemeManager* self);
void KColorSchemeManager_OnSenderSignalIndex(const KColorSchemeManager* self, intptr_t slot);
int KColorSchemeManager_QBaseSenderSignalIndex(const KColorSchemeManager* self);
int KColorSchemeManager_Receivers(const KColorSchemeManager* self, const char* signal);
void KColorSchemeManager_OnReceivers(const KColorSchemeManager* self, intptr_t slot);
int KColorSchemeManager_QBaseReceivers(const KColorSchemeManager* self, const char* signal);
bool KColorSchemeManager_IsSignalConnected(const KColorSchemeManager* self, const QMetaMethod* signal);
void KColorSchemeManager_OnIsSignalConnected(const KColorSchemeManager* self, intptr_t slot);
bool KColorSchemeManager_QBaseIsSignalConnected(const KColorSchemeManager* self, const QMetaMethod* signal);
void KColorSchemeManager_Delete(KColorSchemeManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
