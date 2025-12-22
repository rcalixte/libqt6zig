#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOCODINGMANAGER_H
#define SRC_LOCATIONC_LIBQGEOCODINGMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGeoAddress QGeoAddress;
typedef struct QGeoCodeReply QGeoCodeReply;
typedef struct QGeoCodingManager QGeoCodingManager;
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoShape QGeoShape;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QGeoCodingManager_MetaObject(const QGeoCodingManager* self);
void* QGeoCodingManager_Metacast(QGeoCodingManager* self, const char* param1);
int QGeoCodingManager_Metacall(QGeoCodingManager* self, int param1, int param2, void** param3);
libqt_string QGeoCodingManager_ManagerName(const QGeoCodingManager* self);
int QGeoCodingManager_ManagerVersion(const QGeoCodingManager* self);
QGeoCodeReply* QGeoCodingManager_Geocode(QGeoCodingManager* self, const QGeoAddress* address);
QGeoCodeReply* QGeoCodingManager_Geocode2(QGeoCodingManager* self, const libqt_string searchString);
QGeoCodeReply* QGeoCodingManager_ReverseGeocode(QGeoCodingManager* self, const QGeoCoordinate* coordinate);
void QGeoCodingManager_SetLocale(QGeoCodingManager* self, const QLocale* locale);
QLocale* QGeoCodingManager_Locale(const QGeoCodingManager* self);
void QGeoCodingManager_Finished(QGeoCodingManager* self, QGeoCodeReply* reply);
void QGeoCodingManager_Connect_Finished(QGeoCodingManager* self, intptr_t slot);
void QGeoCodingManager_ErrorOccurred(QGeoCodingManager* self, QGeoCodeReply* reply, int errorVal);
void QGeoCodingManager_Connect_ErrorOccurred(QGeoCodingManager* self, intptr_t slot);
QGeoCodeReply* QGeoCodingManager_Geocode22(QGeoCodingManager* self, const QGeoAddress* address, const QGeoShape* bounds);
QGeoCodeReply* QGeoCodingManager_Geocode23(QGeoCodingManager* self, const libqt_string searchString, int limit);
QGeoCodeReply* QGeoCodingManager_Geocode3(QGeoCodingManager* self, const libqt_string searchString, int limit, int offset);
QGeoCodeReply* QGeoCodingManager_Geocode4(QGeoCodingManager* self, const libqt_string searchString, int limit, int offset, const QGeoShape* bounds);
QGeoCodeReply* QGeoCodingManager_ReverseGeocode2(QGeoCodingManager* self, const QGeoCoordinate* coordinate, const QGeoShape* bounds);
void QGeoCodingManager_ErrorOccurred3(QGeoCodingManager* self, QGeoCodeReply* reply, int errorVal, const libqt_string errorString);
void QGeoCodingManager_Connect_ErrorOccurred3(QGeoCodingManager* self, intptr_t slot);
void QGeoCodingManager_Delete(QGeoCodingManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
