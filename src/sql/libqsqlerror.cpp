#include <QSqlError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsqlerror.h>
#include "libqsqlerror.h"
#include "libqsqlerror.hxx"

QSqlError* QSqlError_new() {
    return new QSqlError();
}

QSqlError* QSqlError_new2(const QSqlError* other) {
    return new QSqlError(*other);
}

QSqlError* QSqlError_new3(const libqt_string driverText) {
    QString driverText_QString = QString::fromUtf8(driverText.data, driverText.len);
    return new QSqlError(driverText_QString);
}

QSqlError* QSqlError_new4(const libqt_string driverText, const libqt_string databaseText) {
    QString driverText_QString = QString::fromUtf8(driverText.data, driverText.len);
    QString databaseText_QString = QString::fromUtf8(databaseText.data, databaseText.len);
    return new QSqlError(driverText_QString, databaseText_QString);
}

QSqlError* QSqlError_new5(const libqt_string driverText, const libqt_string databaseText, int typeVal) {
    QString driverText_QString = QString::fromUtf8(driverText.data, driverText.len);
    QString databaseText_QString = QString::fromUtf8(databaseText.data, databaseText.len);
    return new QSqlError(driverText_QString, databaseText_QString, static_cast<QSqlError::ErrorType>(typeVal));
}

QSqlError* QSqlError_new6(const libqt_string driverText, const libqt_string databaseText, int typeVal, const libqt_string errorCode) {
    QString driverText_QString = QString::fromUtf8(driverText.data, driverText.len);
    QString databaseText_QString = QString::fromUtf8(databaseText.data, databaseText.len);
    QString errorCode_QString = QString::fromUtf8(errorCode.data, errorCode.len);
    return new QSqlError(driverText_QString, databaseText_QString, static_cast<QSqlError::ErrorType>(typeVal), errorCode_QString);
}

void QSqlError_OperatorAssign(QSqlError* self, const QSqlError* other) {
    self->operator=(*other);
}

bool QSqlError_OperatorEqual(const QSqlError* self, const QSqlError* other) {
    return (*self == *other);
}

bool QSqlError_OperatorNotEqual(const QSqlError* self, const QSqlError* other) {
    return (*self != *other);
}

void QSqlError_Swap(QSqlError* self, QSqlError* other) {
    self->swap(*other);
}

libqt_string QSqlError_DriverText(const QSqlError* self) {
    QString _ret = self->driverText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlError_DatabaseText(const QSqlError* self) {
    QString _ret = self->databaseText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSqlError_Type(const QSqlError* self) {
    return static_cast<int>(self->type());
}

libqt_string QSqlError_NativeErrorCode(const QSqlError* self) {
    QString _ret = self->nativeErrorCode();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlError_Text(const QSqlError* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSqlError_IsValid(const QSqlError* self) {
    return self->isValid();
}

void QSqlError_Delete(QSqlError* self) {
    delete self;
}
