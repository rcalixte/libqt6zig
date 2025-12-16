#include <QGeoSatelliteInfo>
#include <qgeosatelliteinfo.h>
#include "libqgeosatelliteinfo.h"
#include "libqgeosatelliteinfo.hxx"

QGeoSatelliteInfo* QGeoSatelliteInfo_new() {
    return new QGeoSatelliteInfo();
}

QGeoSatelliteInfo* QGeoSatelliteInfo_new2(const QGeoSatelliteInfo* other) {
    return new QGeoSatelliteInfo(*other);
}

void QGeoSatelliteInfo_OperatorAssign(QGeoSatelliteInfo* self, const QGeoSatelliteInfo* other) {
    self->operator=(*other);
}

void QGeoSatelliteInfo_Swap(QGeoSatelliteInfo* self, QGeoSatelliteInfo* other) {
    self->swap(*other);
}

void QGeoSatelliteInfo_SetSatelliteSystem(QGeoSatelliteInfo* self, int system) {
    self->setSatelliteSystem(static_cast<QGeoSatelliteInfo::SatelliteSystem>(system));
}

int QGeoSatelliteInfo_SatelliteSystem(const QGeoSatelliteInfo* self) {
    return static_cast<int>(self->satelliteSystem());
}

void QGeoSatelliteInfo_SetSatelliteIdentifier(QGeoSatelliteInfo* self, int satId) {
    self->setSatelliteIdentifier(static_cast<int>(satId));
}

int QGeoSatelliteInfo_SatelliteIdentifier(const QGeoSatelliteInfo* self) {
    return self->satelliteIdentifier();
}

void QGeoSatelliteInfo_SetSignalStrength(QGeoSatelliteInfo* self, int signalStrength) {
    self->setSignalStrength(static_cast<int>(signalStrength));
}

int QGeoSatelliteInfo_SignalStrength(const QGeoSatelliteInfo* self) {
    return self->signalStrength();
}

void QGeoSatelliteInfo_SetAttribute(QGeoSatelliteInfo* self, int attribute, double value) {
    self->setAttribute(static_cast<QGeoSatelliteInfo::Attribute>(attribute), static_cast<qreal>(value));
}

double QGeoSatelliteInfo_Attribute(const QGeoSatelliteInfo* self, int attribute) {
    return static_cast<double>(self->attribute(static_cast<QGeoSatelliteInfo::Attribute>(attribute)));
}

void QGeoSatelliteInfo_RemoveAttribute(QGeoSatelliteInfo* self, int attribute) {
    self->removeAttribute(static_cast<QGeoSatelliteInfo::Attribute>(attribute));
}

bool QGeoSatelliteInfo_HasAttribute(const QGeoSatelliteInfo* self, int attribute) {
    return self->hasAttribute(static_cast<QGeoSatelliteInfo::Attribute>(attribute));
}

void QGeoSatelliteInfo_Detach(QGeoSatelliteInfo* self) {
    self->detach();
}

void QGeoSatelliteInfo_Delete(QGeoSatelliteInfo* self) {
    delete self;
}
