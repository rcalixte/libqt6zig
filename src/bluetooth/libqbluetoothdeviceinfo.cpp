#include <QBluetoothAddress>
#include <QBluetoothDeviceInfo>
#include <QBluetoothUuid>
#include <QByteArray>
#include <QList>
#include <QMultiHash>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qbluetoothdeviceinfo.h>
#include "libqbluetoothdeviceinfo.h"
#include "libqbluetoothdeviceinfo.hxx"

QBluetoothDeviceInfo* QBluetoothDeviceInfo_new() {
    return new QBluetoothDeviceInfo();
}

QBluetoothDeviceInfo* QBluetoothDeviceInfo_new2(const QBluetoothAddress* address, const libqt_string name, unsigned int classOfDevice) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QBluetoothDeviceInfo(*address, name_QString, static_cast<quint32>(classOfDevice));
}

QBluetoothDeviceInfo* QBluetoothDeviceInfo_new3(const QBluetoothUuid* uuid, const libqt_string name, unsigned int classOfDevice) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QBluetoothDeviceInfo(*uuid, name_QString, static_cast<quint32>(classOfDevice));
}

QBluetoothDeviceInfo* QBluetoothDeviceInfo_new4(const QBluetoothDeviceInfo* other) {
    return new QBluetoothDeviceInfo(*other);
}

bool QBluetoothDeviceInfo_IsValid(const QBluetoothDeviceInfo* self) {
    return self->isValid();
}

bool QBluetoothDeviceInfo_IsCached(const QBluetoothDeviceInfo* self) {
    return self->isCached();
}

void QBluetoothDeviceInfo_SetCached(QBluetoothDeviceInfo* self, bool cached) {
    self->setCached(cached);
}

void QBluetoothDeviceInfo_OperatorAssign(QBluetoothDeviceInfo* self, const QBluetoothDeviceInfo* other) {
    self->operator=(*other);
}

QBluetoothAddress* QBluetoothDeviceInfo_Address(const QBluetoothDeviceInfo* self) {
    return new QBluetoothAddress(self->address());
}

libqt_string QBluetoothDeviceInfo_Name(const QBluetoothDeviceInfo* self) {
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

void QBluetoothDeviceInfo_SetName(QBluetoothDeviceInfo* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

int QBluetoothDeviceInfo_ServiceClasses(const QBluetoothDeviceInfo* self) {
    return static_cast<int>(self->serviceClasses());
}

int QBluetoothDeviceInfo_MajorDeviceClass(const QBluetoothDeviceInfo* self) {
    return static_cast<int>(self->majorDeviceClass());
}

unsigned char QBluetoothDeviceInfo_MinorDeviceClass(const QBluetoothDeviceInfo* self) {
    return static_cast<unsigned char>(self->minorDeviceClass());
}

int16_t QBluetoothDeviceInfo_Rssi(const QBluetoothDeviceInfo* self) {
    return static_cast<int16_t>(self->rssi());
}

void QBluetoothDeviceInfo_SetRssi(QBluetoothDeviceInfo* self, int16_t signal) {
    self->setRssi(static_cast<qint16>(signal));
}

libqt_list /* of QBluetoothUuid* */ QBluetoothDeviceInfo_ServiceUuids(const QBluetoothDeviceInfo* self) {
    QList<QBluetoothUuid> _ret = self->serviceUuids();
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

void QBluetoothDeviceInfo_SetServiceUuids(QBluetoothDeviceInfo* self, const libqt_list /* of QBluetoothUuid* */ uuids) {
    QList<QBluetoothUuid> uuids_QList;
    uuids_QList.reserve(uuids.len);
    QBluetoothUuid** uuids_arr = static_cast<QBluetoothUuid**>(uuids.data);
    for (size_t i = 0; i < uuids.len; ++i) {
        uuids_QList.push_back(*(uuids_arr[i]));
    }
    self->setServiceUuids(uuids_QList);
}

libqt_list /* of uint16_t */ QBluetoothDeviceInfo_ManufacturerIds(const QBluetoothDeviceInfo* self) {
    QList<unsigned short> _ret = self->manufacturerIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    uint16_t* _arr = static_cast<uint16_t*>(malloc(sizeof(uint16_t) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QBluetoothDeviceInfo_ManufacturerData(const QBluetoothDeviceInfo* self, uint16_t manufacturerId) {
    QByteArray _qb = self->manufacturerData(static_cast<quint16>(manufacturerId));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool QBluetoothDeviceInfo_SetManufacturerData(QBluetoothDeviceInfo* self, uint16_t manufacturerId, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->setManufacturerData(static_cast<quint16>(manufacturerId), data_QByteArray);
}

libqt_map /* of uint16_t to libqt_list of libqt_string */ QBluetoothDeviceInfo_ManufacturerData2(const QBluetoothDeviceInfo* self) {
    QMultiHash<unsigned short, QByteArray> _ret = self->manufacturerData();
    // Convert QMultiHash<> from C++ memory to manually-managed C memory
    auto _uniqueKeys = _ret.uniqueKeys();
    auto _numUniqueKeys = _uniqueKeys.size();
    uint16_t* _karr = static_cast<uint16_t*>(malloc(sizeof(uint16_t) * _numUniqueKeys));
    libqt_list* _varr = static_cast<libqt_list*>(malloc(sizeof(libqt_list) * _numUniqueKeys));
    for (auto i = 0; i < _numUniqueKeys; ++i) {
        unsigned short key = _uniqueKeys[i];
        _karr[i] = static_cast<uint16_t>(key);
        QList<QByteArray> values = _ret.values(key);
        size_t numValues = values.size();
        libqt_string* _array = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * numValues));
        for (size_t j = 0; j < numValues; ++j) {
            _array[j].len = values[j].length();
            _array[j].data = static_cast<char*>(malloc(_array[j].len + 1));
            memcpy((void*)_array[j].data, values[j].data(), _array[j].len);
            ((char*)_array[j].data)[_array[j].len] = '\0';
        }
        _varr[i].len = numValues;
        _varr[i].data = static_cast<void*>(_array);
    }
    libqt_map _out;
    _out.len = _numUniqueKeys;
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

libqt_list /* of QBluetoothUuid* */ QBluetoothDeviceInfo_ServiceIds(const QBluetoothDeviceInfo* self) {
    QList<QBluetoothUuid> _ret = self->serviceIds();
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

libqt_string QBluetoothDeviceInfo_ServiceData(const QBluetoothDeviceInfo* self, const QBluetoothUuid* serviceId) {
    QByteArray _qb = self->serviceData(*serviceId);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool QBluetoothDeviceInfo_SetServiceData(QBluetoothDeviceInfo* self, const QBluetoothUuid* serviceId, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->setServiceData(*serviceId, data_QByteArray);
}

libqt_map /* of QBluetoothUuid* to libqt_list of libqt_string */ QBluetoothDeviceInfo_ServiceData2(const QBluetoothDeviceInfo* self) {
    QMultiHash<QBluetoothUuid, QByteArray> _ret = self->serviceData();
    // Convert QMultiHash<> from C++ memory to manually-managed C memory
    auto _uniqueKeys = _ret.uniqueKeys();
    auto _numUniqueKeys = _uniqueKeys.size();
    QBluetoothUuid** _karr = static_cast<QBluetoothUuid**>(malloc(sizeof(QBluetoothUuid*) * _numUniqueKeys));
    libqt_list* _varr = static_cast<libqt_list*>(malloc(sizeof(libqt_list) * _numUniqueKeys));
    for (auto i = 0; i < _numUniqueKeys; ++i) {
        QBluetoothUuid key = _uniqueKeys[i];
        _karr[i] = new QBluetoothUuid(key);
        QList<QByteArray> values = _ret.values(key);
        size_t numValues = values.size();
        libqt_string* _array = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * numValues));
        for (size_t j = 0; j < numValues; ++j) {
            _array[j].len = values[j].length();
            _array[j].data = static_cast<char*>(malloc(_array[j].len + 1));
            memcpy((void*)_array[j].data, values[j].data(), _array[j].len);
            ((char*)_array[j].data)[_array[j].len] = '\0';
        }
        _varr[i].len = numValues;
        _varr[i].data = static_cast<void*>(_array);
    }
    libqt_map _out;
    _out.len = _numUniqueKeys;
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void QBluetoothDeviceInfo_SetCoreConfigurations(QBluetoothDeviceInfo* self, int coreConfigs) {
    self->setCoreConfigurations(static_cast<QBluetoothDeviceInfo::CoreConfigurations>(coreConfigs));
}

int QBluetoothDeviceInfo_CoreConfigurations(const QBluetoothDeviceInfo* self) {
    return static_cast<int>(self->coreConfigurations());
}

void QBluetoothDeviceInfo_SetDeviceUuid(QBluetoothDeviceInfo* self, const QBluetoothUuid* uuid) {
    self->setDeviceUuid(*uuid);
}

QBluetoothUuid* QBluetoothDeviceInfo_DeviceUuid(const QBluetoothDeviceInfo* self) {
    return new QBluetoothUuid(self->deviceUuid());
}

void QBluetoothDeviceInfo_Delete(QBluetoothDeviceInfo* self) {
    delete self;
}
