#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBCATEGORY_H
#define SRC_EXTRAS_ATTICAC_LIBCATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Category)
typedef Attica::Category Attica__Category;
#endif
#else
typedef struct Attica__Category Attica__Category;
#endif

Attica__Category* Attica__Category_new();
Attica__Category* Attica__Category_new2(const Attica__Category* other);
void Attica__Category_OperatorAssign(Attica__Category* self, const Attica__Category* other);
void Attica__Category_SetId(Attica__Category* self, const libqt_string id);
libqt_string Attica__Category_Id(const Attica__Category* self);
void Attica__Category_SetName(Attica__Category* self, const libqt_string name);
libqt_string Attica__Category_Name(const Attica__Category* self);
bool Attica__Category_IsValid(const Attica__Category* self);
void Attica__Category_SetDisplayName(Attica__Category* self, const libqt_string name);
libqt_string Attica__Category_DisplayName(const Attica__Category* self);
void Attica__Category_Delete(Attica__Category* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
