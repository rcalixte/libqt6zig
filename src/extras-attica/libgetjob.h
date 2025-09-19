#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBGETJOB_H
#define SRC_EXTRAS_ATTICAC_LIBGETJOB_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__GetJob)
typedef Attica::GetJob Attica__GetJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Metadata)
typedef Attica::Metadata Attica__Metadata;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent)
typedef Attica::PlatformDependent Attica__PlatformDependent;
#endif
#else
typedef struct Attica__BaseJob Attica__BaseJob;
typedef struct Attica__GetJob Attica__GetJob;
typedef struct Attica__Metadata Attica__Metadata;
typedef struct Attica__PlatformDependent Attica__PlatformDependent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* Attica__GetJob_MetaObject(const Attica__GetJob* self);
void* Attica__GetJob_Metacast(Attica__GetJob* self, const char* param1);
int Attica__GetJob_Metacall(Attica__GetJob* self, int param1, int param2, void** param3);
libqt_string Attica__GetJob_Tr(const char* s);
libqt_string Attica__GetJob_Tr2(const char* s, const char* c);
libqt_string Attica__GetJob_Tr3(const char* s, const char* c, int n);
void Attica__GetJob_Delete(Attica__GetJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
