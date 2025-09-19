#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPOSTJOB_H
#define SRC_EXTRAS_ATTICAC_LIBPOSTJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__BaseJob)
typedef Attica::BaseJob Attica__BaseJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Metadata)
typedef Attica::Metadata Attica__Metadata;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent)
typedef Attica::PlatformDependent Attica__PlatformDependent;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PostJob)
typedef Attica::PostJob Attica__PostJob;
#endif
#else
typedef struct Attica__BaseJob Attica__BaseJob;
typedef struct Attica__Metadata Attica__Metadata;
typedef struct Attica__PlatformDependent Attica__PlatformDependent;
typedef struct Attica__PostJob Attica__PostJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* Attica__PostJob_MetaObject(const Attica__PostJob* self);
void* Attica__PostJob_Metacast(Attica__PostJob* self, const char* param1);
int Attica__PostJob_Metacall(Attica__PostJob* self, int param1, int param2, void** param3);
libqt_string Attica__PostJob_Tr(const char* s);
libqt_string Attica__PostJob_Tr2(const char* s, const char* c);
libqt_string Attica__PostJob_Tr3(const char* s, const char* c, int n);
void Attica__PostJob_Delete(Attica__PostJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
