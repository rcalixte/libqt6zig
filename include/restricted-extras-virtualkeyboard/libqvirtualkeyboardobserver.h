#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDOBSERVER_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDOBSERVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVirtualKeyboardObserver QVirtualKeyboardObserver;
#endif

QVirtualKeyboardObserver* QVirtualKeyboardObserver_new();
QVirtualKeyboardObserver* QVirtualKeyboardObserver_new2(QObject* parent);
QMetaObject* QVirtualKeyboardObserver_MetaObject(const QVirtualKeyboardObserver* self);
void* QVirtualKeyboardObserver_Metacast(QVirtualKeyboardObserver* self, const char* param1);
int QVirtualKeyboardObserver_Metacall(QVirtualKeyboardObserver* self, int param1, int param2, void** param3);
libqt_string QVirtualKeyboardObserver_Tr(const char* s);
QVariant* QVirtualKeyboardObserver_Layout(QVirtualKeyboardObserver* self);
void QVirtualKeyboardObserver_LayoutChanged(QVirtualKeyboardObserver* self);
void QVirtualKeyboardObserver_Connect_LayoutChanged(QVirtualKeyboardObserver* self, intptr_t slot);
libqt_string QVirtualKeyboardObserver_Tr2(const char* s, const char* c);
libqt_string QVirtualKeyboardObserver_Tr3(const char* s, const char* c, int n);
void QVirtualKeyboardObserver_OnMetaObject(const QVirtualKeyboardObserver* self, intptr_t slot);
QMetaObject* QVirtualKeyboardObserver_SuperMetaObject(const QVirtualKeyboardObserver* self);
void QVirtualKeyboardObserver_OnMetacast(QVirtualKeyboardObserver* self, intptr_t slot);
void* QVirtualKeyboardObserver_SuperMetacast(QVirtualKeyboardObserver* self, const char* param1);
void QVirtualKeyboardObserver_OnMetacall(QVirtualKeyboardObserver* self, intptr_t slot);
int QVirtualKeyboardObserver_SuperMetacall(QVirtualKeyboardObserver* self, int param1, int param2, void** param3);
bool QVirtualKeyboardObserver_Event(QVirtualKeyboardObserver* self, QEvent* event);
void QVirtualKeyboardObserver_OnEvent(QVirtualKeyboardObserver* self, intptr_t slot);
bool QVirtualKeyboardObserver_SuperEvent(QVirtualKeyboardObserver* self, QEvent* event);
bool QVirtualKeyboardObserver_EventFilter(QVirtualKeyboardObserver* self, QObject* watched, QEvent* event);
void QVirtualKeyboardObserver_OnEventFilter(QVirtualKeyboardObserver* self, intptr_t slot);
bool QVirtualKeyboardObserver_SuperEventFilter(QVirtualKeyboardObserver* self, QObject* watched, QEvent* event);
void QVirtualKeyboardObserver_TimerEvent(QVirtualKeyboardObserver* self, QTimerEvent* event);
void QVirtualKeyboardObserver_OnTimerEvent(QVirtualKeyboardObserver* self, intptr_t slot);
void QVirtualKeyboardObserver_SuperTimerEvent(QVirtualKeyboardObserver* self, QTimerEvent* event);
void QVirtualKeyboardObserver_ChildEvent(QVirtualKeyboardObserver* self, QChildEvent* event);
void QVirtualKeyboardObserver_OnChildEvent(QVirtualKeyboardObserver* self, intptr_t slot);
void QVirtualKeyboardObserver_SuperChildEvent(QVirtualKeyboardObserver* self, QChildEvent* event);
void QVirtualKeyboardObserver_CustomEvent(QVirtualKeyboardObserver* self, QEvent* event);
void QVirtualKeyboardObserver_OnCustomEvent(QVirtualKeyboardObserver* self, intptr_t slot);
void QVirtualKeyboardObserver_SuperCustomEvent(QVirtualKeyboardObserver* self, QEvent* event);
void QVirtualKeyboardObserver_ConnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal);
void QVirtualKeyboardObserver_OnConnectNotify(QVirtualKeyboardObserver* self, intptr_t slot);
void QVirtualKeyboardObserver_SuperConnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal);
void QVirtualKeyboardObserver_DisconnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal);
void QVirtualKeyboardObserver_OnDisconnectNotify(QVirtualKeyboardObserver* self, intptr_t slot);
void QVirtualKeyboardObserver_SuperDisconnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal);
QObject* QVirtualKeyboardObserver_Sender(const QVirtualKeyboardObserver* self);
void QVirtualKeyboardObserver_OnSender(const QVirtualKeyboardObserver* self, intptr_t slot);
QObject* QVirtualKeyboardObserver_SuperSender(const QVirtualKeyboardObserver* self);
int QVirtualKeyboardObserver_SenderSignalIndex(const QVirtualKeyboardObserver* self);
void QVirtualKeyboardObserver_OnSenderSignalIndex(const QVirtualKeyboardObserver* self, intptr_t slot);
int QVirtualKeyboardObserver_SuperSenderSignalIndex(const QVirtualKeyboardObserver* self);
int QVirtualKeyboardObserver_Receivers(const QVirtualKeyboardObserver* self, const char* signal);
void QVirtualKeyboardObserver_OnReceivers(const QVirtualKeyboardObserver* self, intptr_t slot);
int QVirtualKeyboardObserver_SuperReceivers(const QVirtualKeyboardObserver* self, const char* signal);
bool QVirtualKeyboardObserver_IsSignalConnected(const QVirtualKeyboardObserver* self, const QMetaMethod* signal);
void QVirtualKeyboardObserver_OnIsSignalConnected(const QVirtualKeyboardObserver* self, intptr_t slot);
bool QVirtualKeyboardObserver_SuperIsSignalConnected(const QVirtualKeyboardObserver* self, const QMetaMethod* signal);
void QVirtualKeyboardObserver_Delete(QVirtualKeyboardObserver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
