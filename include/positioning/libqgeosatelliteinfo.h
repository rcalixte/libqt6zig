#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOSATELLITEINFO_H
#define SRC_POSITIONINGC_LIBQGEOSATELLITEINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGeoSatelliteInfo QGeoSatelliteInfo;
#endif

QGeoSatelliteInfo* QGeoSatelliteInfo_new();
QGeoSatelliteInfo* QGeoSatelliteInfo_new2(const QGeoSatelliteInfo* other);
void QGeoSatelliteInfo_OperatorAssign(QGeoSatelliteInfo* self, const QGeoSatelliteInfo* other);
void QGeoSatelliteInfo_Swap(QGeoSatelliteInfo* self, QGeoSatelliteInfo* other);
void QGeoSatelliteInfo_SetSatelliteSystem(QGeoSatelliteInfo* self, int system);
int QGeoSatelliteInfo_SatelliteSystem(const QGeoSatelliteInfo* self);
void QGeoSatelliteInfo_SetSatelliteIdentifier(QGeoSatelliteInfo* self, int satId);
int QGeoSatelliteInfo_SatelliteIdentifier(const QGeoSatelliteInfo* self);
void QGeoSatelliteInfo_SetSignalStrength(QGeoSatelliteInfo* self, int signalStrength);
int QGeoSatelliteInfo_SignalStrength(const QGeoSatelliteInfo* self);
void QGeoSatelliteInfo_SetAttribute(QGeoSatelliteInfo* self, int attribute, double value);
double QGeoSatelliteInfo_Attribute(const QGeoSatelliteInfo* self, int attribute);
void QGeoSatelliteInfo_RemoveAttribute(QGeoSatelliteInfo* self, int attribute);
bool QGeoSatelliteInfo_HasAttribute(const QGeoSatelliteInfo* self, int attribute);
void QGeoSatelliteInfo_Detach(QGeoSatelliteInfo* self);
void QGeoSatelliteInfo_Delete(QGeoSatelliteInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
