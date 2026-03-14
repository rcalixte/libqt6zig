#include <QBluetoothUuid>
#include <QByteArray>
#include <QList>
#include <QLowEnergyCharacteristicData>
#include <QLowEnergyDescriptorData>
#include <qlowenergycharacteristicdata.h>
#include "libqlowenergycharacteristicdata.h"
#include "libqlowenergycharacteristicdata.hxx"

QLowEnergyCharacteristicData* QLowEnergyCharacteristicData_new() {
    return new QLowEnergyCharacteristicData();
}

QLowEnergyCharacteristicData* QLowEnergyCharacteristicData_new2(const QLowEnergyCharacteristicData* other) {
    return new QLowEnergyCharacteristicData(*other);
}

void QLowEnergyCharacteristicData_OperatorAssign(QLowEnergyCharacteristicData* self, const QLowEnergyCharacteristicData* other) {
    self->operator=(*other);
}

QBluetoothUuid* QLowEnergyCharacteristicData_Uuid(const QLowEnergyCharacteristicData* self) {
    return new QBluetoothUuid(self->uuid());
}

void QLowEnergyCharacteristicData_SetUuid(QLowEnergyCharacteristicData* self, const QBluetoothUuid* uuid) {
    self->setUuid(*uuid);
}

libqt_string QLowEnergyCharacteristicData_Value(const QLowEnergyCharacteristicData* self) {
    QByteArray _qb = self->value();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QLowEnergyCharacteristicData_SetValue(QLowEnergyCharacteristicData* self, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->setValue(value_QByteArray);
}

int QLowEnergyCharacteristicData_Properties(const QLowEnergyCharacteristicData* self) {
    return static_cast<int>(self->properties());
}

void QLowEnergyCharacteristicData_SetProperties(QLowEnergyCharacteristicData* self, int properties) {
    self->setProperties(static_cast<QLowEnergyCharacteristic::PropertyTypes>(properties));
}

libqt_list /* of QLowEnergyDescriptorData* */ QLowEnergyCharacteristicData_Descriptors(const QLowEnergyCharacteristicData* self) {
    QList<QLowEnergyDescriptorData> _ret = self->descriptors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLowEnergyDescriptorData** _arr = static_cast<QLowEnergyDescriptorData**>(malloc(sizeof(QLowEnergyDescriptorData*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLowEnergyDescriptorData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QLowEnergyCharacteristicData_SetDescriptors(QLowEnergyCharacteristicData* self, const libqt_list /* of QLowEnergyDescriptorData* */ descriptors) {
    QList<QLowEnergyDescriptorData> descriptors_QList;
    descriptors_QList.reserve(descriptors.len);
    QLowEnergyDescriptorData** descriptors_arr = static_cast<QLowEnergyDescriptorData**>(descriptors.data);
    for (size_t i = 0; i < descriptors.len; ++i) {
        descriptors_QList.push_back(*(descriptors_arr[i]));
    }
    self->setDescriptors(descriptors_QList);
}

void QLowEnergyCharacteristicData_AddDescriptor(QLowEnergyCharacteristicData* self, const QLowEnergyDescriptorData* descriptor) {
    self->addDescriptor(*descriptor);
}

void QLowEnergyCharacteristicData_SetReadConstraints(QLowEnergyCharacteristicData* self, int constraints) {
    self->setReadConstraints(static_cast<QBluetooth::AttAccessConstraints>(constraints));
}

int QLowEnergyCharacteristicData_ReadConstraints(const QLowEnergyCharacteristicData* self) {
    return static_cast<int>(self->readConstraints());
}

void QLowEnergyCharacteristicData_SetWriteConstraints(QLowEnergyCharacteristicData* self, int constraints) {
    self->setWriteConstraints(static_cast<QBluetooth::AttAccessConstraints>(constraints));
}

int QLowEnergyCharacteristicData_WriteConstraints(const QLowEnergyCharacteristicData* self) {
    return static_cast<int>(self->writeConstraints());
}

void QLowEnergyCharacteristicData_SetValueLength(QLowEnergyCharacteristicData* self, int minimum, int maximum) {
    self->setValueLength(static_cast<int>(minimum), static_cast<int>(maximum));
}

int QLowEnergyCharacteristicData_MinimumValueLength(const QLowEnergyCharacteristicData* self) {
    return self->minimumValueLength();
}

int QLowEnergyCharacteristicData_MaximumValueLength(const QLowEnergyCharacteristicData* self) {
    return self->maximumValueLength();
}

bool QLowEnergyCharacteristicData_IsValid(const QLowEnergyCharacteristicData* self) {
    return self->isValid();
}

void QLowEnergyCharacteristicData_Swap(QLowEnergyCharacteristicData* self, QLowEnergyCharacteristicData* other) {
    self->swap(*other);
}

void QLowEnergyCharacteristicData_Delete(QLowEnergyCharacteristicData* self) {
    delete self;
}
