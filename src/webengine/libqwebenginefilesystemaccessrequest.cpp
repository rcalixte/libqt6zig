#include <QUrl>
#include <QWebEngineFileSystemAccessRequest>
#include <qwebenginefilesystemaccessrequest.h>
#include "libqwebenginefilesystemaccessrequest.h"
#include "libqwebenginefilesystemaccessrequest.hxx"

QWebEngineFileSystemAccessRequest* QWebEngineFileSystemAccessRequest_new(const QWebEngineFileSystemAccessRequest* other) {
    return new QWebEngineFileSystemAccessRequest(*other);
}

void QWebEngineFileSystemAccessRequest_OperatorAssign(QWebEngineFileSystemAccessRequest* self, const QWebEngineFileSystemAccessRequest* other) {
    self->operator=(*other);
}

void QWebEngineFileSystemAccessRequest_Swap(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other) {
    self->swap(*other);
}

void QWebEngineFileSystemAccessRequest_Accept(QWebEngineFileSystemAccessRequest* self) {
    self->accept();
}

void QWebEngineFileSystemAccessRequest_Reject(QWebEngineFileSystemAccessRequest* self) {
    self->reject();
}

QUrl* QWebEngineFileSystemAccessRequest_Origin(const QWebEngineFileSystemAccessRequest* self) {
    return new QUrl(self->origin());
}

QUrl* QWebEngineFileSystemAccessRequest_FilePath(const QWebEngineFileSystemAccessRequest* self) {
    return new QUrl(self->filePath());
}

int QWebEngineFileSystemAccessRequest_HandleType(const QWebEngineFileSystemAccessRequest* self) {
    return static_cast<int>(self->handleType());
}

int QWebEngineFileSystemAccessRequest_AccessFlags(const QWebEngineFileSystemAccessRequest* self) {
    return static_cast<int>(self->accessFlags());
}

void QWebEngineFileSystemAccessRequest_Delete(QWebEngineFileSystemAccessRequest* self) {
    delete self;
}
