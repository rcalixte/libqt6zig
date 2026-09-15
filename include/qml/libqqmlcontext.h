#pragma once
#ifndef QML_LIBQQMLCONTEXT_H
#define QML_LIBQQMLCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQmlContext__PropertyPair)
typedef QQmlContext::PropertyPair QQmlContext__PropertyPair;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QJSValue QJSValue;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlContext__PropertyPair QQmlContext__PropertyPair;
typedef struct QQmlEngine QQmlEngine;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QQmlContext* QQmlContext_new(QQmlEngine* parent);
QQmlContext* QQmlContext_new2(QQmlContext* parent);
QQmlContext* QQmlContext_new3(QQmlEngine* parent, QObject* objParent);
QQmlContext* QQmlContext_new4(QQmlContext* parent, QObject* objParent);
QMetaObject* QQmlContext_MetaObject(const QQmlContext* self);
void* QQmlContext_Metacast(QQmlContext* self, const char* param1);
int QQmlContext_Metacall(QQmlContext* self, int param1, int param2, void** param3);
libqt_string QQmlContext_Tr(const char* s);
bool QQmlContext_IsValid(const QQmlContext* self);
QQmlEngine* QQmlContext_Engine(const QQmlContext* self);
QQmlContext* QQmlContext_ParentContext(const QQmlContext* self);
QObject* QQmlContext_ContextObject(const QQmlContext* self);
void QQmlContext_SetContextObject(QQmlContext* self, QObject* contextObject);
QVariant* QQmlContext_ContextProperty(const QQmlContext* self, const libqt_string param1);
void QQmlContext_SetContextProperty(QQmlContext* self, const libqt_string param1, QObject* param2);
void QQmlContext_SetContextProperty2(QQmlContext* self, const libqt_string param1, const QVariant* param2);
void QQmlContext_SetContextProperties(QQmlContext* self, const libqt_list /* of QQmlContext__PropertyPair* */ properties);
libqt_string QQmlContext_NameForObject(const QQmlContext* self, const QObject* param1);
QObject* QQmlContext_ObjectForName(const QQmlContext* self, const libqt_string param1);
QUrl* QQmlContext_ResolvedUrl(const QQmlContext* self, const QUrl* param1);
void QQmlContext_SetBaseUrl(QQmlContext* self, const QUrl* baseUrl);
QUrl* QQmlContext_BaseUrl(const QQmlContext* self);
QJSValue* QQmlContext_ImportedScript(const QQmlContext* self, const libqt_string name);
libqt_string QQmlContext_Tr2(const char* s, const char* c);
libqt_string QQmlContext_Tr3(const char* s, const char* c, int n);
void QQmlContext_OnMetaObject(const QQmlContext* self, intptr_t slot);
QMetaObject* QQmlContext_SuperMetaObject(const QQmlContext* self);
void QQmlContext_OnMetacast(QQmlContext* self, intptr_t slot);
void* QQmlContext_SuperMetacast(QQmlContext* self, const char* param1);
void QQmlContext_OnMetacall(QQmlContext* self, intptr_t slot);
int QQmlContext_SuperMetacall(QQmlContext* self, int param1, int param2, void** param3);
bool QQmlContext_Event(QQmlContext* self, QEvent* event);
void QQmlContext_OnEvent(QQmlContext* self, intptr_t slot);
bool QQmlContext_SuperEvent(QQmlContext* self, QEvent* event);
bool QQmlContext_EventFilter(QQmlContext* self, QObject* watched, QEvent* event);
void QQmlContext_OnEventFilter(QQmlContext* self, intptr_t slot);
bool QQmlContext_SuperEventFilter(QQmlContext* self, QObject* watched, QEvent* event);
void QQmlContext_TimerEvent(QQmlContext* self, QTimerEvent* event);
void QQmlContext_OnTimerEvent(QQmlContext* self, intptr_t slot);
void QQmlContext_SuperTimerEvent(QQmlContext* self, QTimerEvent* event);
void QQmlContext_ChildEvent(QQmlContext* self, QChildEvent* event);
void QQmlContext_OnChildEvent(QQmlContext* self, intptr_t slot);
void QQmlContext_SuperChildEvent(QQmlContext* self, QChildEvent* event);
void QQmlContext_CustomEvent(QQmlContext* self, QEvent* event);
void QQmlContext_OnCustomEvent(QQmlContext* self, intptr_t slot);
void QQmlContext_SuperCustomEvent(QQmlContext* self, QEvent* event);
void QQmlContext_ConnectNotify(QQmlContext* self, const QMetaMethod* signal);
void QQmlContext_OnConnectNotify(QQmlContext* self, intptr_t slot);
void QQmlContext_SuperConnectNotify(QQmlContext* self, const QMetaMethod* signal);
void QQmlContext_DisconnectNotify(QQmlContext* self, const QMetaMethod* signal);
void QQmlContext_OnDisconnectNotify(QQmlContext* self, intptr_t slot);
void QQmlContext_SuperDisconnectNotify(QQmlContext* self, const QMetaMethod* signal);
QObject* QQmlContext_Sender(const QQmlContext* self);
void QQmlContext_OnSender(const QQmlContext* self, intptr_t slot);
QObject* QQmlContext_SuperSender(const QQmlContext* self);
int QQmlContext_SenderSignalIndex(const QQmlContext* self);
void QQmlContext_OnSenderSignalIndex(const QQmlContext* self, intptr_t slot);
int QQmlContext_SuperSenderSignalIndex(const QQmlContext* self);
int QQmlContext_Receivers(const QQmlContext* self, const char* signal);
void QQmlContext_OnReceivers(const QQmlContext* self, intptr_t slot);
int QQmlContext_SuperReceivers(const QQmlContext* self, const char* signal);
bool QQmlContext_IsSignalConnected(const QQmlContext* self, const QMetaMethod* signal);
void QQmlContext_OnIsSignalConnected(const QQmlContext* self, intptr_t slot);
bool QQmlContext_SuperIsSignalConnected(const QQmlContext* self, const QMetaMethod* signal);
void QQmlContext_Delete(QQmlContext* self);

QQmlContext__PropertyPair* QQmlContext__PropertyPair_new();
QQmlContext__PropertyPair* QQmlContext__PropertyPair_new2(const QQmlContext__PropertyPair* param1);
libqt_string QQmlContext__PropertyPair_Name(const QQmlContext__PropertyPair* self);
void QQmlContext__PropertyPair_SetName(QQmlContext__PropertyPair* self, libqt_string name);
QVariant* QQmlContext__PropertyPair_Value(const QQmlContext__PropertyPair* self);
void QQmlContext__PropertyPair_SetValue(QQmlContext__PropertyPair* self, QVariant* value);
void QQmlContext__PropertyPair_OperatorAssign(QQmlContext__PropertyPair* self, const QQmlContext__PropertyPair* param1);
void QQmlContext__PropertyPair_Delete(QQmlContext__PropertyPair* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
