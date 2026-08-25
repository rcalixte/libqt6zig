#pragma once
#ifndef EXTRAS_ATTICA_LIBPLATFORMDEPENDENT_V3_H
#define EXTRAS_ATTICA_LIBPLATFORMDEPENDENT_V3_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent)
typedef Attica::PlatformDependent Attica__PlatformDependent;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependentV2)
typedef Attica::PlatformDependentV2 Attica__PlatformDependentV2;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependentV3)
typedef Attica::PlatformDependentV3 Attica__PlatformDependentV3;
#endif
#else
typedef struct Attica__PlatformDependent Attica__PlatformDependent;
typedef struct Attica__PlatformDependentV2 Attica__PlatformDependentV2;
typedef struct Attica__PlatformDependentV3 Attica__PlatformDependentV3;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

Attica__PlatformDependentV2* Attica__PlatformDependentV3_AsAttica__PlatformDependentV2(Attica__PlatformDependentV3* self);
Attica__PlatformDependentV3* Attica__PlatformDependentV3_FromAttica__PlatformDependentV2(Attica__PlatformDependentV2* _attica__platformdependentv2);
QMetaObject* Attica__PlatformDependentV3_MetaObject(const Attica__PlatformDependentV3* self);
void* Attica__PlatformDependentV3_Metacast(Attica__PlatformDependentV3* self, const char* param1);
int Attica__PlatformDependentV3_Metacall(Attica__PlatformDependentV3* self, int param1, int param2, void** param3);
bool Attica__PlatformDependentV3_IsReady(Attica__PlatformDependentV3* self);
void Attica__PlatformDependentV3_ReadyChanged(Attica__PlatformDependentV3* self);
void Attica__PlatformDependentV3_Connect_ReadyChanged(Attica__PlatformDependentV3* self, intptr_t slot);
void Attica__PlatformDependentV3_Delete(Attica__PlatformDependentV3* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
