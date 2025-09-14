#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__OpticalDrive
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageDrive
#include <opticaldrive.h>
#include "libopticaldrive.h"
#include "libopticaldrive.hxx"

QMetaObject* Solid__OpticalDrive_MetaObject(const Solid__OpticalDrive* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__OpticalDrive_Metacast(Solid__OpticalDrive* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__OpticalDrive_Metacall(Solid__OpticalDrive* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__OpticalDrive_Tr(const char* s) {
    QString _ret = Solid::OpticalDrive::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Solid__OpticalDrive_DeviceInterfaceType() {
    return static_cast<int>(Solid::OpticalDrive::deviceInterfaceType());
}

int Solid__OpticalDrive_SupportedMedia(const Solid__OpticalDrive* self) {
    return static_cast<int>(self->supportedMedia());
}

int Solid__OpticalDrive_ReadSpeed(const Solid__OpticalDrive* self) {
    return self->readSpeed();
}

int Solid__OpticalDrive_WriteSpeed(const Solid__OpticalDrive* self) {
    return self->writeSpeed();
}

libqt_list /* of int */ Solid__OpticalDrive_WriteSpeeds(const Solid__OpticalDrive* self) {
    QList<int> _ret = self->writeSpeeds();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Solid__OpticalDrive_Eject(Solid__OpticalDrive* self) {
    return self->eject();
}

void Solid__OpticalDrive_EjectPressed(Solid__OpticalDrive* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->ejectPressed(udi_QString);
}

void Solid__OpticalDrive_Connect_EjectPressed(Solid__OpticalDrive* self, intptr_t slot) {
    void (*slotFunc)(Solid__OpticalDrive*, const char*) = reinterpret_cast<void (*)(Solid__OpticalDrive*, const char*)>(slot);
    Solid::OpticalDrive::connect(self, &Solid::OpticalDrive::ejectPressed, [self, slotFunc](const QString& udi) {
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

void Solid__OpticalDrive_EjectDone(Solid__OpticalDrive* self, int errorVal, QVariant* errorData, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->ejectDone(static_cast<Solid::ErrorType>(errorVal), *errorData, udi_QString);
}

void Solid__OpticalDrive_Connect_EjectDone(Solid__OpticalDrive* self, intptr_t slot) {
    void (*slotFunc)(Solid__OpticalDrive*, int, QVariant*, const char*) = reinterpret_cast<void (*)(Solid__OpticalDrive*, int, QVariant*, const char*)>(slot);
    Solid::OpticalDrive::connect(self, &Solid::OpticalDrive::ejectDone, [self, slotFunc](Solid::ErrorType errorVal, QVariant errorData, const QString& udi) {
        int sigval1 = static_cast<int>(errorVal);
        QVariant* sigval2 = new QVariant(errorData);
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval3 = udi_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(udi_str);
    });
}

void Solid__OpticalDrive_EjectRequested(Solid__OpticalDrive* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->ejectRequested(udi_QString);
}

void Solid__OpticalDrive_Connect_EjectRequested(Solid__OpticalDrive* self, intptr_t slot) {
    void (*slotFunc)(Solid__OpticalDrive*, const char*) = reinterpret_cast<void (*)(Solid__OpticalDrive*, const char*)>(slot);
    Solid::OpticalDrive::connect(self, &Solid::OpticalDrive::ejectRequested, [self, slotFunc](const QString& udi) {
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

libqt_string Solid__OpticalDrive_Tr2(const char* s, const char* c) {
    QString _ret = Solid::OpticalDrive::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__OpticalDrive_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::OpticalDrive::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__OpticalDrive_Delete(Solid__OpticalDrive* self) {
    delete self;
}
