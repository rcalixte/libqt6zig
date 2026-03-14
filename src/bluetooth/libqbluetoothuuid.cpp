#include <QBluetoothUuid>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUuid>
#include <qbluetoothuuid.h>
#include "libqbluetoothuuid.h"
#include "libqbluetoothuuid.hxx"

QBluetoothUuid* QBluetoothUuid_new(const QBluetoothUuid* other) {
    return new QBluetoothUuid(*other);
}

QBluetoothUuid* QBluetoothUuid_new2() {
    return new QBluetoothUuid();
}

QBluetoothUuid* QBluetoothUuid_new3(int uuid) {
    return new QBluetoothUuid(static_cast<QBluetoothUuid::ProtocolUuid>(uuid));
}

QBluetoothUuid* QBluetoothUuid_new4(int uuid) {
    return new QBluetoothUuid(static_cast<QBluetoothUuid::ServiceClassUuid>(uuid));
}

QBluetoothUuid* QBluetoothUuid_new5(int uuid) {
    return new QBluetoothUuid(static_cast<QBluetoothUuid::CharacteristicType>(uuid));
}

QBluetoothUuid* QBluetoothUuid_new6(int uuid) {
    return new QBluetoothUuid(static_cast<QBluetoothUuid::DescriptorType>(uuid));
}

QBluetoothUuid* QBluetoothUuid_new7(uint16_t uuid) {
    return new QBluetoothUuid(static_cast<quint16>(uuid));
}

QBluetoothUuid* QBluetoothUuid_new8(unsigned int uuid) {
    return new QBluetoothUuid(static_cast<quint32>(uuid));
}

QBluetoothUuid* QBluetoothUuid_new9(const QBluetoothUuid* uuid) {
    return new QBluetoothUuid(*uuid);
}

QBluetoothUuid* QBluetoothUuid_new10(const QUuid* uuid) {
    return new QBluetoothUuid(*uuid);
}

void QBluetoothUuid_CopyAssign(QBluetoothUuid* self, QBluetoothUuid* other) {
    *self = *other;
}

void QBluetoothUuid_OperatorAssign(QBluetoothUuid* self, const QBluetoothUuid* other) {
    self->operator=(*other);
}

int QBluetoothUuid_MinimumSize(const QBluetoothUuid* self) {
    return self->minimumSize();
}

uint16_t QBluetoothUuid_ToUInt16(const QBluetoothUuid* self) {
    return static_cast<uint16_t>(self->toUInt16());
}

unsigned int QBluetoothUuid_ToUInt32(const QBluetoothUuid* self) {
    return static_cast<unsigned int>(self->toUInt32());
}

__uint128_t QBluetoothUuid_ToUInt128(const QBluetoothUuid* self) {
    return self->toUInt128();
}

libqt_string QBluetoothUuid_ServiceClassToString(int uuid) {
    QString _ret = QBluetoothUuid::serviceClassToString(static_cast<QBluetoothUuid::ServiceClassUuid>(uuid));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBluetoothUuid_ProtocolToString(int uuid) {
    QString _ret = QBluetoothUuid::protocolToString(static_cast<QBluetoothUuid::ProtocolUuid>(uuid));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBluetoothUuid_CharacteristicToString(int uuid) {
    QString _ret = QBluetoothUuid::characteristicToString(static_cast<QBluetoothUuid::CharacteristicType>(uuid));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBluetoothUuid_DescriptorToString(int uuid) {
    QString _ret = QBluetoothUuid::descriptorToString(static_cast<QBluetoothUuid::DescriptorType>(uuid));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

uint16_t QBluetoothUuid_ToUInt161(const QBluetoothUuid* self, bool* ok) {
    return static_cast<uint16_t>(self->toUInt16(ok));
}

unsigned int QBluetoothUuid_ToUInt321(const QBluetoothUuid* self, bool* ok) {
    return static_cast<unsigned int>(self->toUInt32(ok));
}

__uint128_t QBluetoothUuid_ToUInt1281(const QBluetoothUuid* self, int order) {
    return self->toUInt128(static_cast<QSysInfo::Endian>(order));
}

void QBluetoothUuid_Delete(QBluetoothUuid* self) {
    delete self;
}
