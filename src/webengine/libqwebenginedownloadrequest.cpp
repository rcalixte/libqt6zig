#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineDownloadRequest>
#include <QWebEnginePage>
#include <qwebenginedownloadrequest.h>
#include "libqwebenginedownloadrequest.h"
#include "libqwebenginedownloadrequest.hxx"

QMetaObject* QWebEngineDownloadRequest_MetaObject(const QWebEngineDownloadRequest* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineDownloadRequest_Metacast(QWebEngineDownloadRequest* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineDownloadRequest_Metacall(QWebEngineDownloadRequest* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineDownloadRequest_Tr(const char* s) {
    QString _ret = QWebEngineDownloadRequest::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

unsigned int QWebEngineDownloadRequest_Id(const QWebEngineDownloadRequest* self) {
    return static_cast<unsigned int>(self->id());
}

int QWebEngineDownloadRequest_State(const QWebEngineDownloadRequest* self) {
    return static_cast<int>(self->state());
}

long long QWebEngineDownloadRequest_TotalBytes(const QWebEngineDownloadRequest* self) {
    return static_cast<long long>(self->totalBytes());
}

long long QWebEngineDownloadRequest_ReceivedBytes(const QWebEngineDownloadRequest* self) {
    return static_cast<long long>(self->receivedBytes());
}

QUrl* QWebEngineDownloadRequest_Url(const QWebEngineDownloadRequest* self) {
    return new QUrl(self->url());
}

libqt_string QWebEngineDownloadRequest_MimeType(const QWebEngineDownloadRequest* self) {
    QString _ret = self->mimeType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QWebEngineDownloadRequest_IsFinished(const QWebEngineDownloadRequest* self) {
    return self->isFinished();
}

bool QWebEngineDownloadRequest_IsPaused(const QWebEngineDownloadRequest* self) {
    return self->isPaused();
}

int QWebEngineDownloadRequest_SavePageFormat(const QWebEngineDownloadRequest* self) {
    return static_cast<int>(self->savePageFormat());
}

void QWebEngineDownloadRequest_SetSavePageFormat(QWebEngineDownloadRequest* self, int format) {
    self->setSavePageFormat(static_cast<QWebEngineDownloadRequest::SavePageFormat>(format));
}

int QWebEngineDownloadRequest_InterruptReason(const QWebEngineDownloadRequest* self) {
    return static_cast<int>(self->interruptReason());
}

libqt_string QWebEngineDownloadRequest_InterruptReasonString(const QWebEngineDownloadRequest* self) {
    QString _ret = self->interruptReasonString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QWebEngineDownloadRequest_IsSavePageDownload(const QWebEngineDownloadRequest* self) {
    return self->isSavePageDownload();
}

libqt_string QWebEngineDownloadRequest_SuggestedFileName(const QWebEngineDownloadRequest* self) {
    QString _ret = self->suggestedFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineDownloadRequest_DownloadDirectory(const QWebEngineDownloadRequest* self) {
    QString _ret = self->downloadDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineDownloadRequest_SetDownloadDirectory(QWebEngineDownloadRequest* self, const libqt_string directory) {
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    self->setDownloadDirectory(directory_QString);
}

libqt_string QWebEngineDownloadRequest_DownloadFileName(const QWebEngineDownloadRequest* self) {
    QString _ret = self->downloadFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineDownloadRequest_SetDownloadFileName(QWebEngineDownloadRequest* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setDownloadFileName(fileName_QString);
}

QWebEnginePage* QWebEngineDownloadRequest_Page(const QWebEngineDownloadRequest* self) {
    return self->page();
}

void QWebEngineDownloadRequest_Accept(QWebEngineDownloadRequest* self) {
    self->accept();
}

void QWebEngineDownloadRequest_Cancel(QWebEngineDownloadRequest* self) {
    self->cancel();
}

void QWebEngineDownloadRequest_Pause(QWebEngineDownloadRequest* self) {
    self->pause();
}

void QWebEngineDownloadRequest_Resume(QWebEngineDownloadRequest* self) {
    self->resume();
}

void QWebEngineDownloadRequest_StateChanged(QWebEngineDownloadRequest* self, int state) {
    self->stateChanged(static_cast<QWebEngineDownloadRequest::DownloadState>(state));
}

void QWebEngineDownloadRequest_Connect_StateChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineDownloadRequest*, int) = reinterpret_cast<void (*)(QWebEngineDownloadRequest*, int)>(slot);
    QWebEngineDownloadRequest::connect(self, &QWebEngineDownloadRequest::stateChanged, [self, slotFunc](QWebEngineDownloadRequest::DownloadState state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QWebEngineDownloadRequest_SavePageFormatChanged(QWebEngineDownloadRequest* self) {
    self->savePageFormatChanged();
}

void QWebEngineDownloadRequest_Connect_SavePageFormatChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QWebEngineDownloadRequest*)>(slot);
    QWebEngineDownloadRequest::connect(self, &QWebEngineDownloadRequest::savePageFormatChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEngineDownloadRequest_ReceivedBytesChanged(QWebEngineDownloadRequest* self) {
    self->receivedBytesChanged();
}

void QWebEngineDownloadRequest_Connect_ReceivedBytesChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QWebEngineDownloadRequest*)>(slot);
    QWebEngineDownloadRequest::connect(self, &QWebEngineDownloadRequest::receivedBytesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEngineDownloadRequest_TotalBytesChanged(QWebEngineDownloadRequest* self) {
    self->totalBytesChanged();
}

void QWebEngineDownloadRequest_Connect_TotalBytesChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QWebEngineDownloadRequest*)>(slot);
    QWebEngineDownloadRequest::connect(self, &QWebEngineDownloadRequest::totalBytesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEngineDownloadRequest_InterruptReasonChanged(QWebEngineDownloadRequest* self) {
    self->interruptReasonChanged();
}

void QWebEngineDownloadRequest_Connect_InterruptReasonChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QWebEngineDownloadRequest*)>(slot);
    QWebEngineDownloadRequest::connect(self, &QWebEngineDownloadRequest::interruptReasonChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEngineDownloadRequest_IsFinishedChanged(QWebEngineDownloadRequest* self) {
    self->isFinishedChanged();
}

void QWebEngineDownloadRequest_Connect_IsFinishedChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QWebEngineDownloadRequest*)>(slot);
    QWebEngineDownloadRequest::connect(self, &QWebEngineDownloadRequest::isFinishedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEngineDownloadRequest_IsPausedChanged(QWebEngineDownloadRequest* self) {
    self->isPausedChanged();
}

void QWebEngineDownloadRequest_Connect_IsPausedChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QWebEngineDownloadRequest*)>(slot);
    QWebEngineDownloadRequest::connect(self, &QWebEngineDownloadRequest::isPausedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEngineDownloadRequest_DownloadDirectoryChanged(QWebEngineDownloadRequest* self) {
    self->downloadDirectoryChanged();
}

void QWebEngineDownloadRequest_Connect_DownloadDirectoryChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QWebEngineDownloadRequest*)>(slot);
    QWebEngineDownloadRequest::connect(self, &QWebEngineDownloadRequest::downloadDirectoryChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEngineDownloadRequest_DownloadFileNameChanged(QWebEngineDownloadRequest* self) {
    self->downloadFileNameChanged();
}

void QWebEngineDownloadRequest_Connect_DownloadFileNameChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QWebEngineDownloadRequest*)>(slot);
    QWebEngineDownloadRequest::connect(self, &QWebEngineDownloadRequest::downloadFileNameChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QWebEngineDownloadRequest_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineDownloadRequest::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineDownloadRequest_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineDownloadRequest::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineDownloadRequest_Delete(QWebEngineDownloadRequest* self) {
    delete self;
}
