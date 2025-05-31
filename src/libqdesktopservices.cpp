#include <QDesktopServices>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qdesktopservices.h>
#include "libqdesktopservices.h"
#include "libqdesktopservices.hxx"

QDesktopServices* QDesktopServices_new(const QDesktopServices* other) {
    return new QDesktopServices(*other);
}

QDesktopServices* QDesktopServices_new2(QDesktopServices* other) {
    return new QDesktopServices(std::move(*other));
}

void QDesktopServices_CopyAssign(QDesktopServices* self, QDesktopServices* other) {
    *self = *other;
}

void QDesktopServices_MoveAssign(QDesktopServices* self, QDesktopServices* other) {
    *self = std::move(*other);
}

bool QDesktopServices_OpenUrl(const QUrl* url) {
    return QDesktopServices::openUrl(*url);
}

void QDesktopServices_SetUrlHandler(const libqt_string scheme, QObject* receiver, const char* method) {
    QString scheme_QString = QString::fromUtf8(scheme.data, scheme.len);
    QDesktopServices::setUrlHandler(scheme_QString, receiver, method);
}

void QDesktopServices_UnsetUrlHandler(const libqt_string scheme) {
    QString scheme_QString = QString::fromUtf8(scheme.data, scheme.len);
    QDesktopServices::unsetUrlHandler(scheme_QString);
}

void QDesktopServices_Delete(QDesktopServices* self) {
    delete self;
}
