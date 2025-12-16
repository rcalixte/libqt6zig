#include <QGeoCoordinate>
#include <QGeoRectangle>
#include <QGeoShape>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeoshape.h>
#include "libqgeoshape.h"
#include "libqgeoshape.hxx"

QGeoShape* QGeoShape_new() {
    return new QGeoShape();
}

QGeoShape* QGeoShape_new2(const QGeoShape* other) {
    return new QGeoShape(*other);
}

int QGeoShape_Type(const QGeoShape* self) {
    return static_cast<int>(self->type());
}

bool QGeoShape_IsValid(const QGeoShape* self) {
    return self->isValid();
}

bool QGeoShape_IsEmpty(const QGeoShape* self) {
    return self->isEmpty();
}

bool QGeoShape_Contains(const QGeoShape* self, const QGeoCoordinate* coordinate) {
    return self->contains(*coordinate);
}

QGeoRectangle* QGeoShape_BoundingGeoRectangle(const QGeoShape* self) {
    return new QGeoRectangle(self->boundingGeoRectangle());
}

QGeoCoordinate* QGeoShape_Center(const QGeoShape* self) {
    return new QGeoCoordinate(self->center());
}

void QGeoShape_OperatorAssign(QGeoShape* self, const QGeoShape* other) {
    self->operator=(*other);
}

libqt_string QGeoShape_ToString(const QGeoShape* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoShape_Delete(QGeoShape* self) {
    delete self;
}
