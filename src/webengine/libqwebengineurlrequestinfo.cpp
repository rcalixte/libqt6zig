#include <QByteArray>
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
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
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
