#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBDISTRIBUTION_H
#define SRC_EXTRAS_ATTICAC_LIBDISTRIBUTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Distribution)
typedef Attica::Distribution Attica__Distribution;
#endif
#else
typedef struct Attica__Distribution Attica__Distribution;
#endif

Attica__Distribution* Attica__Distribution_new();
Attica__Distribution* Attica__Distribution_new2(const Attica__Distribution* other);
void Attica__Distribution_OperatorAssign(Attica__Distribution* self, const Attica__Distribution* other);
unsigned int Attica__Distribution_Id(const Attica__Distribution* self);
void Attica__Distribution_SetId(Attica__Distribution* self, unsigned int id);
libqt_string Attica__Distribution_Name(const Attica__Distribution* self);
void Attica__Distribution_SetName(Attica__Distribution* self, const libqt_string name);
void Attica__Distribution_Delete(Attica__Distribution* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
