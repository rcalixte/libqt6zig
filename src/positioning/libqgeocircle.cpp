#include <QGeoCircle>
#include <QGeoCoordinate>
#include <QGeoShape>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeocircle.h>
#include "libqgeocircle.h"
#include "libqgeocircle.hxx"

QGeoCircle* QGeoCircle_new() {
    return new QGeoCircle();
}

QGeoCircle* QGeoCircle_new2(const QGeoCoordinate* center) {
    return new QGeoCircle(*center);
}

QGeoCircle* QGeoCircle_new3(const QGeoCircle* other) {
    return new QGeoCircle(*other);
}

QGeoCircle* QGeoCircle_new4(const QGeoShape* other) {
    return new QGeoCircle(*other);
}

QGeoCircle* QGeoCircle_new5(const QGeoCoordinate* center, double radius) {
    return new QGeoCircle(*center, static_cast<qreal>(radius));
}

void QGeoCircle_OperatorAssign(QGeoCircle* self, const QGeoCircle* other) {
    self->operator=(*other);
}

void QGeoCircle_SetCenter(QGeoCircle* self, const QGeoCoordinate* center) {
    self->setCenter(*center);
}

QGeoCoordinate* QGeoCircle_Center(const QGeoCircle* self) {
    return new QGeoCoordinate(self->center());
}

void QGeoCircle_SetRadius(QGeoCircle* self, double radius) {
    self->setRadius(static_cast<qreal>(radius));
}

double QGeoCircle_Radius(const QGeoCircle* self) {
    return static_cast<double>(self->radius());
}

void QGeoCircle_Translate(QGeoCircle* self, double degreesLatitude, double degreesLongitude) {
    self->translate(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude));
}

QGeoCircle* QGeoCircle_Translated(const QGeoCircle* self, double degreesLatitude, double degreesLongitude) {
    return new QGeoCircle(self->translated(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude)));
}

void QGeoCircle_ExtendCircle(QGeoCircle* self, const QGeoCoordinate* coordinate) {
    self->extendCircle(*coordinate);
}

libqt_string QGeoCircle_ToString(const QGeoCircle* self) {
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

void QGeoCircle_Delete(QGeoCircle* self) {
    delete self;
}
