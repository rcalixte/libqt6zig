#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBATTICABASEJOB_H
#define SRC_EXTRAS_ATTICAC_LIBATTICABASEJOB_H

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
#else
typedef struct Attica__BaseJob Attica__BaseJob;
typedef struct Attica__Metadata Attica__Metadata;
typedef struct Attica__PlatformDependent Attica__PlatformDependent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkReply QNetworkReply;
typedef struct QObject QObject;
#endif

QMetaObject* Attica__BaseJob_MetaObject(const Attica__BaseJob* self);
void* Attica__BaseJob_Metacast(Attica__BaseJob* self, const char* param1);
int Attica__BaseJob_Metacall(Attica__BaseJob* self, int param1, int param2, void** param3);
libqt_string Attica__BaseJob_Tr(const char* s);
Attica__Metadata* Attica__BaseJob_Metadata(const Attica__BaseJob* self);
bool Attica__BaseJob_IsAborted(const Attica__BaseJob* self);
void Attica__BaseJob_Start(Attica__BaseJob* self);
void Attica__BaseJob_Abort(Attica__BaseJob* self);
void Attica__BaseJob_Finished(Attica__BaseJob* self, Attica__BaseJob* job);
void Attica__BaseJob_Connect_Finished(Attica__BaseJob* self, intptr_t slot);
libqt_string Attica__BaseJob_Tr2(const char* s, const char* c);
libqt_string Attica__BaseJob_Tr3(const char* s, const char* c, int n);
void Attica__BaseJob_Delete(Attica__BaseJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
