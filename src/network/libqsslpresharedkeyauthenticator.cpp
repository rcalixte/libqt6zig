#include <QByteArray>
#include <QSslPreSharedKeyAuthenticator>
#include <qsslpresharedkeyauthenticator.h>
#include "libqsslpresharedkeyauthenticator.h"
#include "libqsslpresharedkeyauthenticator.hxx"

QSslPreSharedKeyAuthenticator* QSslPreSharedKeyAuthenticator_new() {
    return new QSslPreSharedKeyAuthenticator();
}

QSslPreSharedKeyAuthenticator* QSslPreSharedKeyAuthenticator_new2(const QSslPreSharedKeyAuthenticator* authenticator) {
    return new QSslPreSharedKeyAuthenticator(*authenticator);
}

void QSslPreSharedKeyAuthenticator_OperatorAssign(QSslPreSharedKeyAuthenticator* self, const QSslPreSharedKeyAuthenticator* authenticator) {
    self->operator=(*authenticator);
}

void QSslPreSharedKeyAuthenticator_Swap(QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* other) {
    self->swap(*other);
}

libqt_string QSslPreSharedKeyAuthenticator_IdentityHint(const QSslPreSharedKeyAuthenticator* self) {
    QByteArray _qb = self->identityHint();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSslPreSharedKeyAuthenticator_SetIdentity(QSslPreSharedKeyAuthenticator* self, const libqt_string identity) {
    QByteArray identity_QByteArray(identity.data, identity.len);
    self->setIdentity(identity_QByteArray);
}

libqt_string QSslPreSharedKeyAuthenticator_Identity(const QSslPreSharedKeyAuthenticator* self) {
    QByteArray _qb = self->identity();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSslPreSharedKeyAuthenticator_MaximumIdentityLength(const QSslPreSharedKeyAuthenticator* self) {
    return self->maximumIdentityLength();
}

void QSslPreSharedKeyAuthenticator_SetPreSharedKey(QSslPreSharedKeyAuthenticator* self, const libqt_string preSharedKey) {
    QByteArray preSharedKey_QByteArray(preSharedKey.data, preSharedKey.len);
    self->setPreSharedKey(preSharedKey_QByteArray);
}

libqt_string QSslPreSharedKeyAuthenticator_PreSharedKey(const QSslPreSharedKeyAuthenticator* self) {
    QByteArray _qb = self->preSharedKey();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSslPreSharedKeyAuthenticator_MaximumPreSharedKeyLength(const QSslPreSharedKeyAuthenticator* self) {
    return self->maximumPreSharedKeyLength();
}

void QSslPreSharedKeyAuthenticator_Delete(QSslPreSharedKeyAuthenticator* self) {
    delete self;
}
