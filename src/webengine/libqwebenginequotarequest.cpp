#include <QUrl>
#include <QWebEngineQuotaRequest>
#include <qwebenginequotarequest.h>
#include "libqwebenginequotarequest.h"
#include "libqwebenginequotarequest.hxx"

QWebEngineQuotaRequest* QWebEngineQuotaRequest_new(const QWebEngineQuotaRequest* other) {
    return new QWebEngineQuotaRequest(*other);
}

QWebEngineQuotaRequest* QWebEngineQuotaRequest_new2(QWebEngineQuotaRequest* other) {
    return new QWebEngineQuotaRequest(std::move(*other));
}

QWebEngineQuotaRequest* QWebEngineQuotaRequest_new3() {
    return new QWebEngineQuotaRequest();
}

void QWebEngineQuotaRequest_CopyAssign(QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* other) {
    *self = *other;
}

void QWebEngineQuotaRequest_MoveAssign(QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* other) {
    *self = std::move(*other);
}

void QWebEngineQuotaRequest_Accept(QWebEngineQuotaRequest* self) {
    self->accept();
}

void QWebEngineQuotaRequest_Reject(QWebEngineQuotaRequest* self) {
    self->reject();
}

QUrl* QWebEngineQuotaRequest_Origin(const QWebEngineQuotaRequest* self) {
    return new QUrl(self->origin());
}

long long QWebEngineQuotaRequest_RequestedSize(const QWebEngineQuotaRequest* self) {
    return static_cast<long long>(self->requestedSize());
}

bool QWebEngineQuotaRequest_OperatorEqual(const QWebEngineQuotaRequest* self, const QWebEngineQuotaRequest* param1) {
    return (*self == *param1);
}

bool QWebEngineQuotaRequest_OperatorNotEqual(const QWebEngineQuotaRequest* self, const QWebEngineQuotaRequest* param1) {
    return (*self != *param1);
}

void QWebEngineQuotaRequest_Delete(QWebEngineQuotaRequest* self) {
    delete self;
}
