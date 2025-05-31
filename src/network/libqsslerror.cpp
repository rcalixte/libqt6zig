#include <QSslCertificate>
#include <QSslError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslerror.h>
#include "libqsslerror.h"
#include "libqsslerror.hxx"

QSslError* QSslError_new() {
    return new QSslError();
}

QSslError* QSslError_new2(int errorVal) {
    return new QSslError(static_cast<QSslError::SslError>(errorVal));
}

QSslError* QSslError_new3(int errorVal, const QSslCertificate* certificate) {
    return new QSslError(static_cast<QSslError::SslError>(errorVal), *certificate);
}

QSslError* QSslError_new4(const QSslError* other) {
    return new QSslError(*other);
}

void QSslError_Swap(QSslError* self, QSslError* other) {
    self->swap(*other);
}

void QSslError_OperatorAssign(QSslError* self, const QSslError* other) {
    self->operator=(*other);
}

bool QSslError_OperatorEqual(const QSslError* self, const QSslError* other) {
    return (*self == *other);
}

bool QSslError_OperatorNotEqual(const QSslError* self, const QSslError* other) {
    return (*self != *other);
}

int QSslError_Error(const QSslError* self) {
    return static_cast<int>(self->error());
}

libqt_string QSslError_ErrorString(const QSslError* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QSslCertificate* QSslError_Certificate(const QSslError* self) {
    return new QSslCertificate(self->certificate());
}

void QSslError_Delete(QSslError* self) {
    delete self;
}
