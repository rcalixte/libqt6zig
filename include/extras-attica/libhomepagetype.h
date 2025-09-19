#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBHOMEPAGETYPE_H
#define SRC_EXTRAS_ATTICAC_LIBHOMEPAGETYPE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__HomePageType)
typedef Attica::HomePageType Attica__HomePageType;
#endif
#else
typedef struct Attica__HomePageType Attica__HomePageType;
#endif

Attica__HomePageType* Attica__HomePageType_new();
Attica__HomePageType* Attica__HomePageType_new2(const Attica__HomePageType* other);
void Attica__HomePageType_OperatorAssign(Attica__HomePageType* self, const Attica__HomePageType* other);
unsigned int Attica__HomePageType_Id(const Attica__HomePageType* self);
void Attica__HomePageType_SetId(Attica__HomePageType* self, unsigned int id);
libqt_string Attica__HomePageType_Name(const Attica__HomePageType* self);
void Attica__HomePageType_SetName(Attica__HomePageType* self, const libqt_string name);
void Attica__HomePageType_Delete(Attica__HomePageType* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
