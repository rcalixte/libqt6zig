#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBEVENT_H
#define SRC_EXTRAS_ATTICAC_LIBEVENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef Attica::Event Attica__Event;
#else
typedef struct Attica__Event Attica__Event;
typedef struct QDate QDate;
typedef struct QUrl QUrl;
#endif

Attica__Event* Attica__Event_new();
Attica__Event* Attica__Event_new2(const Attica__Event* other);
void Attica__Event_OperatorAssign(Attica__Event* self, const Attica__Event* other);
void Attica__Event_SetId(Attica__Event* self, const libqt_string id);
libqt_string Attica__Event_Id(const Attica__Event* self);
void Attica__Event_SetName(Attica__Event* self, const libqt_string name);
libqt_string Attica__Event_Name(const Attica__Event* self);
void Attica__Event_SetDescription(Attica__Event* self, const libqt_string description);
libqt_string Attica__Event_Description(const Attica__Event* self);
void Attica__Event_SetUser(Attica__Event* self, const libqt_string user);
libqt_string Attica__Event_User(const Attica__Event* self);
void Attica__Event_SetStartDate(Attica__Event* self, const QDate* startDate);
QDate* Attica__Event_StartDate(const Attica__Event* self);
void Attica__Event_SetEndDate(Attica__Event* self, const QDate* endDate);
QDate* Attica__Event_EndDate(const Attica__Event* self);
void Attica__Event_SetLatitude(Attica__Event* self, double latitude);
double Attica__Event_Latitude(const Attica__Event* self);
void Attica__Event_SetLongitude(Attica__Event* self, double longitude);
double Attica__Event_Longitude(const Attica__Event* self);
void Attica__Event_SetHomepage(Attica__Event* self, const QUrl* homepage);
QUrl* Attica__Event_Homepage(const Attica__Event* self);
void Attica__Event_SetCountry(Attica__Event* self, const libqt_string country);
libqt_string Attica__Event_Country(const Attica__Event* self);
void Attica__Event_SetCity(Attica__Event* self, const libqt_string city);
libqt_string Attica__Event_City(const Attica__Event* self);
void Attica__Event_AddExtendedAttribute(Attica__Event* self, const libqt_string key, const libqt_string value);
libqt_string Attica__Event_ExtendedAttribute(const Attica__Event* self, const libqt_string key);
libqt_map /* of libqt_string to libqt_string */ Attica__Event_ExtendedAttributes(const Attica__Event* self);
bool Attica__Event_IsValid(const Attica__Event* self);
void Attica__Event_Delete(Attica__Event* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
