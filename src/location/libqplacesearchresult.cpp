#include <QPlaceIcon>
#include <QPlaceSearchResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qplacesearchresult.h>
#include "libqplacesearchresult.h"
#include "libqplacesearchresult.hxx"

QPlaceSearchResult* QPlaceSearchResult_new() {
    return new QPlaceSearchResult();
}

QPlaceSearchResult* QPlaceSearchResult_new2(const QPlaceSearchResult* other) {
    return new QPlaceSearchResult(*other);
}

void QPlaceSearchResult_OperatorAssign(QPlaceSearchResult* self, const QPlaceSearchResult* other) {
    self->operator=(*other);
}

bool QPlaceSearchResult_OperatorEqual(const QPlaceSearchResult* self, const QPlaceSearchResult* other) {
    return (*self == *other);
}

bool QPlaceSearchResult_OperatorNotEqual(const QPlaceSearchResult* self, const QPlaceSearchResult* other) {
    return (*self != *other);
}

int QPlaceSearchResult_Type(const QPlaceSearchResult* self) {
    return static_cast<int>(self->type());
}

libqt_string QPlaceSearchResult_Title(const QPlaceSearchResult* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceSearchResult_SetTitle(QPlaceSearchResult* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

QPlaceIcon* QPlaceSearchResult_Icon(const QPlaceSearchResult* self) {
    return new QPlaceIcon(self->icon());
}

void QPlaceSearchResult_SetIcon(QPlaceSearchResult* self, const QPlaceIcon* icon) {
    self->setIcon(*icon);
}

void QPlaceSearchResult_Delete(QPlaceSearchResult* self) {
    delete self;
}
