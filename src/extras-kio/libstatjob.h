#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBSTATJOB_H
#define SRC_EXTRAS_KIOC_LIBSTATJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::Job KIO__Job;
typedef KIO::SimpleJob KIO__SimpleJob;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__StatJob)
typedef KIO::StatJob KIO__StatJob;
#endif
typedef KIO::UDSEntry KIO__UDSEntry;
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KIO__StatJob KIO__StatJob;
typedef struct KIO__UDSEntry KIO__UDSEntry;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__StatJob_MetaObject(const KIO__StatJob* self);
void* KIO__StatJob_Metacast(KIO__StatJob* self, const char* param1);
int KIO__StatJob_Metacall(KIO__StatJob* self, int param1, int param2, void** param3);
libqt_string KIO__StatJob_Tr(const char* s);
void KIO__StatJob_SetSide(KIO__StatJob* self, int side);
void KIO__StatJob_SetDetails(KIO__StatJob* self, int details);
KIO__UDSEntry* KIO__StatJob_StatResult(const KIO__StatJob* self);
QUrl* KIO__StatJob_MostLocalUrl(const KIO__StatJob* self);
void KIO__StatJob_Redirection(KIO__StatJob* self, KIO__Job* job, const QUrl* url);
void KIO__StatJob_Connect_Redirection(KIO__StatJob* self, intptr_t slot);
void KIO__StatJob_PermanentRedirection(KIO__StatJob* self, KIO__Job* job, const QUrl* fromUrl, const QUrl* toUrl);
void KIO__StatJob_Connect_PermanentRedirection(KIO__StatJob* self, intptr_t slot);
libqt_string KIO__StatJob_Tr2(const char* s, const char* c);
libqt_string KIO__StatJob_Tr3(const char* s, const char* c, int n);
void KIO__StatJob_Delete(KIO__StatJob* self);

KIO__StatJob* KIO_Stat(const QUrl* param1, int param2);
KIO__StatJob* KIO_Stat2(const QUrl* param1, int param2, int param3, int param4);
KIO__StatJob* KIO_MostLocalUrl(const QUrl* param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
