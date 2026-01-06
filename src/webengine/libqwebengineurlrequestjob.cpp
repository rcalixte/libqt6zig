#include <QByteArray>
#include <QIODevice>
#include <QMap>
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

libqt_map /* of libqt_string to libqt_string */ QWebEngineUrlRequestJob_RequestHeaders(const QWebEngineUrlRequestJob* self) {
    QMap<QByteArray, QByteArray> _ret = self->requestHeaders();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QByteArray _mapkey_qb = _itr->first;
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_qb.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_qb.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        QByteArray _mapval_qb = _itr->second;
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_qb.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_qb.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
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
