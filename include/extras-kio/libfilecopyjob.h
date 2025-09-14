#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBFILECOPYJOB_H
#define SRC_EXTRAS_KIOC_LIBFILECOPYJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__FileCopyJob)
typedef KIO::FileCopyJob KIO__FileCopyJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job)
typedef KIO::Job KIO__Job;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__FileCopyJob KIO__FileCopyJob;
typedef struct KIO__Job KIO__Job;
typedef struct KJob KJob;
typedef struct QDateTime QDateTime;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__FileCopyJob_MetaObject(const KIO__FileCopyJob* self);
void* KIO__FileCopyJob_Metacast(KIO__FileCopyJob* self, const char* param1);
int KIO__FileCopyJob_Metacall(KIO__FileCopyJob* self, int param1, int param2, void** param3);
libqt_string KIO__FileCopyJob_Tr(const char* s);
void KIO__FileCopyJob_SetSourceSize(KIO__FileCopyJob* self, unsigned long long size);
void KIO__FileCopyJob_SetModificationTime(KIO__FileCopyJob* self, const QDateTime* mtime);
QUrl* KIO__FileCopyJob_SrcUrl(const KIO__FileCopyJob* self);
QUrl* KIO__FileCopyJob_DestUrl(const KIO__FileCopyJob* self);
bool KIO__FileCopyJob_DoSuspend(KIO__FileCopyJob* self);
bool KIO__FileCopyJob_DoResume(KIO__FileCopyJob* self);
bool KIO__FileCopyJob_DoKill(KIO__FileCopyJob* self);
void KIO__FileCopyJob_MimeTypeFound(KIO__FileCopyJob* self, KIO__Job* job, const libqt_string mimeType);
void KIO__FileCopyJob_Connect_MimeTypeFound(KIO__FileCopyJob* self, intptr_t slot);
libqt_string KIO__FileCopyJob_Tr2(const char* s, const char* c);
libqt_string KIO__FileCopyJob_Tr3(const char* s, const char* c, int n);
void KIO__FileCopyJob_Delete(KIO__FileCopyJob* self);

KIO__FileCopyJob* KIO_FileCopy(const QUrl* param1, const QUrl* param2, int param3, int param4);
KIO__FileCopyJob* KIO_FileMove(const QUrl* param1, const QUrl* param2, int param3, int param4);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
