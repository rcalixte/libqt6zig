#include <QByteArray>
#include <QHash>
#include <QIODevice>
#include <QUrl>
#include <QWebEngineUrlRequestInfo>
#include <qwebengineurlrequestinfo.h>
#include "libqwebengineurlrequestinfo.h"
#include "libqwebengineurlrequestinfo.hxx"

int QWebEngineUrlRequestInfo_ResourceType(const QWebEngineUrlRequestInfo* self) {
    return static_cast<int>(self->resourceType());
}

int QWebEngineUrlRequestInfo_NavigationType(const QWebEngineUrlRequestInfo* self) {
    return static_cast<int>(self->navigationType());
}

QUrl* QWebEngineUrlRequestInfo_RequestUrl(const QWebEngineUrlRequestInfo* self) {
    return new QUrl(self->requestUrl());
}

QUrl* QWebEngineUrlRequestInfo_FirstPartyUrl(const QWebEngineUrlRequestInfo* self) {
    return new QUrl(self->firstPartyUrl());
}

QUrl* QWebEngineUrlRequestInfo_Initiator(const QWebEngineUrlRequestInfo* self) {
    return new QUrl(self->initiator());
}

libqt_string QWebEngineUrlRequestInfo_RequestMethod(const QWebEngineUrlRequestInfo* self) {
    QByteArray _qb = self->requestMethod();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

QIODevice* QWebEngineUrlRequestInfo_RequestBody(const QWebEngineUrlRequestInfo* self) {
    return self->requestBody();
}

bool QWebEngineUrlRequestInfo_Changed(const QWebEngineUrlRequestInfo* self) {
    return self->changed();
}

void QWebEngineUrlRequestInfo_Block(QWebEngineUrlRequestInfo* self, bool shouldBlock) {
    self->block(shouldBlock);
}

void QWebEngineUrlRequestInfo_Redirect(QWebEngineUrlRequestInfo* self, const QUrl* url) {
    self->redirect(*url);
}

void QWebEngineUrlRequestInfo_SetHttpHeader(QWebEngineUrlRequestInfo* self, const libqt_string name, const libqt_string value) {
    QByteArray name_QByteArray(name.data, name.len);
    QByteArray value_QByteArray(value.data, value.len);
    self->setHttpHeader(name_QByteArray, value_QByteArray);
}

libqt_map /* of libqt_string to libqt_string */ QWebEngineUrlRequestInfo_HttpHeaders(const QWebEngineUrlRequestInfo* self) {
    QHash<QByteArray, QByteArray> _ret = self->httpHeaders();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QByteArray _hashkey_qb = _itr->first;
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_qb.length();
        _hashkey_str.data = static_cast<char*>(malloc(_hashkey_str.len));
        memcpy((void*)_hashkey_str.data, _hashkey_qb.data(), _hashkey_str.len);
        _karr[_ctr] = _hashkey_str;
        QByteArray _hashval_qb = _itr->second;
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_qb.length();
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}
