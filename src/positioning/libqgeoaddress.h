#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOADDRESS_H
#define SRC_POSITIONINGC_LIBQGEOADDRESS_H

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
#endif

QGeoAddress* QGeoAddress_new();
QGeoAddress* QGeoAddress_new2(const QGeoAddress* other);
void QGeoAddress_OperatorAssign(QGeoAddress* self, const QGeoAddress* other);
void QGeoAddress_Swap(QGeoAddress* self, QGeoAddress* other);
libqt_string QGeoAddress_Text(const QGeoAddress* self);
void QGeoAddress_SetText(QGeoAddress* self, const libqt_string text);
libqt_string QGeoAddress_Country(const QGeoAddress* self);
void QGeoAddress_SetCountry(QGeoAddress* self, const libqt_string country);
libqt_string QGeoAddress_CountryCode(const QGeoAddress* self);
void QGeoAddress_SetCountryCode(QGeoAddress* self, const libqt_string countryCode);
libqt_string QGeoAddress_State(const QGeoAddress* self);
void QGeoAddress_SetState(QGeoAddress* self, const libqt_string state);
libqt_string QGeoAddress_County(const QGeoAddress* self);
void QGeoAddress_SetCounty(QGeoAddress* self, const libqt_string county);
libqt_string QGeoAddress_City(const QGeoAddress* self);
void QGeoAddress_SetCity(QGeoAddress* self, const libqt_string city);
libqt_string QGeoAddress_District(const QGeoAddress* self);
void QGeoAddress_SetDistrict(QGeoAddress* self, const libqt_string district);
libqt_string QGeoAddress_PostalCode(const QGeoAddress* self);
void QGeoAddress_SetPostalCode(QGeoAddress* self, const libqt_string postalCode);
libqt_string QGeoAddress_Street(const QGeoAddress* self);
void QGeoAddress_SetStreet(QGeoAddress* self, const libqt_string street);
libqt_string QGeoAddress_StreetNumber(const QGeoAddress* self);
void QGeoAddress_SetStreetNumber(QGeoAddress* self, const libqt_string streetNumber);
bool QGeoAddress_IsEmpty(const QGeoAddress* self);
void QGeoAddress_Clear(QGeoAddress* self);
bool QGeoAddress_IsTextGenerated(const QGeoAddress* self);
void QGeoAddress_Delete(QGeoAddress* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
