#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKCONFIGLOADER_H
#define SRC_EXTRAS_KCONFIGC_LIBKCONFIGLOADER_H

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
typedef struct KConfigLoader KConfigLoader;
typedef struct KConfigSkeleton KConfigSkeleton;
typedef struct KConfigSkeletonItem KConfigSkeletonItem;
typedef struct KCoreConfigSkeleton KCoreConfigSkeleton;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

KConfigLoader* KConfigLoader_new(const libqt_string configFile, QIODevice* xml);
KConfigLoader* KConfigLoader_new2(const KConfigGroup* config, QIODevice* xml);
KConfigLoader* KConfigLoader_new3(const libqt_string configFile, QIODevice* xml, QObject* parent);
KConfigLoader* KConfigLoader_new4(const KConfigGroup* config, QIODevice* xml, QObject* parent);
KConfigSkeletonItem* KConfigLoader_FindItem(const KConfigLoader* self, const libqt_string group, const libqt_string key);
KConfigSkeletonItem* KConfigLoader_FindItemByName(const KConfigLoader* self, const libqt_string name);
QVariant* KConfigLoader_Property(const KConfigLoader* self, const libqt_string name);
bool KConfigLoader_HasGroup(const KConfigLoader* self, const libqt_string group);
libqt_list /* of libqt_string */ KConfigLoader_GroupList(const KConfigLoader* self);
bool KConfigLoader_UsrSave(KConfigLoader* self);
void KConfigLoader_OnUsrSave(KConfigLoader* self, intptr_t slot);
bool KConfigLoader_QBaseUsrSave(KConfigLoader* self);
int KConfigLoader_Metacall(KConfigLoader* self, int param1, int param2, void** param3);
void KConfigLoader_OnMetacall(KConfigLoader* self, intptr_t slot);
int KConfigLoader_QBaseMetacall(KConfigLoader* self, int param1, int param2, void** param3);
void KConfigLoader_SetDefaults(KConfigLoader* self);
void KConfigLoader_OnSetDefaults(KConfigLoader* self, intptr_t slot);
void KConfigLoader_QBaseSetDefaults(KConfigLoader* self);
bool KConfigLoader_UseDefaults(KConfigLoader* self, bool b);
void KConfigLoader_OnUseDefaults(KConfigLoader* self, intptr_t slot);
bool KConfigLoader_QBaseUseDefaults(KConfigLoader* self, bool b);
bool KConfigLoader_UsrUseDefaults(KConfigLoader* self, bool b);
void KConfigLoader_OnUsrUseDefaults(KConfigLoader* self, intptr_t slot);
bool KConfigLoader_QBaseUsrUseDefaults(KConfigLoader* self, bool b);
void KConfigLoader_UsrSetDefaults(KConfigLoader* self);
void KConfigLoader_OnUsrSetDefaults(KConfigLoader* self, intptr_t slot);
void KConfigLoader_QBaseUsrSetDefaults(KConfigLoader* self);
void KConfigLoader_UsrRead(KConfigLoader* self);
void KConfigLoader_OnUsrRead(KConfigLoader* self, intptr_t slot);
void KConfigLoader_QBaseUsrRead(KConfigLoader* self);
bool KConfigLoader_Event(KConfigLoader* self, QEvent* event);
void KConfigLoader_OnEvent(KConfigLoader* self, intptr_t slot);
bool KConfigLoader_QBaseEvent(KConfigLoader* self, QEvent* event);
bool KConfigLoader_EventFilter(KConfigLoader* self, QObject* watched, QEvent* event);
void KConfigLoader_OnEventFilter(KConfigLoader* self, intptr_t slot);
bool KConfigLoader_QBaseEventFilter(KConfigLoader* self, QObject* watched, QEvent* event);
void KConfigLoader_TimerEvent(KConfigLoader* self, QTimerEvent* event);
void KConfigLoader_OnTimerEvent(KConfigLoader* self, intptr_t slot);
void KConfigLoader_QBaseTimerEvent(KConfigLoader* self, QTimerEvent* event);
void KConfigLoader_ChildEvent(KConfigLoader* self, QChildEvent* event);
void KConfigLoader_OnChildEvent(KConfigLoader* self, intptr_t slot);
void KConfigLoader_QBaseChildEvent(KConfigLoader* self, QChildEvent* event);
void KConfigLoader_CustomEvent(KConfigLoader* self, QEvent* event);
void KConfigLoader_OnCustomEvent(KConfigLoader* self, intptr_t slot);
void KConfigLoader_QBaseCustomEvent(KConfigLoader* self, QEvent* event);
void KConfigLoader_ConnectNotify(KConfigLoader* self, const QMetaMethod* signal);
void KConfigLoader_OnConnectNotify(KConfigLoader* self, intptr_t slot);
void KConfigLoader_QBaseConnectNotify(KConfigLoader* self, const QMetaMethod* signal);
void KConfigLoader_DisconnectNotify(KConfigLoader* self, const QMetaMethod* signal);
void KConfigLoader_OnDisconnectNotify(KConfigLoader* self, intptr_t slot);
void KConfigLoader_QBaseDisconnectNotify(KConfigLoader* self, const QMetaMethod* signal);
QObject* KConfigLoader_Sender(const KConfigLoader* self);
void KConfigLoader_OnSender(const KConfigLoader* self, intptr_t slot);
QObject* KConfigLoader_QBaseSender(const KConfigLoader* self);
int KConfigLoader_SenderSignalIndex(const KConfigLoader* self);
void KConfigLoader_OnSenderSignalIndex(const KConfigLoader* self, intptr_t slot);
int KConfigLoader_QBaseSenderSignalIndex(const KConfigLoader* self);
int KConfigLoader_Receivers(const KConfigLoader* self, const char* signal);
void KConfigLoader_OnReceivers(const KConfigLoader* self, intptr_t slot);
int KConfigLoader_QBaseReceivers(const KConfigLoader* self, const char* signal);
bool KConfigLoader_IsSignalConnected(const KConfigLoader* self, const QMetaMethod* signal);
void KConfigLoader_OnIsSignalConnected(const KConfigLoader* self, intptr_t slot);
bool KConfigLoader_QBaseIsSignalConnected(const KConfigLoader* self, const QMetaMethod* signal);
void KConfigLoader_Delete(KConfigLoader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
