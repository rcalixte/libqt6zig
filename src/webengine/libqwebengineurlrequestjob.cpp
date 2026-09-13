#include <QByteArray>
#include <QIODevice>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMultiMap>
#include <QObject>
#include <QString>
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

libqt_string QWebEngineUrlRequestJob_Tr(const char* s) {
    auto _ret = QWebEngineUrlRequestJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QWebEngineUrlRequestJob_RequestUrl(const QWebEngineUrlRequestJob* self) {
    return new QUrl(self->requestUrl());
}

libqt_string QWebEngineUrlRequestJob_RequestMethod(const QWebEngineUrlRequestJob* self) {
    QByteArray _qb = self->requestMethod();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
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
        _mapkey_str.data = static_cast<char*>(malloc(_mapkey_str.len));
        memcpy((void*)_mapkey_str.data, _mapkey_qb.data(), _mapkey_str.len);
        _karr[_ctr] = _mapkey_str;
        QByteArray _mapval_qb = _itr->second;
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_qb.length();
        _mapval_str.data = static_cast<char*>(malloc(_mapval_str.len));
        memcpy((void*)_mapval_str.data, _mapval_qb.data(), _mapval_str.len);
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

void QWebEngineUrlRequestJob_SetAdditionalResponseHeaders(const QWebEngineUrlRequestJob* self, const libqt_map /* of libqt_string to libqt_list of libqt_string */ additionalResponseHeaders) {
    QMultiMap<QByteArray, QByteArray> additionalResponseHeaders_QMultiMap;
    libqt_string* additionalResponseHeaders_karr = static_cast<libqt_string*>(additionalResponseHeaders.keys);
    libqt_list* /* of libqt_string */ additionalResponseHeaders_varr = static_cast<libqt_list*>(additionalResponseHeaders.values);
    for (size_t i = 0; i < additionalResponseHeaders.len; ++i) {
        QByteArray additionalResponseHeaders_karr_i_QByteArray(additionalResponseHeaders_karr[i].data, additionalResponseHeaders_karr[i].len);
        libqt_list additionalResponseHeaders_QMultiMap_list = additionalResponseHeaders_varr[i];
        libqt_string* additionalResponseHeaders_varr_list = static_cast<libqt_string*>(additionalResponseHeaders_QMultiMap_list.data);
        for (size_t j = 0; j < additionalResponseHeaders_QMultiMap_list.len; ++j) {
            QByteArray additionalResponseHeaders_varr_i_QByteArray(additionalResponseHeaders_varr_list[j].data, additionalResponseHeaders_varr_list[j].len);
            additionalResponseHeaders_QMultiMap.insert(additionalResponseHeaders_karr_i_QByteArray, additionalResponseHeaders_varr_i_QByteArray);
        }
    }
    self->setAdditionalResponseHeaders(additionalResponseHeaders_QMultiMap);
}

libqt_string QWebEngineUrlRequestJob_Tr2(const char* s, const char* c) {
    auto _ret = QWebEngineUrlRequestJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineUrlRequestJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = QWebEngineUrlRequestJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineUrlRequestJob_Delete(QWebEngineUrlRequestJob* self) {
    delete self;
}
