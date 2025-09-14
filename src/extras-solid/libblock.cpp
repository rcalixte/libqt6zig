#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__Block
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#include <block.h>
#include "libblock.h"
#include "libblock.hxx"

QMetaObject* Solid__Block_MetaObject(const Solid__Block* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__Block_Metacast(Solid__Block* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__Block_Metacall(Solid__Block* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__Block_Tr(const char* s) {
    QString _ret = Solid::Block::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Solid__Block_DeviceInterfaceType() {
    return static_cast<int>(Solid::Block::deviceInterfaceType());
}

int Solid__Block_DeviceMajor(const Solid__Block* self) {
    return self->deviceMajor();
}

int Solid__Block_DeviceMinor(const Solid__Block* self) {
    return self->deviceMinor();
}

libqt_string Solid__Block_Device(const Solid__Block* self) {
    QString _ret = self->device();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__Block_Tr2(const char* s, const char* c) {
    QString _ret = Solid::Block::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__Block_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::Block::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__Block_Delete(Solid__Block* self) {
    delete self;
}
