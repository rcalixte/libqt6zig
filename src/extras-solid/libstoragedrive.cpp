#include <QDateTime>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageDrive
#include <storagedrive.h>
#include "libstoragedrive.h"
#include "libstoragedrive.hxx"

QMetaObject* Solid__StorageDrive_MetaObject(const Solid__StorageDrive* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__StorageDrive_Metacast(Solid__StorageDrive* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__StorageDrive_Metacall(Solid__StorageDrive* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__StorageDrive_Tr(const char* s) {
    QString _ret = Solid::StorageDrive::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Solid__StorageDrive_DeviceInterfaceType() {
    return static_cast<int>(Solid::StorageDrive::deviceInterfaceType());
}

int Solid__StorageDrive_Bus(const Solid__StorageDrive* self) {
    return static_cast<int>(self->bus());
}

int Solid__StorageDrive_DriveType(const Solid__StorageDrive* self) {
    return static_cast<int>(self->driveType());
}

bool Solid__StorageDrive_IsRemovable(const Solid__StorageDrive* self) {
    return self->isRemovable();
}

bool Solid__StorageDrive_IsHotpluggable(const Solid__StorageDrive* self) {
    return self->isHotpluggable();
}

unsigned long long Solid__StorageDrive_Size(const Solid__StorageDrive* self) {
    return static_cast<unsigned long long>(self->size());
}

bool Solid__StorageDrive_IsInUse(const Solid__StorageDrive* self) {
    return self->isInUse();
}

QDateTime* Solid__StorageDrive_TimeDetected(const Solid__StorageDrive* self) {
    return new QDateTime(self->timeDetected());
}

QDateTime* Solid__StorageDrive_TimeMediaDetected(const Solid__StorageDrive* self) {
    return new QDateTime(self->timeMediaDetected());
}

libqt_string Solid__StorageDrive_Tr2(const char* s, const char* c) {
    QString _ret = Solid::StorageDrive::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__StorageDrive_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::StorageDrive::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__StorageDrive_Delete(Solid__StorageDrive* self) {
    delete self;
}
