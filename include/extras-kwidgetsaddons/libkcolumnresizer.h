#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKCOLUMNRESIZER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKCOLUMNRESIZER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KColumnResizer KColumnResizer;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLayout QLayout;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KColumnResizer* KColumnResizer_new();
KColumnResizer* KColumnResizer_new2(QObject* parent);
QMetaObject* KColumnResizer_MetaObject(const KColumnResizer* self);
void* KColumnResizer_Metacast(KColumnResizer* self, const char* param1);
int KColumnResizer_Metacall(KColumnResizer* self, int param1, int param2, void** param3);
void KColumnResizer_OnMetacall(KColumnResizer* self, intptr_t slot);
int KColumnResizer_QBaseMetacall(KColumnResizer* self, int param1, int param2, void** param3);
libqt_string KColumnResizer_Tr(const char* s);
void KColumnResizer_AddWidgetsFromLayout(KColumnResizer* self, QLayout* layout);
void KColumnResizer_AddWidget(KColumnResizer* self, QWidget* widget);
void KColumnResizer_RemoveWidget(KColumnResizer* self, QWidget* widget);
bool KColumnResizer_EventFilter(KColumnResizer* self, QObject* param1, QEvent* event);
void KColumnResizer_OnEventFilter(KColumnResizer* self, intptr_t slot);
bool KColumnResizer_QBaseEventFilter(KColumnResizer* self, QObject* param1, QEvent* event);
libqt_string KColumnResizer_Tr2(const char* s, const char* c);
libqt_string KColumnResizer_Tr3(const char* s, const char* c, int n);
void KColumnResizer_AddWidgetsFromLayout2(KColumnResizer* self, QLayout* layout, int column);
bool KColumnResizer_Event(KColumnResizer* self, QEvent* event);
void KColumnResizer_OnEvent(KColumnResizer* self, intptr_t slot);
bool KColumnResizer_QBaseEvent(KColumnResizer* self, QEvent* event);
void KColumnResizer_TimerEvent(KColumnResizer* self, QTimerEvent* event);
void KColumnResizer_OnTimerEvent(KColumnResizer* self, intptr_t slot);
void KColumnResizer_QBaseTimerEvent(KColumnResizer* self, QTimerEvent* event);
void KColumnResizer_ChildEvent(KColumnResizer* self, QChildEvent* event);
void KColumnResizer_OnChildEvent(KColumnResizer* self, intptr_t slot);
void KColumnResizer_QBaseChildEvent(KColumnResizer* self, QChildEvent* event);
void KColumnResizer_CustomEvent(KColumnResizer* self, QEvent* event);
void KColumnResizer_OnCustomEvent(KColumnResizer* self, intptr_t slot);
void KColumnResizer_QBaseCustomEvent(KColumnResizer* self, QEvent* event);
void KColumnResizer_ConnectNotify(KColumnResizer* self, const QMetaMethod* signal);
void KColumnResizer_OnConnectNotify(KColumnResizer* self, intptr_t slot);
void KColumnResizer_QBaseConnectNotify(KColumnResizer* self, const QMetaMethod* signal);
void KColumnResizer_DisconnectNotify(KColumnResizer* self, const QMetaMethod* signal);
void KColumnResizer_OnDisconnectNotify(KColumnResizer* self, intptr_t slot);
void KColumnResizer_QBaseDisconnectNotify(KColumnResizer* self, const QMetaMethod* signal);
QObject* KColumnResizer_Sender(const KColumnResizer* self);
void KColumnResizer_OnSender(const KColumnResizer* self, intptr_t slot);
QObject* KColumnResizer_QBaseSender(const KColumnResizer* self);
int KColumnResizer_SenderSignalIndex(const KColumnResizer* self);
void KColumnResizer_OnSenderSignalIndex(const KColumnResizer* self, intptr_t slot);
int KColumnResizer_QBaseSenderSignalIndex(const KColumnResizer* self);
int KColumnResizer_Receivers(const KColumnResizer* self, const char* signal);
void KColumnResizer_OnReceivers(const KColumnResizer* self, intptr_t slot);
int KColumnResizer_QBaseReceivers(const KColumnResizer* self, const char* signal);
bool KColumnResizer_IsSignalConnected(const KColumnResizer* self, const QMetaMethod* signal);
void KColumnResizer_OnIsSignalConnected(const KColumnResizer* self, intptr_t slot);
bool KColumnResizer_QBaseIsSignalConnected(const KColumnResizer* self, const QMetaMethod* signal);
void KColumnResizer_Delete(KColumnResizer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
