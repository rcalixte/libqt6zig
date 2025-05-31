#include <QUrl>
#include <QWebEngineFullScreenRequest>
#include <qwebenginefullscreenrequest.h>
#include "libqwebenginefullscreenrequest.h"
#include "libqwebenginefullscreenrequest.hxx"

QWebEngineFullScreenRequest* QWebEngineFullScreenRequest_new(const QWebEngineFullScreenRequest* other) {
    return new QWebEngineFullScreenRequest(*other);
}

void QWebEngineFullScreenRequest_OperatorAssign(QWebEngineFullScreenRequest* self, const QWebEngineFullScreenRequest* other) {
    self->operator=(*other);
}

void QWebEngineFullScreenRequest_Reject(QWebEngineFullScreenRequest* self) {
    self->reject();
}

void QWebEngineFullScreenRequest_Accept(QWebEngineFullScreenRequest* self) {
    self->accept();
}

bool QWebEngineFullScreenRequest_ToggleOn(const QWebEngineFullScreenRequest* self) {
    return self->toggleOn();
}

QUrl* QWebEngineFullScreenRequest_Origin(const QWebEngineFullScreenRequest* self) {
    return new QUrl(self->origin());
}

void QWebEngineFullScreenRequest_Delete(QWebEngineFullScreenRequest* self) {
    delete self;
}
