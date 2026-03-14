#include <QBluetoothAddress>
#include <QBluetoothDeviceInfo>
#include <QBluetoothServiceInfo>
#define WORKAROUND_INNER_CLASS_DEFINITION_QBluetoothServiceInfo__Alternative
#define WORKAROUND_INNER_CLASS_DEFINITION_QBluetoothServiceInfo__Sequence
#include <QBluetoothUuid>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qbluetoothserviceinfo.h>
#include "libqbluetoothserviceinfo.h"
#include "libqbluetoothserviceinfo.hxx"

QBluetoothServiceInfo* QBluetoothServiceInfo_new() {
    return new QBluetoothServiceInfo();
}

QBluetoothServiceInfo* QBluetoothServiceInfo_new2(const QBluetoothServiceInfo* other) {
    return new QBluetoothServiceInfo(*other);
}

bool QBluetoothServiceInfo_IsValid(const QBluetoothServiceInfo* self) {
    return self->isValid();
}

bool QBluetoothServiceInfo_IsComplete(const QBluetoothServiceInfo* self) {
    return self->isComplete();
}

void QBluetoothServiceInfo_SetDevice(QBluetoothServiceInfo* self, const QBluetoothDeviceInfo* info) {
    self->setDevice(*info);
}

QBluetoothDeviceInfo* QBluetoothServiceInfo_Device(const QBluetoothServiceInfo* self) {
    return new QBluetoothDeviceInfo(self->device());
}

void QBluetoothServiceInfo_SetAttribute(QBluetoothServiceInfo* self, uint16_t attributeId, const QVariant* value) {
    self->setAttribute(static_cast<quint16>(attributeId), *value);
}

void QBluetoothServiceInfo_SetAttribute2(QBluetoothServiceInfo* self, uint16_t attributeId, const QBluetoothUuid* value) {
    self->setAttribute(static_cast<quint16>(attributeId), *value);
}

void QBluetoothServiceInfo_SetAttribute3(QBluetoothServiceInfo* self, uint16_t attributeId, const QBluetoothServiceInfo__Sequence* value) {
    self->setAttribute(static_cast<quint16>(attributeId), *value);
}

void QBluetoothServiceInfo_SetAttribute4(QBluetoothServiceInfo* self, uint16_t attributeId, const QBluetoothServiceInfo__Alternative* value) {
    self->setAttribute(static_cast<quint16>(attributeId), *value);
}

QVariant* QBluetoothServiceInfo_Attribute(const QBluetoothServiceInfo* self, uint16_t attributeId) {
    return new QVariant(self->attribute(static_cast<quint16>(attributeId)));
}

libqt_list /* of uint16_t */ QBluetoothServiceInfo_Attributes(const QBluetoothServiceInfo* self) {
    QList<unsigned short> _ret = self->attributes();
    // Convert QList<> from C++ memory to manually-managed C memory
    uint16_t* _arr = static_cast<uint16_t*>(malloc(sizeof(uint16_t) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QBluetoothServiceInfo_Contains(const QBluetoothServiceInfo* self, uint16_t attributeId) {
    return self->contains(static_cast<quint16>(attributeId));
}

void QBluetoothServiceInfo_RemoveAttribute(QBluetoothServiceInfo* self, uint16_t attributeId) {
    self->removeAttribute(static_cast<quint16>(attributeId));
}

void QBluetoothServiceInfo_SetServiceName(QBluetoothServiceInfo* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setServiceName(name_QString);
}

libqt_string QBluetoothServiceInfo_ServiceName(const QBluetoothServiceInfo* self) {
    QString _ret = self->serviceName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBluetoothServiceInfo_SetServiceDescription(QBluetoothServiceInfo* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setServiceDescription(description_QString);
}

libqt_string QBluetoothServiceInfo_ServiceDescription(const QBluetoothServiceInfo* self) {
    QString _ret = self->serviceDescription();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBluetoothServiceInfo_SetServiceProvider(QBluetoothServiceInfo* self, const libqt_string provider) {
    QString provider_QString = QString::fromUtf8(provider.data, provider.len);
    self->setServiceProvider(provider_QString);
}

libqt_string QBluetoothServiceInfo_ServiceProvider(const QBluetoothServiceInfo* self) {
    QString _ret = self->serviceProvider();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QBluetoothServiceInfo_SocketProtocol(const QBluetoothServiceInfo* self) {
    return static_cast<int>(self->socketProtocol());
}

int QBluetoothServiceInfo_ProtocolServiceMultiplexer(const QBluetoothServiceInfo* self) {
    return self->protocolServiceMultiplexer();
}

int QBluetoothServiceInfo_ServerChannel(const QBluetoothServiceInfo* self) {
    return self->serverChannel();
}

QBluetoothServiceInfo__Sequence* QBluetoothServiceInfo_ProtocolDescriptor(const QBluetoothServiceInfo* self, int protocol) {
    return new QBluetoothServiceInfo::Sequence(self->protocolDescriptor(static_cast<QBluetoothUuid::ProtocolUuid>(protocol)));
}

void QBluetoothServiceInfo_SetServiceAvailability(QBluetoothServiceInfo* self, unsigned char availability) {
    self->setServiceAvailability(static_cast<quint8>(availability));
}

unsigned char QBluetoothServiceInfo_ServiceAvailability(const QBluetoothServiceInfo* self) {
    return static_cast<unsigned char>(self->serviceAvailability());
}

void QBluetoothServiceInfo_SetServiceUuid(QBluetoothServiceInfo* self, const QBluetoothUuid* uuid) {
    self->setServiceUuid(*uuid);
}

QBluetoothUuid* QBluetoothServiceInfo_ServiceUuid(const QBluetoothServiceInfo* self) {
    return new QBluetoothUuid(self->serviceUuid());
}

libqt_list /* of QBluetoothUuid* */ QBluetoothServiceInfo_ServiceClassUuids(const QBluetoothServiceInfo* self) {
    QList<QBluetoothUuid> _ret = self->serviceClassUuids();
    // Convert QList<> from C++ memory to manually-managed C memory
    QBluetoothUuid** _arr = static_cast<QBluetoothUuid**>(malloc(sizeof(QBluetoothUuid*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QBluetoothUuid(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QBluetoothServiceInfo_OperatorAssign(QBluetoothServiceInfo* self, const QBluetoothServiceInfo* other) {
    self->operator=(*other);
}

bool QBluetoothServiceInfo_IsRegistered(const QBluetoothServiceInfo* self) {
    return self->isRegistered();
}

bool QBluetoothServiceInfo_RegisterService(QBluetoothServiceInfo* self) {
    return self->registerService();
}

bool QBluetoothServiceInfo_UnregisterService(QBluetoothServiceInfo* self) {
    return self->unregisterService();
}

bool QBluetoothServiceInfo_RegisterService1(QBluetoothServiceInfo* self, const QBluetoothAddress* localAdapter) {
    return self->registerService(*localAdapter);
}

void QBluetoothServiceInfo_Delete(QBluetoothServiceInfo* self) {
    delete self;
}

QBluetoothServiceInfo__Sequence* QBluetoothServiceInfo__Sequence_new() {
    return new QBluetoothServiceInfo::Sequence();
}

QBluetoothServiceInfo__Sequence* QBluetoothServiceInfo__Sequence_new2(const libqt_list /* of QVariant* */ list) {
    QList<QVariant> list_QList;
    list_QList.reserve(list.len);
    QVariant** list_arr = static_cast<QVariant**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    return new QBluetoothServiceInfo::Sequence(list_QList);
}

QBluetoothServiceInfo__Sequence* QBluetoothServiceInfo__Sequence_new3(const QBluetoothServiceInfo__Sequence* param1) {
    return new QBluetoothServiceInfo::Sequence(*param1);
}

void QBluetoothServiceInfo__Sequence_Delete(QBluetoothServiceInfo__Sequence* self) {
    delete self;
}

QBluetoothServiceInfo__Alternative* QBluetoothServiceInfo__Alternative_new() {
    return new QBluetoothServiceInfo::Alternative();
}

QBluetoothServiceInfo__Alternative* QBluetoothServiceInfo__Alternative_new2(const libqt_list /* of QVariant* */ list) {
    QList<QVariant> list_QList;
    list_QList.reserve(list.len);
    QVariant** list_arr = static_cast<QVariant**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    return new QBluetoothServiceInfo::Alternative(list_QList);
}

QBluetoothServiceInfo__Alternative* QBluetoothServiceInfo__Alternative_new3(const QBluetoothServiceInfo__Alternative* param1) {
    return new QBluetoothServiceInfo::Alternative(*param1);
}

void QBluetoothServiceInfo__Alternative_Delete(QBluetoothServiceInfo__Alternative* self) {
    delete self;
}
