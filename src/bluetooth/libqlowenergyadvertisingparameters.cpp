#include <QBluetoothAddress>
#include <QList>
#include <QLowEnergyAdvertisingParameters>
#define WORKAROUND_INNER_CLASS_DEFINITION_QLowEnergyAdvertisingParameters__AddressInfo
#include <qlowenergyadvertisingparameters.h>
#include "libqlowenergyadvertisingparameters.h"
#include "libqlowenergyadvertisingparameters.hxx"

QLowEnergyAdvertisingParameters* QLowEnergyAdvertisingParameters_new() {
    return new QLowEnergyAdvertisingParameters();
}

QLowEnergyAdvertisingParameters* QLowEnergyAdvertisingParameters_new2(const QLowEnergyAdvertisingParameters* other) {
    return new QLowEnergyAdvertisingParameters(*other);
}

void QLowEnergyAdvertisingParameters_OperatorAssign(QLowEnergyAdvertisingParameters* self, const QLowEnergyAdvertisingParameters* other) {
    self->operator=(*other);
}

void QLowEnergyAdvertisingParameters_SetMode(QLowEnergyAdvertisingParameters* self, int mode) {
    self->setMode(static_cast<QLowEnergyAdvertisingParameters::Mode>(mode));
}

int QLowEnergyAdvertisingParameters_Mode(const QLowEnergyAdvertisingParameters* self) {
    return static_cast<int>(self->mode());
}

void QLowEnergyAdvertisingParameters_SetWhiteList(QLowEnergyAdvertisingParameters* self, const libqt_list /* of QLowEnergyAdvertisingParameters__AddressInfo* */ whiteList, int policy) {
    QList<QLowEnergyAdvertisingParameters::AddressInfo> whiteList_QList;
    whiteList_QList.reserve(whiteList.len);
    QLowEnergyAdvertisingParameters__AddressInfo** whiteList_arr = static_cast<QLowEnergyAdvertisingParameters__AddressInfo**>(whiteList.data);
    for (size_t i = 0; i < whiteList.len; ++i) {
        whiteList_QList.push_back(*(whiteList_arr[i]));
    }
    self->setWhiteList(whiteList_QList, static_cast<QLowEnergyAdvertisingParameters::FilterPolicy>(policy));
}

libqt_list /* of QLowEnergyAdvertisingParameters__AddressInfo* */ QLowEnergyAdvertisingParameters_WhiteList(const QLowEnergyAdvertisingParameters* self) {
    QList<QLowEnergyAdvertisingParameters::AddressInfo> _ret = self->whiteList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLowEnergyAdvertisingParameters__AddressInfo** _arr = static_cast<QLowEnergyAdvertisingParameters__AddressInfo**>(malloc(sizeof(QLowEnergyAdvertisingParameters__AddressInfo*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLowEnergyAdvertisingParameters::AddressInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QLowEnergyAdvertisingParameters_FilterPolicy(const QLowEnergyAdvertisingParameters* self) {
    return static_cast<int>(self->filterPolicy());
}

void QLowEnergyAdvertisingParameters_SetInterval(QLowEnergyAdvertisingParameters* self, uint16_t minimum, uint16_t maximum) {
    self->setInterval(static_cast<quint16>(minimum), static_cast<quint16>(maximum));
}

int QLowEnergyAdvertisingParameters_MinimumInterval(const QLowEnergyAdvertisingParameters* self) {
    return self->minimumInterval();
}

int QLowEnergyAdvertisingParameters_MaximumInterval(const QLowEnergyAdvertisingParameters* self) {
    return self->maximumInterval();
}

void QLowEnergyAdvertisingParameters_Swap(QLowEnergyAdvertisingParameters* self, QLowEnergyAdvertisingParameters* other) {
    self->swap(*other);
}

void QLowEnergyAdvertisingParameters_Delete(QLowEnergyAdvertisingParameters* self) {
    delete self;
}

QLowEnergyAdvertisingParameters__AddressInfo* QLowEnergyAdvertisingParameters__AddressInfo_new(const QBluetoothAddress* addr, int t) {
    return new QLowEnergyAdvertisingParameters::AddressInfo(*addr, static_cast<QLowEnergyController::RemoteAddressType>(t));
}

QLowEnergyAdvertisingParameters__AddressInfo* QLowEnergyAdvertisingParameters__AddressInfo_new2() {
    return new QLowEnergyAdvertisingParameters::AddressInfo();
}

QLowEnergyAdvertisingParameters__AddressInfo* QLowEnergyAdvertisingParameters__AddressInfo_new3(const QLowEnergyAdvertisingParameters__AddressInfo* param1) {
    return new QLowEnergyAdvertisingParameters::AddressInfo(*param1);
}

QBluetoothAddress* QLowEnergyAdvertisingParameters__AddressInfo_Address(const QLowEnergyAdvertisingParameters__AddressInfo* self) {
    return new QBluetoothAddress(self->address);
}

void QLowEnergyAdvertisingParameters__AddressInfo_SetAddress(QLowEnergyAdvertisingParameters__AddressInfo* self, QBluetoothAddress* address) {
    self->address = *address;
}

int QLowEnergyAdvertisingParameters__AddressInfo_Type(const QLowEnergyAdvertisingParameters__AddressInfo* self) {
    return static_cast<int>(self->type);
}

void QLowEnergyAdvertisingParameters__AddressInfo_SetType(QLowEnergyAdvertisingParameters__AddressInfo* self, int type) {
    self->type = static_cast<QLowEnergyController::RemoteAddressType>(type);
}

void QLowEnergyAdvertisingParameters__AddressInfo_Delete(QLowEnergyAdvertisingParameters__AddressInfo* self) {
    delete self;
}
