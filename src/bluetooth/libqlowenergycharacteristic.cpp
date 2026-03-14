#include <QBluetoothUuid>
#include <QByteArray>
#include <QList>
#include <QLowEnergyCharacteristic>
#include <QLowEnergyDescriptor>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlowenergycharacteristic.h>
#include "libqlowenergycharacteristic.h"
#include "libqlowenergycharacteristic.hxx"

QLowEnergyCharacteristic* QLowEnergyCharacteristic_new() {
    return new QLowEnergyCharacteristic();
}

QLowEnergyCharacteristic* QLowEnergyCharacteristic_new2(const QLowEnergyCharacteristic* other) {
    return new QLowEnergyCharacteristic(*other);
}

void QLowEnergyCharacteristic_OperatorAssign(QLowEnergyCharacteristic* self, const QLowEnergyCharacteristic* other) {
    self->operator=(*other);
}

libqt_string QLowEnergyCharacteristic_Name(const QLowEnergyCharacteristic* self) {
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

QBluetoothUuid* QLowEnergyCharacteristic_Uuid(const QLowEnergyCharacteristic* self) {
    return new QBluetoothUuid(self->uuid());
}

libqt_string QLowEnergyCharacteristic_Value(const QLowEnergyCharacteristic* self) {
    QByteArray _qb = self->value();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

int QLowEnergyCharacteristic_Properties(const QLowEnergyCharacteristic* self) {
    return static_cast<int>(self->properties());
}

QLowEnergyDescriptor* QLowEnergyCharacteristic_Descriptor(const QLowEnergyCharacteristic* self, const QBluetoothUuid* uuid) {
    return new QLowEnergyDescriptor(self->descriptor(*uuid));
}

libqt_list /* of QLowEnergyDescriptor* */ QLowEnergyCharacteristic_Descriptors(const QLowEnergyCharacteristic* self) {
    QList<QLowEnergyDescriptor> _ret = self->descriptors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLowEnergyDescriptor** _arr = static_cast<QLowEnergyDescriptor**>(malloc(sizeof(QLowEnergyDescriptor*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLowEnergyDescriptor(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QLowEnergyDescriptor* QLowEnergyCharacteristic_ClientCharacteristicConfiguration(const QLowEnergyCharacteristic* self) {
    return new QLowEnergyDescriptor(self->clientCharacteristicConfiguration());
}

bool QLowEnergyCharacteristic_IsValid(const QLowEnergyCharacteristic* self) {
    return self->isValid();
}

void QLowEnergyCharacteristic_Delete(QLowEnergyCharacteristic* self) {
    delete self;
}
