#include <QByteArray>
#include <QDBusConnection>
#include <QDBusConnectionInterface>
#include <QDBusError>
#include <QDBusMessage>
#include <QDBusPendingCall>
#include <QDBusVirtualObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdbusconnection.h>
#include "libqdbusconnection.h"
#include "libqdbusconnection.hxx"

QDBusConnection* QDBusConnection_new(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDBusConnection(name_QString);
}

QDBusConnection* QDBusConnection_new2(const QDBusConnection* other) {
    return new QDBusConnection(*other);
}

void QDBusConnection_OperatorAssign(QDBusConnection* self, const QDBusConnection* other) {
    self->operator=(*other);
}

void QDBusConnection_Swap(QDBusConnection* self, QDBusConnection* other) {
    self->swap(*other);
}

bool QDBusConnection_IsConnected(const QDBusConnection* self) {
    return self->isConnected();
}

libqt_string QDBusConnection_BaseService(const QDBusConnection* self) {
    QString _ret = self->baseService();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDBusError* QDBusConnection_LastError(const QDBusConnection* self) {
    return new QDBusError(self->lastError());
}

libqt_string QDBusConnection_Name(const QDBusConnection* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDBusConnection_ConnectionCapabilities(const QDBusConnection* self) {
    return static_cast<int>(self->connectionCapabilities());
}

bool QDBusConnection_Send(const QDBusConnection* self, const QDBusMessage* message) {
    return self->send(*message);
}

bool QDBusConnection_CallWithCallback(const QDBusConnection* self, const QDBusMessage* message, QObject* receiver, const char* returnMethod, const char* errorMethod) {
    return self->callWithCallback(*message, receiver, returnMethod, errorMethod);
}

bool QDBusConnection_CallWithCallback2(const QDBusConnection* self, const QDBusMessage* message, QObject* receiver, const char* slot) {
    return self->callWithCallback(*message, receiver, slot);
}

QDBusMessage* QDBusConnection_Call(const QDBusConnection* self, const QDBusMessage* message) {
    return new QDBusMessage(self->call(*message));
}

QDBusPendingCall* QDBusConnection_AsyncCall(const QDBusConnection* self, const QDBusMessage* message) {
    return new QDBusPendingCall(self->asyncCall(*message));
}

bool QDBusConnection_Connect(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, QObject* receiver, const char* slot) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->connect(service_QString, path_QString, interface_QString, name_QString, receiver, slot);
}

bool QDBusConnection_Connect2(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, const libqt_string signature, QObject* receiver, const char* slot) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString signature_QString = QString::fromUtf8(signature.data, signature.len);
    return self->connect(service_QString, path_QString, interface_QString, name_QString, signature_QString, receiver, slot);
}

bool QDBusConnection_Connect3(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, const libqt_list /* of libqt_string */ argumentMatch, const libqt_string signature, QObject* receiver, const char* slot) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QString> argumentMatch_QList;
    argumentMatch_QList.reserve(argumentMatch.len);
    libqt_string* argumentMatch_arr = static_cast<libqt_string*>(argumentMatch.data);
    for (size_t i = 0; i < argumentMatch.len; ++i) {
        QString argumentMatch_arr_i_QString = QString::fromUtf8(argumentMatch_arr[i].data, argumentMatch_arr[i].len);
        argumentMatch_QList.push_back(argumentMatch_arr_i_QString);
    }
    QString signature_QString = QString::fromUtf8(signature.data, signature.len);
    return self->connect(service_QString, path_QString, interface_QString, name_QString, argumentMatch_QList, signature_QString, receiver, slot);
}

bool QDBusConnection_Disconnect(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, QObject* receiver, const char* slot) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->disconnect(service_QString, path_QString, interface_QString, name_QString, receiver, slot);
}

bool QDBusConnection_Disconnect2(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, const libqt_string signature, QObject* receiver, const char* slot) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString signature_QString = QString::fromUtf8(signature.data, signature.len);
    return self->disconnect(service_QString, path_QString, interface_QString, name_QString, signature_QString, receiver, slot);
}

bool QDBusConnection_Disconnect3(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, const libqt_list /* of libqt_string */ argumentMatch, const libqt_string signature, QObject* receiver, const char* slot) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QString> argumentMatch_QList;
    argumentMatch_QList.reserve(argumentMatch.len);
    libqt_string* argumentMatch_arr = static_cast<libqt_string*>(argumentMatch.data);
    for (size_t i = 0; i < argumentMatch.len; ++i) {
        QString argumentMatch_arr_i_QString = QString::fromUtf8(argumentMatch_arr[i].data, argumentMatch_arr[i].len);
        argumentMatch_QList.push_back(argumentMatch_arr_i_QString);
    }
    QString signature_QString = QString::fromUtf8(signature.data, signature.len);
    return self->disconnect(service_QString, path_QString, interface_QString, name_QString, argumentMatch_QList, signature_QString, receiver, slot);
}

bool QDBusConnection_RegisterObject(QDBusConnection* self, const libqt_string path, QObject* object) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->registerObject(path_QString, object);
}

bool QDBusConnection_RegisterObject2(QDBusConnection* self, const libqt_string path, const libqt_string interface, QObject* object) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    return self->registerObject(path_QString, interface_QString, object);
}

void QDBusConnection_UnregisterObject(QDBusConnection* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->unregisterObject(path_QString);
}

QObject* QDBusConnection_ObjectRegisteredAt(const QDBusConnection* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->objectRegisteredAt(path_QString);
}

bool QDBusConnection_RegisterVirtualObject(QDBusConnection* self, const libqt_string path, QDBusVirtualObject* object) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->registerVirtualObject(path_QString, object);
}

bool QDBusConnection_RegisterService(QDBusConnection* self, const libqt_string serviceName) {
    QString serviceName_QString = QString::fromUtf8(serviceName.data, serviceName.len);
    return self->registerService(serviceName_QString);
}

bool QDBusConnection_UnregisterService(QDBusConnection* self, const libqt_string serviceName) {
    QString serviceName_QString = QString::fromUtf8(serviceName.data, serviceName.len);
    return self->unregisterService(serviceName_QString);
}

QDBusConnectionInterface* QDBusConnection_Interface(const QDBusConnection* self) {
    return self->interface();
}

void* QDBusConnection_InternalPointer(const QDBusConnection* self) {
    return self->internalPointer();
}

QDBusConnection* QDBusConnection_ConnectToBus(int typeVal, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDBusConnection(QDBusConnection::connectToBus(static_cast<QDBusConnection::BusType>(typeVal), name_QString));
}

QDBusConnection* QDBusConnection_ConnectToBus2(const libqt_string address, const libqt_string name) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDBusConnection(QDBusConnection::connectToBus(address_QString, name_QString));
}

QDBusConnection* QDBusConnection_ConnectToPeer(const libqt_string address, const libqt_string name) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDBusConnection(QDBusConnection::connectToPeer(address_QString, name_QString));
}

void QDBusConnection_DisconnectFromBus(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QDBusConnection::disconnectFromBus(name_QString);
}

void QDBusConnection_DisconnectFromPeer(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QDBusConnection::disconnectFromPeer(name_QString);
}

libqt_string QDBusConnection_LocalMachineId() {
    QByteArray _qb = QDBusConnection::localMachineId();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDBusConnection* QDBusConnection_SessionBus() {
    return new QDBusConnection(QDBusConnection::sessionBus());
}

QDBusConnection* QDBusConnection_SystemBus() {
    return new QDBusConnection(QDBusConnection::systemBus());
}

bool QDBusConnection_CallWithCallback5(const QDBusConnection* self, const QDBusMessage* message, QObject* receiver, const char* returnMethod, const char* errorMethod, int timeout) {
    return self->callWithCallback(*message, receiver, returnMethod, errorMethod, static_cast<int>(timeout));
}

bool QDBusConnection_CallWithCallback4(const QDBusConnection* self, const QDBusMessage* message, QObject* receiver, const char* slot, int timeout) {
    return self->callWithCallback(*message, receiver, slot, static_cast<int>(timeout));
}

QDBusMessage* QDBusConnection_Call2(const QDBusConnection* self, const QDBusMessage* message, int mode) {
    return new QDBusMessage(self->call(*message, static_cast<QDBus::CallMode>(mode)));
}

QDBusMessage* QDBusConnection_Call3(const QDBusConnection* self, const QDBusMessage* message, int mode, int timeout) {
    return new QDBusMessage(self->call(*message, static_cast<QDBus::CallMode>(mode), static_cast<int>(timeout)));
}

QDBusPendingCall* QDBusConnection_AsyncCall2(const QDBusConnection* self, const QDBusMessage* message, int timeout) {
    return new QDBusPendingCall(self->asyncCall(*message, static_cast<int>(timeout)));
}

bool QDBusConnection_RegisterObject3(QDBusConnection* self, const libqt_string path, QObject* object, int options) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->registerObject(path_QString, object, static_cast<QDBusConnection::RegisterOptions>(options));
}

bool QDBusConnection_RegisterObject4(QDBusConnection* self, const libqt_string path, const libqt_string interface, QObject* object, int options) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    return self->registerObject(path_QString, interface_QString, object, static_cast<QDBusConnection::RegisterOptions>(options));
}

void QDBusConnection_UnregisterObject2(QDBusConnection* self, const libqt_string path, int mode) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->unregisterObject(path_QString, static_cast<QDBusConnection::UnregisterMode>(mode));
}

bool QDBusConnection_RegisterVirtualObject3(QDBusConnection* self, const libqt_string path, QDBusVirtualObject* object, int options) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->registerVirtualObject(path_QString, object, static_cast<QDBusConnection::VirtualObjectRegisterOption>(options));
}

void QDBusConnection_Delete(QDBusConnection* self) {
    delete self;
}
