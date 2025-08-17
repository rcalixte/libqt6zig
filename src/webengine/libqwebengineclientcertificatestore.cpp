#include <QList>
#include <QSslCertificate>
#include <QSslKey>
#include <QWebEngineClientCertificateStore>
#include <qwebengineclientcertificatestore.h>
#include "libqwebengineclientcertificatestore.h"
#include "libqwebengineclientcertificatestore.hxx"

void QWebEngineClientCertificateStore_Add(QWebEngineClientCertificateStore* self, const QSslCertificate* certificate, const QSslKey* privateKey) {
    self->add(*certificate, *privateKey);
}

libqt_list /* of QSslCertificate* */ QWebEngineClientCertificateStore_Certificates(const QWebEngineClientCertificateStore* self) {
    QList<QSslCertificate> _ret = self->certificates();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslCertificate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QWebEngineClientCertificateStore_Remove(QWebEngineClientCertificateStore* self, const QSslCertificate* certificate) {
    self->remove(*certificate);
}

void QWebEngineClientCertificateStore_Clear(QWebEngineClientCertificateStore* self) {
    self->clear();
}
