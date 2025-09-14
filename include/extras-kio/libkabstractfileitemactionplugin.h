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
libqt_string KAbstractFileItemActionPlugin_Tr(const char* s);
libqt_list /* of QAction* */ KAbstractFileItemActionPlugin_Actions(KAbstractFileItemActionPlugin* self, const KFileItemListProperties* fileItemInfos, QWidget* parentWidget);
void KAbstractFileItemActionPlugin_Error(KAbstractFileItemActionPlugin* self, const libqt_string errorMessage);
void KAbstractFileItemActionPlugin_Connect_Error(KAbstractFileItemActionPlugin* self, intptr_t slot);
libqt_string KAbstractFileItemActionPlugin_Tr2(const char* s, const char* c);
libqt_string KAbstractFileItemActionPlugin_Tr3(const char* s, const char* c, int n);
void KAbstractFileItemActionPlugin_OnMetacall(KAbstractFileItemActionPlugin* self, intptr_t slot);
int KAbstractFileItemActionPlugin_QBaseMetacall(KAbstractFileItemActionPlugin* self, int param1, int param2, void** param3);
void KAbstractFileItemActionPlugin_OnActions(KAbstractFileItemActionPlugin* self, intptr_t slot);
libqt_list /* of QAction* */ KAbstractFileItemActionPlugin_QBaseActions(KAbstractFileItemActionPlugin* self, const KFileItemListProperties* fileItemInfos, QWidget* parentWidget);
bool KAbstractFileItemActionPlugin_Event(KAbstractFileItemActionPlugin* self, QEvent* event);
void KAbstractFileItemActionPlugin_OnEvent(KAbstractFileItemActionPlugin* self, intptr_t slot);
bool KAbstractFileItemActionPlugin_QBaseEvent(KAbstractFileItemActionPlugin* self, QEvent* event);
bool KAbstractFileItemActionPlugin_EventFilter(KAbstractFileItemActionPlugin* self, QObject* watched, QEvent* event);
void KAbstractFileItemActionPlugin_OnEventFilter(KAbstractFileItemActionPlugin* self, intptr_t slot);
bool KAbstractFileItemActionPlugin_QBaseEventFilter(KAbstractFileItemActionPlugin* self, QObject* watched, QEvent* event);
void KAbstractFileItemActionPlugin_TimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event);
void KAbstractFileItemActionPlugin_OnTimerEvent(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_QBaseTimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event);
void KAbstractFileItemActionPlugin_ChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event);
void KAbstractFileItemActionPlugin_OnChildEvent(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_QBaseChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event);
void KAbstractFileItemActionPlugin_CustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event);
void KAbstractFileItemActionPlugin_OnCustomEvent(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_QBaseCustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event);
void KAbstractFileItemActionPlugin_ConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
void KAbstractFileItemActionPlugin_OnConnectNotify(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_QBaseConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
void KAbstractFileItemActionPlugin_DisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
void KAbstractFileItemActionPlugin_OnDisconnectNotify(KAbstractFileItemActionPlugin* self, intptr_t slot);
void KAbstractFileItemActionPlugin_QBaseDisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
QObject* KAbstractFileItemActionPlugin_Sender(const KAbstractFileItemActionPlugin* self);
void KAbstractFileItemActionPlugin_OnSender(const KAbstractFileItemActionPlugin* self, intptr_t slot);
QObject* KAbstractFileItemActionPlugin_QBaseSender(const KAbstractFileItemActionPlugin* self);
int KAbstractFileItemActionPlugin_SenderSignalIndex(const KAbstractFileItemActionPlugin* self);
void KAbstractFileItemActionPlugin_OnSenderSignalIndex(const KAbstractFileItemActionPlugin* self, intptr_t slot);
int KAbstractFileItemActionPlugin_QBaseSenderSignalIndex(const KAbstractFileItemActionPlugin* self);
int KAbstractFileItemActionPlugin_Receivers(const KAbstractFileItemActionPlugin* self, const char* signal);
void KAbstractFileItemActionPlugin_OnReceivers(const KAbstractFileItemActionPlugin* self, intptr_t slot);
int KAbstractFileItemActionPlugin_QBaseReceivers(const KAbstractFileItemActionPlugin* self, const char* signal);
bool KAbstractFileItemActionPlugin_IsSignalConnected(const KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
void KAbstractFileItemActionPlugin_OnIsSignalConnected(const KAbstractFileItemActionPlugin* self, intptr_t slot);
bool KAbstractFileItemActionPlugin_QBaseIsSignalConnected(const KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
void KAbstractFileItemActionPlugin_Delete(KAbstractFileItemActionPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
