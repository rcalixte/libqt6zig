#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ProviderCore
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <providercore.h>
#include "libprovidercore.h"
#include "libprovidercore.hxx"

QMetaObject* KNSCore__ProviderCore_MetaObject(const KNSCore__ProviderCore* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__ProviderCore_Metacast(KNSCore__ProviderCore* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__ProviderCore_Metacall(KNSCore__ProviderCore* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSCore__ProviderCore_Tr(const char* s) {
    QString _ret = KNSCore::ProviderCore::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__ProviderCore_Version(const KNSCore__ProviderCore* self) {
    QString _ret = self->version();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KNSCore__ProviderCore_Website(const KNSCore__ProviderCore* self) {
    return new QUrl(self->website());
}

QUrl* KNSCore__ProviderCore_Host(const KNSCore__ProviderCore* self) {
    return new QUrl(self->host());
}

libqt_string KNSCore__ProviderCore_ContactEmail(const KNSCore__ProviderCore* self) {
    QString _ret = self->contactEmail();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KNSCore__ProviderCore_SupportsSsl(const KNSCore__ProviderCore* self) {
    return self->supportsSsl();
}

void KNSCore__ProviderCore_BasicsLoaded(KNSCore__ProviderCore* self) {
    self->basicsLoaded();
}

void KNSCore__ProviderCore_Connect_BasicsLoaded(KNSCore__ProviderCore* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__ProviderCore*) = reinterpret_cast<void (*)(KNSCore__ProviderCore*)>(slot);
    KNSCore::ProviderCore::connect(self, &KNSCore::ProviderCore::basicsLoaded, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KNSCore__ProviderCore_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::ProviderCore::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__ProviderCore_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSCore::ProviderCore::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__ProviderCore_Delete(KNSCore__ProviderCore* self) {
    delete self;
}
