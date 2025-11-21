#include <QByteArray>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineUrlRequestJob>
#include <qwebengineurlrequestjob.h>
#include "libqwebengineurlrequestjob.h"
#include "libqwebengineurlrequestjob.hxx"

QMetaObject* QWebEngineUrlRequestJob_MetaObject(const QWebEngineUrlRequestJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineUrlRequestJob_Metacast(QWebEngineUrlRequestJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineUrlRequestJob_Metacall(QWebEngineUrlRequestJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

QUrl* QWebEngineUrlRequestJob_RequestUrl(const QWebEngineUrlRequestJob* self) {
    return new QUrl(self->requestUrl());
}

libqt_string QWebEngineUrlRequestJob_RequestMethod(const QWebEngineUrlRequestJob* self) {
    QByteArray _qb = self->requestMethod();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QWebEngineUrlRequestJob_Initiator(const QWebEngineUrlRequestJob* self) {
    return new QUrl(self->initiator());
}

QIODevice* QWebEngineUrlRequestJob_RequestBody(const QWebEngineUrlRequestJob* self) {
    return self->requestBody();
}

void QWebEngineUrlRequestJob_Reply(QWebEngineUrlRequestJob* self, const libqt_string contentType, QIODevice* device) {
    QByteArray contentType_QByteArray(contentType.data, contentType.len);
    self->reply(contentType_QByteArray, device);
}

void QWebEngineUrlRequestJob_Fail(QWebEngineUrlRequestJob* self, int errorVal) {
    self->fail(static_cast<QWebEngineUrlRequestJob::Error>(errorVal));
}

void QWebEngineUrlRequestJob_Redirect(QWebEngineUrlRequestJob* self, const QUrl* url) {
    self->redirect(*url);
}

void QWebEngineUrlRequestJob_Delete(QWebEngineUrlRequestJob* self) {
    delete self;
}
