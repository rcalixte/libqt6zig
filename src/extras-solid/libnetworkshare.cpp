#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__NetworkShare
#include <networkshare.h>
#include "libnetworkshare.h"
#include "libnetworkshare.hxx"

QMetaObject* Solid__NetworkShare_MetaObject(const Solid__NetworkShare* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__NetworkShare_Metacast(Solid__NetworkShare* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__NetworkShare_Metacall(Solid__NetworkShare* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__NetworkShare_Tr(const char* s) {
    QString _ret = Solid::NetworkShare::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Solid__NetworkShare_DeviceInterfaceType() {
    return static_cast<int>(Solid::NetworkShare::deviceInterfaceType());
}

int Solid__NetworkShare_Type(const Solid__NetworkShare* self) {
    return static_cast<int>(self->type());
}

QUrl* Solid__NetworkShare_Url(const Solid__NetworkShare* self) {
    return new QUrl(self->url());
}

libqt_string Solid__NetworkShare_Tr2(const char* s, const char* c) {
    QString _ret = Solid::NetworkShare::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__NetworkShare_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::NetworkShare::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__NetworkShare_Delete(Solid__NetworkShare* self) {
    delete self;
}
