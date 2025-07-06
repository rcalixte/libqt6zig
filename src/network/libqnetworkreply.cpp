#include <QAnyStringView>
#include <QByteArray>
#include <QByteArrayView>
#include <QHttpHeaders>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QPair>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qnetworkreply.h>
#include "libqnetworkreply.h"
#include "libqnetworkreply.hxx"

QMetaObject* QNetworkReply_MetaObject(const QNetworkReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QNetworkReply_Metacast(QNetworkReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QNetworkReply_Metacall(QNetworkReply* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QNetworkReply_Tr(const char* s) {
    QString _ret = QNetworkReply::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkReply_Close(QNetworkReply* self) {
    self->close();
}

bool QNetworkReply_IsSequential(const QNetworkReply* self) {
    return self->isSequential();
}

long long QNetworkReply_ReadBufferSize(const QNetworkReply* self) {
    return static_cast<long long>(self->readBufferSize());
}

void QNetworkReply_SetReadBufferSize(QNetworkReply* self, long long size) {
    self->setReadBufferSize(static_cast<qint64>(size));
}

QNetworkAccessManager* QNetworkReply_Manager(const QNetworkReply* self) {
    return self->manager();
}

int QNetworkReply_Operation(const QNetworkReply* self) {
    return static_cast<int>(self->operation());
}

QNetworkRequest* QNetworkReply_Request(const QNetworkReply* self) {
    return new QNetworkRequest(self->request());
}

int QNetworkReply_Error(const QNetworkReply* self) {
    return static_cast<int>(self->error());
}

bool QNetworkReply_IsFinished(const QNetworkReply* self) {
    return self->isFinished();
}

bool QNetworkReply_IsRunning(const QNetworkReply* self) {
    return self->isRunning();
}

QUrl* QNetworkReply_Url(const QNetworkReply* self) {
    return new QUrl(self->url());
}

QVariant* QNetworkReply_Header(const QNetworkReply* self, int header) {
    return new QVariant(self->header(static_cast<QNetworkRequest::KnownHeaders>(header)));
}

bool QNetworkReply_HasRawHeader(const QNetworkReply* self, libqt_string headerName) {
    QString headerName_QString = QString::fromUtf8(headerName.data, headerName.len);
    return self->hasRawHeader(QAnyStringView(headerName_QString));
}

libqt_list /* of libqt_string */ QNetworkReply_RawHeaderList(const QNetworkReply* self) {
    QList<QByteArray> _ret = self->rawHeaderList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QNetworkReply_RawHeader(const QNetworkReply* self, libqt_string headerName) {
    QString headerName_QString = QString::fromUtf8(headerName.data, headerName.len);
    QByteArray _qb = self->rawHeader(QAnyStringView(headerName_QString));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QNetworkReply_RawHeaderPairs(const QNetworkReply* self) {
    const QList<QPair<QByteArray, QByteArray>>& _ret = self->rawHeaderPairs();
    // Convert const QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and libqt_string */* _arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and libqt_string */) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        QPair<QByteArray, QByteArray> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _lv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* _lv_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QByteArray _lv_first_qb = _lv_ret.first;
        libqt_string _lv_first_str;
        _lv_first_str.len = _lv_first_qb.length();
        _lv_first_str.data = static_cast<const char*>(malloc((_lv_first_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_first_str.data, _lv_first_qb.data(), _lv_first_str.len);
        ((char*)_lv_first_str.data)[_lv_first_str.len] = '\0';
        *_lv_first = _lv_first_str;
        QByteArray _lv_second_qb = _lv_ret.second;
        libqt_string _lv_second_str;
        _lv_second_str.len = _lv_second_qb.length();
        _lv_second_str.data = static_cast<const char*>(malloc((_lv_second_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_second_str.data, _lv_second_qb.data(), _lv_second_str.len);
        ((char*)_lv_second_str.data)[_lv_second_str.len] = '\0';
        *_lv_second = _lv_second_str;
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QHttpHeaders* QNetworkReply_Headers(const QNetworkReply* self) {
    return new QHttpHeaders(self->headers());
}

QVariant* QNetworkReply_Attribute(const QNetworkReply* self, int code) {
    return new QVariant(self->attribute(static_cast<QNetworkRequest::Attribute>(code)));
}

QSslConfiguration* QNetworkReply_SslConfiguration(const QNetworkReply* self) {
    return new QSslConfiguration(self->sslConfiguration());
}

void QNetworkReply_SetSslConfiguration(QNetworkReply* self, const QSslConfiguration* configuration) {
    self->setSslConfiguration(*configuration);
}

void QNetworkReply_IgnoreSslErrors(QNetworkReply* self, const libqt_list /* of QSslError* */ errors) {
    QList<QSslError> errors_QList;
    errors_QList.reserve(errors.len);
    QSslError** errors_arr = static_cast<QSslError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    self->ignoreSslErrors(errors_QList);
}

void QNetworkReply_Abort(QNetworkReply* self) {
    self->abort();
}

void QNetworkReply_IgnoreSslErrors2(QNetworkReply* self) {
    self->ignoreSslErrors();
}

void QNetworkReply_SocketStartedConnecting(QNetworkReply* self) {
    self->socketStartedConnecting();
}

void QNetworkReply_Connect_SocketStartedConnecting(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::socketStartedConnecting, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QNetworkReply_RequestSent(QNetworkReply* self) {
    self->requestSent();
}

void QNetworkReply_Connect_RequestSent(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::requestSent, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QNetworkReply_MetaDataChanged(QNetworkReply* self) {
    self->metaDataChanged();
}

void QNetworkReply_Connect_MetaDataChanged(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::metaDataChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QNetworkReply_Finished(QNetworkReply* self) {
    self->finished();
}

void QNetworkReply_Connect_Finished(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QNetworkReply_ErrorOccurred(QNetworkReply* self, int param1) {
    self->errorOccurred(static_cast<QNetworkReply::NetworkError>(param1));
}

void QNetworkReply_Connect_ErrorOccurred(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, int) = reinterpret_cast<void (*)(QNetworkReply*, int)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::errorOccurred, [self, slotFunc](QNetworkReply::NetworkError param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QNetworkReply_Encrypted(QNetworkReply* self) {
    self->encrypted();
}

void QNetworkReply_Connect_Encrypted(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::encrypted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QNetworkReply_SslErrors(QNetworkReply* self, const libqt_list /* of QSslError* */ errors) {
    QList<QSslError> errors_QList;
    errors_QList.reserve(errors.len);
    QSslError** errors_arr = static_cast<QSslError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    self->sslErrors(errors_QList);
}

void QNetworkReply_Connect_SslErrors(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, libqt_list /* of QSslError* */) = reinterpret_cast<void (*)(QNetworkReply*, libqt_list /* of QSslError* */)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::sslErrors, [self, slotFunc](const QList<QSslError>& errors) {
        const QList<QSslError>& errors_ret = errors;
        // Convert const QList<> from C++ memory to manually-managed C memory
        QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.size()));
        for (size_t i = 0; i < errors_ret.size(); ++i) {
            errors_arr[i] = new QSslError(errors_ret[i]);
        }
        libqt_list errors_out;
        errors_out.len = errors_ret.size();
        errors_out.data = static_cast<void*>(errors_arr);
        libqt_list /* of QSslError* */ sigval1 = errors_out;
        slotFunc(self, sigval1);
    });
}

void QNetworkReply_PreSharedKeyAuthenticationRequired(QNetworkReply* self, QSslPreSharedKeyAuthenticator* authenticator) {
    self->preSharedKeyAuthenticationRequired(authenticator);
}

void QNetworkReply_Connect_PreSharedKeyAuthenticationRequired(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QNetworkReply*, QSslPreSharedKeyAuthenticator*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::preSharedKeyAuthenticationRequired, [self, slotFunc](QSslPreSharedKeyAuthenticator* authenticator) {
        QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
        slotFunc(self, sigval1);
    });
}

void QNetworkReply_Redirected(QNetworkReply* self, const QUrl* url) {
    self->redirected(*url);
}

void QNetworkReply_Connect_Redirected(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, QUrl*) = reinterpret_cast<void (*)(QNetworkReply*, QUrl*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::redirected, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void QNetworkReply_RedirectAllowed(QNetworkReply* self) {
    self->redirectAllowed();
}

void QNetworkReply_Connect_RedirectAllowed(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::redirectAllowed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QNetworkReply_UploadProgress(QNetworkReply* self, long long bytesSent, long long bytesTotal) {
    self->uploadProgress(static_cast<qint64>(bytesSent), static_cast<qint64>(bytesTotal));
}

void QNetworkReply_Connect_UploadProgress(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, long long, long long) = reinterpret_cast<void (*)(QNetworkReply*, long long, long long)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::uploadProgress, [self, slotFunc](qint64 bytesSent, qint64 bytesTotal) {
        long long sigval1 = static_cast<long long>(bytesSent);
        long long sigval2 = static_cast<long long>(bytesTotal);
        slotFunc(self, sigval1, sigval2);
    });
}

void QNetworkReply_DownloadProgress(QNetworkReply* self, long long bytesReceived, long long bytesTotal) {
    self->downloadProgress(static_cast<qint64>(bytesReceived), static_cast<qint64>(bytesTotal));
}

void QNetworkReply_Connect_DownloadProgress(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, long long, long long) = reinterpret_cast<void (*)(QNetworkReply*, long long, long long)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::downloadProgress, [self, slotFunc](qint64 bytesReceived, qint64 bytesTotal) {
        long long sigval1 = static_cast<long long>(bytesReceived);
        long long sigval2 = static_cast<long long>(bytesTotal);
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QNetworkReply_Tr2(const char* s, const char* c) {
    QString _ret = QNetworkReply::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QNetworkReply_Tr3(const char* s, const char* c, int n) {
    QString _ret = QNetworkReply::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkReply_Delete(QNetworkReply* self) {
    delete self;
}
