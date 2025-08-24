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
void KLineEditUrlDropEventFilter_OnMetacall(KLineEditUrlDropEventFilter* self, intptr_t slot);
int KLineEditUrlDropEventFilter_QBaseMetacall(KLineEditUrlDropEventFilter* self, int param1, int param2, void** param3);
libqt_string KLineEditUrlDropEventFilter_Tr(const char* s);
bool KLineEditUrlDropEventFilter_EventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event);
void KLineEditUrlDropEventFilter_OnEventFilter(KLineEditUrlDropEventFilter* self, intptr_t slot);
bool KLineEditUrlDropEventFilter_QBaseEventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event);
libqt_string KLineEditUrlDropEventFilter_Tr2(const char* s, const char* c);
libqt_string KLineEditUrlDropEventFilter_Tr3(const char* s, const char* c, int n);
bool KLineEditUrlDropEventFilter_Event(KLineEditUrlDropEventFilter* self, QEvent* event);
void KLineEditUrlDropEventFilter_OnEvent(KLineEditUrlDropEventFilter* self, intptr_t slot);
bool KLineEditUrlDropEventFilter_QBaseEvent(KLineEditUrlDropEventFilter* self, QEvent* event);
void KLineEditUrlDropEventFilter_TimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event);
void KLineEditUrlDropEventFilter_OnTimerEvent(KLineEditUrlDropEventFilter* self, intptr_t slot);
void KLineEditUrlDropEventFilter_QBaseTimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event);
void KLineEditUrlDropEventFilter_ChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event);
void KLineEditUrlDropEventFilter_OnChildEvent(KLineEditUrlDropEventFilter* self, intptr_t slot);
void KLineEditUrlDropEventFilter_QBaseChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event);
void KLineEditUrlDropEventFilter_CustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event);
void KLineEditUrlDropEventFilter_OnCustomEvent(KLineEditUrlDropEventFilter* self, intptr_t slot);
void KLineEditUrlDropEventFilter_QBaseCustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event);
void KLineEditUrlDropEventFilter_ConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
void KLineEditUrlDropEventFilter_OnConnectNotify(KLineEditUrlDropEventFilter* self, intptr_t slot);
void KLineEditUrlDropEventFilter_QBaseConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
void KLineEditUrlDropEventFilter_DisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
void KLineEditUrlDropEventFilter_OnDisconnectNotify(KLineEditUrlDropEventFilter* self, intptr_t slot);
void KLineEditUrlDropEventFilter_QBaseDisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
QObject* KLineEditUrlDropEventFilter_Sender(const KLineEditUrlDropEventFilter* self);
void KLineEditUrlDropEventFilter_OnSender(const KLineEditUrlDropEventFilter* self, intptr_t slot);
QObject* KLineEditUrlDropEventFilter_QBaseSender(const KLineEditUrlDropEventFilter* self);
int KLineEditUrlDropEventFilter_SenderSignalIndex(const KLineEditUrlDropEventFilter* self);
void KLineEditUrlDropEventFilter_OnSenderSignalIndex(const KLineEditUrlDropEventFilter* self, intptr_t slot);
int KLineEditUrlDropEventFilter_QBaseSenderSignalIndex(const KLineEditUrlDropEventFilter* self);
int KLineEditUrlDropEventFilter_Receivers(const KLineEditUrlDropEventFilter* self, const char* signal);
void KLineEditUrlDropEventFilter_OnReceivers(const KLineEditUrlDropEventFilter* self, intptr_t slot);
int KLineEditUrlDropEventFilter_QBaseReceivers(const KLineEditUrlDropEventFilter* self, const char* signal);
bool KLineEditUrlDropEventFilter_IsSignalConnected(const KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
void KLineEditUrlDropEventFilter_OnIsSignalConnected(const KLineEditUrlDropEventFilter* self, intptr_t slot);
bool KLineEditUrlDropEventFilter_QBaseIsSignalConnected(const KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
void KLineEditUrlDropEventFilter_Delete(KLineEditUrlDropEventFilter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
