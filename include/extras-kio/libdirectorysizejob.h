#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBDIRECTORYSIZEJOB_H
#define SRC_EXTRAS_KIOC_LIBDIRECTORYSIZEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__DirectorySizeJob)
typedef KIO::DirectorySizeJob KIO__DirectorySizeJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job)
typedef KIO::Job KIO__Job;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KFileItemList KFileItemList;
typedef struct KIO KIO;
typedef struct KIO__DirectorySizeJob KIO__DirectorySizeJob;
typedef struct KIO__Job KIO__Job;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__DirectorySizeJob_MetaObject(const KIO__DirectorySizeJob* self);
void* KIO__DirectorySizeJob_Metacast(KIO__DirectorySizeJob* self, const char* param1);
int KIO__DirectorySizeJob_Metacall(KIO__DirectorySizeJob* self, int param1, int param2, void** param3);
libqt_string KIO__DirectorySizeJob_Tr(const char* s);
unsigned long long KIO__DirectorySizeJob_TotalSize(const KIO__DirectorySizeJob* self);
unsigned long long KIO__DirectorySizeJob_TotalFiles(const KIO__DirectorySizeJob* self);
unsigned long long KIO__DirectorySizeJob_TotalSubdirs(const KIO__DirectorySizeJob* self);
libqt_string KIO__DirectorySizeJob_Tr2(const char* s, const char* c);
libqt_string KIO__DirectorySizeJob_Tr3(const char* s, const char* c, int n);
void KIO__DirectorySizeJob_Delete(KIO__DirectorySizeJob* self);

KIO__DirectorySizeJob* KIO_DirectorySize(const QUrl* param1);
KIO__DirectorySizeJob* KIO_DirectorySize2(const KFileItemList* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
