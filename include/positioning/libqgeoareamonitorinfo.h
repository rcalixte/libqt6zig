#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOAREAMONITORINFO_H
#define SRC_POSITIONINGC_LIBQGEOAREAMONITORINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDateTime QDateTime;
typedef struct QGeoAreaMonitorInfo QGeoAreaMonitorInfo;
typedef struct QGeoShape QGeoShape;
typedef struct QVariant QVariant;
#endif

QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new();
QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new2(const QGeoAreaMonitorInfo* other);
QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new3(const libqt_string name);
void QGeoAreaMonitorInfo_OperatorAssign(QGeoAreaMonitorInfo* self, const QGeoAreaMonitorInfo* other);
void QGeoAreaMonitorInfo_Swap(QGeoAreaMonitorInfo* self, QGeoAreaMonitorInfo* other);
libqt_string QGeoAreaMonitorInfo_Name(const QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_SetName(QGeoAreaMonitorInfo* self, const libqt_string name);
libqt_string QGeoAreaMonitorInfo_Identifier(const QGeoAreaMonitorInfo* self);
bool QGeoAreaMonitorInfo_IsValid(const QGeoAreaMonitorInfo* self);
QGeoShape* QGeoAreaMonitorInfo_Area(const QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_SetArea(QGeoAreaMonitorInfo* self, const QGeoShape* newShape);
QDateTime* QGeoAreaMonitorInfo_Expiration(const QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_SetExpiration(QGeoAreaMonitorInfo* self, const QDateTime* expiry);
bool QGeoAreaMonitorInfo_IsPersistent(const QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_SetPersistent(QGeoAreaMonitorInfo* self, bool isPersistent);
libqt_map /* of libqt_string to QVariant* */ QGeoAreaMonitorInfo_NotificationParameters(const QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_SetNotificationParameters(QGeoAreaMonitorInfo* self, const libqt_map /* of libqt_string to QVariant* */ parameters);
void QGeoAreaMonitorInfo_Detach(QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_Delete(QGeoAreaMonitorInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
