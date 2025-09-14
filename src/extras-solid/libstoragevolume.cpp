#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageVolume
#include <storagevolume.h>
#include "libstoragevolume.h"
#include "libstoragevolume.hxx"

QMetaObject* Solid__StorageVolume_MetaObject(const Solid__StorageVolume* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__StorageVolume_Metacast(Solid__StorageVolume* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__StorageVolume_Metacall(Solid__StorageVolume* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__StorageVolume_Tr(const char* s) {
    QString _ret = Solid::StorageVolume::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Solid__StorageVolume_DeviceInterfaceType() {
    return static_cast<int>(Solid::StorageVolume::deviceInterfaceType());
}

bool Solid__StorageVolume_IsIgnored(const Solid__StorageVolume* self) {
    return self->isIgnored();
}

int Solid__StorageVolume_Usage(const Solid__StorageVolume* self) {
    return static_cast<int>(self->usage());
}

libqt_string Solid__StorageVolume_FsType(const Solid__StorageVolume* self) {
    QString _ret = self->fsType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__StorageVolume_Label(const Solid__StorageVolume* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__StorageVolume_Uuid(const Solid__StorageVolume* self) {
    QString _ret = self->uuid();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned long long Solid__StorageVolume_Size(const Solid__StorageVolume* self) {
    return static_cast<unsigned long long>(self->size());
}

libqt_string Solid__StorageVolume_Tr2(const char* s, const char* c) {
    QString _ret = Solid::StorageVolume::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__StorageVolume_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::StorageVolume::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__StorageVolume_Delete(Solid__StorageVolume* self) {
    delete self;
}
