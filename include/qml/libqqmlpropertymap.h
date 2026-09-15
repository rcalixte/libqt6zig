#pragma once
#ifndef QML_LIBQQMLPROPERTYMAP_H
#define QML_LIBQQMLPROPERTYMAP_H

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
typedef struct QQmlPropertyMap QQmlPropertyMap;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QQmlPropertyMap* QQmlPropertyMap_new();
QQmlPropertyMap* QQmlPropertyMap_new2(QObject* parent);
QMetaObject* QQmlPropertyMap_MetaObject(const QQmlPropertyMap* self);
void* QQmlPropertyMap_Metacast(QQmlPropertyMap* self, const char* param1);
int QQmlPropertyMap_Metacall(QQmlPropertyMap* self, int param1, int param2, void** param3);
libqt_string QQmlPropertyMap_Tr(const char* s);
QVariant* QQmlPropertyMap_Value(const QQmlPropertyMap* self, const libqt_string key);
void QQmlPropertyMap_Insert(QQmlPropertyMap* self, const libqt_string key, const QVariant* value);
void QQmlPropertyMap_Insert2(QQmlPropertyMap* self, const libqt_map /* of libqt_string to QVariant* */ values);
void QQmlPropertyMap_Clear(QQmlPropertyMap* self, const libqt_string key);
void QQmlPropertyMap_Freeze(QQmlPropertyMap* self);
libqt_list /* of libqt_string */ QQmlPropertyMap_Keys(const QQmlPropertyMap* self);
int QQmlPropertyMap_Count(const QQmlPropertyMap* self);
int QQmlPropertyMap_Size(const QQmlPropertyMap* self);
bool QQmlPropertyMap_IsEmpty(const QQmlPropertyMap* self);
bool QQmlPropertyMap_Contains(const QQmlPropertyMap* self, const libqt_string key);
QVariant* QQmlPropertyMap_OperatorSubscript(QQmlPropertyMap* self, const libqt_string key);
QVariant* QQmlPropertyMap_OperatorSubscript2(const QQmlPropertyMap* self, const libqt_string key);
void QQmlPropertyMap_ValueChanged(QQmlPropertyMap* self, const libqt_string key, const QVariant* value);
void QQmlPropertyMap_Connect_ValueChanged(QQmlPropertyMap* self, intptr_t slot);
QVariant* QQmlPropertyMap_UpdateValue(QQmlPropertyMap* self, const libqt_string key, const QVariant* input);
libqt_string QQmlPropertyMap_Tr2(const char* s, const char* c);
libqt_string QQmlPropertyMap_Tr3(const char* s, const char* c, int n);
void QQmlPropertyMap_OnMetaObject(const QQmlPropertyMap* self, intptr_t slot);
QMetaObject* QQmlPropertyMap_SuperMetaObject(const QQmlPropertyMap* self);
void QQmlPropertyMap_OnMetacast(QQmlPropertyMap* self, intptr_t slot);
void* QQmlPropertyMap_SuperMetacast(QQmlPropertyMap* self, const char* param1);
void QQmlPropertyMap_OnMetacall(QQmlPropertyMap* self, intptr_t slot);
int QQmlPropertyMap_SuperMetacall(QQmlPropertyMap* self, int param1, int param2, void** param3);
void QQmlPropertyMap_OnUpdateValue(QQmlPropertyMap* self, intptr_t slot);
QVariant* QQmlPropertyMap_SuperUpdateValue(QQmlPropertyMap* self, const libqt_string key, const QVariant* input);
bool QQmlPropertyMap_Event(QQmlPropertyMap* self, QEvent* event);
void QQmlPropertyMap_OnEvent(QQmlPropertyMap* self, intptr_t slot);
bool QQmlPropertyMap_SuperEvent(QQmlPropertyMap* self, QEvent* event);
bool QQmlPropertyMap_EventFilter(QQmlPropertyMap* self, QObject* watched, QEvent* event);
void QQmlPropertyMap_OnEventFilter(QQmlPropertyMap* self, intptr_t slot);
bool QQmlPropertyMap_SuperEventFilter(QQmlPropertyMap* self, QObject* watched, QEvent* event);
void QQmlPropertyMap_TimerEvent(QQmlPropertyMap* self, QTimerEvent* event);
void QQmlPropertyMap_OnTimerEvent(QQmlPropertyMap* self, intptr_t slot);
void QQmlPropertyMap_SuperTimerEvent(QQmlPropertyMap* self, QTimerEvent* event);
void QQmlPropertyMap_ChildEvent(QQmlPropertyMap* self, QChildEvent* event);
void QQmlPropertyMap_OnChildEvent(QQmlPropertyMap* self, intptr_t slot);
void QQmlPropertyMap_SuperChildEvent(QQmlPropertyMap* self, QChildEvent* event);
void QQmlPropertyMap_CustomEvent(QQmlPropertyMap* self, QEvent* event);
void QQmlPropertyMap_OnCustomEvent(QQmlPropertyMap* self, intptr_t slot);
void QQmlPropertyMap_SuperCustomEvent(QQmlPropertyMap* self, QEvent* event);
void QQmlPropertyMap_ConnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal);
void QQmlPropertyMap_OnConnectNotify(QQmlPropertyMap* self, intptr_t slot);
void QQmlPropertyMap_SuperConnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal);
void QQmlPropertyMap_DisconnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal);
void QQmlPropertyMap_OnDisconnectNotify(QQmlPropertyMap* self, intptr_t slot);
void QQmlPropertyMap_SuperDisconnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal);
QObject* QQmlPropertyMap_Sender(const QQmlPropertyMap* self);
void QQmlPropertyMap_OnSender(const QQmlPropertyMap* self, intptr_t slot);
QObject* QQmlPropertyMap_SuperSender(const QQmlPropertyMap* self);
int QQmlPropertyMap_SenderSignalIndex(const QQmlPropertyMap* self);
void QQmlPropertyMap_OnSenderSignalIndex(const QQmlPropertyMap* self, intptr_t slot);
int QQmlPropertyMap_SuperSenderSignalIndex(const QQmlPropertyMap* self);
int QQmlPropertyMap_Receivers(const QQmlPropertyMap* self, const char* signal);
void QQmlPropertyMap_OnReceivers(const QQmlPropertyMap* self, intptr_t slot);
int QQmlPropertyMap_SuperReceivers(const QQmlPropertyMap* self, const char* signal);
bool QQmlPropertyMap_IsSignalConnected(const QQmlPropertyMap* self, const QMetaMethod* signal);
void QQmlPropertyMap_OnIsSignalConnected(const QQmlPropertyMap* self, intptr_t slot);
bool QQmlPropertyMap_SuperIsSignalConnected(const QQmlPropertyMap* self, const QMetaMethod* signal);
void QQmlPropertyMap_Delete(QQmlPropertyMap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
