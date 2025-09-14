#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__Device
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__Predicate
#include <device.h>
#include "libdevice.h"
#include "libdevice.hxx"

Solid__Device* Solid__Device_new() {
    return new Solid::Device();
}

Solid__Device* Solid__Device_new2(const Solid__Device* device) {
    return new Solid::Device(*device);
}

Solid__Device* Solid__Device_new3(const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    return new Solid::Device(udi_QString);
}

libqt_list /* of Solid__Device* */ Solid__Device_AllDevices() {
    QList<Solid::Device> _ret = Solid::Device::allDevices();
    // Convert QList<> from C++ memory to manually-managed C memory
    Solid__Device** _arr = static_cast<Solid__Device**>(malloc(sizeof(Solid__Device*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Solid::Device(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Solid__Device* */ Solid__Device_ListFromType(const int* typeVal) {
    QList<Solid::Device> _ret = Solid::Device::listFromType((const Solid::DeviceInterface::Type&)(*typeVal));
    // Convert QList<> from C++ memory to manually-managed C memory
    Solid__Device** _arr = static_cast<Solid__Device**>(malloc(sizeof(Solid__Device*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Solid::Device(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Solid__Device* */ Solid__Device_ListFromQuery(const Solid__Predicate* predicate) {
    QList<Solid::Device> _ret = Solid::Device::listFromQuery(*predicate);
    // Convert QList<> from C++ memory to manually-managed C memory
    Solid__Device** _arr = static_cast<Solid__Device**>(malloc(sizeof(Solid__Device*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Solid::Device(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Solid__Device* */ Solid__Device_ListFromQuery2(const libqt_string predicate) {
    QString predicate_QString = QString::fromUtf8(predicate.data, predicate.len);
    QList<Solid::Device> _ret = Solid::Device::listFromQuery(predicate_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    Solid__Device** _arr = static_cast<Solid__Device**>(malloc(sizeof(Solid__Device*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Solid::Device(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

Solid__Device* Solid__Device_StorageAccessFromPath(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new Solid::Device(Solid::Device::storageAccessFromPath(path_QString));
}

void Solid__Device_OperatorAssign(Solid__Device* self, const Solid__Device* device) {
    self->operator=(*device);
}

bool Solid__Device_IsValid(const Solid__Device* self) {
    return self->isValid();
}

libqt_string Solid__Device_Udi(const Solid__Device* self) {
    QString _ret = self->udi();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__Device_ParentUdi(const Solid__Device* self) {
    QString _ret = self->parentUdi();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Solid__Device* Solid__Device_Parent(const Solid__Device* self) {
    return new Solid::Device(self->parent());
}

libqt_string Solid__Device_Vendor(const Solid__Device* self) {
    QString _ret = self->vendor();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__Device_Product(const Solid__Device* self) {
    QString _ret = self->product();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__Device_Icon(const Solid__Device* self) {
    QString _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ Solid__Device_Emblems(const Solid__Device* self) {
    QList<QString> _ret = self->emblems();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string Solid__Device_DisplayName(const Solid__Device* self) {
    QString _ret = self->displayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__Device_Description(const Solid__Device* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Solid__Device_IsDeviceInterface(const Solid__Device* self, const int* typeVal) {
    return self->isDeviceInterface((const Solid::DeviceInterface::Type&)(*typeVal));
}

Solid__DeviceInterface* Solid__Device_AsDeviceInterface(Solid__Device* self, const int* typeVal) {
    return self->asDeviceInterface((const Solid::DeviceInterface::Type&)(*typeVal));
}

Solid__DeviceInterface* Solid__Device_AsDeviceInterface2(const Solid__Device* self, const int* typeVal) {
    return (Solid__DeviceInterface*)self->asDeviceInterface((const Solid::DeviceInterface::Type&)(*typeVal));
}

libqt_list /* of Solid__Device* */ Solid__Device_ListFromType2(const int* typeVal, const libqt_string parentUdi) {
    QString parentUdi_QString = QString::fromUtf8(parentUdi.data, parentUdi.len);
    QList<Solid::Device> _ret = Solid::Device::listFromType((const Solid::DeviceInterface::Type&)(*typeVal), parentUdi_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    Solid__Device** _arr = static_cast<Solid__Device**>(malloc(sizeof(Solid__Device*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Solid::Device(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Solid__Device* */ Solid__Device_ListFromQuery22(const Solid__Predicate* predicate, const libqt_string parentUdi) {
    QString parentUdi_QString = QString::fromUtf8(parentUdi.data, parentUdi.len);
    QList<Solid::Device> _ret = Solid::Device::listFromQuery(*predicate, parentUdi_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    Solid__Device** _arr = static_cast<Solid__Device**>(malloc(sizeof(Solid__Device*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Solid::Device(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Solid__Device* */ Solid__Device_ListFromQuery23(const libqt_string predicate, const libqt_string parentUdi) {
    QString predicate_QString = QString::fromUtf8(predicate.data, predicate.len);
    QString parentUdi_QString = QString::fromUtf8(parentUdi.data, parentUdi.len);
    QList<Solid::Device> _ret = Solid::Device::listFromQuery(predicate_QString, parentUdi_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    Solid__Device** _arr = static_cast<Solid__Device**>(malloc(sizeof(Solid__Device*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Solid::Device(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Solid__Device_Delete(Solid__Device* self) {
    delete self;
}
