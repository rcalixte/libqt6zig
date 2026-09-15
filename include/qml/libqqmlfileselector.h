#pragma once
#ifndef QML_LIBQQMLFILESELECTOR_H
#define QML_LIBQQMLFILESELECTOR_H

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
typedef struct QFileSelector QFileSelector;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlFileSelector QQmlFileSelector;
typedef struct QTimerEvent QTimerEvent;
#endif

QQmlFileSelector* QQmlFileSelector_new(QQmlEngine* engine);
QQmlFileSelector* QQmlFileSelector_new2(QQmlEngine* engine, QObject* parent);
QMetaObject* QQmlFileSelector_MetaObject(const QQmlFileSelector* self);
void* QQmlFileSelector_Metacast(QQmlFileSelector* self, const char* param1);
int QQmlFileSelector_Metacall(QQmlFileSelector* self, int param1, int param2, void** param3);
libqt_string QQmlFileSelector_Tr(const char* s);
QFileSelector* QQmlFileSelector_Selector(const QQmlFileSelector* self);
void QQmlFileSelector_SetSelector(QQmlFileSelector* self, QFileSelector* selector);
void QQmlFileSelector_SetExtraSelectors(QQmlFileSelector* self, const libqt_list /* of libqt_string */ strings);
QQmlFileSelector* QQmlFileSelector_Get(QQmlEngine* param1);
libqt_string QQmlFileSelector_Tr2(const char* s, const char* c);
libqt_string QQmlFileSelector_Tr3(const char* s, const char* c, int n);
void QQmlFileSelector_OnMetaObject(const QQmlFileSelector* self, intptr_t slot);
QMetaObject* QQmlFileSelector_SuperMetaObject(const QQmlFileSelector* self);
void QQmlFileSelector_OnMetacast(QQmlFileSelector* self, intptr_t slot);
void* QQmlFileSelector_SuperMetacast(QQmlFileSelector* self, const char* param1);
void QQmlFileSelector_OnMetacall(QQmlFileSelector* self, intptr_t slot);
int QQmlFileSelector_SuperMetacall(QQmlFileSelector* self, int param1, int param2, void** param3);
bool QQmlFileSelector_Event(QQmlFileSelector* self, QEvent* event);
void QQmlFileSelector_OnEvent(QQmlFileSelector* self, intptr_t slot);
bool QQmlFileSelector_SuperEvent(QQmlFileSelector* self, QEvent* event);
bool QQmlFileSelector_EventFilter(QQmlFileSelector* self, QObject* watched, QEvent* event);
void QQmlFileSelector_OnEventFilter(QQmlFileSelector* self, intptr_t slot);
bool QQmlFileSelector_SuperEventFilter(QQmlFileSelector* self, QObject* watched, QEvent* event);
void QQmlFileSelector_TimerEvent(QQmlFileSelector* self, QTimerEvent* event);
void QQmlFileSelector_OnTimerEvent(QQmlFileSelector* self, intptr_t slot);
void QQmlFileSelector_SuperTimerEvent(QQmlFileSelector* self, QTimerEvent* event);
void QQmlFileSelector_ChildEvent(QQmlFileSelector* self, QChildEvent* event);
void QQmlFileSelector_OnChildEvent(QQmlFileSelector* self, intptr_t slot);
void QQmlFileSelector_SuperChildEvent(QQmlFileSelector* self, QChildEvent* event);
void QQmlFileSelector_CustomEvent(QQmlFileSelector* self, QEvent* event);
void QQmlFileSelector_OnCustomEvent(QQmlFileSelector* self, intptr_t slot);
void QQmlFileSelector_SuperCustomEvent(QQmlFileSelector* self, QEvent* event);
void QQmlFileSelector_ConnectNotify(QQmlFileSelector* self, const QMetaMethod* signal);
void QQmlFileSelector_OnConnectNotify(QQmlFileSelector* self, intptr_t slot);
void QQmlFileSelector_SuperConnectNotify(QQmlFileSelector* self, const QMetaMethod* signal);
void QQmlFileSelector_DisconnectNotify(QQmlFileSelector* self, const QMetaMethod* signal);
void QQmlFileSelector_OnDisconnectNotify(QQmlFileSelector* self, intptr_t slot);
void QQmlFileSelector_SuperDisconnectNotify(QQmlFileSelector* self, const QMetaMethod* signal);
QObject* QQmlFileSelector_Sender(const QQmlFileSelector* self);
void QQmlFileSelector_OnSender(const QQmlFileSelector* self, intptr_t slot);
QObject* QQmlFileSelector_SuperSender(const QQmlFileSelector* self);
int QQmlFileSelector_SenderSignalIndex(const QQmlFileSelector* self);
void QQmlFileSelector_OnSenderSignalIndex(const QQmlFileSelector* self, intptr_t slot);
int QQmlFileSelector_SuperSenderSignalIndex(const QQmlFileSelector* self);
int QQmlFileSelector_Receivers(const QQmlFileSelector* self, const char* signal);
void QQmlFileSelector_OnReceivers(const QQmlFileSelector* self, intptr_t slot);
int QQmlFileSelector_SuperReceivers(const QQmlFileSelector* self, const char* signal);
bool QQmlFileSelector_IsSignalConnected(const QQmlFileSelector* self, const QMetaMethod* signal);
void QQmlFileSelector_OnIsSignalConnected(const QQmlFileSelector* self, intptr_t slot);
bool QQmlFileSelector_SuperIsSignalConnected(const QQmlFileSelector* self, const QMetaMethod* signal);
void QQmlFileSelector_Delete(QQmlFileSelector* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
