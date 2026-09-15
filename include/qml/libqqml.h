#pragma once
#ifndef QML_LIBQQML_H
#define QML_LIBQQML_H

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
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlTypeNotAvailable QQmlTypeNotAvailable;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

void qqml_h_QmlClearTypeRegistrations();
int qqml_h_QmlRegisterTypeNotAvailable(const char* uri, int versionMajor, int versionMinor, const char* qmlName, const libqt_string message);
int qqml_h_QmlRegisterUncreatableMetaObject(const QMetaObject* staticMetaObject, const char* uri, int versionMajor, int versionMinor, const char* qmlName, const libqt_string reason);
void qqml_h_QmlExecuteDeferred(QObject* param1);
QQmlContext* qqml_h_QmlContext(const QObject* param1);
QQmlEngine* qqml_h_QmlEngine(const QObject* param1);
intptr_t qqml_h_QmlAttachedPropertiesFunction(QObject* param1, const QMetaObject* param2);
QObject* qqml_h_QmlAttachedPropertiesObject(QObject* param1, intptr_t func, bool create);
QObject* qqml_h_QmlExtendedObject(QObject* param1);
bool qqml_h_QmlProtectModule(const char* uri, int majVersion);
void qqml_h_QmlRegisterModule(const char* uri, int versionMajor, int versionMinor);
void qqml_h_QmlRegisterModuleImport(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor);
void qqml_h_QmlUnregisterModuleImport(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor);
int qqml_h_QmlRegisterSingletonType(const QUrl* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName);
int qqml_h_QmlRegisterType(const QUrl* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName);
void qqml_h_QmlRegisterNamespaceAndRevisions(const QMetaObject* metaObject, const char* uri, int versionMajor, libqt_list /* of int */ qmlTypeIds, const QMetaObject* classInfoMetaObject, const QMetaObject* extensionMetaObject);
void qqml_h_QmlRegisterNamespaceAndRevisions2(const QMetaObject* metaObject, const char* uri, int versionMajor, libqt_list /* of int */ qmlTypeIds, const QMetaObject* classInfoMetaObject);
int qqml_h_QmlTypeId(const char* uri, int versionMajor, int versionMinor, const char* qmlName);

QQmlTypeNotAvailable* QQmlTypeNotAvailable_new();
QMetaObject* QQmlTypeNotAvailable_MetaObject(const QQmlTypeNotAvailable* self);
void* QQmlTypeNotAvailable_Metacast(QQmlTypeNotAvailable* self, const char* param1);
int QQmlTypeNotAvailable_Metacall(QQmlTypeNotAvailable* self, int param1, int param2, void** param3);
libqt_string QQmlTypeNotAvailable_Tr(const char* s);
libqt_string QQmlTypeNotAvailable_Tr2(const char* s, const char* c);
libqt_string QQmlTypeNotAvailable_Tr3(const char* s, const char* c, int n);
void QQmlTypeNotAvailable_OnMetaObject(const QQmlTypeNotAvailable* self, intptr_t slot);
QMetaObject* QQmlTypeNotAvailable_SuperMetaObject(const QQmlTypeNotAvailable* self);
void QQmlTypeNotAvailable_OnMetacast(QQmlTypeNotAvailable* self, intptr_t slot);
void* QQmlTypeNotAvailable_SuperMetacast(QQmlTypeNotAvailable* self, const char* param1);
void QQmlTypeNotAvailable_OnMetacall(QQmlTypeNotAvailable* self, intptr_t slot);
int QQmlTypeNotAvailable_SuperMetacall(QQmlTypeNotAvailable* self, int param1, int param2, void** param3);
bool QQmlTypeNotAvailable_Event(QQmlTypeNotAvailable* self, QEvent* event);
void QQmlTypeNotAvailable_OnEvent(QQmlTypeNotAvailable* self, intptr_t slot);
bool QQmlTypeNotAvailable_SuperEvent(QQmlTypeNotAvailable* self, QEvent* event);
bool QQmlTypeNotAvailable_EventFilter(QQmlTypeNotAvailable* self, QObject* watched, QEvent* event);
void QQmlTypeNotAvailable_OnEventFilter(QQmlTypeNotAvailable* self, intptr_t slot);
bool QQmlTypeNotAvailable_SuperEventFilter(QQmlTypeNotAvailable* self, QObject* watched, QEvent* event);
void QQmlTypeNotAvailable_TimerEvent(QQmlTypeNotAvailable* self, QTimerEvent* event);
void QQmlTypeNotAvailable_OnTimerEvent(QQmlTypeNotAvailable* self, intptr_t slot);
void QQmlTypeNotAvailable_SuperTimerEvent(QQmlTypeNotAvailable* self, QTimerEvent* event);
void QQmlTypeNotAvailable_ChildEvent(QQmlTypeNotAvailable* self, QChildEvent* event);
void QQmlTypeNotAvailable_OnChildEvent(QQmlTypeNotAvailable* self, intptr_t slot);
void QQmlTypeNotAvailable_SuperChildEvent(QQmlTypeNotAvailable* self, QChildEvent* event);
void QQmlTypeNotAvailable_CustomEvent(QQmlTypeNotAvailable* self, QEvent* event);
void QQmlTypeNotAvailable_OnCustomEvent(QQmlTypeNotAvailable* self, intptr_t slot);
void QQmlTypeNotAvailable_SuperCustomEvent(QQmlTypeNotAvailable* self, QEvent* event);
void QQmlTypeNotAvailable_ConnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal);
void QQmlTypeNotAvailable_OnConnectNotify(QQmlTypeNotAvailable* self, intptr_t slot);
void QQmlTypeNotAvailable_SuperConnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal);
void QQmlTypeNotAvailable_DisconnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal);
void QQmlTypeNotAvailable_OnDisconnectNotify(QQmlTypeNotAvailable* self, intptr_t slot);
void QQmlTypeNotAvailable_SuperDisconnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal);
QObject* QQmlTypeNotAvailable_Sender(const QQmlTypeNotAvailable* self);
void QQmlTypeNotAvailable_OnSender(const QQmlTypeNotAvailable* self, intptr_t slot);
QObject* QQmlTypeNotAvailable_SuperSender(const QQmlTypeNotAvailable* self);
int QQmlTypeNotAvailable_SenderSignalIndex(const QQmlTypeNotAvailable* self);
void QQmlTypeNotAvailable_OnSenderSignalIndex(const QQmlTypeNotAvailable* self, intptr_t slot);
int QQmlTypeNotAvailable_SuperSenderSignalIndex(const QQmlTypeNotAvailable* self);
int QQmlTypeNotAvailable_Receivers(const QQmlTypeNotAvailable* self, const char* signal);
void QQmlTypeNotAvailable_OnReceivers(const QQmlTypeNotAvailable* self, intptr_t slot);
int QQmlTypeNotAvailable_SuperReceivers(const QQmlTypeNotAvailable* self, const char* signal);
bool QQmlTypeNotAvailable_IsSignalConnected(const QQmlTypeNotAvailable* self, const QMetaMethod* signal);
void QQmlTypeNotAvailable_OnIsSignalConnected(const QQmlTypeNotAvailable* self, intptr_t slot);
bool QQmlTypeNotAvailable_SuperIsSignalConnected(const QQmlTypeNotAvailable* self, const QMetaMethod* signal);
void QQmlTypeNotAvailable_Delete(QQmlTypeNotAvailable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
