#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKLINEEDITURLDROPEVENTFILTER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKLINEEDITURLDROPEVENTFILTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLineEditUrlDropEventFilter KLineEditUrlDropEventFilter;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KLineEditUrlDropEventFilter* KLineEditUrlDropEventFilter_new();
KLineEditUrlDropEventFilter* KLineEditUrlDropEventFilter_new2(QObject* parent);
QMetaObject* KLineEditUrlDropEventFilter_MetaObject(const KLineEditUrlDropEventFilter* self);
void* KLineEditUrlDropEventFilter_Metacast(KLineEditUrlDropEventFilter* self, const char* param1);
int KLineEditUrlDropEventFilter_Metacall(KLineEditUrlDropEventFilter* self, int param1, int param2, void** param3);
bool KLineEditUrlDropEventFilter_EventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event);
void KLineEditUrlDropEventFilter_OnMetaObject(const KLineEditUrlDropEventFilter* self, intptr_t slot);
QMetaObject* KLineEditUrlDropEventFilter_SuperMetaObject(const KLineEditUrlDropEventFilter* self);
void KLineEditUrlDropEventFilter_OnMetacast(KLineEditUrlDropEventFilter* self, intptr_t slot);
void* KLineEditUrlDropEventFilter_SuperMetacast(KLineEditUrlDropEventFilter* self, const char* param1);
void KLineEditUrlDropEventFilter_OnMetacall(KLineEditUrlDropEventFilter* self, intptr_t slot);
int KLineEditUrlDropEventFilter_SuperMetacall(KLineEditUrlDropEventFilter* self, int param1, int param2, void** param3);
void KLineEditUrlDropEventFilter_OnEventFilter(KLineEditUrlDropEventFilter* self, intptr_t slot);
bool KLineEditUrlDropEventFilter_SuperEventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event);
bool KLineEditUrlDropEventFilter_Event(KLineEditUrlDropEventFilter* self, QEvent* event);
void KLineEditUrlDropEventFilter_OnEvent(KLineEditUrlDropEventFilter* self, intptr_t slot);
bool KLineEditUrlDropEventFilter_SuperEvent(KLineEditUrlDropEventFilter* self, QEvent* event);
void KLineEditUrlDropEventFilter_TimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event);
void KLineEditUrlDropEventFilter_OnTimerEvent(KLineEditUrlDropEventFilter* self, intptr_t slot);
void KLineEditUrlDropEventFilter_SuperTimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event);
void KLineEditUrlDropEventFilter_ChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event);
void KLineEditUrlDropEventFilter_OnChildEvent(KLineEditUrlDropEventFilter* self, intptr_t slot);
void KLineEditUrlDropEventFilter_SuperChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event);
void KLineEditUrlDropEventFilter_CustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event);
void KLineEditUrlDropEventFilter_OnCustomEvent(KLineEditUrlDropEventFilter* self, intptr_t slot);
void KLineEditUrlDropEventFilter_SuperCustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event);
void KLineEditUrlDropEventFilter_ConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
void KLineEditUrlDropEventFilter_OnConnectNotify(KLineEditUrlDropEventFilter* self, intptr_t slot);
void KLineEditUrlDropEventFilter_SuperConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
void KLineEditUrlDropEventFilter_DisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
void KLineEditUrlDropEventFilter_OnDisconnectNotify(KLineEditUrlDropEventFilter* self, intptr_t slot);
void KLineEditUrlDropEventFilter_SuperDisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
QObject* KLineEditUrlDropEventFilter_Sender(const KLineEditUrlDropEventFilter* self);
void KLineEditUrlDropEventFilter_OnSender(const KLineEditUrlDropEventFilter* self, intptr_t slot);
QObject* KLineEditUrlDropEventFilter_SuperSender(const KLineEditUrlDropEventFilter* self);
int KLineEditUrlDropEventFilter_SenderSignalIndex(const KLineEditUrlDropEventFilter* self);
void KLineEditUrlDropEventFilter_OnSenderSignalIndex(const KLineEditUrlDropEventFilter* self, intptr_t slot);
int KLineEditUrlDropEventFilter_SuperSenderSignalIndex(const KLineEditUrlDropEventFilter* self);
int KLineEditUrlDropEventFilter_Receivers(const KLineEditUrlDropEventFilter* self, const char* signal);
void KLineEditUrlDropEventFilter_OnReceivers(const KLineEditUrlDropEventFilter* self, intptr_t slot);
int KLineEditUrlDropEventFilter_SuperReceivers(const KLineEditUrlDropEventFilter* self, const char* signal);
bool KLineEditUrlDropEventFilter_IsSignalConnected(const KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
void KLineEditUrlDropEventFilter_OnIsSignalConnected(const KLineEditUrlDropEventFilter* self, intptr_t slot);
bool KLineEditUrlDropEventFilter_SuperIsSignalConnected(const KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
void KLineEditUrlDropEventFilter_Delete(KLineEditUrlDropEventFilter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
