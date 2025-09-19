#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBDELETEJOB_H
#define SRC_EXTRAS_ATTICAC_LIBDELETEJOB_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__DeleteJob)
typedef Attica::DeleteJob Attica__DeleteJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Metadata)
typedef Attica::Metadata Attica__Metadata;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent)
typedef Attica::PlatformDependent Attica__PlatformDependent;
#endif
#else
typedef struct Attica__BaseJob Attica__BaseJob;
typedef struct Attica__DeleteJob Attica__DeleteJob;
typedef struct Attica__Metadata Attica__Metadata;
typedef struct Attica__PlatformDependent Attica__PlatformDependent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* Attica__DeleteJob_MetaObject(const Attica__DeleteJob* self);
void* Attica__DeleteJob_Metacast(Attica__DeleteJob* self, const char* param1);
int Attica__DeleteJob_Metacall(Attica__DeleteJob* self, int param1, int param2, void** param3);
libqt_string Attica__DeleteJob_Tr(const char* s);
libqt_string Attica__DeleteJob_Tr2(const char* s, const char* c);
libqt_string Attica__DeleteJob_Tr3(const char* s, const char* c, int n);
void Attica__DeleteJob_Delete(Attica__DeleteJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
