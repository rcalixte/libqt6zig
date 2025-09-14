#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__OpticalDisc
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageVolume
#include <opticaldisc.h>
#include "libopticaldisc.h"
#include "libopticaldisc.hxx"

QMetaObject* Solid__OpticalDisc_MetaObject(const Solid__OpticalDisc* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__OpticalDisc_Metacast(Solid__OpticalDisc* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__OpticalDisc_Metacall(Solid__OpticalDisc* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__OpticalDisc_Tr(const char* s) {
    QString _ret = Solid::OpticalDisc::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Solid__OpticalDisc_DeviceInterfaceType() {
    return static_cast<int>(Solid::OpticalDisc::deviceInterfaceType());
}

int Solid__OpticalDisc_AvailableContent(const Solid__OpticalDisc* self) {
    return static_cast<int>(self->availableContent());
}

int Solid__OpticalDisc_DiscType(const Solid__OpticalDisc* self) {
    return static_cast<int>(self->discType());
}

bool Solid__OpticalDisc_IsAppendable(const Solid__OpticalDisc* self) {
    return self->isAppendable();
}

bool Solid__OpticalDisc_IsBlank(const Solid__OpticalDisc* self) {
    return self->isBlank();
}

bool Solid__OpticalDisc_IsRewritable(const Solid__OpticalDisc* self) {
    return self->isRewritable();
}

unsigned long long Solid__OpticalDisc_Capacity(const Solid__OpticalDisc* self) {
    return static_cast<unsigned long long>(self->capacity());
}

libqt_string Solid__OpticalDisc_Tr2(const char* s, const char* c) {
    QString _ret = Solid::OpticalDisc::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__OpticalDisc_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::OpticalDisc::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__OpticalDisc_Delete(Solid__OpticalDisc* self) {
    delete self;
}
