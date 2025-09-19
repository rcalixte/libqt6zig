#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBMKPATHJOB_H
#define SRC_EXTRAS_KIOC_LIBMKPATHJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::Job KIO__Job;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__MkpathJob)
typedef KIO::MkpathJob KIO__MkpathJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__MkpathJob KIO__MkpathJob;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__MkpathJob_MetaObject(const KIO__MkpathJob* self);
void* KIO__MkpathJob_Metacast(KIO__MkpathJob* self, const char* param1);
int KIO__MkpathJob_Metacall(KIO__MkpathJob* self, int param1, int param2, void** param3);
libqt_string KIO__MkpathJob_Tr(const char* s);
void KIO__MkpathJob_DirectoryCreated(KIO__MkpathJob* self, const QUrl* url);
void KIO__MkpathJob_Connect_DirectoryCreated(KIO__MkpathJob* self, intptr_t slot);
libqt_string KIO__MkpathJob_Tr2(const char* s, const char* c);
libqt_string KIO__MkpathJob_Tr3(const char* s, const char* c, int n);
void KIO__MkpathJob_Delete(KIO__MkpathJob* self);

KIO__MkpathJob* KIO_Mkpath(const QUrl* param1, const QUrl* param2, int param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
