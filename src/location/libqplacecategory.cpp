#include <QPlaceCategory>
#include <QPlaceIcon>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qplacecategory.h>
#include "libqplacecategory.h"
#include "libqplacecategory.hxx"

QPlaceCategory* QPlaceCategory_new() {
    return new QPlaceCategory();
}

QPlaceCategory* QPlaceCategory_new2(const QPlaceCategory* other) {
    return new QPlaceCategory(*other);
}

void QPlaceCategory_OperatorAssign(QPlaceCategory* self, const QPlaceCategory* other) {
    self->operator=(*other);
}

void QPlaceCategory_Swap(QPlaceCategory* self, QPlaceCategory* other) {
    self->swap(*other);
}

libqt_string QPlaceCategory_CategoryId(const QPlaceCategory* self) {
    QString _ret = self->categoryId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceCategory_SetCategoryId(QPlaceCategory* self, const libqt_string identifier) {
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    self->setCategoryId(identifier_QString);
}

libqt_string QPlaceCategory_Name(const QPlaceCategory* self) {
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

void QPlaceCategory_SetName(QPlaceCategory* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

int QPlaceCategory_Visibility(const QPlaceCategory* self) {
    return static_cast<int>(self->visibility());
}

void QPlaceCategory_SetVisibility(QPlaceCategory* self, int visibility) {
    self->setVisibility(static_cast<QLocation::Visibility>(visibility));
}

QPlaceIcon* QPlaceCategory_Icon(const QPlaceCategory* self) {
    return new QPlaceIcon(self->icon());
}

void QPlaceCategory_SetIcon(QPlaceCategory* self, const QPlaceIcon* icon) {
    self->setIcon(*icon);
}

bool QPlaceCategory_IsEmpty(const QPlaceCategory* self) {
    return self->isEmpty();
}

void QPlaceCategory_Delete(QPlaceCategory* self) {
    delete self;
}
