#include <QDBusError>
#include <QDBusMessage>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdbuserror.h>
#include "libqdbuserror.h"
#include "libqdbuserror.hxx"

QDBusError* QDBusError_new() {
    return new QDBusError();
}

QDBusError* QDBusError_new2(const QDBusMessage* msg) {
    return new QDBusError(*msg);
}

QDBusError* QDBusError_new3(int errorVal, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    return new QDBusError(static_cast<QDBusError::ErrorType>(errorVal), message_QString);
}

QDBusError* QDBusError_new4(const QDBusError* other) {
    return new QDBusError(*other);
}

void QDBusError_OperatorAssign(QDBusError* self, const QDBusError* other) {
    self->operator=(*other);
}

void QDBusError_OperatorAssign2(QDBusError* self, const QDBusMessage* msg) {
    self->operator=(*msg);
}

void QDBusError_Swap(QDBusError* self, QDBusError* other) {
    self->swap(*other);
}

int QDBusError_Type(const QDBusError* self) {
    return static_cast<int>(self->type());
}

libqt_string QDBusError_Name(const QDBusError* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusError_Message(const QDBusError* self) {
    QString _ret = self->message();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDBusError_IsValid(const QDBusError* self) {
    return self->isValid();
}

libqt_string QDBusError_ErrorString(int errorVal) {
    QString _ret = QDBusError::errorString(static_cast<QDBusError::ErrorType>(errorVal));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDBusError_Delete(QDBusError* self) {
    delete self;
}
