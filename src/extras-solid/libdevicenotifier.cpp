#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceNotifier
#include <devicenotifier.h>
#include "libdevicenotifier.h"
#include "libdevicenotifier.hxx"

QMetaObject* Solid__DeviceNotifier_MetaObject(const Solid__DeviceNotifier* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__DeviceNotifier_Metacast(Solid__DeviceNotifier* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__DeviceNotifier_Metacall(Solid__DeviceNotifier* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__DeviceNotifier_Tr(const char* s) {
    QString _ret = Solid::DeviceNotifier::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Solid__DeviceNotifier* Solid__DeviceNotifier_Instance() {
    return Solid::DeviceNotifier::instance();
}

void Solid__DeviceNotifier_DeviceAdded(Solid__DeviceNotifier* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->deviceAdded(udi_QString);
}

void Solid__DeviceNotifier_Connect_DeviceAdded(Solid__DeviceNotifier* self, intptr_t slot) {
    void (*slotFunc)(Solid__DeviceNotifier*, const char*) = reinterpret_cast<void (*)(Solid__DeviceNotifier*, const char*)>(slot);
    Solid::DeviceNotifier::connect(self, &Solid::DeviceNotifier::deviceAdded, [self, slotFunc](const QString& udi) {
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval1 = udi_str;
        slotFunc(self, sigval1);
        libqt_free(udi_str);
    });
}

void Solid__DeviceNotifier_DeviceRemoved(Solid__DeviceNotifier* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->deviceRemoved(udi_QString);
}

void Solid__DeviceNotifier_Connect_DeviceRemoved(Solid__DeviceNotifier* self, intptr_t slot) {
    void (*slotFunc)(Solid__DeviceNotifier*, const char*) = reinterpret_cast<void (*)(Solid__DeviceNotifier*, const char*)>(slot);
    Solid::DeviceNotifier::connect(self, &Solid::DeviceNotifier::deviceRemoved, [self, slotFunc](const QString& udi) {
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval1 = udi_str;
        slotFunc(self, sigval1);
        libqt_free(udi_str);
    });
}

libqt_string Solid__DeviceNotifier_Tr2(const char* s, const char* c) {
    QString _ret = Solid::DeviceNotifier::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__DeviceNotifier_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::DeviceNotifier::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__DeviceNotifier_Delete(Solid__DeviceNotifier* self) {
    delete self;
}
