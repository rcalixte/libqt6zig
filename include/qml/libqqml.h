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
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
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

#ifdef __cplusplus
} /* extern C */
#endif

#endif
