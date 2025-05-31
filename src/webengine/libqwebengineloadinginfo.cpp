#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineLoadingInfo>
#include <qwebengineloadinginfo.h>
#include "libqwebengineloadinginfo.h"
#include "libqwebengineloadinginfo.hxx"

QWebEngineLoadingInfo* QWebEngineLoadingInfo_new(const QWebEngineLoadingInfo* other) {
    return new QWebEngineLoadingInfo(*other);
}

void QWebEngineLoadingInfo_OperatorAssign(QWebEngineLoadingInfo* self, const QWebEngineLoadingInfo* other) {
    self->operator=(*other);
}

QUrl* QWebEngineLoadingInfo_Url(const QWebEngineLoadingInfo* self) {
    return new QUrl(self->url());
}

bool QWebEngineLoadingInfo_IsErrorPage(const QWebEngineLoadingInfo* self) {
    return self->isErrorPage();
}

int QWebEngineLoadingInfo_Status(const QWebEngineLoadingInfo* self) {
    return static_cast<int>(self->status());
}

libqt_string QWebEngineLoadingInfo_ErrorString(const QWebEngineLoadingInfo* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QWebEngineLoadingInfo_ErrorDomain(const QWebEngineLoadingInfo* self) {
    return static_cast<int>(self->errorDomain());
}

int QWebEngineLoadingInfo_ErrorCode(const QWebEngineLoadingInfo* self) {
    return self->errorCode();
}

void QWebEngineLoadingInfo_Delete(QWebEngineLoadingInfo* self) {
    delete self;
}
