#include <QGeoCoordinate>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeocoordinate.h>
#include "libqgeocoordinate.h"
#include "libqgeocoordinate.hxx"

QGeoCoordinate* QGeoCoordinate_new() {
    return new QGeoCoordinate();
}

QGeoCoordinate* QGeoCoordinate_new2(double latitude, double longitude) {
    return new QGeoCoordinate(static_cast<double>(latitude), static_cast<double>(longitude));
}

QGeoCoordinate* QGeoCoordinate_new3(double latitude, double longitude, double altitude) {
    return new QGeoCoordinate(static_cast<double>(latitude), static_cast<double>(longitude), static_cast<double>(altitude));
}

QGeoCoordinate* QGeoCoordinate_new4(const QGeoCoordinate* other) {
    return new QGeoCoordinate(*other);
}

void QGeoCoordinate_OperatorAssign(QGeoCoordinate* self, const QGeoCoordinate* other) {
    self->operator=(*other);
}

void QGeoCoordinate_Swap(QGeoCoordinate* self, QGeoCoordinate* other) {
    self->swap(*other);
}

bool QGeoCoordinate_IsValid(const QGeoCoordinate* self) {
    return self->isValid();
}

int QGeoCoordinate_Type(const QGeoCoordinate* self) {
    return static_cast<int>(self->type());
}

void QGeoCoordinate_SetLatitude(QGeoCoordinate* self, double latitude) {
    self->setLatitude(static_cast<double>(latitude));
}

double QGeoCoordinate_Latitude(const QGeoCoordinate* self) {
    return self->latitude();
}

void QGeoCoordinate_SetLongitude(QGeoCoordinate* self, double longitude) {
    self->setLongitude(static_cast<double>(longitude));
}

double QGeoCoordinate_Longitude(const QGeoCoordinate* self) {
    return self->longitude();
}

void QGeoCoordinate_SetAltitude(QGeoCoordinate* self, double altitude) {
    self->setAltitude(static_cast<double>(altitude));
}

double QGeoCoordinate_Altitude(const QGeoCoordinate* self) {
    return self->altitude();
}

double QGeoCoordinate_DistanceTo(const QGeoCoordinate* self, const QGeoCoordinate* other) {
    return static_cast<double>(self->distanceTo(*other));
}

double QGeoCoordinate_AzimuthTo(const QGeoCoordinate* self, const QGeoCoordinate* other) {
    return static_cast<double>(self->azimuthTo(*other));
}

QGeoCoordinate* QGeoCoordinate_AtDistanceAndAzimuth(const QGeoCoordinate* self, double distance, double azimuth) {
    return new QGeoCoordinate(self->atDistanceAndAzimuth(static_cast<qreal>(distance), static_cast<qreal>(azimuth)));
}

libqt_string QGeoCoordinate_ToString(const QGeoCoordinate* self) {
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

QGeoCoordinate* QGeoCoordinate_AtDistanceAndAzimuth3(const QGeoCoordinate* self, double distance, double azimuth, double distanceUp) {
    return new QGeoCoordinate(self->atDistanceAndAzimuth(static_cast<qreal>(distance), static_cast<qreal>(azimuth), static_cast<qreal>(distanceUp)));
}

libqt_string QGeoCoordinate_ToString1(const QGeoCoordinate* self, int format) {
    QString _ret = self->toString(static_cast<QGeoCoordinate::CoordinateFormat>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoCoordinate_Delete(QGeoCoordinate* self) {
    delete self;
}
