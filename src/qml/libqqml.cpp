#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QQmlContext>
#include <QQmlEngine>
#include <QString>
#include <QUrl>
#include <qqml.h>
#include "libqqml.h"
#include "libqqml.hxx"

void qqml_h_QmlClearTypeRegistrations() {
    qmlClearTypeRegistrations();
}

int qqml_h_QmlRegisterTypeNotAvailable(const char* uri, int versionMajor, int versionMinor, const char* qmlName, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    return qmlRegisterTypeNotAvailable(uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName, message_QString);
}

int qqml_h_QmlRegisterUncreatableMetaObject(const QMetaObject* staticMetaObject, const char* uri, int versionMajor, int versionMinor, const char* qmlName, const libqt_string reason) {
    QString reason_QString = QString::fromUtf8(reason.data, reason.len);
    return qmlRegisterUncreatableMetaObject(*staticMetaObject, uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName, reason_QString);
}

void qqml_h_QmlExecuteDeferred(QObject* param1) {
    qmlExecuteDeferred(param1);
}

QQmlContext* qqml_h_QmlContext(const QObject* param1) {
    return qmlContext(param1);
}

QQmlEngine* qqml_h_QmlEngine(const QObject* param1) {
    return qmlEngine(param1);
}

intptr_t qqml_h_QmlAttachedPropertiesFunction(QObject* param1, const QMetaObject* param2) {
    return reinterpret_cast<intptr_t>(qmlAttachedPropertiesFunction(param1, param2));
}

QObject* qqml_h_QmlAttachedPropertiesObject(QObject* param1, intptr_t func, bool create) {
    auto func_func = reinterpret_cast<QQmlAttachedPropertiesFunc>(func);
    return qmlAttachedPropertiesObject(param1, func_func, create);
}

QObject* qqml_h_QmlExtendedObject(QObject* param1) {
    return qmlExtendedObject(param1);
}

bool qqml_h_QmlProtectModule(const char* uri, int majVersion) {
    return qmlProtectModule(uri, static_cast<int>(majVersion));
}

void qqml_h_QmlRegisterModule(const char* uri, int versionMajor, int versionMinor) {
    qmlRegisterModule(uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor));
}

void qqml_h_QmlRegisterModuleImport(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor) {
    qmlRegisterModuleImport(uri, static_cast<int>(moduleMajor), import, static_cast<int>(importMajor), static_cast<int>(importMinor));
}

void qqml_h_QmlUnregisterModuleImport(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor) {
    qmlUnregisterModuleImport(uri, static_cast<int>(moduleMajor), import, static_cast<int>(importMajor), static_cast<int>(importMinor));
}

int qqml_h_QmlRegisterSingletonType(const QUrl* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qmlRegisterSingletonType(*url, uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName);
}

int qqml_h_QmlRegisterType(const QUrl* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qmlRegisterType(*url, uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName);
}

void qqml_h_QmlRegisterNamespaceAndRevisions(const QMetaObject* metaObject, const char* uri, int versionMajor, libqt_list /* of int */ qmlTypeIds, const QMetaObject* classInfoMetaObject, const QMetaObject* extensionMetaObject) {
    QList<int>* qmlTypeIds_QList = new QList<int>();
    qmlTypeIds_QList->reserve(qmlTypeIds.len);
    int* qmlTypeIds_arr = static_cast<int*>(qmlTypeIds.data);
    for (size_t i = 0; i < qmlTypeIds.len; ++i) {
        qmlTypeIds_QList->push_back(static_cast<int>(qmlTypeIds_arr[i]));
    }
    qmlRegisterNamespaceAndRevisions(metaObject, uri, static_cast<int>(versionMajor), qmlTypeIds_QList, classInfoMetaObject, extensionMetaObject);
}

void qqml_h_QmlRegisterNamespaceAndRevisions2(const QMetaObject* metaObject, const char* uri, int versionMajor, libqt_list /* of int */ qmlTypeIds, const QMetaObject* classInfoMetaObject) {
    QList<int>* qmlTypeIds_QList = new QList<int>();
    qmlTypeIds_QList->reserve(qmlTypeIds.len);
    int* qmlTypeIds_arr = static_cast<int*>(qmlTypeIds.data);
    for (size_t i = 0; i < qmlTypeIds.len; ++i) {
        qmlTypeIds_QList->push_back(static_cast<int>(qmlTypeIds_arr[i]));
    }
    qmlRegisterNamespaceAndRevisions(metaObject, uri, static_cast<int>(versionMajor), qmlTypeIds_QList, classInfoMetaObject);
}

int qqml_h_QmlTypeId(const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qmlTypeId(uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName);
}
