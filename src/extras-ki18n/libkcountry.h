#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBKCOUNTRY_H
#define SRC_EXTRAS_KI18NC_LIBKCOUNTRY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCountry KCountry;
typedef struct KCountrySubdivision KCountrySubdivision;
typedef struct KTimeZone KTimeZone;
#endif

KCountry* KTimeZone_Country(const char* param1);

KCountry* KCountry_new();
KCountry* KCountry_new2(const KCountry* param1);
void KCountry_OperatorAssign(KCountry* self, const KCountry* param1);
bool KCountry_OperatorEqual(const KCountry* self, const KCountry* other);
bool KCountry_OperatorNotEqual(const KCountry* self, const KCountry* other);
bool KCountry_IsValid(const KCountry* self);
libqt_string KCountry_Alpha2(const KCountry* self);
libqt_string KCountry_Alpha3(const KCountry* self);
libqt_string KCountry_Name(const KCountry* self);
libqt_string KCountry_EmojiFlag(const KCountry* self);
uint16_t KCountry_Country(const KCountry* self);
libqt_list /* of const char* */ KCountry_TimeZoneIds(const KCountry* self);
libqt_string KCountry_CurrencyCode(const KCountry* self);
libqt_list /* of KCountrySubdivision* */ KCountry_Subdivisions(const KCountry* self);
KCountry* KCountry_FromAlpha22(const char* alpha2Code);
KCountry* KCountry_FromAlpha32(const char* alpha3Code);
KCountry* KCountry_FromLocation(float latitude, float longitude);
KCountry* KCountry_FromQLocale(uint16_t country);
libqt_list /* of KCountry* */ KCountry_AllCountries();
void KCountry_Delete(KCountry* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
