#include <QByteArray>
#include <QIODevice>
#include <QSslKey>
#include <qsslkey.h>
#include "libqsslkey.h"
#include "libqsslkey.hxx"

QSslKey* QSslKey_new() {
    return new QSslKey();
}

QSslKey* QSslKey_new2(const libqt_string encoded, int algorithm) {
    QByteArray encoded_QByteArray(encoded.data, encoded.len);
    return new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm));
}

QSslKey* QSslKey_new3(QIODevice* device, int algorithm) {
    return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm));
}

QSslKey* QSslKey_new4(void* handle) {
    return new QSslKey(handle);
}

QSslKey* QSslKey_new5(const QSslKey* other) {
    return new QSslKey(*other);
}

QSslKey* QSslKey_new6(const libqt_string encoded, int algorithm, int format) {
    QByteArray encoded_QByteArray(encoded.data, encoded.len);
    return new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

QSslKey* QSslKey_new7(const libqt_string encoded, int algorithm, int format, int typeVal) {
    QByteArray encoded_QByteArray(encoded.data, encoded.len);
    return new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal));
}

QSslKey* QSslKey_new8(const libqt_string encoded, int algorithm, int format, int typeVal, const libqt_string passPhrase) {
    QByteArray encoded_QByteArray(encoded.data, encoded.len);
    QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
    return new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal), passPhrase_QByteArray);
}

QSslKey* QSslKey_new9(QIODevice* device, int algorithm, int format) {
    return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

QSslKey* QSslKey_new10(QIODevice* device, int algorithm, int format, int typeVal) {
    return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal));
}

QSslKey* QSslKey_new11(QIODevice* device, int algorithm, int format, int typeVal, const libqt_string passPhrase) {
    QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
    return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal), passPhrase_QByteArray);
}

QSslKey* QSslKey_new12(void* handle, int typeVal) {
    return new QSslKey(handle, static_cast<QSsl::KeyType>(typeVal));
}

void QSslKey_OperatorAssign(QSslKey* self, const QSslKey* other) {
    self->operator=(*other);
}

void QSslKey_Swap(QSslKey* self, QSslKey* other) {
    self->swap(*other);
}

bool QSslKey_IsNull(const QSslKey* self) {
    return self->isNull();
}

void QSslKey_Clear(QSslKey* self) {
    self->clear();
}

int QSslKey_Length(const QSslKey* self) {
    return self->length();
}

int QSslKey_Type(const QSslKey* self) {
    return static_cast<int>(self->type());
}

int QSslKey_Algorithm(const QSslKey* self) {
    return static_cast<int>(self->algorithm());
}

libqt_string QSslKey_ToPem(const QSslKey* self) {
    QByteArray _qb = self->toPem();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslKey_ToDer(const QSslKey* self) {
    QByteArray _qb = self->toDer();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void* QSslKey_Handle(const QSslKey* self) {
    return static_cast<void*>(self->handle());
}

bool QSslKey_OperatorEqual(const QSslKey* self, const QSslKey* key) {
    return (*self == *key);
}

bool QSslKey_OperatorNotEqual(const QSslKey* self, const QSslKey* key) {
    return (*self != *key);
}

libqt_string QSslKey_ToPem1(const QSslKey* self, const libqt_string passPhrase) {
    QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
    QByteArray _qb = self->toPem(passPhrase_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslKey_ToDer1(const QSslKey* self, const libqt_string passPhrase) {
    QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
    QByteArray _qb = self->toDer(passPhrase_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSslKey_Delete(QSslKey* self) {
    delete self;
}
