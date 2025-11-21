#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineNewWindowRequest>
#include <QWebEnginePage>
#include <qwebenginenewwindowrequest.h>
#include "libqwebenginenewwindowrequest.h"
#include "libqwebenginenewwindowrequest.hxx"

QMetaObject* QWebEngineNewWindowRequest_MetaObject(const QWebEngineNewWindowRequest* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineNewWindowRequest_Metacast(QWebEngineNewWindowRequest* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineNewWindowRequest_Metacall(QWebEngineNewWindowRequest* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

int QWebEngineNewWindowRequest_Destination(const QWebEngineNewWindowRequest* self) {
    return static_cast<int>(self->destination());
}

QUrl* QWebEngineNewWindowRequest_RequestedUrl(const QWebEngineNewWindowRequest* self) {
    return new QUrl(self->requestedUrl());
}

QRect* QWebEngineNewWindowRequest_RequestedGeometry(const QWebEngineNewWindowRequest* self) {
    return new QRect(self->requestedGeometry());
}

bool QWebEngineNewWindowRequest_IsUserInitiated(const QWebEngineNewWindowRequest* self) {
    return self->isUserInitiated();
}

void QWebEngineNewWindowRequest_OpenIn(QWebEngineNewWindowRequest* self, QWebEnginePage* param1) {
    self->openIn(param1);
}

void QWebEngineNewWindowRequest_Delete(QWebEngineNewWindowRequest* self) {
    delete self;
}
