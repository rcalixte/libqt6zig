#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPUBLISHER_H
#define SRC_EXTRAS_ATTICAC_LIBPUBLISHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Field)
typedef Attica::Field Attica__Field;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Publisher)
typedef Attica::Publisher Attica__Publisher;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Target)
typedef Attica::Target Attica__Target;
#endif
#else
typedef struct Attica__Field Attica__Field;
typedef struct Attica__Publisher Attica__Publisher;
typedef struct Attica__Target Attica__Target;
#endif

Attica__Field* Attica__Field_new(const Attica__Field* param1);
libqt_string Attica__Field_Type(const Attica__Field* self);
void Attica__Field_SetType(Attica__Field* self, libqt_string type);
libqt_string Attica__Field_Name(const Attica__Field* self);
void Attica__Field_SetName(Attica__Field* self, libqt_string name);
int Attica__Field_Fieldsize(const Attica__Field* self);
void Attica__Field_SetFieldsize(Attica__Field* self, int fieldsize);
bool Attica__Field_Required(const Attica__Field* self);
void Attica__Field_SetRequired(Attica__Field* self, bool required);
libqt_list /* of libqt_string */ Attica__Field_Options(const Attica__Field* self);
void Attica__Field_SetOptions(Attica__Field* self, libqt_list /* of libqt_string */ options);
void Attica__Field_OperatorAssign(Attica__Field* self, const Attica__Field* param1);
void Attica__Field_Delete(Attica__Field* self);

Attica__Publisher* Attica__Publisher_new();
Attica__Publisher* Attica__Publisher_new2(const Attica__Publisher* other);
void Attica__Publisher_OperatorAssign(Attica__Publisher* self, const Attica__Publisher* other);
void Attica__Publisher_SetId(Attica__Publisher* self, const libqt_string id);
libqt_string Attica__Publisher_Id(const Attica__Publisher* self);
void Attica__Publisher_SetName(Attica__Publisher* self, const libqt_string name);
libqt_string Attica__Publisher_Name(const Attica__Publisher* self);
void Attica__Publisher_SetUrl(Attica__Publisher* self, const libqt_string url);
libqt_string Attica__Publisher_Url(const Attica__Publisher* self);
void Attica__Publisher_AddField(Attica__Publisher* self, const Attica__Field* param1);
libqt_list /* of Attica__Field* */ Attica__Publisher_Fields(const Attica__Publisher* self);
void Attica__Publisher_AddTarget(Attica__Publisher* self, const Attica__Target* param1);
libqt_list /* of Attica__Target* */ Attica__Publisher_Targets(const Attica__Publisher* self);
bool Attica__Publisher_IsValid(const Attica__Publisher* self);
void Attica__Publisher_Delete(Attica__Publisher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
