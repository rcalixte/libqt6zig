#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOPOSITIONINFOSOURCEFACTORY_H
#define SRC_POSITIONINGC_LIBQGEOPOSITIONINFOSOURCEFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGeoAreaMonitorSource QGeoAreaMonitorSource;
typedef struct QGeoPositionInfoSource QGeoPositionInfoSource;
typedef struct QGeoPositionInfoSourceFactory QGeoPositionInfoSourceFactory;
typedef struct QGeoSatelliteInfoSource QGeoSatelliteInfoSource;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QGeoPositionInfoSource* QGeoPositionInfoSourceFactory_PositionInfoSource(QGeoPositionInfoSourceFactory* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ parameters);
QGeoSatelliteInfoSource* QGeoPositionInfoSourceFactory_SatelliteInfoSource(QGeoPositionInfoSourceFactory* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ parameters);
QGeoAreaMonitorSource* QGeoPositionInfoSourceFactory_AreaMonitor(QGeoPositionInfoSourceFactory* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ parameters);
void QGeoPositionInfoSourceFactory_OperatorAssign(QGeoPositionInfoSourceFactory* self, const QGeoPositionInfoSourceFactory* param1);
void QGeoPositionInfoSourceFactory_Delete(QGeoPositionInfoSourceFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
