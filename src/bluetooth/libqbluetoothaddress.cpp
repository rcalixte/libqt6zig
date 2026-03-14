#include <QBluetoothAddress>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qbluetoothaddress.h>
#include "libqbluetoothaddress.h"
#include "libqbluetoothaddress.hxx"

QBluetoothAddress* QBluetoothAddress_new() {
    return new QBluetoothAddress();
}

QBluetoothAddress* QBluetoothAddress_new2(unsigned long long address) {
    return new QBluetoothAddress(static_cast<quint64>(address));
}

QBluetoothAddress* QBluetoothAddress_new3(const libqt_string address) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    return new QBluetoothAddress(address_QString);
}

QBluetoothAddress* QBluetoothAddress_new4(const QBluetoothAddress* other) {
    return new QBluetoothAddress(*other);
}

void QBluetoothAddress_OperatorAssign(QBluetoothAddress* self, const QBluetoothAddress* other) {
    self->operator=(*other);
}

bool QBluetoothAddress_IsNull(const QBluetoothAddress* self) {
    return self->isNull();
}

void QBluetoothAddress_Clear(QBluetoothAddress* self) {
    self->clear();
}

unsigned long long QBluetoothAddress_ToUInt64(const QBluetoothAddress* self) {
    return static_cast<unsigned long long>(self->toUInt64());
}

libqt_string QBluetoothAddress_ToString(const QBluetoothAddress* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBluetoothAddress_Delete(QBluetoothAddress* self) {
    delete self;
}
