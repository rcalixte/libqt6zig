#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKABSTRACTFILEITEMACTIONPLUGIN_H
#define SRC_EXTRAS_KIOC_LIBKABSTRACTFILEITEMACTIONPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAbstractFileItemActionPlugin KAbstractFileItemActionPlugin;
typedef struct KFileItemListProperties KFileItemListProperties;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KAbstractFileItemActionPlugin* KAbstractFileItemActionPlugin_new(QObject* parent);
QMetaObject* KAbstractFileItemActionPlugin_MetaObject(const KAbstractFileItemActionPlugin* self);
void* KAbstractFileItemActionPlugin_Metacast(KAbstractFileItemActionPlugin* self, const char* param1);
int KAbstractFileItemActionPlugin_Metacall(KAbstractFileItemActionPlugin* self, int param1, int param2, void** param3);
libqt_list /* of QAction* */ KAbstractFileItemActionPlugin_Actions(KAbstractFileItemActionPlugin* self, const KFileItemListProperties* fileItemInfos, QWidget* parentWidget);
void KAbstractFileItemActionPlugin_Error(KAbstractFileItemActionPlugin* self, const libqt_string errorMessage);
void KAbstractFileItemActionPlugin_Connect_Error(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_OnMetaObject(const KAbstractFileItemActionPlugin* self, intptr_t slot);
QMetaObject* KAbstractFileItemActionPlugin_SuperMetaObject(const KAbstractFileItemActionPlugin* self);
void KAbstractFileItemActionPlugin_OnMetacast(KAbstractFileItemActionPlugin* self, intptr_t slot);
void* KAbstractFileItemActionPlugin_SuperMetacast(KAbstractFileItemActionPlugin* self, const char* param1);
void KAbstractFileItemActionPlugin_OnMetacall(KAbstractFileItemActionPlugin* self, intptr_t slot);
int KAbstractFileItemActionPlugin_SuperMetacall(KAbstractFileItemActionPlugin* self, int param1, int param2, void** param3);
void KAbstractFileItemActionPlugin_OnActions(KAbstractFileItemActionPlugin* self, intptr_t slot);
libqt_list /* of QAction* */ KAbstractFileItemActionPlugin_SuperActions(KAbstractFileItemActionPlugin* self, const KFileItemListProperties* fileItemInfos, QWidget* parentWidget);
bool KAbstractFileItemActionPlugin_Event(KAbstractFileItemActionPlugin* self, QEvent* event);
void KAbstractFileItemActionPlugin_OnEvent(KAbstractFileItemActionPlugin* self, intptr_t slot);
bool KAbstractFileItemActionPlugin_SuperEvent(KAbstractFileItemActionPlugin* self, QEvent* event);
bool KAbstractFileItemActionPlugin_EventFilter(KAbstractFileItemActionPlugin* self, QObject* watched, QEvent* event);
void KAbstractFileItemActionPlugin_OnEventFilter(KAbstractFileItemActionPlugin* self, intptr_t slot);
bool KAbstractFileItemActionPlugin_SuperEventFilter(KAbstractFileItemActionPlugin* self, QObject* watched, QEvent* event);
void KAbstractFileItemActionPlugin_TimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event);
void KAbstractFileItemActionPlugin_OnTimerEvent(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_SuperTimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event);
void KAbstractFileItemActionPlugin_ChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event);
void KAbstractFileItemActionPlugin_OnChildEvent(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_SuperChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event);
void KAbstractFileItemActionPlugin_CustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event);
void KAbstractFileItemActionPlugin_OnCustomEvent(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_SuperCustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event);
void KAbstractFileItemActionPlugin_ConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
void KAbstractFileItemActionPlugin_OnConnectNotify(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_SuperConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
void KAbstractFileItemActionPlugin_DisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
void KAbstractFileItemActionPlugin_OnDisconnectNotify(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_SuperDisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
QObject* KAbstractFileItemActionPlugin_Sender(const KAbstractFileItemActionPlugin* self);
void KAbstractFileItemActionPlugin_OnSender(const KAbstractFileItemActionPlugin* self, intptr_t slot);
QObject* KAbstractFileItemActionPlugin_SuperSender(const KAbstractFileItemActionPlugin* self);
int KAbstractFileItemActionPlugin_SenderSignalIndex(const KAbstractFileItemActionPlugin* self);
void KAbstractFileItemActionPlugin_OnSenderSignalIndex(const KAbstractFileItemActionPlugin* self, intptr_t slot);
int KAbstractFileItemActionPlugin_SuperSenderSignalIndex(const KAbstractFileItemActionPlugin* self);
int KAbstractFileItemActionPlugin_Receivers(const KAbstractFileItemActionPlugin* self, const char* signal);
void KAbstractFileItemActionPlugin_OnReceivers(const KAbstractFileItemActionPlugin* self, intptr_t slot);
int KAbstractFileItemActionPlugin_SuperReceivers(const KAbstractFileItemActionPlugin* self, const char* signal);
bool KAbstractFileItemActionPlugin_IsSignalConnected(const KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
void KAbstractFileItemActionPlugin_OnIsSignalConnected(const KAbstractFileItemActionPlugin* self, intptr_t slot);
bool KAbstractFileItemActionPlugin_SuperIsSignalConnected(const KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
void KAbstractFileItemActionPlugin_Delete(KAbstractFileItemActionPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
