#include <QGeoCoordinate>
#include <QGeoRectangle>
#include <QGeoShape>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeorectangle.h>
#include "libqgeorectangle.h"
#include "libqgeorectangle.hxx"

QGeoRectangle* QGeoRectangle_new() {
    return new QGeoRectangle();
}

QGeoRectangle* QGeoRectangle_new2(const QGeoCoordinate* center, double degreesWidth, double degreesHeight) {
    return new QGeoRectangle(*center, static_cast<double>(degreesWidth), static_cast<double>(degreesHeight));
}

QGeoRectangle* QGeoRectangle_new3(const QGeoCoordinate* topLeft, const QGeoCoordinate* bottomRight) {
    return new QGeoRectangle(*topLeft, *bottomRight);
}

QGeoRectangle* QGeoRectangle_new4(const libqt_list /* of QGeoCoordinate* */ coordinates) {
    QList<QGeoCoordinate> coordinates_QList;
    coordinates_QList.reserve(coordinates.len);
    QGeoCoordinate** coordinates_arr = static_cast<QGeoCoordinate**>(coordinates.data);
    for (size_t i = 0; i < coordinates.len; ++i) {
        coordinates_QList.push_back(*(coordinates_arr[i]));
    }
    return new QGeoRectangle(coordinates_QList);
}

QGeoRectangle* QGeoRectangle_new5(const QGeoRectangle* other) {
    return new QGeoRectangle(*other);
}

QGeoRectangle* QGeoRectangle_new6(const QGeoShape* other) {
    return new QGeoRectangle(*other);
}

void QGeoRectangle_OperatorAssign(QGeoRectangle* self, const QGeoRectangle* other) {
    self->operator=(*other);
}

void QGeoRectangle_SetTopLeft(QGeoRectangle* self, const QGeoCoordinate* topLeft) {
    self->setTopLeft(*topLeft);
}

QGeoCoordinate* QGeoRectangle_TopLeft(const QGeoRectangle* self) {
    return new QGeoCoordinate(self->topLeft());
}

void QGeoRectangle_SetTopRight(QGeoRectangle* self, const QGeoCoordinate* topRight) {
    self->setTopRight(*topRight);
}

QGeoCoordinate* QGeoRectangle_TopRight(const QGeoRectangle* self) {
    return new QGeoCoordinate(self->topRight());
}

void QGeoRectangle_SetBottomLeft(QGeoRectangle* self, const QGeoCoordinate* bottomLeft) {
    self->setBottomLeft(*bottomLeft);
}

QGeoCoordinate* QGeoRectangle_BottomLeft(const QGeoRectangle* self) {
    return new QGeoCoordinate(self->bottomLeft());
}

void QGeoRectangle_SetBottomRight(QGeoRectangle* self, const QGeoCoordinate* bottomRight) {
    self->setBottomRight(*bottomRight);
}

QGeoCoordinate* QGeoRectangle_BottomRight(const QGeoRectangle* self) {
    return new QGeoCoordinate(self->bottomRight());
}

void QGeoRectangle_SetCenter(QGeoRectangle* self, const QGeoCoordinate* center) {
    self->setCenter(*center);
}

QGeoCoordinate* QGeoRectangle_Center(const QGeoRectangle* self) {
    return new QGeoCoordinate(self->center());
}

void QGeoRectangle_SetWidth(QGeoRectangle* self, double degreesWidth) {
    self->setWidth(static_cast<double>(degreesWidth));
}

double QGeoRectangle_Width(const QGeoRectangle* self) {
    return self->width();
}

void QGeoRectangle_SetHeight(QGeoRectangle* self, double degreesHeight) {
    self->setHeight(static_cast<double>(degreesHeight));
}

double QGeoRectangle_Height(const QGeoRectangle* self) {
    return self->height();
}

bool QGeoRectangle_Contains(const QGeoRectangle* self, const QGeoRectangle* rectangle) {
    return self->contains(*rectangle);
}

bool QGeoRectangle_Intersects(const QGeoRectangle* self, const QGeoRectangle* rectangle) {
    return self->intersects(*rectangle);
}

void QGeoRectangle_Translate(QGeoRectangle* self, double degreesLatitude, double degreesLongitude) {
    self->translate(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude));
}

QGeoRectangle* QGeoRectangle_Translated(const QGeoRectangle* self, double degreesLatitude, double degreesLongitude) {
    return new QGeoRectangle(self->translated(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude)));
}

void QGeoRectangle_ExtendRectangle(QGeoRectangle* self, const QGeoCoordinate* coordinate) {
    self->extendRectangle(*coordinate);
}

QGeoRectangle* QGeoRectangle_United(const QGeoRectangle* self, const QGeoRectangle* rectangle) {
    return new QGeoRectangle(self->united(*rectangle));
}

QGeoRectangle* QGeoRectangle_OperatorBitwiseOr(const QGeoRectangle* self, const QGeoRectangle* rectangle) {
    return new QGeoRectangle(self->operator|(*rectangle));
}

void QGeoRectangle_OperatorBitwiseOrAssign(QGeoRectangle* self, const QGeoRectangle* rectangle) {
    self->operator|=(*rectangle);
}

libqt_string QGeoRectangle_ToString(const QGeoRectangle* self) {
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

void QGeoRectangle_Delete(QGeoRectangle* self) {
    delete self;
}
