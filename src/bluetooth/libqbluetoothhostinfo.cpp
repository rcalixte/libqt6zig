#include <QBluetoothAddress>
#include <QBluetoothHostInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qbluetoothhostinfo.h>
#include "libqbluetoothhostinfo.h"
#include "libqbluetoothhostinfo.hxx"

QBluetoothHostInfo* QBluetoothHostInfo_new() {
    return new QBluetoothHostInfo();
}

QBluetoothHostInfo* QBluetoothHostInfo_new2(const QBluetoothHostInfo* other) {
    return new QBluetoothHostInfo(*other);
}

void QBluetoothHostInfo_OperatorAssign(QBluetoothHostInfo* self, const QBluetoothHostInfo* other) {
    self->operator=(*other);
}

QBluetoothAddress* QBluetoothHostInfo_Address(const QBluetoothHostInfo* self) {
    return new QBluetoothAddress(self->address());
}

void QBluetoothHostInfo_SetAddress(QBluetoothHostInfo* self, const QBluetoothAddress* address) {
    self->setAddress(*address);
}

libqt_string QBluetoothHostInfo_Name(const QBluetoothHostInfo* self) {
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

void QBluetoothHostInfo_SetName(QBluetoothHostInfo* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

void QBluetoothHostInfo_Delete(QBluetoothHostInfo* self) {
    delete self;
}
