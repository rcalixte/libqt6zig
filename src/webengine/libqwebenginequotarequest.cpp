#include <QUrl>
#include <QWebEngineQuotaRequest>
#include <qwebenginequotarequest.h>
#include "libqwebenginequotarequest.h"
#include "libqwebenginequotarequest.hxx"

QWebEngineQuotaRequest* QWebEngineQuotaRequest_new() {
    return new QWebEngineQuotaRequest();
}

QWebEngineQuotaRequest* QWebEngineQuotaRequest_new2(const QWebEngineQuotaRequest* param1) {
    return new QWebEngineQuotaRequest(*param1);
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

bool QWebEngineQuotaRequest_OperatorEqual(const QWebEngineQuotaRequest* self, const QWebEngineQuotaRequest* that) {
    return (*self == *that);
}

bool QWebEngineQuotaRequest_OperatorNotEqual(const QWebEngineQuotaRequest* self, const QWebEngineQuotaRequest* that) {
    return (*self != *that);
}

void QWebEngineQuotaRequest_Delete(QWebEngineQuotaRequest* self) {
    delete self;
}
