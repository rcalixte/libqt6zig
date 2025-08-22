#include <QAnyStringView>
#include <QByteArray>
#include <QHttp1Configuration>
#include <QHttp2Configuration>
#include <QHttpHeaders>
#include <QList>
#include <QNetworkRequest>
#include <QObject>
#include <QSslConfiguration>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qnetworkrequest.h>
#include "libqnetworkrequest.h"
#include "libqnetworkrequest.hxx"

QNetworkRequest* QNetworkRequest_new() {
    return new QNetworkRequest();
}

QNetworkRequest* QNetworkRequest_new2(const QUrl* url) {
    return new QNetworkRequest(*url);
}

QNetworkRequest* QNetworkRequest_new3(const QNetworkRequest* other) {
    return new QNetworkRequest(*other);
}

void QNetworkRequest_OperatorAssign(QNetworkRequest* self, const QNetworkRequest* other) {
    self->operator=(*other);
}

void QNetworkRequest_Swap(QNetworkRequest* self, QNetworkRequest* other) {
    self->swap(*other);
}

bool QNetworkRequest_OperatorEqual(const QNetworkRequest* self, const QNetworkRequest* other) {
    return (*self == *other);
}

bool QNetworkRequest_OperatorNotEqual(const QNetworkRequest* self, const QNetworkRequest* other) {
    return (*self != *other);
}

QUrl* QNetworkRequest_Url(const QNetworkRequest* self) {
    return new QUrl(self->url());
}

void QNetworkRequest_SetUrl(QNetworkRequest* self, const QUrl* url) {
    self->setUrl(*url);
}

QHttpHeaders* QNetworkRequest_Headers(const QNetworkRequest* self) {
    return new QHttpHeaders(self->headers());
}

void QNetworkRequest_SetHeaders(QNetworkRequest* self, const QHttpHeaders* newHeaders) {
    self->setHeaders(*newHeaders);
}

QVariant* QNetworkRequest_Header(const QNetworkRequest* self, int header) {
    return new QVariant(self->header(static_cast<QNetworkRequest::KnownHeaders>(header)));
}

void QNetworkRequest_SetHeader(QNetworkRequest* self, int header, const QVariant* value) {
    self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

bool QNetworkRequest_HasRawHeader(const QNetworkRequest* self, libqt_string headerName) {
    QString headerName_QString = QString::fromUtf8(headerName.data, headerName.len);
    return self->hasRawHeader(QAnyStringView(headerName_QString));
}

libqt_list /* of libqt_string */ QNetworkRequest_RawHeaderList(const QNetworkRequest* self) {
    QList<QByteArray> _ret = self->rawHeaderList();
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

libqt_string QNetworkRequest_RawHeader(const QNetworkRequest* self, libqt_string headerName) {
    QString headerName_QString = QString::fromUtf8(headerName.data, headerName.len);
    QByteArray _qb = self->rawHeader(QAnyStringView(headerName_QString));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkRequest_SetRawHeader(QNetworkRequest* self, const libqt_string headerName, const libqt_string value) {
    QByteArray headerName_QByteArray(headerName.data, headerName.len);
    QByteArray value_QByteArray(value.data, value.len);
    self->setRawHeader(headerName_QByteArray, value_QByteArray);
}

QVariant* QNetworkRequest_Attribute(const QNetworkRequest* self, int code) {
    return new QVariant(self->attribute(static_cast<QNetworkRequest::Attribute>(code)));
}

void QNetworkRequest_SetAttribute(QNetworkRequest* self, int code, const QVariant* value) {
    self->setAttribute(static_cast<QNetworkRequest::Attribute>(code), *value);
}

QSslConfiguration* QNetworkRequest_SslConfiguration(const QNetworkRequest* self) {
    return new QSslConfiguration(self->sslConfiguration());
}

void QNetworkRequest_SetSslConfiguration(QNetworkRequest* self, const QSslConfiguration* configuration) {
    self->setSslConfiguration(*configuration);
}

void QNetworkRequest_SetOriginatingObject(QNetworkRequest* self, QObject* object) {
    self->setOriginatingObject(object);
}

QObject* QNetworkRequest_OriginatingObject(const QNetworkRequest* self) {
    return self->originatingObject();
}

int QNetworkRequest_Priority(const QNetworkRequest* self) {
    return static_cast<int>(self->priority());
}

void QNetworkRequest_SetPriority(QNetworkRequest* self, int priority) {
    self->setPriority(static_cast<QNetworkRequest::Priority>(priority));
}

int QNetworkRequest_MaximumRedirectsAllowed(const QNetworkRequest* self) {
    return self->maximumRedirectsAllowed();
}

void QNetworkRequest_SetMaximumRedirectsAllowed(QNetworkRequest* self, int maximumRedirectsAllowed) {
    self->setMaximumRedirectsAllowed(static_cast<int>(maximumRedirectsAllowed));
}

libqt_string QNetworkRequest_PeerVerifyName(const QNetworkRequest* self) {
    QString _ret = self->peerVerifyName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkRequest_SetPeerVerifyName(QNetworkRequest* self, const libqt_string peerName) {
    QString peerName_QString = QString::fromUtf8(peerName.data, peerName.len);
    self->setPeerVerifyName(peerName_QString);
}

QHttp1Configuration* QNetworkRequest_Http1Configuration(const QNetworkRequest* self) {
    return new QHttp1Configuration(self->http1Configuration());
}

void QNetworkRequest_SetHttp1Configuration(QNetworkRequest* self, const QHttp1Configuration* configuration) {
    self->setHttp1Configuration(*configuration);
}

QHttp2Configuration* QNetworkRequest_Http2Configuration(const QNetworkRequest* self) {
    return new QHttp2Configuration(self->http2Configuration());
}

void QNetworkRequest_SetHttp2Configuration(QNetworkRequest* self, const QHttp2Configuration* configuration) {
    self->setHttp2Configuration(*configuration);
}

long long QNetworkRequest_DecompressedSafetyCheckThreshold(const QNetworkRequest* self) {
    return static_cast<long long>(self->decompressedSafetyCheckThreshold());
}

void QNetworkRequest_SetDecompressedSafetyCheckThreshold(QNetworkRequest* self, long long threshold) {
    self->setDecompressedSafetyCheckThreshold(static_cast<qint64>(threshold));
}

int QNetworkRequest_TransferTimeout(const QNetworkRequest* self) {
    return self->transferTimeout();
}

void QNetworkRequest_SetTransferTimeout(QNetworkRequest* self, int timeout) {
    self->setTransferTimeout(static_cast<int>(timeout));
}

void QNetworkRequest_SetTransferTimeout2(QNetworkRequest* self) {
    self->setTransferTimeout();
}

QVariant* QNetworkRequest_Attribute2(const QNetworkRequest* self, int code, const QVariant* defaultValue) {
    return new QVariant(self->attribute(static_cast<QNetworkRequest::Attribute>(code), *defaultValue));
}

void QNetworkRequest_Delete(QNetworkRequest* self) {
    delete self;
}
