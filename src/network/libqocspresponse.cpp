#include <QOcspResponse>
#include <QSslCertificate>
#include <qocspresponse.h>
#include "libqocspresponse.h"
#include "libqocspresponse.hxx"

QOcspResponse* QOcspResponse_new() {
    return new QOcspResponse();
}

QOcspResponse* QOcspResponse_new2(const QOcspResponse* other) {
    return new QOcspResponse(*other);
}

void QOcspResponse_OperatorAssign(QOcspResponse* self, const QOcspResponse* other) {
    self->operator=(*other);
}

int QOcspResponse_CertificateStatus(const QOcspResponse* self) {
    return static_cast<int>(self->certificateStatus());
}

int QOcspResponse_RevocationReason(const QOcspResponse* self) {
    return static_cast<int>(self->revocationReason());
}

QSslCertificate* QOcspResponse_Responder(const QOcspResponse* self) {
    return new QSslCertificate(self->responder());
}

QSslCertificate* QOcspResponse_Subject(const QOcspResponse* self) {
    return new QSslCertificate(self->subject());
}

void QOcspResponse_Swap(QOcspResponse* self, QOcspResponse* other) {
    self->swap(*other);
}

void QOcspResponse_Delete(QOcspResponse* self) {
    delete self;
}
