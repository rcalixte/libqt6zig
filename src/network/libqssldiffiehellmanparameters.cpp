#include <QByteArray>
#include <QIODevice>
#include <QSslDiffieHellmanParameters>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qssldiffiehellmanparameters.h>
#include "libqssldiffiehellmanparameters.h"
#include "libqssldiffiehellmanparameters.hxx"

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_new() {
    return new QSslDiffieHellmanParameters();
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_new2(const QSslDiffieHellmanParameters* other) {
    return new QSslDiffieHellmanParameters(*other);
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_DefaultParameters() {
    return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::defaultParameters());
}

void QSslDiffieHellmanParameters_OperatorAssign(QSslDiffieHellmanParameters* self, const QSslDiffieHellmanParameters* other) {
    self->operator=(*other);
}

void QSslDiffieHellmanParameters_Swap(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other) {
    self->swap(*other);
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded(const libqt_string encoded) {
    QByteArray encoded_QByteArray(encoded.data, encoded.len);
    return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(encoded_QByteArray));
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncodedWithDevice(QIODevice* device) {
    return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(device));
}

bool QSslDiffieHellmanParameters_IsEmpty(const QSslDiffieHellmanParameters* self) {
    return self->isEmpty();
}

bool QSslDiffieHellmanParameters_IsValid(const QSslDiffieHellmanParameters* self) {
    return self->isValid();
}

int QSslDiffieHellmanParameters_Error(const QSslDiffieHellmanParameters* self) {
    return static_cast<int>(self->error());
}

libqt_string QSslDiffieHellmanParameters_ErrorString(const QSslDiffieHellmanParameters* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded2(const libqt_string encoded, int format) {
    QByteArray encoded_QByteArray(encoded.data, encoded.len);
    return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(encoded_QByteArray, static_cast<QSsl::EncodingFormat>(format)));
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded22(QIODevice* device, int format) {
    return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(device, static_cast<QSsl::EncodingFormat>(format)));
}

void QSslDiffieHellmanParameters_Delete(QSslDiffieHellmanParameters* self) {
    delete self;
}
