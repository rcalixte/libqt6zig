#include <QObject>
#include <QQmlError>
#include <QString>
#include <QUrl>
#include <qqmlerror.h>
#include "libqqmlerror.h"
#include "libqqmlerror.hxx"

QQmlError* QQmlError_new() {
    return new QQmlError();
}

QQmlError* QQmlError_new2(const QQmlError* param1) {
    return new QQmlError(*param1);
}

void QQmlError_OperatorAssign(QQmlError* self, const QQmlError* param1) {
    self->operator=(*param1);
}

void QQmlError_Swap(QQmlError* self, QQmlError* other) {
    self->swap(*other);
}

bool QQmlError_IsValid(const QQmlError* self) {
    return self->isValid();
}

QUrl* QQmlError_Url(const QQmlError* self) {
    return new QUrl(self->url());
}

void QQmlError_SetUrl(QQmlError* self, const QUrl* url) {
    self->setUrl(*url);
}

libqt_string QQmlError_Description(const QQmlError* self) {
    auto _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQmlError_SetDescription(QQmlError* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

int QQmlError_Line(const QQmlError* self) {
    return self->line();
}

void QQmlError_SetLine(QQmlError* self, int line) {
    self->setLine(static_cast<int>(line));
}

int QQmlError_Column(const QQmlError* self) {
    return self->column();
}

void QQmlError_SetColumn(QQmlError* self, int column) {
    self->setColumn(static_cast<int>(column));
}

QObject* QQmlError_Object(const QQmlError* self) {
    return self->object();
}

void QQmlError_SetObject(QQmlError* self, QObject* object) {
    self->setObject(object);
}

libqt_string QQmlError_ToString(const QQmlError* self) {
    auto _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQmlError_Delete(QQmlError* self) {
    delete self;
}
