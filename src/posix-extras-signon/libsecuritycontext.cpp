#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__SecurityContext
#include <securitycontext.h>
#include "libsecuritycontext.h"
#include "libsecuritycontext.hxx"

SignOn__SecurityContext* SignOn__SecurityContext_new() {
    return new SignOn::SecurityContext();
}

SignOn__SecurityContext* SignOn__SecurityContext_new2(const libqt_string systemContext, const libqt_string applicationContext) {
    QString systemContext_QString = QString::fromUtf8(systemContext.data, systemContext.len);
    QString applicationContext_QString = QString::fromUtf8(applicationContext.data, applicationContext.len);
    return new SignOn::SecurityContext(systemContext_QString, applicationContext_QString);
}

SignOn__SecurityContext* SignOn__SecurityContext_new3(const SignOn__SecurityContext* param1) {
    return new SignOn::SecurityContext(*param1);
}

void SignOn__SecurityContext_SetSystemContext(SignOn__SecurityContext* self, const libqt_string systemContext) {
    QString systemContext_QString = QString::fromUtf8(systemContext.data, systemContext.len);
    self->setSystemContext(systemContext_QString);
}

libqt_string SignOn__SecurityContext_SystemContext(const SignOn__SecurityContext* self) {
    QString _ret = self->systemContext();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__SecurityContext_SetApplicationContext(SignOn__SecurityContext* self, const libqt_string applicationContext) {
    QString applicationContext_QString = QString::fromUtf8(applicationContext.data, applicationContext.len);
    self->setApplicationContext(applicationContext_QString);
}

libqt_string SignOn__SecurityContext_ApplicationContext(const SignOn__SecurityContext* self) {
    QString _ret = self->applicationContext();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__SecurityContext_Delete(SignOn__SecurityContext* self) {
    delete self;
}
