#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__RemoteAccount
#include <QString>
#include <QByteArray>
#include <cstring>
#include <remoteaccount.h>
#include "libremoteaccount.h"
#include "libremoteaccount.hxx"

Attica__RemoteAccount* Attica__RemoteAccount_new() {
    return new Attica::RemoteAccount();
}

Attica__RemoteAccount* Attica__RemoteAccount_new2(const Attica__RemoteAccount* other) {
    return new Attica::RemoteAccount(*other);
}

void Attica__RemoteAccount_OperatorAssign(Attica__RemoteAccount* self, const Attica__RemoteAccount* other) {
    self->operator=(*other);
}

void Attica__RemoteAccount_SetId(Attica__RemoteAccount* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__RemoteAccount_Id(const Attica__RemoteAccount* self) {
    QString _ret = self->id();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__RemoteAccount_SetType(Attica__RemoteAccount* self, const libqt_string typeVal) {
    QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
    self->setType(typeVal_QString);
}

libqt_string Attica__RemoteAccount_Type(const Attica__RemoteAccount* self) {
    QString _ret = self->type();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__RemoteAccount_SetRemoteServiceId(Attica__RemoteAccount* self, const libqt_string remoteServiceId) {
    QString remoteServiceId_QString = QString::fromUtf8(remoteServiceId.data, remoteServiceId.len);
    self->setRemoteServiceId(remoteServiceId_QString);
}

libqt_string Attica__RemoteAccount_RemoteServiceId(const Attica__RemoteAccount* self) {
    QString _ret = self->remoteServiceId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__RemoteAccount_SetData(Attica__RemoteAccount* self, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->setData(data_QString);
}

libqt_string Attica__RemoteAccount_Data(const Attica__RemoteAccount* self) {
    QString _ret = self->data();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__RemoteAccount_SetLogin(Attica__RemoteAccount* self, const libqt_string login) {
    QString login_QString = QString::fromUtf8(login.data, login.len);
    self->setLogin(login_QString);
}

libqt_string Attica__RemoteAccount_Login(const Attica__RemoteAccount* self) {
    QString _ret = self->login();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__RemoteAccount_SetPassword(Attica__RemoteAccount* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->setPassword(password_QString);
}

libqt_string Attica__RemoteAccount_Password(const Attica__RemoteAccount* self) {
    QString _ret = self->password();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__RemoteAccount_IsValid(const Attica__RemoteAccount* self) {
    return self->isValid();
}

void Attica__RemoteAccount_Delete(Attica__RemoteAccount* self) {
    delete self;
}
