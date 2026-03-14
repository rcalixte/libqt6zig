#include <QBluetoothUuid>
#include <QByteArray>
#include <QLowEnergyDescriptorData>
#include <qlowenergydescriptordata.h>
#include "libqlowenergydescriptordata.h"
#include "libqlowenergydescriptordata.hxx"

QLowEnergyDescriptorData* QLowEnergyDescriptorData_new() {
    return new QLowEnergyDescriptorData();
}

QLowEnergyDescriptorData* QLowEnergyDescriptorData_new2(const QBluetoothUuid* uuid, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    return new QLowEnergyDescriptorData(*uuid, value_QByteArray);
}

QLowEnergyDescriptorData* QLowEnergyDescriptorData_new3(const QLowEnergyDescriptorData* other) {
    return new QLowEnergyDescriptorData(*other);
}

void QLowEnergyDescriptorData_OperatorAssign(QLowEnergyDescriptorData* self, const QLowEnergyDescriptorData* other) {
    self->operator=(*other);
}

libqt_string QLowEnergyDescriptorData_Value(const QLowEnergyDescriptorData* self) {
    QByteArray _qb = self->value();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QLowEnergyDescriptorData_SetValue(QLowEnergyDescriptorData* self, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->setValue(value_QByteArray);
}

QBluetoothUuid* QLowEnergyDescriptorData_Uuid(const QLowEnergyDescriptorData* self) {
    return new QBluetoothUuid(self->uuid());
}

void QLowEnergyDescriptorData_SetUuid(QLowEnergyDescriptorData* self, const QBluetoothUuid* uuid) {
    self->setUuid(*uuid);
}

bool QLowEnergyDescriptorData_IsValid(const QLowEnergyDescriptorData* self) {
    return self->isValid();
}

void QLowEnergyDescriptorData_SetReadPermissions(QLowEnergyDescriptorData* self, bool readable) {
    self->setReadPermissions(readable);
}

bool QLowEnergyDescriptorData_IsReadable(const QLowEnergyDescriptorData* self) {
    return self->isReadable();
}

int QLowEnergyDescriptorData_ReadConstraints(const QLowEnergyDescriptorData* self) {
    return static_cast<int>(self->readConstraints());
}

void QLowEnergyDescriptorData_SetWritePermissions(QLowEnergyDescriptorData* self, bool writable) {
    self->setWritePermissions(writable);
}

bool QLowEnergyDescriptorData_IsWritable(const QLowEnergyDescriptorData* self) {
    return self->isWritable();
}

int QLowEnergyDescriptorData_WriteConstraints(const QLowEnergyDescriptorData* self) {
    return static_cast<int>(self->writeConstraints());
}

void QLowEnergyDescriptorData_Swap(QLowEnergyDescriptorData* self, QLowEnergyDescriptorData* other) {
    self->swap(*other);
}

void QLowEnergyDescriptorData_SetReadPermissions2(QLowEnergyDescriptorData* self, bool readable, int constraints) {
    self->setReadPermissions(readable, static_cast<QBluetooth::AttAccessConstraints>(constraints));
}

void QLowEnergyDescriptorData_SetWritePermissions2(QLowEnergyDescriptorData* self, bool writable, int constraints) {
    self->setWritePermissions(writable, static_cast<QBluetooth::AttAccessConstraints>(constraints));
}

void QLowEnergyDescriptorData_Delete(QLowEnergyDescriptorData* self) {
    delete self;
}
