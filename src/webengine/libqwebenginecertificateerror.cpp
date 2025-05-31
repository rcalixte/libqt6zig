#include <QList>
#include <QSslCertificate>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineCertificateError>
#include <qwebenginecertificateerror.h>
#include "libqwebenginecertificateerror.h"
#include "libqwebenginecertificateerror.hxx"

QWebEngineCertificateError* QWebEngineCertificateError_new(const QWebEngineCertificateError* other) {
    return new QWebEngineCertificateError(*other);
}

void QWebEngineCertificateError_OperatorAssign(QWebEngineCertificateError* self, const QWebEngineCertificateError* other) {
    self->operator=(*other);
}

int QWebEngineCertificateError_Type(const QWebEngineCertificateError* self) {
    return static_cast<int>(self->type());
}

QUrl* QWebEngineCertificateError_Url(const QWebEngineCertificateError* self) {
    return new QUrl(self->url());
}

bool QWebEngineCertificateError_IsOverridable(const QWebEngineCertificateError* self) {
    return self->isOverridable();
}

libqt_string QWebEngineCertificateError_Description(const QWebEngineCertificateError* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineCertificateError_Defer(QWebEngineCertificateError* self) {
    self->defer();
}

void QWebEngineCertificateError_RejectCertificate(QWebEngineCertificateError* self) {
    self->rejectCertificate();
}

void QWebEngineCertificateError_AcceptCertificate(QWebEngineCertificateError* self) {
    self->acceptCertificate();
}

libqt_list /* of QSslCertificate* */ QWebEngineCertificateError_CertificateChain(const QWebEngineCertificateError* self) {
    QList<QSslCertificate> _ret = self->certificateChain();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QSslCertificate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QWebEngineCertificateError_Delete(QWebEngineCertificateError* self) {
    delete self;
}
