#include <QPlaceIcon>
#include <QPlaceSupplier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qplacesupplier.h>
#include "libqplacesupplier.h"
#include "libqplacesupplier.hxx"

QPlaceSupplier* QPlaceSupplier_new() {
    return new QPlaceSupplier();
}

QPlaceSupplier* QPlaceSupplier_new2(const QPlaceSupplier* other) {
    return new QPlaceSupplier(*other);
}

void QPlaceSupplier_OperatorAssign(QPlaceSupplier* self, const QPlaceSupplier* other) {
    self->operator=(*other);
}

void QPlaceSupplier_Swap(QPlaceSupplier* self, QPlaceSupplier* other) {
    self->swap(*other);
}

libqt_string QPlaceSupplier_Name(const QPlaceSupplier* self) {
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

void QPlaceSupplier_SetName(QPlaceSupplier* self, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->setName(data_QString);
}

libqt_string QPlaceSupplier_SupplierId(const QPlaceSupplier* self) {
    QString _ret = self->supplierId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceSupplier_SetSupplierId(QPlaceSupplier* self, const libqt_string identifier) {
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    self->setSupplierId(identifier_QString);
}

QUrl* QPlaceSupplier_Url(const QPlaceSupplier* self) {
    return new QUrl(self->url());
}

void QPlaceSupplier_SetUrl(QPlaceSupplier* self, const QUrl* data) {
    self->setUrl(*data);
}

QPlaceIcon* QPlaceSupplier_Icon(const QPlaceSupplier* self) {
    return new QPlaceIcon(self->icon());
}

void QPlaceSupplier_SetIcon(QPlaceSupplier* self, const QPlaceIcon* icon) {
    self->setIcon(*icon);
}

bool QPlaceSupplier_IsEmpty(const QPlaceSupplier* self) {
    return self->isEmpty();
}

void QPlaceSupplier_Delete(QPlaceSupplier* self) {
    delete self;
}
