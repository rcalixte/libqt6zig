#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBLISTJOB_H
#define SRC_EXTRAS_KIOC_LIBLISTJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::Job KIO__Job;
typedef KIO::ListJob KIO__ListJob;
typedef KIO::SimpleJob KIO__SimpleJob;
typedef KIO::UDSEntry KIO__UDSEntry;
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__ListJob KIO__ListJob;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KIO__UDSEntry KIO__UDSEntry;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__ListJob_MetaObject(const KIO__ListJob* self);
void* KIO__ListJob_Metacast(KIO__ListJob* self, const char* param1);
int KIO__ListJob_Metacall(KIO__ListJob* self, int param1, int param2, void** param3);
libqt_string KIO__ListJob_Tr(const char* s);
QUrl* KIO__ListJob_RedirectionUrl(const KIO__ListJob* self);
void KIO__ListJob_SetUnrestricted(KIO__ListJob* self, bool unrestricted);
void KIO__ListJob_Entries(KIO__ListJob* self, KIO__Job* job, const libqt_list /* of KIO__UDSEntry* */ list);
void KIO__ListJob_Connect_Entries(KIO__ListJob* self, intptr_t slot);
void KIO__ListJob_SubError(KIO__ListJob* self, KIO__ListJob* job, KIO__ListJob* subJob);
void KIO__ListJob_Connect_SubError(KIO__ListJob* self, intptr_t slot);
void KIO__ListJob_Redirection(KIO__ListJob* self, KIO__Job* job, const QUrl* url);
void KIO__ListJob_Connect_Redirection(KIO__ListJob* self, intptr_t slot);
void KIO__ListJob_PermanentRedirection(KIO__ListJob* self, KIO__Job* job, const QUrl* fromUrl, const QUrl* toUrl);
void KIO__ListJob_Connect_PermanentRedirection(KIO__ListJob* self, intptr_t slot);
libqt_string KIO__ListJob_Tr2(const char* s, const char* c);
libqt_string KIO__ListJob_Tr3(const char* s, const char* c, int n);
void KIO__ListJob_Delete(KIO__ListJob* self);

KIO__ListJob* KIO_ListDir(const QUrl* param1, int param2, int param3);
KIO__ListJob* KIO_ListRecursive(const QUrl* param1, int param2, int param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
