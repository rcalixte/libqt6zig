#include <QBluetoothUuid>
#include <QByteArray>
#include <QList>
#include <QLowEnergyAdvertisingData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlowenergyadvertisingdata.h>
#include "libqlowenergyadvertisingdata.h"
#include "libqlowenergyadvertisingdata.hxx"

QLowEnergyAdvertisingData* QLowEnergyAdvertisingData_new() {
    return new QLowEnergyAdvertisingData();
}

QLowEnergyAdvertisingData* QLowEnergyAdvertisingData_new2(const QLowEnergyAdvertisingData* other) {
    return new QLowEnergyAdvertisingData(*other);
}

void QLowEnergyAdvertisingData_OperatorAssign(QLowEnergyAdvertisingData* self, const QLowEnergyAdvertisingData* other) {
    self->operator=(*other);
}

void QLowEnergyAdvertisingData_SetLocalName(QLowEnergyAdvertisingData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setLocalName(name_QString);
}

libqt_string QLowEnergyAdvertisingData_LocalName(const QLowEnergyAdvertisingData* self) {
    QString _ret = self->localName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

uint16_t QLowEnergyAdvertisingData_InvalidManufacturerId() {
    return static_cast<uint16_t>(QLowEnergyAdvertisingData::invalidManufacturerId());
}

void QLowEnergyAdvertisingData_SetManufacturerData(QLowEnergyAdvertisingData* self, uint16_t id, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setManufacturerData(static_cast<quint16>(id), data_QByteArray);
}

uint16_t QLowEnergyAdvertisingData_ManufacturerId(const QLowEnergyAdvertisingData* self) {
    return static_cast<uint16_t>(self->manufacturerId());
}

libqt_string QLowEnergyAdvertisingData_ManufacturerData(const QLowEnergyAdvertisingData* self) {
    QByteArray _qb = self->manufacturerData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QLowEnergyAdvertisingData_SetIncludePowerLevel(QLowEnergyAdvertisingData* self, bool doInclude) {
    self->setIncludePowerLevel(doInclude);
}

bool QLowEnergyAdvertisingData_IncludePowerLevel(const QLowEnergyAdvertisingData* self) {
    return self->includePowerLevel();
}

void QLowEnergyAdvertisingData_SetDiscoverability(QLowEnergyAdvertisingData* self, int mode) {
    self->setDiscoverability(static_cast<QLowEnergyAdvertisingData::Discoverability>(mode));
}

int QLowEnergyAdvertisingData_Discoverability(const QLowEnergyAdvertisingData* self) {
    return static_cast<int>(self->discoverability());
}

void QLowEnergyAdvertisingData_SetServices(QLowEnergyAdvertisingData* self, const libqt_list /* of QBluetoothUuid* */ services) {
    QList<QBluetoothUuid> services_QList;
    services_QList.reserve(services.len);
    QBluetoothUuid** services_arr = static_cast<QBluetoothUuid**>(services.data);
    for (size_t i = 0; i < services.len; ++i) {
        services_QList.push_back(*(services_arr[i]));
    }
    self->setServices(services_QList);
}

libqt_list /* of QBluetoothUuid* */ QLowEnergyAdvertisingData_Services(const QLowEnergyAdvertisingData* self) {
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

void QLowEnergyAdvertisingData_SetRawData(QLowEnergyAdvertisingData* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setRawData(data_QByteArray);
}

libqt_string QLowEnergyAdvertisingData_RawData(const QLowEnergyAdvertisingData* self) {
    QByteArray _qb = self->rawData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QLowEnergyAdvertisingData_Swap(QLowEnergyAdvertisingData* self, QLowEnergyAdvertisingData* other) {
    self->swap(*other);
}

void QLowEnergyAdvertisingData_Delete(QLowEnergyAdvertisingData* self) {
    delete self;
}
