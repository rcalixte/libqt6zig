#include <QDateTime>
#include <QGeoCoordinate>
#include <QGeoPositionInfo>
#include <qgeopositioninfo.h>
#include "libqgeopositioninfo.h"
#include "libqgeopositioninfo.hxx"

QGeoPositionInfo* QGeoPositionInfo_new() {
    return new QGeoPositionInfo();
}

QGeoPositionInfo* QGeoPositionInfo_new2(const QGeoCoordinate* coordinate, const QDateTime* updateTime) {
    return new QGeoPositionInfo(*coordinate, *updateTime);
}

QGeoPositionInfo* QGeoPositionInfo_new3(const QGeoPositionInfo* other) {
    return new QGeoPositionInfo(*other);
}

void QGeoPositionInfo_OperatorAssign(QGeoPositionInfo* self, const QGeoPositionInfo* other) {
    self->operator=(*other);
}

void QGeoPositionInfo_Swap(QGeoPositionInfo* self, QGeoPositionInfo* other) {
    self->swap(*other);
}

bool QGeoPositionInfo_IsValid(const QGeoPositionInfo* self) {
    return self->isValid();
}

void QGeoPositionInfo_SetTimestamp(QGeoPositionInfo* self, const QDateTime* timestamp) {
    self->setTimestamp(*timestamp);
}

QDateTime* QGeoPositionInfo_Timestamp(const QGeoPositionInfo* self) {
    return new QDateTime(self->timestamp());
}

void QGeoPositionInfo_SetCoordinate(QGeoPositionInfo* self, const QGeoCoordinate* coordinate) {
    self->setCoordinate(*coordinate);
}

QGeoCoordinate* QGeoPositionInfo_Coordinate(const QGeoPositionInfo* self) {
    return new QGeoCoordinate(self->coordinate());
}

void QGeoPositionInfo_SetAttribute(QGeoPositionInfo* self, int attribute, double value) {
    self->setAttribute(static_cast<QGeoPositionInfo::Attribute>(attribute), static_cast<qreal>(value));
}

double QGeoPositionInfo_Attribute(const QGeoPositionInfo* self, int attribute) {
    return static_cast<double>(self->attribute(static_cast<QGeoPositionInfo::Attribute>(attribute)));
}

void QGeoPositionInfo_RemoveAttribute(QGeoPositionInfo* self, int attribute) {
    self->removeAttribute(static_cast<QGeoPositionInfo::Attribute>(attribute));
}

bool QGeoPositionInfo_HasAttribute(const QGeoPositionInfo* self, int attribute) {
    return self->hasAttribute(static_cast<QGeoPositionInfo::Attribute>(attribute));
}

void QGeoPositionInfo_Detach(QGeoPositionInfo* self) {
    self->detach();
}

void QGeoPositionInfo_Delete(QGeoPositionInfo* self) {
    delete self;
}
