#include <QDBusAbstractInterface>
#include <QDBusAbstractInterfaceBase>
#include <QDBusConnectionInterface>
#include <QDBusError>
#include <QDBusMessage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qdbusconnectioninterface.h>
#include "libqdbusconnectioninterface.h"
#include "libqdbusconnectioninterface.hxx"

QMetaObject* QDBusConnectionInterface_MetaObject(const QDBusConnectionInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDBusConnectionInterface_Metacast(QDBusConnectionInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDBusConnectionInterface_Metacall(QDBusConnectionInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDBusConnectionInterface_Tr(const char* s) {
    QString _ret = QDBusConnectionInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDBusConnectionInterface_ServiceRegistered(QDBusConnectionInterface* self, const libqt_string service) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    self->serviceRegistered(service_QString);
}

void QDBusConnectionInterface_Connect_ServiceRegistered(QDBusConnectionInterface* self, intptr_t slot) {
    void (*slotFunc)(QDBusConnectionInterface*, const char*) = reinterpret_cast<void (*)(QDBusConnectionInterface*, const char*)>(slot);
    QDBusConnectionInterface::connect(self, &QDBusConnectionInterface::serviceRegistered, [self, slotFunc](const QString& service) {
        const QString service_ret = service;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray service_b = service_ret.toUtf8();
        const char* service_str = static_cast<const char*>(malloc(service_b.length() + 1));
        memcpy((void*)service_str, service_b.data(), service_b.length());
        ((char*)service_str)[service_b.length()] = '\0';
        const char* sigval1 = service_str;
        slotFunc(self, sigval1);
        libqt_free(service_str);
    });
}

void QDBusConnectionInterface_ServiceUnregistered(QDBusConnectionInterface* self, const libqt_string service) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    self->serviceUnregistered(service_QString);
}

void QDBusConnectionInterface_Connect_ServiceUnregistered(QDBusConnectionInterface* self, intptr_t slot) {
    void (*slotFunc)(QDBusConnectionInterface*, const char*) = reinterpret_cast<void (*)(QDBusConnectionInterface*, const char*)>(slot);
    QDBusConnectionInterface::connect(self, &QDBusConnectionInterface::serviceUnregistered, [self, slotFunc](const QString& service) {
        const QString service_ret = service;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray service_b = service_ret.toUtf8();
        const char* service_str = static_cast<const char*>(malloc(service_b.length() + 1));
        memcpy((void*)service_str, service_b.data(), service_b.length());
        ((char*)service_str)[service_b.length()] = '\0';
        const char* sigval1 = service_str;
        slotFunc(self, sigval1);
        libqt_free(service_str);
    });
}

void QDBusConnectionInterface_ServiceOwnerChanged(QDBusConnectionInterface* self, const libqt_string name, const libqt_string oldOwner, const libqt_string newOwner) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString oldOwner_QString = QString::fromUtf8(oldOwner.data, oldOwner.len);
    QString newOwner_QString = QString::fromUtf8(newOwner.data, newOwner.len);
    self->serviceOwnerChanged(name_QString, oldOwner_QString, newOwner_QString);
}

void QDBusConnectionInterface_Connect_ServiceOwnerChanged(QDBusConnectionInterface* self, intptr_t slot) {
    void (*slotFunc)(QDBusConnectionInterface*, const char*, const char*, const char*) = reinterpret_cast<void (*)(QDBusConnectionInterface*, const char*, const char*, const char*)>(slot);
    QDBusConnectionInterface::connect(self, &QDBusConnectionInterface::serviceOwnerChanged, [self, slotFunc](const QString& name, const QString& oldOwner, const QString& newOwner) {
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        const char* name_str = static_cast<const char*>(malloc(name_b.length() + 1));
        memcpy((void*)name_str, name_b.data(), name_b.length());
        ((char*)name_str)[name_b.length()] = '\0';
        const char* sigval1 = name_str;
        const QString oldOwner_ret = oldOwner;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray oldOwner_b = oldOwner_ret.toUtf8();
        const char* oldOwner_str = static_cast<const char*>(malloc(oldOwner_b.length() + 1));
        memcpy((void*)oldOwner_str, oldOwner_b.data(), oldOwner_b.length());
        ((char*)oldOwner_str)[oldOwner_b.length()] = '\0';
        const char* sigval2 = oldOwner_str;
        const QString newOwner_ret = newOwner;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray newOwner_b = newOwner_ret.toUtf8();
        const char* newOwner_str = static_cast<const char*>(malloc(newOwner_b.length() + 1));
        memcpy((void*)newOwner_str, newOwner_b.data(), newOwner_b.length());
        ((char*)newOwner_str)[newOwner_b.length()] = '\0';
        const char* sigval3 = newOwner_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(name_str);
        libqt_free(oldOwner_str);
        libqt_free(newOwner_str);
    });
}

void QDBusConnectionInterface_CallWithCallbackFailed(QDBusConnectionInterface* self, const QDBusError* errorVal, const QDBusMessage* call) {
    self->callWithCallbackFailed(*errorVal, *call);
}

void QDBusConnectionInterface_Connect_CallWithCallbackFailed(QDBusConnectionInterface* self, intptr_t slot) {
    void (*slotFunc)(QDBusConnectionInterface*, QDBusError*, QDBusMessage*) = reinterpret_cast<void (*)(QDBusConnectionInterface*, QDBusError*, QDBusMessage*)>(slot);
    QDBusConnectionInterface::connect(self, &QDBusConnectionInterface::callWithCallbackFailed, [self, slotFunc](const QDBusError& errorVal, const QDBusMessage& call) {
        const QDBusError& errorVal_ret = errorVal;
        // Cast returned reference into pointer
        QDBusError* sigval1 = const_cast<QDBusError*>(&errorVal_ret);
        const QDBusMessage& call_ret = call;
        // Cast returned reference into pointer
        QDBusMessage* sigval2 = const_cast<QDBusMessage*>(&call_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QDBusConnectionInterface_NameAcquired(QDBusConnectionInterface* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->NameAcquired(param1_QString);
}

void QDBusConnectionInterface_Connect_NameAcquired(QDBusConnectionInterface* self, intptr_t slot) {
    void (*slotFunc)(QDBusConnectionInterface*, const char*) = reinterpret_cast<void (*)(QDBusConnectionInterface*, const char*)>(slot);
    QDBusConnectionInterface::connect(self, &QDBusConnectionInterface::NameAcquired, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void QDBusConnectionInterface_NameLost(QDBusConnectionInterface* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->NameLost(param1_QString);
}

void QDBusConnectionInterface_Connect_NameLost(QDBusConnectionInterface* self, intptr_t slot) {
    void (*slotFunc)(QDBusConnectionInterface*, const char*) = reinterpret_cast<void (*)(QDBusConnectionInterface*, const char*)>(slot);
    QDBusConnectionInterface::connect(self, &QDBusConnectionInterface::NameLost, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void QDBusConnectionInterface_NameOwnerChanged(QDBusConnectionInterface* self, const libqt_string param1, const libqt_string param2, const libqt_string param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    self->NameOwnerChanged(param1_QString, param2_QString, param3_QString);
}

void QDBusConnectionInterface_Connect_NameOwnerChanged(QDBusConnectionInterface* self, intptr_t slot) {
    void (*slotFunc)(QDBusConnectionInterface*, const char*, const char*, const char*) = reinterpret_cast<void (*)(QDBusConnectionInterface*, const char*, const char*, const char*)>(slot);
    QDBusConnectionInterface::connect(self, &QDBusConnectionInterface::NameOwnerChanged, [self, slotFunc](const QString& param1, const QString& param2, const QString& param3) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        const QString param2_ret = param2;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param2_b = param2_ret.toUtf8();
        const char* param2_str = static_cast<const char*>(malloc(param2_b.length() + 1));
        memcpy((void*)param2_str, param2_b.data(), param2_b.length());
        ((char*)param2_str)[param2_b.length()] = '\0';
        const char* sigval2 = param2_str;
        const QString param3_ret = param3;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param3_b = param3_ret.toUtf8();
        const char* param3_str = static_cast<const char*>(malloc(param3_b.length() + 1));
        memcpy((void*)param3_str, param3_b.data(), param3_b.length());
        ((char*)param3_str)[param3_b.length()] = '\0';
        const char* sigval3 = param3_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(param1_str);
        libqt_free(param2_str);
        libqt_free(param3_str);
    });
}

libqt_string QDBusConnectionInterface_Tr2(const char* s, const char* c) {
    QString _ret = QDBusConnectionInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusConnectionInterface_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDBusConnectionInterface::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
