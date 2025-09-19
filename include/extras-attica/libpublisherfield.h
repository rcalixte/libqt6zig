#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPUBLISHERFIELD_H
#define SRC_EXTRAS_ATTICAC_LIBPUBLISHERFIELD_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PublisherField)
typedef Attica::PublisherField Attica__PublisherField;
#endif
#else
typedef struct Attica__PublisherField Attica__PublisherField;
#endif

Attica__PublisherField* Attica__PublisherField_new();
Attica__PublisherField* Attica__PublisherField_new2(const Attica__PublisherField* other);
void Attica__PublisherField_OperatorAssign(Attica__PublisherField* self, const Attica__PublisherField* other);
void Attica__PublisherField_SetName(Attica__PublisherField* self, const libqt_string value);
libqt_string Attica__PublisherField_Name(const Attica__PublisherField* self);
void Attica__PublisherField_SetType(Attica__PublisherField* self, const libqt_string value);
libqt_string Attica__PublisherField_Type(const Attica__PublisherField* self);
void Attica__PublisherField_SetData(Attica__PublisherField* self, const libqt_string value);
libqt_string Attica__PublisherField_Data(const Attica__PublisherField* self);
bool Attica__PublisherField_IsValid(const Attica__PublisherField* self);
void Attica__PublisherField_Delete(Attica__PublisherField* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
