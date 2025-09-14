#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBMKDIRJOB_H
#define SRC_EXTRAS_KIOC_LIBMKDIRJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job)
typedef KIO::Job KIO__Job;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__MkdirJob)
typedef KIO::MkdirJob KIO__MkdirJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__SimpleJob)
typedef KIO::SimpleJob KIO__SimpleJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__MkdirJob KIO__MkdirJob;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__MkdirJob_MetaObject(const KIO__MkdirJob* self);
void* KIO__MkdirJob_Metacast(KIO__MkdirJob* self, const char* param1);
int KIO__MkdirJob_Metacall(KIO__MkdirJob* self, int param1, int param2, void** param3);
libqt_string KIO__MkdirJob_Tr(const char* s);
void KIO__MkdirJob_Redirection(KIO__MkdirJob* self, KIO__Job* job, const QUrl* url);
void KIO__MkdirJob_Connect_Redirection(KIO__MkdirJob* self, intptr_t slot);
void KIO__MkdirJob_PermanentRedirection(KIO__MkdirJob* self, KIO__Job* job, const QUrl* fromUrl, const QUrl* toUrl);
void KIO__MkdirJob_Connect_PermanentRedirection(KIO__MkdirJob* self, intptr_t slot);
libqt_string KIO__MkdirJob_Tr2(const char* s, const char* c);
libqt_string KIO__MkdirJob_Tr3(const char* s, const char* c, int n);
void KIO__MkdirJob_Delete(KIO__MkdirJob* self);

KIO__MkdirJob* KIO_Mkdir(const QUrl* param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
