#include <QGeoAreaMonitorSource>
#include <QGeoPositionInfoSource>
#include <QGeoPositionInfoSourceFactory>
#include <QGeoSatelliteInfoSource>
#include <QMap>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeopositioninfosourcefactory.h>
#include "libqgeopositioninfosourcefactory.h"
#include "libqgeopositioninfosourcefactory.hxx"

QGeoPositionInfoSource* QGeoPositionInfoSourceFactory_PositionInfoSource(QGeoPositionInfoSourceFactory* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return self->positionInfoSource(parent, parameters_QMap);
}

QGeoSatelliteInfoSource* QGeoPositionInfoSourceFactory_SatelliteInfoSource(QGeoPositionInfoSourceFactory* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return self->satelliteInfoSource(parent, parameters_QMap);
}

QGeoAreaMonitorSource* QGeoPositionInfoSourceFactory_AreaMonitor(QGeoPositionInfoSourceFactory* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return self->areaMonitor(parent, parameters_QMap);
}

void QGeoPositionInfoSourceFactory_OperatorAssign(QGeoPositionInfoSourceFactory* self, const QGeoPositionInfoSourceFactory* param1) {
    self->operator=(*param1);
}

void QGeoPositionInfoSourceFactory_Delete(QGeoPositionInfoSourceFactory* self) {
    delete self;
}
