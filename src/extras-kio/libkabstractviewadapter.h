#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKABSTRACTVIEWADAPTER_H
#define SRC_EXTRAS_KIOC_LIBKABSTRACTVIEWADAPTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAbstractViewAdapter KAbstractViewAdapter;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

KAbstractViewAdapter* KAbstractViewAdapter_new(QObject* parent);
QAbstractItemModel* KAbstractViewAdapter_Model(const KAbstractViewAdapter* self);
QSize* KAbstractViewAdapter_IconSize(const KAbstractViewAdapter* self);
QPalette* KAbstractViewAdapter_Palette(const KAbstractViewAdapter* self);
QRect* KAbstractViewAdapter_VisibleArea(const KAbstractViewAdapter* self);
QRect* KAbstractViewAdapter_VisualRect(const KAbstractViewAdapter* self, const QModelIndex* index);
void KAbstractViewAdapter_Connect(KAbstractViewAdapter* self, int signal, QObject* receiver, const char* slot);
void KAbstractViewAdapter_OnModel(const KAbstractViewAdapter* self, intptr_t slot);
QAbstractItemModel* KAbstractViewAdapter_QBaseModel(const KAbstractViewAdapter* self);
void KAbstractViewAdapter_OnIconSize(const KAbstractViewAdapter* self, intptr_t slot);
QSize* KAbstractViewAdapter_QBaseIconSize(const KAbstractViewAdapter* self);
void KAbstractViewAdapter_OnPalette(const KAbstractViewAdapter* self, intptr_t slot);
QPalette* KAbstractViewAdapter_QBasePalette(const KAbstractViewAdapter* self);
void KAbstractViewAdapter_OnVisibleArea(const KAbstractViewAdapter* self, intptr_t slot);
QRect* KAbstractViewAdapter_QBaseVisibleArea(const KAbstractViewAdapter* self);
void KAbstractViewAdapter_OnVisualRect(const KAbstractViewAdapter* self, intptr_t slot);
QRect* KAbstractViewAdapter_QBaseVisualRect(const KAbstractViewAdapter* self, const QModelIndex* index);
void KAbstractViewAdapter_OnConnect(KAbstractViewAdapter* self, intptr_t slot);
void KAbstractViewAdapter_QBaseConnect(KAbstractViewAdapter* self, int signal, QObject* receiver, const char* slot);
int KAbstractViewAdapter_Metacall(KAbstractViewAdapter* self, int param1, int param2, void** param3);
void KAbstractViewAdapter_OnMetacall(KAbstractViewAdapter* self, intptr_t slot);
int KAbstractViewAdapter_QBaseMetacall(KAbstractViewAdapter* self, int param1, int param2, void** param3);
bool KAbstractViewAdapter_Event(KAbstractViewAdapter* self, QEvent* event);
void KAbstractViewAdapter_OnEvent(KAbstractViewAdapter* self, intptr_t slot);
bool KAbstractViewAdapter_QBaseEvent(KAbstractViewAdapter* self, QEvent* event);
bool KAbstractViewAdapter_EventFilter(KAbstractViewAdapter* self, QObject* watched, QEvent* event);
void KAbstractViewAdapter_OnEventFilter(KAbstractViewAdapter* self, intptr_t slot);
bool KAbstractViewAdapter_QBaseEventFilter(KAbstractViewAdapter* self, QObject* watched, QEvent* event);
void KAbstractViewAdapter_TimerEvent(KAbstractViewAdapter* self, QTimerEvent* event);
void KAbstractViewAdapter_OnTimerEvent(KAbstractViewAdapter* self, intptr_t slot);
void KAbstractViewAdapter_QBaseTimerEvent(KAbstractViewAdapter* self, QTimerEvent* event);
void KAbstractViewAdapter_ChildEvent(KAbstractViewAdapter* self, QChildEvent* event);
void KAbstractViewAdapter_OnChildEvent(KAbstractViewAdapter* self, intptr_t slot);
void KAbstractViewAdapter_QBaseChildEvent(KAbstractViewAdapter* self, QChildEvent* event);
void KAbstractViewAdapter_CustomEvent(KAbstractViewAdapter* self, QEvent* event);
void KAbstractViewAdapter_OnCustomEvent(KAbstractViewAdapter* self, intptr_t slot);
void KAbstractViewAdapter_QBaseCustomEvent(KAbstractViewAdapter* self, QEvent* event);
void KAbstractViewAdapter_ConnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal);
void KAbstractViewAdapter_OnConnectNotify(KAbstractViewAdapter* self, intptr_t slot);
void KAbstractViewAdapter_QBaseConnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal);
void KAbstractViewAdapter_DisconnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal);
void KAbstractViewAdapter_OnDisconnectNotify(KAbstractViewAdapter* self, intptr_t slot);
void KAbstractViewAdapter_QBaseDisconnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal);
QObject* KAbstractViewAdapter_Sender(const KAbstractViewAdapter* self);
void KAbstractViewAdapter_OnSender(const KAbstractViewAdapter* self, intptr_t slot);
QObject* KAbstractViewAdapter_QBaseSender(const KAbstractViewAdapter* self);
int KAbstractViewAdapter_SenderSignalIndex(const KAbstractViewAdapter* self);
void KAbstractViewAdapter_OnSenderSignalIndex(const KAbstractViewAdapter* self, intptr_t slot);
int KAbstractViewAdapter_QBaseSenderSignalIndex(const KAbstractViewAdapter* self);
int KAbstractViewAdapter_Receivers(const KAbstractViewAdapter* self, const char* signal);
void KAbstractViewAdapter_OnReceivers(const KAbstractViewAdapter* self, intptr_t slot);
int KAbstractViewAdapter_QBaseReceivers(const KAbstractViewAdapter* self, const char* signal);
bool KAbstractViewAdapter_IsSignalConnected(const KAbstractViewAdapter* self, const QMetaMethod* signal);
void KAbstractViewAdapter_OnIsSignalConnected(const KAbstractViewAdapter* self, intptr_t slot);
bool KAbstractViewAdapter_QBaseIsSignalConnected(const KAbstractViewAdapter* self, const QMetaMethod* signal);
void KAbstractViewAdapter_Delete(KAbstractViewAdapter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
