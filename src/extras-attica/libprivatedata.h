#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPRIVATEDATA_H
#define SRC_EXTRAS_ATTICAC_LIBPRIVATEDATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PrivateData)
typedef Attica::PrivateData Attica__PrivateData;
#endif
#else
typedef struct Attica__PrivateData Attica__PrivateData;
typedef struct QDateTime QDateTime;
#endif

Attica__PrivateData* Attica__PrivateData_new();
Attica__PrivateData* Attica__PrivateData_new2(const Attica__PrivateData* other);
void Attica__PrivateData_OperatorAssign(Attica__PrivateData* self, const Attica__PrivateData* other);
void Attica__PrivateData_SetAttribute(Attica__PrivateData* self, const libqt_string key, const libqt_string value);
libqt_string Attica__PrivateData_Attribute(const Attica__PrivateData* self, const libqt_string key);
void Attica__PrivateData_SetTimestamp(Attica__PrivateData* self, const libqt_string key, const QDateTime* when);
QDateTime* Attica__PrivateData_Timestamp(const Attica__PrivateData* self, const libqt_string key);
libqt_list /* of libqt_string */ Attica__PrivateData_Keys(const Attica__PrivateData* self);
void Attica__PrivateData_Delete(Attica__PrivateData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
