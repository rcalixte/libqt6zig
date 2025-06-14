#include <QAuthenticator>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qauthenticator.h>
#include "libqauthenticator.h"
#include "libqauthenticator.hxx"

QAuthenticator* QAuthenticator_new() {
    return new QAuthenticator();
}

QAuthenticator* QAuthenticator_new2(const QAuthenticator* other) {
    return new QAuthenticator(*other);
}

void QAuthenticator_OperatorAssign(QAuthenticator* self, const QAuthenticator* other) {
    self->operator=(*other);
}

bool QAuthenticator_OperatorEqual(const QAuthenticator* self, const QAuthenticator* other) {
    return (*self == *other);
}

bool QAuthenticator_OperatorNotEqual(const QAuthenticator* self, const QAuthenticator* other) {
    return (*self != *other);
}

libqt_string QAuthenticator_User(const QAuthenticator* self) {
    QString _ret = self->user();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAuthenticator_SetUser(QAuthenticator* self, const libqt_string user) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    self->setUser(user_QString);
}

libqt_string QAuthenticator_Password(const QAuthenticator* self) {
    QString _ret = self->password();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAuthenticator_SetPassword(QAuthenticator* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->setPassword(password_QString);
}

libqt_string QAuthenticator_Realm(const QAuthenticator* self) {
    QString _ret = self->realm();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAuthenticator_SetRealm(QAuthenticator* self, const libqt_string realm) {
    QString realm_QString = QString::fromUtf8(realm.data, realm.len);
    self->setRealm(realm_QString);
}

QVariant* QAuthenticator_Option(const QAuthenticator* self, const libqt_string opt) {
    QString opt_QString = QString::fromUtf8(opt.data, opt.len);
    return new QVariant(self->option(opt_QString));
}

libqt_map /* of libqt_string to QVariant* */ QAuthenticator_Options(const QAuthenticator* self) {
    QVariantHash _ret = self->options();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc((_hashkey_str.len + 1) * sizeof(char)));
        memcpy((void*)_hashkey_str.data, _hashkey_b.data(), _hashkey_str.len);
        ((char*)_hashkey_str.data)[_hashkey_str.len] = '\0';
        _karr[_ctr] = _hashkey_str;
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void QAuthenticator_SetOption(QAuthenticator* self, const libqt_string opt, const QVariant* value) {
    QString opt_QString = QString::fromUtf8(opt.data, opt.len);
    self->setOption(opt_QString, *value);
}

bool QAuthenticator_IsNull(const QAuthenticator* self) {
    return self->isNull();
}

void QAuthenticator_Detach(QAuthenticator* self) {
    self->detach();
}

void QAuthenticator_Delete(QAuthenticator* self) {
    delete self;
}
