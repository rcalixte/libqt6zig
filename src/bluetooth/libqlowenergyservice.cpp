#include <QBluetoothUuid>
#include <QByteArray>
#include <QList>
#include <QLowEnergyCharacteristic>
#include <QLowEnergyDescriptor>
#include <QLowEnergyService>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlowenergyservice.h>
#include "libqlowenergyservice.h"
#include "libqlowenergyservice.hxx"

QMetaObject* QLowEnergyService_MetaObject(const QLowEnergyService* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLowEnergyService_Metacast(QLowEnergyService* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLowEnergyService_Metacall(QLowEnergyService* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_list /* of QBluetoothUuid* */ QLowEnergyService_IncludedServices(const QLowEnergyService* self) {
    QList<QBluetoothUuid> _ret = self->includedServices();
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

int QLowEnergyService_Type(const QLowEnergyService* self) {
    return static_cast<int>(self->type());
}

int QLowEnergyService_State(const QLowEnergyService* self) {
    return static_cast<int>(self->state());
}

QLowEnergyCharacteristic* QLowEnergyService_Characteristic(const QLowEnergyService* self, const QBluetoothUuid* uuid) {
    return new QLowEnergyCharacteristic(self->characteristic(*uuid));
}

libqt_list /* of QLowEnergyCharacteristic* */ QLowEnergyService_Characteristics(const QLowEnergyService* self) {
    QList<QLowEnergyCharacteristic> _ret = self->characteristics();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLowEnergyCharacteristic** _arr = static_cast<QLowEnergyCharacteristic**>(malloc(sizeof(QLowEnergyCharacteristic*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLowEnergyCharacteristic(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QBluetoothUuid* QLowEnergyService_ServiceUuid(const QLowEnergyService* self) {
    return new QBluetoothUuid(self->serviceUuid());
}

libqt_string QLowEnergyService_ServiceName(const QLowEnergyService* self) {
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

void QLowEnergyService_DiscoverDetails(QLowEnergyService* self) {
    self->discoverDetails();
}

int QLowEnergyService_Error(const QLowEnergyService* self) {
    return static_cast<int>(self->error());
}

bool QLowEnergyService_Contains(const QLowEnergyService* self, const QLowEnergyCharacteristic* characteristic) {
    return self->contains(*characteristic);
}

void QLowEnergyService_ReadCharacteristic(QLowEnergyService* self, const QLowEnergyCharacteristic* characteristic) {
    self->readCharacteristic(*characteristic);
}

void QLowEnergyService_WriteCharacteristic(QLowEnergyService* self, const QLowEnergyCharacteristic* characteristic, const libqt_string newValue) {
    QByteArray newValue_QByteArray(newValue.data, newValue.len);
    self->writeCharacteristic(*characteristic, newValue_QByteArray);
}

bool QLowEnergyService_Contains2(const QLowEnergyService* self, const QLowEnergyDescriptor* descriptor) {
    return self->contains(*descriptor);
}

void QLowEnergyService_ReadDescriptor(QLowEnergyService* self, const QLowEnergyDescriptor* descriptor) {
    self->readDescriptor(*descriptor);
}

void QLowEnergyService_WriteDescriptor(QLowEnergyService* self, const QLowEnergyDescriptor* descriptor, const libqt_string newValue) {
    QByteArray newValue_QByteArray(newValue.data, newValue.len);
    self->writeDescriptor(*descriptor, newValue_QByteArray);
}

void QLowEnergyService_StateChanged(QLowEnergyService* self, int newState) {
    self->stateChanged(static_cast<QLowEnergyService::ServiceState>(newState));
}

void QLowEnergyService_Connect_StateChanged(QLowEnergyService* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyService*, int) = reinterpret_cast<void (*)(QLowEnergyService*, int)>(slot);
    QLowEnergyService::connect(self, &QLowEnergyService::stateChanged, [self, slotFunc](QLowEnergyService::ServiceState newState) {
        int sigval1 = static_cast<int>(newState);
        slotFunc(self, sigval1);
    });
}

void QLowEnergyService_CharacteristicChanged(QLowEnergyService* self, const QLowEnergyCharacteristic* info, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->characteristicChanged(*info, value_QByteArray);
}

void QLowEnergyService_Connect_CharacteristicChanged(QLowEnergyService* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyService*, QLowEnergyCharacteristic*, libqt_string) = reinterpret_cast<void (*)(QLowEnergyService*, QLowEnergyCharacteristic*, libqt_string)>(slot);
    QLowEnergyService::connect(self, &QLowEnergyService::characteristicChanged, [self, slotFunc](const QLowEnergyCharacteristic& info, const QByteArray& value) {
        const QLowEnergyCharacteristic& info_ret = info;
        // Cast returned reference into pointer
        QLowEnergyCharacteristic* sigval1 = const_cast<QLowEnergyCharacteristic*>(&info_ret);
        const QByteArray value_qb = value;
        libqt_string value_str;
        value_str.len = value_qb.length();
        value_str.data = static_cast<char*>(malloc(value_str.len));
        memcpy((void*)value_str.data, value_qb.data(), value_str.len);
        libqt_string sigval2 = value_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(value_str.data);
    });
}

void QLowEnergyService_CharacteristicRead(QLowEnergyService* self, const QLowEnergyCharacteristic* info, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->characteristicRead(*info, value_QByteArray);
}

void QLowEnergyService_Connect_CharacteristicRead(QLowEnergyService* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyService*, QLowEnergyCharacteristic*, libqt_string) = reinterpret_cast<void (*)(QLowEnergyService*, QLowEnergyCharacteristic*, libqt_string)>(slot);
    QLowEnergyService::connect(self, &QLowEnergyService::characteristicRead, [self, slotFunc](const QLowEnergyCharacteristic& info, const QByteArray& value) {
        const QLowEnergyCharacteristic& info_ret = info;
        // Cast returned reference into pointer
        QLowEnergyCharacteristic* sigval1 = const_cast<QLowEnergyCharacteristic*>(&info_ret);
        const QByteArray value_qb = value;
        libqt_string value_str;
        value_str.len = value_qb.length();
        value_str.data = static_cast<char*>(malloc(value_str.len));
        memcpy((void*)value_str.data, value_qb.data(), value_str.len);
        libqt_string sigval2 = value_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(value_str.data);
    });
}

void QLowEnergyService_CharacteristicWritten(QLowEnergyService* self, const QLowEnergyCharacteristic* info, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->characteristicWritten(*info, value_QByteArray);
}

void QLowEnergyService_Connect_CharacteristicWritten(QLowEnergyService* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyService*, QLowEnergyCharacteristic*, libqt_string) = reinterpret_cast<void (*)(QLowEnergyService*, QLowEnergyCharacteristic*, libqt_string)>(slot);
    QLowEnergyService::connect(self, &QLowEnergyService::characteristicWritten, [self, slotFunc](const QLowEnergyCharacteristic& info, const QByteArray& value) {
        const QLowEnergyCharacteristic& info_ret = info;
        // Cast returned reference into pointer
        QLowEnergyCharacteristic* sigval1 = const_cast<QLowEnergyCharacteristic*>(&info_ret);
        const QByteArray value_qb = value;
        libqt_string value_str;
        value_str.len = value_qb.length();
        value_str.data = static_cast<char*>(malloc(value_str.len));
        memcpy((void*)value_str.data, value_qb.data(), value_str.len);
        libqt_string sigval2 = value_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(value_str.data);
    });
}

void QLowEnergyService_DescriptorRead(QLowEnergyService* self, const QLowEnergyDescriptor* info, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->descriptorRead(*info, value_QByteArray);
}

void QLowEnergyService_Connect_DescriptorRead(QLowEnergyService* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyService*, QLowEnergyDescriptor*, libqt_string) = reinterpret_cast<void (*)(QLowEnergyService*, QLowEnergyDescriptor*, libqt_string)>(slot);
    QLowEnergyService::connect(self, &QLowEnergyService::descriptorRead, [self, slotFunc](const QLowEnergyDescriptor& info, const QByteArray& value) {
        const QLowEnergyDescriptor& info_ret = info;
        // Cast returned reference into pointer
        QLowEnergyDescriptor* sigval1 = const_cast<QLowEnergyDescriptor*>(&info_ret);
        const QByteArray value_qb = value;
        libqt_string value_str;
        value_str.len = value_qb.length();
        value_str.data = static_cast<char*>(malloc(value_str.len));
        memcpy((void*)value_str.data, value_qb.data(), value_str.len);
        libqt_string sigval2 = value_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(value_str.data);
    });
}

void QLowEnergyService_DescriptorWritten(QLowEnergyService* self, const QLowEnergyDescriptor* info, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->descriptorWritten(*info, value_QByteArray);
}

void QLowEnergyService_Connect_DescriptorWritten(QLowEnergyService* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyService*, QLowEnergyDescriptor*, libqt_string) = reinterpret_cast<void (*)(QLowEnergyService*, QLowEnergyDescriptor*, libqt_string)>(slot);
    QLowEnergyService::connect(self, &QLowEnergyService::descriptorWritten, [self, slotFunc](const QLowEnergyDescriptor& info, const QByteArray& value) {
        const QLowEnergyDescriptor& info_ret = info;
        // Cast returned reference into pointer
        QLowEnergyDescriptor* sigval1 = const_cast<QLowEnergyDescriptor*>(&info_ret);
        const QByteArray value_qb = value;
        libqt_string value_str;
        value_str.len = value_qb.length();
        value_str.data = static_cast<char*>(malloc(value_str.len));
        memcpy((void*)value_str.data, value_qb.data(), value_str.len);
        libqt_string sigval2 = value_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(value_str.data);
    });
}

void QLowEnergyService_ErrorOccurred(QLowEnergyService* self, int errorVal) {
    self->errorOccurred(static_cast<QLowEnergyService::ServiceError>(errorVal));
}

void QLowEnergyService_Connect_ErrorOccurred(QLowEnergyService* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyService*, int) = reinterpret_cast<void (*)(QLowEnergyService*, int)>(slot);
    QLowEnergyService::connect(self, &QLowEnergyService::errorOccurred, [self, slotFunc](QLowEnergyService::ServiceError errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

void QLowEnergyService_DiscoverDetails1(QLowEnergyService* self, int mode) {
    self->discoverDetails(static_cast<QLowEnergyService::DiscoveryMode>(mode));
}

void QLowEnergyService_WriteCharacteristic3(QLowEnergyService* self, const QLowEnergyCharacteristic* characteristic, const libqt_string newValue, int mode) {
    QByteArray newValue_QByteArray(newValue.data, newValue.len);
    self->writeCharacteristic(*characteristic, newValue_QByteArray, static_cast<QLowEnergyService::WriteMode>(mode));
}

void QLowEnergyService_Delete(QLowEnergyService* self) {
    delete self;
}
