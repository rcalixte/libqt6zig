#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKPROPERTIESDIALOGPLUGIN_H
#define SRC_EXTRAS_KIOC_LIBKPROPERTIESDIALOGPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPropertiesDialogPlugin KPropertiesDialogPlugin;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KPropertiesDialogPlugin* KPropertiesDialogPlugin_new(QObject* parent);
QMetaObject* KPropertiesDialogPlugin_MetaObject(const KPropertiesDialogPlugin* self);
void* KPropertiesDialogPlugin_Metacast(KPropertiesDialogPlugin* self, const char* param1);
int KPropertiesDialogPlugin_Metacall(KPropertiesDialogPlugin* self, int param1, int param2, void** param3);
void KPropertiesDialogPlugin_ApplyChanges(KPropertiesDialogPlugin* self);
void KPropertiesDialogPlugin_SetDirty(KPropertiesDialogPlugin* self);
bool KPropertiesDialogPlugin_IsDirty(const KPropertiesDialogPlugin* self);
void KPropertiesDialogPlugin_Changed(KPropertiesDialogPlugin* self);
void KPropertiesDialogPlugin_Connect_Changed(KPropertiesDialogPlugin* self, intptr_t slot);
void KPropertiesDialogPlugin_SetDirty1(KPropertiesDialogPlugin* self, bool b);
void KPropertiesDialogPlugin_OnMetaObject(const KPropertiesDialogPlugin* self, intptr_t slot);
QMetaObject* KPropertiesDialogPlugin_SuperMetaObject(const KPropertiesDialogPlugin* self);
void KPropertiesDialogPlugin_OnMetacast(KPropertiesDialogPlugin* self, intptr_t slot);
void* KPropertiesDialogPlugin_SuperMetacast(KPropertiesDialogPlugin* self, const char* param1);
void KPropertiesDialogPlugin_OnMetacall(KPropertiesDialogPlugin* self, intptr_t slot);
int KPropertiesDialogPlugin_SuperMetacall(KPropertiesDialogPlugin* self, int param1, int param2, void** param3);
void KPropertiesDialogPlugin_OnApplyChanges(KPropertiesDialogPlugin* self, intptr_t slot);
void KPropertiesDialogPlugin_SuperApplyChanges(KPropertiesDialogPlugin* self);
bool KPropertiesDialogPlugin_Event(KPropertiesDialogPlugin* self, QEvent* event);
void KPropertiesDialogPlugin_OnEvent(KPropertiesDialogPlugin* self, intptr_t slot);
bool KPropertiesDialogPlugin_SuperEvent(KPropertiesDialogPlugin* self, QEvent* event);
bool KPropertiesDialogPlugin_EventFilter(KPropertiesDialogPlugin* self, QObject* watched, QEvent* event);
void KPropertiesDialogPlugin_OnEventFilter(KPropertiesDialogPlugin* self, intptr_t slot);
bool KPropertiesDialogPlugin_SuperEventFilter(KPropertiesDialogPlugin* self, QObject* watched, QEvent* event);
void KPropertiesDialogPlugin_TimerEvent(KPropertiesDialogPlugin* self, QTimerEvent* event);
void KPropertiesDialogPlugin_OnTimerEvent(KPropertiesDialogPlugin* self, intptr_t slot);
void KPropertiesDialogPlugin_SuperTimerEvent(KPropertiesDialogPlugin* self, QTimerEvent* event);
void KPropertiesDialogPlugin_ChildEvent(KPropertiesDialogPlugin* self, QChildEvent* event);
void KPropertiesDialogPlugin_OnChildEvent(KPropertiesDialogPlugin* self, intptr_t slot);
void KPropertiesDialogPlugin_SuperChildEvent(KPropertiesDialogPlugin* self, QChildEvent* event);
void KPropertiesDialogPlugin_CustomEvent(KPropertiesDialogPlugin* self, QEvent* event);
void KPropertiesDialogPlugin_OnCustomEvent(KPropertiesDialogPlugin* self, intptr_t slot);
void KPropertiesDialogPlugin_SuperCustomEvent(KPropertiesDialogPlugin* self, QEvent* event);
void KPropertiesDialogPlugin_ConnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal);
void KPropertiesDialogPlugin_OnConnectNotify(KPropertiesDialogPlugin* self, intptr_t slot);
void KPropertiesDialogPlugin_SuperConnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal);
void KPropertiesDialogPlugin_DisconnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal);
void KPropertiesDialogPlugin_OnDisconnectNotify(KPropertiesDialogPlugin* self, intptr_t slot);
void KPropertiesDialogPlugin_SuperDisconnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal);
int KPropertiesDialogPlugin_FontHeight(const KPropertiesDialogPlugin* self);
void KPropertiesDialogPlugin_OnFontHeight(const KPropertiesDialogPlugin* self, intptr_t slot);
int KPropertiesDialogPlugin_SuperFontHeight(const KPropertiesDialogPlugin* self);
QObject* KPropertiesDialogPlugin_Sender(const KPropertiesDialogPlugin* self);
void KPropertiesDialogPlugin_OnSender(const KPropertiesDialogPlugin* self, intptr_t slot);
QObject* KPropertiesDialogPlugin_SuperSender(const KPropertiesDialogPlugin* self);
int KPropertiesDialogPlugin_SenderSignalIndex(const KPropertiesDialogPlugin* self);
void KPropertiesDialogPlugin_OnSenderSignalIndex(const KPropertiesDialogPlugin* self, intptr_t slot);
int KPropertiesDialogPlugin_SuperSenderSignalIndex(const KPropertiesDialogPlugin* self);
int KPropertiesDialogPlugin_Receivers(const KPropertiesDialogPlugin* self, const char* signal);
void KPropertiesDialogPlugin_OnReceivers(const KPropertiesDialogPlugin* self, intptr_t slot);
int KPropertiesDialogPlugin_SuperReceivers(const KPropertiesDialogPlugin* self, const char* signal);
bool KPropertiesDialogPlugin_IsSignalConnected(const KPropertiesDialogPlugin* self, const QMetaMethod* signal);
void KPropertiesDialogPlugin_OnIsSignalConnected(const KPropertiesDialogPlugin* self, intptr_t slot);
bool KPropertiesDialogPlugin_SuperIsSignalConnected(const KPropertiesDialogPlugin* self, const QMetaMethod* signal);
void KPropertiesDialogPlugin_Delete(KPropertiesDialogPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
