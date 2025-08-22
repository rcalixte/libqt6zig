#include <QByteArray>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineHttpRequest>
#include <qwebenginehttprequest.h>
#include "libqwebenginehttprequest.h"
#include "libqwebenginehttprequest.hxx"

QWebEngineHttpRequest* QWebEngineHttpRequest_new() {
    return new QWebEngineHttpRequest();
}

QWebEngineHttpRequest* QWebEngineHttpRequest_new2(const QWebEngineHttpRequest* other) {
    return new QWebEngineHttpRequest(*other);
}

QWebEngineHttpRequest* QWebEngineHttpRequest_new3(const QUrl* url) {
    return new QWebEngineHttpRequest(*url);
}

QWebEngineHttpRequest* QWebEngineHttpRequest_new4(const QUrl* url, const int* method) {
    return new QWebEngineHttpRequest(*url, (const QWebEngineHttpRequest::Method&)(*method));
}

void QWebEngineHttpRequest_OperatorAssign(QWebEngineHttpRequest* self, const QWebEngineHttpRequest* other) {
    self->operator=(*other);
}

QWebEngineHttpRequest* QWebEngineHttpRequest_PostRequest(const QUrl* url, const libqt_map /* of libqt_string to libqt_string */ postData) {
    QMap<QString, QString> postData_QMap;
    libqt_string* postData_karr = static_cast<libqt_string*>(postData.keys);
    libqt_string* postData_varr = static_cast<libqt_string*>(postData.values);
    for (size_t i = 0; i < postData.len; ++i) {
        QString postData_karr_i_QString = QString::fromUtf8(postData_karr[i].data, postData_karr[i].len);
        QString postData_varr_i_QString = QString::fromUtf8(postData_varr[i].data, postData_varr[i].len);
        postData_QMap[postData_karr_i_QString] = postData_varr_i_QString;
    }
    return new QWebEngineHttpRequest(QWebEngineHttpRequest::postRequest(*url, postData_QMap));
}

void QWebEngineHttpRequest_Swap(QWebEngineHttpRequest* self, QWebEngineHttpRequest* other) {
    self->swap(*other);
}

bool QWebEngineHttpRequest_OperatorEqual(const QWebEngineHttpRequest* self, const QWebEngineHttpRequest* other) {
    return (*self == *other);
}

bool QWebEngineHttpRequest_OperatorNotEqual(const QWebEngineHttpRequest* self, const QWebEngineHttpRequest* other) {
    return (*self != *other);
}

int QWebEngineHttpRequest_Method(const QWebEngineHttpRequest* self) {
    return static_cast<int>(self->method());
}

void QWebEngineHttpRequest_SetMethod(QWebEngineHttpRequest* self, int method) {
    self->setMethod(static_cast<QWebEngineHttpRequest::Method>(method));
}

QUrl* QWebEngineHttpRequest_Url(const QWebEngineHttpRequest* self) {
    return new QUrl(self->url());
}

void QWebEngineHttpRequest_SetUrl(QWebEngineHttpRequest* self, const QUrl* url) {
    self->setUrl(*url);
}

libqt_string QWebEngineHttpRequest_PostData(const QWebEngineHttpRequest* self) {
    QByteArray _qb = self->postData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineHttpRequest_SetPostData(QWebEngineHttpRequest* self, const libqt_string postData) {
    QByteArray postData_QByteArray(postData.data, postData.len);
    self->setPostData(postData_QByteArray);
}

bool QWebEngineHttpRequest_HasHeader(const QWebEngineHttpRequest* self, const libqt_string headerName) {
    QByteArray headerName_QByteArray(headerName.data, headerName.len);
    return self->hasHeader(headerName_QByteArray);
}

libqt_list /* of libqt_string */ QWebEngineHttpRequest_Headers(const QWebEngineHttpRequest* self) {
    QList<QByteArray> _ret = self->headers();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QWebEngineHttpRequest_Header(const QWebEngineHttpRequest* self, const libqt_string headerName) {
    QByteArray headerName_QByteArray(headerName.data, headerName.len);
    QByteArray _qb = self->header(headerName_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineHttpRequest_SetHeader(QWebEngineHttpRequest* self, const libqt_string headerName, const libqt_string value) {
    QByteArray headerName_QByteArray(headerName.data, headerName.len);
    QByteArray value_QByteArray(value.data, value.len);
    self->setHeader(headerName_QByteArray, value_QByteArray);
}

void QWebEngineHttpRequest_UnsetHeader(QWebEngineHttpRequest* self, const libqt_string headerName) {
    QByteArray headerName_QByteArray(headerName.data, headerName.len);
    self->unsetHeader(headerName_QByteArray);
}

void QWebEngineHttpRequest_Delete(QWebEngineHttpRequest* self) {
    delete self;
}
