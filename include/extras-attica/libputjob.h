#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPUTJOB_H
#define SRC_EXTRAS_ATTICAC_LIBPUTJOB_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PutJob)
typedef Attica::PutJob Attica__PutJob;
#endif
#else
typedef struct Attica__BaseJob Attica__BaseJob;
typedef struct Attica__Metadata Attica__Metadata;
typedef struct Attica__PlatformDependent Attica__PlatformDependent;
typedef struct Attica__PutJob Attica__PutJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* Attica__PutJob_MetaObject(const Attica__PutJob* self);
void* Attica__PutJob_Metacast(Attica__PutJob* self, const char* param1);
int Attica__PutJob_Metacall(Attica__PutJob* self, int param1, int param2, void** param3);
libqt_string Attica__PutJob_Tr(const char* s);
libqt_string Attica__PutJob_Tr2(const char* s, const char* c);
libqt_string Attica__PutJob_Tr3(const char* s, const char* c, int n);
void Attica__PutJob_Delete(Attica__PutJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
