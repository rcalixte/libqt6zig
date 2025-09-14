#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBDELETEJOB_H
#define SRC_EXTRAS_KIOC_LIBDELETEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__DeleteJob)
typedef KIO::DeleteJob KIO__DeleteJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job)
typedef KIO::Job KIO__Job;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__DeleteJob KIO__DeleteJob;
typedef struct KIO__Job KIO__Job;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__DeleteJob_MetaObject(const KIO__DeleteJob* self);
void* KIO__DeleteJob_Metacast(KIO__DeleteJob* self, const char* param1);
int KIO__DeleteJob_Metacall(KIO__DeleteJob* self, int param1, int param2, void** param3);
libqt_string KIO__DeleteJob_Tr(const char* s);
libqt_list /* of QUrl* */ KIO__DeleteJob_Urls(const KIO__DeleteJob* self);
void KIO__DeleteJob_TotalFiles(KIO__DeleteJob* self, KJob* job, unsigned long files);
void KIO__DeleteJob_Connect_TotalFiles(KIO__DeleteJob* self, intptr_t slot);
void KIO__DeleteJob_TotalDirs(KIO__DeleteJob* self, KJob* job, unsigned long dirs);
void KIO__DeleteJob_Connect_TotalDirs(KIO__DeleteJob* self, intptr_t slot);
void KIO__DeleteJob_ProcessedFiles(KIO__DeleteJob* self, KIO__Job* job, unsigned long files);
void KIO__DeleteJob_Connect_ProcessedFiles(KIO__DeleteJob* self, intptr_t slot);
void KIO__DeleteJob_ProcessedDirs(KIO__DeleteJob* self, KIO__Job* job, unsigned long dirs);
void KIO__DeleteJob_Connect_ProcessedDirs(KIO__DeleteJob* self, intptr_t slot);
void KIO__DeleteJob_Deleting(KIO__DeleteJob* self, KIO__Job* job, const QUrl* file);
void KIO__DeleteJob_Connect_Deleting(KIO__DeleteJob* self, intptr_t slot);
libqt_string KIO__DeleteJob_Tr2(const char* s, const char* c);
libqt_string KIO__DeleteJob_Tr3(const char* s, const char* c, int n);
void KIO__DeleteJob_Delete(KIO__DeleteJob* self);

KIO__DeleteJob* KIO_Del(const QUrl* param1, int param2);
KIO__DeleteJob* KIO_Del2(const libqt_list /* of QUrl* */ param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
