#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBATTICAUTILS_H
#define SRC_EXTRAS_ATTICAC_LIBATTICAUTILS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Utils)
typedef Attica::Utils Attica__Utils;
#endif
#else
typedef struct Attica__Utils Attica__Utils;
typedef struct QDateTime QDateTime;
#endif

Attica__Utils* Attica__Utils_new(const Attica__Utils* other);
Attica__Utils* Attica__Utils_new2(Attica__Utils* other);
void Attica__Utils_CopyAssign(Attica__Utils* self, Attica__Utils* other);
void Attica__Utils_MoveAssign(Attica__Utils* self, Attica__Utils* other);
QDateTime* Attica__Utils_ParseQtDateTimeIso8601(const libqt_string str);
const char* Attica__Utils_ToString(int operation);
void Attica__Utils_Delete(Attica__Utils* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
