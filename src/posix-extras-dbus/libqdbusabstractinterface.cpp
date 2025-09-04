#include <QDBusAbstractInterface>
#include <QDBusAbstractInterfaceBase>
#include <QDBusConnection>
#include <QDBusError>
#include <QDBusMessage>
#include <QDBusPendingCall>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qdbusabstractinterface.h>
#include "libqdbusabstractinterface.h"
#include "libqdbusabstractinterface.hxx"

int QDBusAbstractInterfaceBase_Metacall(QDBusAbstractInterfaceBase* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void QDBusAbstractInterfaceBase_Delete(QDBusAbstractInterfaceBase* self) {
    delete self;
}

QMetaObject* QDBusAbstractInterface_MetaObject(const QDBusAbstractInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDBusAbstractInterface_Metacast(QDBusAbstractInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDBusAbstractInterface_Metacall(QDBusAbstractInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDBusAbstractInterface_Tr(const char* s) {
    QString _ret = QDBusAbstractInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDBusAbstractInterface_IsValid(const QDBusAbstractInterface* self) {
    return self->isValid();
}

QDBusConnection* QDBusAbstractInterface_Connection(const QDBusAbstractInterface* self) {
    return new QDBusConnection(self->connection());
}

libqt_string QDBusAbstractInterface_Service(const QDBusAbstractInterface* self) {
    QString _ret = self->service();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusAbstractInterface_Path(const QDBusAbstractInterface* self) {
    QString _ret = self->path();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusAbstractInterface_Interface(const QDBusAbstractInterface* self) {
    QString _ret = self->interface();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDBusError* QDBusAbstractInterface_LastError(const QDBusAbstractInterface* self) {
    return new QDBusError(self->lastError());
}

void QDBusAbstractInterface_SetTimeout(QDBusAbstractInterface* self, int timeout) {
    self->setTimeout(static_cast<int>(timeout));
}

int QDBusAbstractInterface_Timeout(const QDBusAbstractInterface* self) {
    return self->timeout();
}

void QDBusAbstractInterface_SetInteractiveAuthorizationAllowed(QDBusAbstractInterface* self, bool enable) {
    self->setInteractiveAuthorizationAllowed(enable);
}

bool QDBusAbstractInterface_IsInteractiveAuthorizationAllowed(const QDBusAbstractInterface* self) {
    return self->isInteractiveAuthorizationAllowed();
}

QDBusMessage* QDBusAbstractInterface_Call(QDBusAbstractInterface* self, const libqt_string method) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    return new QDBusMessage(self->call(method_QString));
}

QDBusMessage* QDBusAbstractInterface_Call2(QDBusAbstractInterface* self, int mode, const libqt_string method) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    return new QDBusMessage(self->call(static_cast<QDBus::CallMode>(mode), method_QString));
}

QDBusMessage* QDBusAbstractInterface_CallWithArgumentList(QDBusAbstractInterface* self, int mode, const libqt_string method, const libqt_list /* of QVariant* */ args) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    QList<QVariant> args_QList;
    args_QList.reserve(args.len);
    QVariant** args_arr = static_cast<QVariant**>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QList.push_back(*(args_arr[i]));
    }
    return new QDBusMessage(self->callWithArgumentList(static_cast<QDBus::CallMode>(mode), method_QString, args_QList));
}

QDBusPendingCall* QDBusAbstractInterface_AsyncCall(QDBusAbstractInterface* self, const libqt_string method) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    return new QDBusPendingCall(self->asyncCall(method_QString));
}

QDBusPendingCall* QDBusAbstractInterface_AsyncCallWithArgumentList(QDBusAbstractInterface* self, const libqt_string method, const libqt_list /* of QVariant* */ args) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    QList<QVariant> args_QList;
    args_QList.reserve(args.len);
    QVariant** args_arr = static_cast<QVariant**>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QList.push_back(*(args_arr[i]));
    }
    return new QDBusPendingCall(self->asyncCallWithArgumentList(method_QString, args_QList));
}

libqt_string QDBusAbstractInterface_Tr2(const char* s, const char* c) {
    QString _ret = QDBusAbstractInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusAbstractInterface_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDBusAbstractInterface::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDBusAbstractInterface_Delete(QDBusAbstractInterface* self) {
    delete self;
}
