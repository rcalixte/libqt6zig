#include <QPlaceUser>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qplaceuser.h>
#include "libqplaceuser.h"
#include "libqplaceuser.hxx"

QPlaceUser* QPlaceUser_new() {
    return new QPlaceUser();
}

QPlaceUser* QPlaceUser_new2(const QPlaceUser* other) {
    return new QPlaceUser(*other);
}

void QPlaceUser_OperatorAssign(QPlaceUser* self, const QPlaceUser* other) {
    self->operator=(*other);
}

void QPlaceUser_Swap(QPlaceUser* self, QPlaceUser* other) {
    self->swap(*other);
}

libqt_string QPlaceUser_UserId(const QPlaceUser* self) {
    QString _ret = self->userId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceUser_SetUserId(QPlaceUser* self, const libqt_string identifier) {
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    self->setUserId(identifier_QString);
}

libqt_string QPlaceUser_Name(const QPlaceUser* self) {
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

void QPlaceUser_SetName(QPlaceUser* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

void QPlaceUser_Delete(QPlaceUser* self) {
    delete self;
}
