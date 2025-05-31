#include <QSslCertificateExtension>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsslcertificateextension.h>
#include "libqsslcertificateextension.h"
#include "libqsslcertificateextension.hxx"

QSslCertificateExtension* QSslCertificateExtension_new() {
    return new QSslCertificateExtension();
}

QSslCertificateExtension* QSslCertificateExtension_new2(const QSslCertificateExtension* other) {
    return new QSslCertificateExtension(*other);
}

void QSslCertificateExtension_OperatorAssign(QSslCertificateExtension* self, const QSslCertificateExtension* other) {
    self->operator=(*other);
}

void QSslCertificateExtension_Swap(QSslCertificateExtension* self, QSslCertificateExtension* other) {
    self->swap(*other);
}

libqt_string QSslCertificateExtension_Oid(const QSslCertificateExtension* self) {
    QString _ret = self->oid();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSslCertificateExtension_Name(const QSslCertificateExtension* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QVariant* QSslCertificateExtension_Value(const QSslCertificateExtension* self) {
    return new QVariant(self->value());
}

bool QSslCertificateExtension_IsCritical(const QSslCertificateExtension* self) {
    return self->isCritical();
}

bool QSslCertificateExtension_IsSupported(const QSslCertificateExtension* self) {
    return self->isSupported();
}

void QSslCertificateExtension_Delete(QSslCertificateExtension* self) {
    delete self;
}
