#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageAccess
#include <storageaccess.h>
#include "libstorageaccess.h"
#include "libstorageaccess.hxx"

QMetaObject* Solid__StorageAccess_MetaObject(const Solid__StorageAccess* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__StorageAccess_Metacast(Solid__StorageAccess* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__StorageAccess_Metacall(Solid__StorageAccess* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__StorageAccess_Tr(const char* s) {
    QString _ret = Solid::StorageAccess::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Solid__StorageAccess_DeviceInterfaceType() {
    return static_cast<int>(Solid::StorageAccess::deviceInterfaceType());
}

bool Solid__StorageAccess_IsAccessible(const Solid__StorageAccess* self) {
    return self->isAccessible();
}

libqt_string Solid__StorageAccess_FilePath(const Solid__StorageAccess* self) {
    QString _ret = self->filePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Solid__StorageAccess_IsIgnored(const Solid__StorageAccess* self) {
    return self->isIgnored();
}

bool Solid__StorageAccess_IsEncrypted(const Solid__StorageAccess* self) {
    return self->isEncrypted();
}

bool Solid__StorageAccess_Setup(Solid__StorageAccess* self) {
    return self->setup();
}

bool Solid__StorageAccess_Teardown(Solid__StorageAccess* self) {
    return self->teardown();
}

bool Solid__StorageAccess_CanCheck(const Solid__StorageAccess* self) {
    return self->canCheck();
}

bool Solid__StorageAccess_Check(Solid__StorageAccess* self) {
    return self->check();
}

bool Solid__StorageAccess_CanRepair(const Solid__StorageAccess* self) {
    return self->canRepair();
}

bool Solid__StorageAccess_Repair(Solid__StorageAccess* self) {
    return self->repair();
}

void Solid__StorageAccess_AccessibilityChanged(Solid__StorageAccess* self, bool accessible, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->accessibilityChanged(accessible, udi_QString);
}

void Solid__StorageAccess_Connect_AccessibilityChanged(Solid__StorageAccess* self, intptr_t slot) {
    void (*slotFunc)(Solid__StorageAccess*, bool, const char*) = reinterpret_cast<void (*)(Solid__StorageAccess*, bool, const char*)>(slot);
    Solid::StorageAccess::connect(self, &Solid::StorageAccess::accessibilityChanged, [self, slotFunc](bool accessible, const QString& udi) {
        bool sigval1 = accessible;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__StorageAccess_SetupDone(Solid__StorageAccess* self, int errorVal, QVariant* errorData, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->setupDone(static_cast<Solid::ErrorType>(errorVal), *errorData, udi_QString);
}

void Solid__StorageAccess_Connect_SetupDone(Solid__StorageAccess* self, intptr_t slot) {
    void (*slotFunc)(Solid__StorageAccess*, int, QVariant*, const char*) = reinterpret_cast<void (*)(Solid__StorageAccess*, int, QVariant*, const char*)>(slot);
    Solid::StorageAccess::connect(self, &Solid::StorageAccess::setupDone, [self, slotFunc](Solid::ErrorType errorVal, QVariant errorData, const QString& udi) {
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

void Solid__StorageAccess_TeardownDone(Solid__StorageAccess* self, int errorVal, QVariant* errorData, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->teardownDone(static_cast<Solid::ErrorType>(errorVal), *errorData, udi_QString);
}

void Solid__StorageAccess_Connect_TeardownDone(Solid__StorageAccess* self, intptr_t slot) {
    void (*slotFunc)(Solid__StorageAccess*, int, QVariant*, const char*) = reinterpret_cast<void (*)(Solid__StorageAccess*, int, QVariant*, const char*)>(slot);
    Solid::StorageAccess::connect(self, &Solid::StorageAccess::teardownDone, [self, slotFunc](Solid::ErrorType errorVal, QVariant errorData, const QString& udi) {
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

void Solid__StorageAccess_SetupRequested(Solid__StorageAccess* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->setupRequested(udi_QString);
}

void Solid__StorageAccess_Connect_SetupRequested(Solid__StorageAccess* self, intptr_t slot) {
    void (*slotFunc)(Solid__StorageAccess*, const char*) = reinterpret_cast<void (*)(Solid__StorageAccess*, const char*)>(slot);
    Solid::StorageAccess::connect(self, &Solid::StorageAccess::setupRequested, [self, slotFunc](const QString& udi) {
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

void Solid__StorageAccess_TeardownRequested(Solid__StorageAccess* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->teardownRequested(udi_QString);
}

void Solid__StorageAccess_Connect_TeardownRequested(Solid__StorageAccess* self, intptr_t slot) {
    void (*slotFunc)(Solid__StorageAccess*, const char*) = reinterpret_cast<void (*)(Solid__StorageAccess*, const char*)>(slot);
    Solid::StorageAccess::connect(self, &Solid::StorageAccess::teardownRequested, [self, slotFunc](const QString& udi) {
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

void Solid__StorageAccess_CheckRequested(Solid__StorageAccess* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->checkRequested(udi_QString);
}

void Solid__StorageAccess_Connect_CheckRequested(Solid__StorageAccess* self, intptr_t slot) {
    void (*slotFunc)(Solid__StorageAccess*, const char*) = reinterpret_cast<void (*)(Solid__StorageAccess*, const char*)>(slot);
    Solid::StorageAccess::connect(self, &Solid::StorageAccess::checkRequested, [self, slotFunc](const QString& udi) {
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

void Solid__StorageAccess_CheckDone(Solid__StorageAccess* self, int errorVal, QVariant* errorData, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->checkDone(static_cast<Solid::ErrorType>(errorVal), *errorData, udi_QString);
}

void Solid__StorageAccess_Connect_CheckDone(Solid__StorageAccess* self, intptr_t slot) {
    void (*slotFunc)(Solid__StorageAccess*, int, QVariant*, const char*) = reinterpret_cast<void (*)(Solid__StorageAccess*, int, QVariant*, const char*)>(slot);
    Solid::StorageAccess::connect(self, &Solid::StorageAccess::checkDone, [self, slotFunc](Solid::ErrorType errorVal, QVariant errorData, const QString& udi) {
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

void Solid__StorageAccess_RepairRequested(Solid__StorageAccess* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->repairRequested(udi_QString);
}

void Solid__StorageAccess_Connect_RepairRequested(Solid__StorageAccess* self, intptr_t slot) {
    void (*slotFunc)(Solid__StorageAccess*, const char*) = reinterpret_cast<void (*)(Solid__StorageAccess*, const char*)>(slot);
    Solid::StorageAccess::connect(self, &Solid::StorageAccess::repairRequested, [self, slotFunc](const QString& udi) {
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

void Solid__StorageAccess_RepairDone(Solid__StorageAccess* self, int errorVal, QVariant* errorData, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->repairDone(static_cast<Solid::ErrorType>(errorVal), *errorData, udi_QString);
}

void Solid__StorageAccess_Connect_RepairDone(Solid__StorageAccess* self, intptr_t slot) {
    void (*slotFunc)(Solid__StorageAccess*, int, QVariant*, const char*) = reinterpret_cast<void (*)(Solid__StorageAccess*, int, QVariant*, const char*)>(slot);
    Solid::StorageAccess::connect(self, &Solid::StorageAccess::repairDone, [self, slotFunc](Solid::ErrorType errorVal, QVariant errorData, const QString& udi) {
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

libqt_string Solid__StorageAccess_Tr2(const char* s, const char* c) {
    QString _ret = Solid::StorageAccess::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__StorageAccess_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::StorageAccess::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__StorageAccess_Delete(Solid__StorageAccess* self) {
    delete self;
}
