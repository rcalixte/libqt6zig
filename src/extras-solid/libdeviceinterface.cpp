#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#include <deviceinterface.h>
#include "libdeviceinterface.h"
#include "libdeviceinterface.hxx"

QMetaObject* Solid__DeviceInterface_MetaObject(const Solid__DeviceInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__DeviceInterface_Metacast(Solid__DeviceInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__DeviceInterface_Metacall(Solid__DeviceInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__DeviceInterface_Tr(const char* s) {
    QString _ret = Solid::DeviceInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Solid__DeviceInterface_IsValid(const Solid__DeviceInterface* self) {
    return self->isValid();
}

libqt_string Solid__DeviceInterface_TypeToString(int typeVal) {
    QString _ret = Solid::DeviceInterface::typeToString(static_cast<Solid::DeviceInterface::Type>(typeVal));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Solid__DeviceInterface_StringToType(const libqt_string typeVal) {
    QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
    return static_cast<int>(Solid::DeviceInterface::stringToType(typeVal_QString));
}

libqt_string Solid__DeviceInterface_TypeDescription(int typeVal) {
    QString _ret = Solid::DeviceInterface::typeDescription(static_cast<Solid::DeviceInterface::Type>(typeVal));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__DeviceInterface_Tr2(const char* s, const char* c) {
    QString _ret = Solid::DeviceInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__DeviceInterface_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::DeviceInterface::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__DeviceInterface_Delete(Solid__DeviceInterface* self) {
    delete self;
}
