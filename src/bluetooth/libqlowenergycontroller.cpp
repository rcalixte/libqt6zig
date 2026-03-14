#include <QBluetoothAddress>
#include <QBluetoothDeviceInfo>
#include <QBluetoothUuid>
#include <QList>
#include <QLowEnergyAdvertisingData>
#include <QLowEnergyAdvertisingParameters>
#include <QLowEnergyConnectionParameters>
#include <QLowEnergyController>
#include <QLowEnergyService>
#include <QLowEnergyServiceData>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlowenergycontroller.h>
#include "libqlowenergycontroller.h"
#include "libqlowenergycontroller.hxx"

QMetaObject* QLowEnergyController_MetaObject(const QLowEnergyController* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLowEnergyController_Metacast(QLowEnergyController* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLowEnergyController_Metacall(QLowEnergyController* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

QLowEnergyController* QLowEnergyController_CreateCentral(const QBluetoothDeviceInfo* remoteDevice) {
    return QLowEnergyController::createCentral(*remoteDevice);
}

QLowEnergyController* QLowEnergyController_CreateCentral2(const QBluetoothDeviceInfo* remoteDevice, const QBluetoothAddress* localDevice) {
    return QLowEnergyController::createCentral(*remoteDevice, *localDevice);
}

QLowEnergyController* QLowEnergyController_CreatePeripheral(const QBluetoothAddress* localDevice) {
    return QLowEnergyController::createPeripheral(*localDevice);
}

QLowEnergyController* QLowEnergyController_CreatePeripheral2() {
    return QLowEnergyController::createPeripheral();
}

QBluetoothAddress* QLowEnergyController_LocalAddress(const QLowEnergyController* self) {
    return new QBluetoothAddress(self->localAddress());
}

QBluetoothAddress* QLowEnergyController_RemoteAddress(const QLowEnergyController* self) {
    return new QBluetoothAddress(self->remoteAddress());
}

QBluetoothUuid* QLowEnergyController_RemoteDeviceUuid(const QLowEnergyController* self) {
    return new QBluetoothUuid(self->remoteDeviceUuid());
}

libqt_string QLowEnergyController_RemoteName(const QLowEnergyController* self) {
    QString _ret = self->remoteName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QLowEnergyController_State(const QLowEnergyController* self) {
    return static_cast<int>(self->state());
}

int QLowEnergyController_RemoteAddressType(const QLowEnergyController* self) {
    return static_cast<int>(self->remoteAddressType());
}

void QLowEnergyController_SetRemoteAddressType(QLowEnergyController* self, int typeVal) {
    self->setRemoteAddressType(static_cast<QLowEnergyController::RemoteAddressType>(typeVal));
}

void QLowEnergyController_ConnectToDevice(QLowEnergyController* self) {
    self->connectToDevice();
}

void QLowEnergyController_DisconnectFromDevice(QLowEnergyController* self) {
    self->disconnectFromDevice();
}

void QLowEnergyController_DiscoverServices(QLowEnergyController* self) {
    self->discoverServices();
}

libqt_list /* of QBluetoothUuid* */ QLowEnergyController_Services(const QLowEnergyController* self) {
    QList<QBluetoothUuid> _ret = self->services();
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

QLowEnergyService* QLowEnergyController_CreateServiceObject(QLowEnergyController* self, const QBluetoothUuid* service) {
    return self->createServiceObject(*service);
}

void QLowEnergyController_StartAdvertising(QLowEnergyController* self, const QLowEnergyAdvertisingParameters* parameters, const QLowEnergyAdvertisingData* advertisingData) {
    self->startAdvertising(*parameters, *advertisingData);
}

void QLowEnergyController_StopAdvertising(QLowEnergyController* self) {
    self->stopAdvertising();
}

QLowEnergyService* QLowEnergyController_AddService(QLowEnergyController* self, const QLowEnergyServiceData* service) {
    return self->addService(*service);
}

void QLowEnergyController_RequestConnectionUpdate(QLowEnergyController* self, const QLowEnergyConnectionParameters* parameters) {
    self->requestConnectionUpdate(*parameters);
}

int QLowEnergyController_Error(const QLowEnergyController* self) {
    return static_cast<int>(self->error());
}

libqt_string QLowEnergyController_ErrorString(const QLowEnergyController* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QLowEnergyController_Role(const QLowEnergyController* self) {
    return static_cast<int>(self->role());
}

int QLowEnergyController_Mtu(const QLowEnergyController* self) {
    return self->mtu();
}

void QLowEnergyController_ReadRssi(QLowEnergyController* self) {
    self->readRssi();
}

void QLowEnergyController_Connected(QLowEnergyController* self) {
    self->connected();
}

void QLowEnergyController_Connect_Connected(QLowEnergyController* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyController*) = reinterpret_cast<void (*)(QLowEnergyController*)>(slot);
    QLowEnergyController::connect(self, &QLowEnergyController::connected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLowEnergyController_Disconnected(QLowEnergyController* self) {
    self->disconnected();
}

void QLowEnergyController_Connect_Disconnected(QLowEnergyController* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyController*) = reinterpret_cast<void (*)(QLowEnergyController*)>(slot);
    QLowEnergyController::connect(self, &QLowEnergyController::disconnected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLowEnergyController_StateChanged(QLowEnergyController* self, int state) {
    self->stateChanged(static_cast<QLowEnergyController::ControllerState>(state));
}

void QLowEnergyController_Connect_StateChanged(QLowEnergyController* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyController*, int) = reinterpret_cast<void (*)(QLowEnergyController*, int)>(slot);
    QLowEnergyController::connect(self, &QLowEnergyController::stateChanged, [self, slotFunc](QLowEnergyController::ControllerState state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QLowEnergyController_ErrorOccurred(QLowEnergyController* self, int newError) {
    self->errorOccurred(static_cast<QLowEnergyController::Error>(newError));
}

void QLowEnergyController_Connect_ErrorOccurred(QLowEnergyController* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyController*, int) = reinterpret_cast<void (*)(QLowEnergyController*, int)>(slot);
    QLowEnergyController::connect(self, &QLowEnergyController::errorOccurred, [self, slotFunc](QLowEnergyController::Error newError) {
        int sigval1 = static_cast<int>(newError);
        slotFunc(self, sigval1);
    });
}

void QLowEnergyController_MtuChanged(QLowEnergyController* self, int mtu) {
    self->mtuChanged(static_cast<int>(mtu));
}

void QLowEnergyController_Connect_MtuChanged(QLowEnergyController* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyController*, int) = reinterpret_cast<void (*)(QLowEnergyController*, int)>(slot);
    QLowEnergyController::connect(self, &QLowEnergyController::mtuChanged, [self, slotFunc](int mtu) {
        int sigval1 = mtu;
        slotFunc(self, sigval1);
    });
}

void QLowEnergyController_RssiRead(QLowEnergyController* self, int16_t rssi) {
    self->rssiRead(static_cast<qint16>(rssi));
}

void QLowEnergyController_Connect_RssiRead(QLowEnergyController* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyController*, int16_t) = reinterpret_cast<void (*)(QLowEnergyController*, int16_t)>(slot);
    QLowEnergyController::connect(self, &QLowEnergyController::rssiRead, [self, slotFunc](qint16 rssi) {
        int16_t sigval1 = static_cast<int16_t>(rssi);
        slotFunc(self, sigval1);
    });
}

void QLowEnergyController_ServiceDiscovered(QLowEnergyController* self, const QBluetoothUuid* newService) {
    self->serviceDiscovered(*newService);
}

void QLowEnergyController_Connect_ServiceDiscovered(QLowEnergyController* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyController*, QBluetoothUuid*) = reinterpret_cast<void (*)(QLowEnergyController*, QBluetoothUuid*)>(slot);
    QLowEnergyController::connect(self, &QLowEnergyController::serviceDiscovered, [self, slotFunc](const QBluetoothUuid& newService) {
        const QBluetoothUuid& newService_ret = newService;
        // Cast returned reference into pointer
        QBluetoothUuid* sigval1 = const_cast<QBluetoothUuid*>(&newService_ret);
        slotFunc(self, sigval1);
    });
}

void QLowEnergyController_DiscoveryFinished(QLowEnergyController* self) {
    self->discoveryFinished();
}

void QLowEnergyController_Connect_DiscoveryFinished(QLowEnergyController* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyController*) = reinterpret_cast<void (*)(QLowEnergyController*)>(slot);
    QLowEnergyController::connect(self, &QLowEnergyController::discoveryFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLowEnergyController_ConnectionUpdated(QLowEnergyController* self, const QLowEnergyConnectionParameters* parameters) {
    self->connectionUpdated(*parameters);
}

void QLowEnergyController_Connect_ConnectionUpdated(QLowEnergyController* self, intptr_t slot) {
    void (*slotFunc)(QLowEnergyController*, QLowEnergyConnectionParameters*) = reinterpret_cast<void (*)(QLowEnergyController*, QLowEnergyConnectionParameters*)>(slot);
    QLowEnergyController::connect(self, &QLowEnergyController::connectionUpdated, [self, slotFunc](const QLowEnergyConnectionParameters& parameters) {
        const QLowEnergyConnectionParameters& parameters_ret = parameters;
        // Cast returned reference into pointer
        QLowEnergyConnectionParameters* sigval1 = const_cast<QLowEnergyConnectionParameters*>(&parameters_ret);
        slotFunc(self, sigval1);
    });
}

QLowEnergyController* QLowEnergyController_CreateCentral22(const QBluetoothDeviceInfo* remoteDevice, QObject* parent) {
    return QLowEnergyController::createCentral(*remoteDevice, parent);
}

QLowEnergyController* QLowEnergyController_CreateCentral3(const QBluetoothDeviceInfo* remoteDevice, const QBluetoothAddress* localDevice, QObject* parent) {
    return QLowEnergyController::createCentral(*remoteDevice, *localDevice, parent);
}

QLowEnergyController* QLowEnergyController_CreatePeripheral22(const QBluetoothAddress* localDevice, QObject* parent) {
    return QLowEnergyController::createPeripheral(*localDevice, parent);
}

QLowEnergyController* QLowEnergyController_CreatePeripheral1(QObject* parent) {
    return QLowEnergyController::createPeripheral(parent);
}

QLowEnergyService* QLowEnergyController_CreateServiceObject2(QLowEnergyController* self, const QBluetoothUuid* service, QObject* parent) {
    return self->createServiceObject(*service, parent);
}

void QLowEnergyController_StartAdvertising3(QLowEnergyController* self, const QLowEnergyAdvertisingParameters* parameters, const QLowEnergyAdvertisingData* advertisingData, const QLowEnergyAdvertisingData* scanResponseData) {
    self->startAdvertising(*parameters, *advertisingData, *scanResponseData);
}

QLowEnergyService* QLowEnergyController_AddService2(QLowEnergyController* self, const QLowEnergyServiceData* service, QObject* parent) {
    return self->addService(*service, parent);
}

void QLowEnergyController_Delete(QLowEnergyController* self) {
    delete self;
}
