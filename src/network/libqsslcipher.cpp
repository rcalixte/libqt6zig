#include <QSslCipher>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslcipher.h>
#include "libqsslcipher.h"
#include "libqsslcipher.hxx"

QSslCipher* QSslCipher_new() {
    return new QSslCipher();
}

QSslCipher* QSslCipher_new2(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QSslCipher(name_QString);
}

QSslCipher* QSslCipher_new3(const libqt_string name, int protocol) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QSslCipher(name_QString, static_cast<QSsl::SslProtocol>(protocol));
}

QSslCipher* QSslCipher_new4(const QSslCipher* other) {
    return new QSslCipher(*other);
}

void QSslCipher_OperatorAssign(QSslCipher* self, const QSslCipher* other) {
    self->operator=(*other);
}

void QSslCipher_Swap(QSslCipher* self, QSslCipher* other) {
    self->swap(*other);
}

bool QSslCipher_OperatorEqual(const QSslCipher* self, const QSslCipher* other) {
    return (*self == *other);
}

bool QSslCipher_OperatorNotEqual(const QSslCipher* self, const QSslCipher* other) {
    return (*self != *other);
}

bool QSslCipher_IsNull(const QSslCipher* self) {
    return self->isNull();
}

libqt_string QSslCipher_Name(const QSslCipher* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSslCipher_SupportedBits(const QSslCipher* self) {
    return self->supportedBits();
}

int QSslCipher_UsedBits(const QSslCipher* self) {
    return self->usedBits();
}

libqt_string QSslCipher_KeyExchangeMethod(const QSslCipher* self) {
    QString _ret = self->keyExchangeMethod();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslCipher_AuthenticationMethod(const QSslCipher* self) {
    QString _ret = self->authenticationMethod();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslCipher_EncryptionMethod(const QSslCipher* self) {
    QString _ret = self->encryptionMethod();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslCipher_ProtocolString(const QSslCipher* self) {
    QString _ret = self->protocolString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSslCipher_Protocol(const QSslCipher* self) {
    return static_cast<int>(self->protocol());
}

void QSslCipher_Delete(QSslCipher* self) {
    delete self;
}
