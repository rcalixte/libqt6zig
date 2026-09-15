#include <QByteArray>
#include <QObject>
#include <QQmlEngine>
#include <QQmlFile>
#include <QString>
#include <QUrl>
#include <qqmlfile.h>
#include "libqqmlfile.h"
#include "libqqmlfile.hxx"

QQmlFile* QQmlFile_new() {
    return new QQmlFile();
}

QQmlFile* QQmlFile_new2(QQmlEngine* engine, const QUrl* url) {
    return new QQmlFile(engine, *url);
}

QQmlFile* QQmlFile_new3(QQmlEngine* engine, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    return new QQmlFile(engine, url_QString);
}

bool QQmlFile_IsNull(const QQmlFile* self) {
    return self->isNull();
}

bool QQmlFile_IsReady(const QQmlFile* self) {
    return self->isReady();
}

bool QQmlFile_IsError(const QQmlFile* self) {
    return self->isError();
}

bool QQmlFile_IsLoading(const QQmlFile* self) {
    return self->isLoading();
}

QUrl* QQmlFile_Url(const QQmlFile* self) {
    return new QUrl(self->url());
}

int QQmlFile_Status(const QQmlFile* self) {
    return static_cast<int>(self->status());
}

libqt_string QQmlFile_Error(const QQmlFile* self) {
    auto _ret = self->error();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

long long QQmlFile_Size(const QQmlFile* self) {
    return static_cast<long long>(self->size());
}

const char* QQmlFile_Data(const QQmlFile* self) {
    return (const char*)self->data();
}

libqt_string QQmlFile_DataByteArray(const QQmlFile* self) {
    QByteArray _qb = self->dataByteArray();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QQmlFile_Load(QQmlFile* self, QQmlEngine* param1, const QUrl* param2) {
    self->load(param1, *param2);
}

void QQmlFile_Load2(QQmlFile* self, QQmlEngine* param1, const libqt_string param2) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    self->load(param1, param2_QString);
}

void QQmlFile_Clear(QQmlFile* self) {
    self->clear();
}

void QQmlFile_Clear2(QQmlFile* self, QObject* object) {
    self->clear(object);
}

bool QQmlFile_ConnectFinished(QQmlFile* self, QObject* param1, const char* param2) {
    return self->connectFinished(param1, param2);
}

bool QQmlFile_ConnectFinished2(QQmlFile* self, QObject* param1, int param2) {
    return self->connectFinished(param1, static_cast<int>(param2));
}

bool QQmlFile_ConnectDownloadProgress(QQmlFile* self, QObject* param1, const char* param2) {
    return self->connectDownloadProgress(param1, param2);
}

bool QQmlFile_ConnectDownloadProgress2(QQmlFile* self, QObject* param1, int param2) {
    return self->connectDownloadProgress(param1, static_cast<int>(param2));
}

bool QQmlFile_IsSynchronous(const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    return QQmlFile::isSynchronous(url_QString);
}

bool QQmlFile_IsSynchronous2(const QUrl* url) {
    return QQmlFile::isSynchronous(*url);
}

bool QQmlFile_IsLocalFile(const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    return QQmlFile::isLocalFile(url_QString);
}

bool QQmlFile_IsLocalFile2(const QUrl* url) {
    return QQmlFile::isLocalFile(*url);
}

libqt_string QQmlFile_UrlToLocalFileOrQrc(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto _ret = QQmlFile::urlToLocalFileOrQrc(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlFile_UrlToLocalFileOrQrc2(const QUrl* param1) {
    auto _ret = QQmlFile::urlToLocalFileOrQrc(*param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQmlFile_Delete(QQmlFile* self) {
    delete self;
}
