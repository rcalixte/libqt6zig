#include <QList>
#include <QSslCertificate>
#include <QUrl>
#include <QWebEngineClientCertificateSelection>
#include <qwebengineclientcertificateselection.h>
#include "libqwebengineclientcertificateselection.h"
#include "libqwebengineclientcertificateselection.hxx"

QWebEngineClientCertificateSelection* QWebEngineClientCertificateSelection_new(const QWebEngineClientCertificateSelection* param1) {
    return new QWebEngineClientCertificateSelection(*param1);
}

void QWebEngineClientCertificateSelection_OperatorAssign(QWebEngineClientCertificateSelection* self, const QWebEngineClientCertificateSelection* param1) {
    self->operator=(*param1);
}

QUrl* QWebEngineClientCertificateSelection_Host(const QWebEngineClientCertificateSelection* self) {
    return new QUrl(self->host());
}

void QWebEngineClientCertificateSelection_Select(QWebEngineClientCertificateSelection* self, const QSslCertificate* certificate) {
    self->select(*certificate);
}

void QWebEngineClientCertificateSelection_SelectNone(QWebEngineClientCertificateSelection* self) {
    self->selectNone();
}

libqt_list /* of QSslCertificate* */ QWebEngineClientCertificateSelection_Certificates(const QWebEngineClientCertificateSelection* self) {
    QList<QSslCertificate> _ret = self->certificates();
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

void QWebEngineClientCertificateSelection_Delete(QWebEngineClientCertificateSelection* self) {
    delete self;
}
