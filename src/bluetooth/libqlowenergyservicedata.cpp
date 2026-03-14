#include <QBluetoothUuid>
#include <QList>
#include <QLowEnergyCharacteristicData>
#include <QLowEnergyService>
#include <QLowEnergyServiceData>
#include <qlowenergyservicedata.h>
#include "libqlowenergyservicedata.h"
#include "libqlowenergyservicedata.hxx"

QLowEnergyServiceData* QLowEnergyServiceData_new() {
    return new QLowEnergyServiceData();
}

QLowEnergyServiceData* QLowEnergyServiceData_new2(const QLowEnergyServiceData* other) {
    return new QLowEnergyServiceData(*other);
}

void QLowEnergyServiceData_OperatorAssign(QLowEnergyServiceData* self, const QLowEnergyServiceData* other) {
    self->operator=(*other);
}

int QLowEnergyServiceData_Type(const QLowEnergyServiceData* self) {
    return static_cast<int>(self->type());
}

void QLowEnergyServiceData_SetType(QLowEnergyServiceData* self, int typeVal) {
    self->setType(static_cast<QLowEnergyServiceData::ServiceType>(typeVal));
}

QBluetoothUuid* QLowEnergyServiceData_Uuid(const QLowEnergyServiceData* self) {
    return new QBluetoothUuid(self->uuid());
}

void QLowEnergyServiceData_SetUuid(QLowEnergyServiceData* self, const QBluetoothUuid* uuid) {
    self->setUuid(*uuid);
}

libqt_list /* of QLowEnergyService* */ QLowEnergyServiceData_IncludedServices(const QLowEnergyServiceData* self) {
    QList<QLowEnergyService*> _ret = self->includedServices();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLowEnergyService** _arr = static_cast<QLowEnergyService**>(malloc(sizeof(QLowEnergyService*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QLowEnergyServiceData_SetIncludedServices(QLowEnergyServiceData* self, const libqt_list /* of QLowEnergyService* */ services) {
    QList<QLowEnergyService*> services_QList;
    services_QList.reserve(services.len);
    QLowEnergyService** services_arr = static_cast<QLowEnergyService**>(services.data);
    for (size_t i = 0; i < services.len; ++i) {
        services_QList.push_back(services_arr[i]);
    }
    self->setIncludedServices(services_QList);
}

void QLowEnergyServiceData_AddIncludedService(QLowEnergyServiceData* self, QLowEnergyService* service) {
    self->addIncludedService(service);
}

libqt_list /* of QLowEnergyCharacteristicData* */ QLowEnergyServiceData_Characteristics(const QLowEnergyServiceData* self) {
    QList<QLowEnergyCharacteristicData> _ret = self->characteristics();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLowEnergyCharacteristicData** _arr = static_cast<QLowEnergyCharacteristicData**>(malloc(sizeof(QLowEnergyCharacteristicData*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLowEnergyCharacteristicData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QLowEnergyServiceData_SetCharacteristics(QLowEnergyServiceData* self, const libqt_list /* of QLowEnergyCharacteristicData* */ characteristics) {
    QList<QLowEnergyCharacteristicData> characteristics_QList;
    characteristics_QList.reserve(characteristics.len);
    QLowEnergyCharacteristicData** characteristics_arr = static_cast<QLowEnergyCharacteristicData**>(characteristics.data);
    for (size_t i = 0; i < characteristics.len; ++i) {
        characteristics_QList.push_back(*(characteristics_arr[i]));
    }
    self->setCharacteristics(characteristics_QList);
}

void QLowEnergyServiceData_AddCharacteristic(QLowEnergyServiceData* self, const QLowEnergyCharacteristicData* characteristic) {
    self->addCharacteristic(*characteristic);
}

bool QLowEnergyServiceData_IsValid(const QLowEnergyServiceData* self) {
    return self->isValid();
}

void QLowEnergyServiceData_Swap(QLowEnergyServiceData* self, QLowEnergyServiceData* other) {
    self->swap(*other);
}

void QLowEnergyServiceData_Delete(QLowEnergyServiceData* self) {
    delete self;
}
