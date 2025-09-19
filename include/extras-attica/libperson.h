#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPERSON_H
#define SRC_EXTRAS_ATTICAC_LIBPERSON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Person)
typedef Attica::Person Attica__Person;
#endif
#else
typedef struct Attica__Person Attica__Person;
typedef struct QDate QDate;
typedef struct QUrl QUrl;
#endif

Attica__Person* Attica__Person_new();
Attica__Person* Attica__Person_new2(const Attica__Person* other);
void Attica__Person_OperatorAssign(Attica__Person* self, const Attica__Person* other);
void Attica__Person_SetId(Attica__Person* self, const libqt_string id);
libqt_string Attica__Person_Id(const Attica__Person* self);
void Attica__Person_SetFirstName(Attica__Person* self, const libqt_string firstName);
libqt_string Attica__Person_FirstName(const Attica__Person* self);
void Attica__Person_SetLastName(Attica__Person* self, const libqt_string lastName);
libqt_string Attica__Person_LastName(const Attica__Person* self);
void Attica__Person_SetBirthday(Attica__Person* self, const QDate* birthday);
QDate* Attica__Person_Birthday(const Attica__Person* self);
void Attica__Person_SetCountry(Attica__Person* self, const libqt_string country);
libqt_string Attica__Person_Country(const Attica__Person* self);
void Attica__Person_SetLatitude(Attica__Person* self, double latitude);
double Attica__Person_Latitude(const Attica__Person* self);
void Attica__Person_SetLongitude(Attica__Person* self, double longitude);
double Attica__Person_Longitude(const Attica__Person* self);
void Attica__Person_SetAvatarUrl(Attica__Person* self, const QUrl* avatarUrl);
QUrl* Attica__Person_AvatarUrl(const Attica__Person* self);
void Attica__Person_SetHomepage(Attica__Person* self, const libqt_string homepage);
libqt_string Attica__Person_Homepage(const Attica__Person* self);
void Attica__Person_SetCity(Attica__Person* self, const libqt_string city);
libqt_string Attica__Person_City(const Attica__Person* self);
void Attica__Person_AddExtendedAttribute(Attica__Person* self, const libqt_string key, const libqt_string value);
libqt_string Attica__Person_ExtendedAttribute(const Attica__Person* self, const libqt_string key);
libqt_map /* of libqt_string to libqt_string */ Attica__Person_ExtendedAttributes(const Attica__Person* self);
bool Attica__Person_IsValid(const Attica__Person* self);
void Attica__Person_Delete(Attica__Person* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
