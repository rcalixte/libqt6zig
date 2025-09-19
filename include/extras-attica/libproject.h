#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPROJECT_H
#define SRC_EXTRAS_ATTICAC_LIBPROJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Project)
typedef Attica::Project Attica__Project;
#endif
#else
typedef struct Attica__Project Attica__Project;
#endif

Attica__Project* Attica__Project_new();
Attica__Project* Attica__Project_new2(const Attica__Project* other);
void Attica__Project_OperatorAssign(Attica__Project* self, const Attica__Project* other);
void Attica__Project_SetId(Attica__Project* self, const libqt_string id);
libqt_string Attica__Project_Id(const Attica__Project* self);
void Attica__Project_SetName(Attica__Project* self, const libqt_string name);
libqt_string Attica__Project_Name(const Attica__Project* self);
void Attica__Project_SetVersion(Attica__Project* self, const libqt_string version);
libqt_string Attica__Project_Version(const Attica__Project* self);
void Attica__Project_SetUrl(Attica__Project* self, const libqt_string url);
libqt_string Attica__Project_Url(const Attica__Project* self);
void Attica__Project_SetLicense(Attica__Project* self, const libqt_string license);
libqt_string Attica__Project_License(const Attica__Project* self);
void Attica__Project_SetSummary(Attica__Project* self, const libqt_string summary);
libqt_string Attica__Project_Summary(const Attica__Project* self);
void Attica__Project_SetDescription(Attica__Project* self, const libqt_string description);
libqt_string Attica__Project_Description(const Attica__Project* self);
void Attica__Project_SetDevelopers(Attica__Project* self, const libqt_list /* of libqt_string */ developers);
libqt_list /* of libqt_string */ Attica__Project_Developers(const Attica__Project* self);
void Attica__Project_SetRequirements(Attica__Project* self, const libqt_string requirements);
libqt_string Attica__Project_Requirements(const Attica__Project* self);
void Attica__Project_SetSpecFile(Attica__Project* self, const libqt_string specFile);
libqt_string Attica__Project_SpecFile(const Attica__Project* self);
void Attica__Project_AddExtendedAttribute(Attica__Project* self, const libqt_string key, const libqt_string value);
libqt_string Attica__Project_ExtendedAttribute(const Attica__Project* self, const libqt_string key);
libqt_map /* of libqt_string to libqt_string */ Attica__Project_ExtendedAttributes(const Attica__Project* self);
bool Attica__Project_IsValid(const Attica__Project* self);
void Attica__Project_Delete(Attica__Project* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
