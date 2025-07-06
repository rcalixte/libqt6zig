#include <QAbstractListModel>
#include <QModelIndex>
#include <QWebEngineDesktopMediaRequest>
#include <qwebenginedesktopmediarequest.h>
#include "libqwebenginedesktopmediarequest.h"
#include "libqwebenginedesktopmediarequest.hxx"

QWebEngineDesktopMediaRequest* QWebEngineDesktopMediaRequest_new(const QWebEngineDesktopMediaRequest* other) {
    return new QWebEngineDesktopMediaRequest(*other);
}

void QWebEngineDesktopMediaRequest_OperatorAssign(QWebEngineDesktopMediaRequest* self, const QWebEngineDesktopMediaRequest* other) {
    self->operator=(*other);
}

void QWebEngineDesktopMediaRequest_Swap(QWebEngineDesktopMediaRequest* self, QWebEngineDesktopMediaRequest* other) {
    self->swap(*other);
}

QAbstractListModel* QWebEngineDesktopMediaRequest_ScreensModel(const QWebEngineDesktopMediaRequest* self) {
    return self->screensModel();
}

QAbstractListModel* QWebEngineDesktopMediaRequest_WindowsModel(const QWebEngineDesktopMediaRequest* self) {
    return self->windowsModel();
}

void QWebEngineDesktopMediaRequest_SelectScreen(const QWebEngineDesktopMediaRequest* self, const QModelIndex* index) {
    self->selectScreen(*index);
}

void QWebEngineDesktopMediaRequest_SelectWindow(const QWebEngineDesktopMediaRequest* self, const QModelIndex* index) {
    self->selectWindow(*index);
}

void QWebEngineDesktopMediaRequest_Cancel(const QWebEngineDesktopMediaRequest* self) {
    self->cancel();
}

void QWebEngineDesktopMediaRequest_Delete(QWebEngineDesktopMediaRequest* self) {
    delete self;
}
