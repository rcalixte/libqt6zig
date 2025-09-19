#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Config
#include <QString>
#include <QByteArray>
#include <cstring>
#include <config.h>
#include "libconfig.h"
#include "libconfig.hxx"

Attica__Config* Attica__Config_new() {
    return new Attica::Config();
}

Attica__Config* Attica__Config_new2(const Attica__Config* other) {
    return new Attica::Config(*other);
}

void Attica__Config_OperatorAssign(Attica__Config* self, const Attica__Config* other) {
    self->operator=(*other);
}

libqt_string Attica__Config_Contact(const Attica__Config* self) {
    QString _ret = self->contact();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__Config_Host(const Attica__Config* self) {
    QString _ret = self->host();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__Config_Version(const Attica__Config* self) {
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

bool Attica__Config_Ssl(const Attica__Config* self) {
    return self->ssl();
}

libqt_string Attica__Config_Website(const Attica__Config* self) {
    QString _ret = self->website();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Config_SetContact(Attica__Config* self, const libqt_string contact) {
    QString contact_QString = QString::fromUtf8(contact.data, contact.len);
    self->setContact(contact_QString);
}

void Attica__Config_SetHost(Attica__Config* self, const libqt_string host) {
    QString host_QString = QString::fromUtf8(host.data, host.len);
    self->setHost(host_QString);
}

void Attica__Config_SetSsl(Attica__Config* self, bool ssl) {
    self->setSsl(ssl);
}

void Attica__Config_SetVersion(Attica__Config* self, const libqt_string version) {
    QString version_QString = QString::fromUtf8(version.data, version.len);
    self->setVersion(version_QString);
}

void Attica__Config_SetWebsite(Attica__Config* self, const libqt_string website) {
    QString website_QString = QString::fromUtf8(website.data, website.len);
    self->setWebsite(website_QString);
}

bool Attica__Config_IsValid(const Attica__Config* self) {
    return self->isValid();
}

void Attica__Config_Delete(Attica__Config* self) {
    delete self;
}
