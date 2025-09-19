#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBBUILDSERVICE_H
#define SRC_EXTRAS_ATTICAC_LIBBUILDSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__BuildService)
typedef Attica::BuildService Attica__BuildService;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Target)
typedef Attica::Target Attica__Target;
#endif
#else
typedef struct Attica__BuildService Attica__BuildService;
typedef struct Attica__Target Attica__Target;
#endif

Attica__Target* Attica__Target_new(const Attica__Target* param1);
libqt_string Attica__Target_Id(const Attica__Target* self);
void Attica__Target_SetId(Attica__Target* self, libqt_string id);
libqt_string Attica__Target_Name(const Attica__Target* self);
void Attica__Target_SetName(Attica__Target* self, libqt_string name);
void Attica__Target_OperatorAssign(Attica__Target* self, const Attica__Target* param1);
void Attica__Target_Delete(Attica__Target* self);

Attica__BuildService* Attica__BuildService_new();
Attica__BuildService* Attica__BuildService_new2(const Attica__BuildService* other);
void Attica__BuildService_OperatorAssign(Attica__BuildService* self, const Attica__BuildService* other);
void Attica__BuildService_SetId(Attica__BuildService* self, const libqt_string id);
libqt_string Attica__BuildService_Id(const Attica__BuildService* self);
void Attica__BuildService_SetName(Attica__BuildService* self, const libqt_string name);
libqt_string Attica__BuildService_Name(const Attica__BuildService* self);
void Attica__BuildService_SetUrl(Attica__BuildService* self, const libqt_string url);
libqt_string Attica__BuildService_Url(const Attica__BuildService* self);
void Attica__BuildService_AddTarget(Attica__BuildService* self, const Attica__Target* param1);
libqt_list /* of Attica__Target* */ Attica__BuildService_Targets(const Attica__BuildService* self);
bool Attica__BuildService_IsValid(const Attica__BuildService* self);
void Attica__BuildService_Delete(Attica__BuildService* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
