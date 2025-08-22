#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBKCOUNTRYSUBDIVISION_H
#define SRC_EXTRAS_KI18NC_LIBKCOUNTRYSUBDIVISION_H

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
#endif

KCountrySubdivision* KCountrySubdivision_new();
KCountrySubdivision* KCountrySubdivision_new2(const KCountrySubdivision* param1);
void KCountrySubdivision_OperatorAssign(KCountrySubdivision* self, const KCountrySubdivision* param1);
bool KCountrySubdivision_OperatorEqual(const KCountrySubdivision* self, const KCountrySubdivision* other);
bool KCountrySubdivision_OperatorNotEqual(const KCountrySubdivision* self, const KCountrySubdivision* other);
bool KCountrySubdivision_IsValid(const KCountrySubdivision* self);
libqt_string KCountrySubdivision_Code(const KCountrySubdivision* self);
libqt_string KCountrySubdivision_Name(const KCountrySubdivision* self);
KCountry* KCountrySubdivision_Country(const KCountrySubdivision* self);
KCountrySubdivision* KCountrySubdivision_Parent(const KCountrySubdivision* self);
libqt_list /* of const char* */ KCountrySubdivision_TimeZoneIds(const KCountrySubdivision* self);
libqt_list /* of KCountrySubdivision* */ KCountrySubdivision_Subdivisions(const KCountrySubdivision* self);
KCountrySubdivision* KCountrySubdivision_FromCode2(const char* code);
KCountrySubdivision* KCountrySubdivision_FromLocation(float latitude, float longitude);
void KCountrySubdivision_Delete(KCountrySubdivision* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
