#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBTRANSFERJOB_H
#define SRC_EXTRAS_KIOC_LIBTRANSFERJOB_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__TransferJob)
typedef KIO::TransferJob KIO__TransferJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KIO__TransferJob KIO__TransferJob;
typedef struct KJob KJob;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__TransferJob_MetaObject(const KIO__TransferJob* self);
void* KIO__TransferJob_Metacast(KIO__TransferJob* self, const char* param1);
int KIO__TransferJob_Metacall(KIO__TransferJob* self, int param1, int param2, void** param3);
libqt_string KIO__TransferJob_Tr(const char* s);
void KIO__TransferJob_SetModificationTime(KIO__TransferJob* self, const QDateTime* mtime);
bool KIO__TransferJob_IsErrorPage(const KIO__TransferJob* self);
void KIO__TransferJob_SetAsyncDataEnabled(KIO__TransferJob* self, bool enabled);
void KIO__TransferJob_SendAsyncData(KIO__TransferJob* self, const libqt_string data);
libqt_string KIO__TransferJob_Mimetype(const KIO__TransferJob* self);
QUrl* KIO__TransferJob_RedirectUrl(const KIO__TransferJob* self);
void KIO__TransferJob_SetTotalSize(KIO__TransferJob* self, unsigned long long bytes);
void KIO__TransferJob_Data(KIO__TransferJob* self, KIO__Job* job, const libqt_string data);
void KIO__TransferJob_Connect_Data(KIO__TransferJob* self, intptr_t slot);
void KIO__TransferJob_DataReq(KIO__TransferJob* self, KIO__Job* job, libqt_string data);
void KIO__TransferJob_Connect_DataReq(KIO__TransferJob* self, intptr_t slot);
void KIO__TransferJob_Redirection(KIO__TransferJob* self, KIO__Job* job, const QUrl* url);
void KIO__TransferJob_Connect_Redirection(KIO__TransferJob* self, intptr_t slot);
void KIO__TransferJob_PermanentRedirection(KIO__TransferJob* self, KIO__Job* job, const QUrl* fromUrl, const QUrl* toUrl);
void KIO__TransferJob_Connect_PermanentRedirection(KIO__TransferJob* self, intptr_t slot);
void KIO__TransferJob_MimeTypeFound(KIO__TransferJob* self, KIO__Job* job, const libqt_string mimeType);
void KIO__TransferJob_Connect_MimeTypeFound(KIO__TransferJob* self, intptr_t slot);
void KIO__TransferJob_CanResume(KIO__TransferJob* self, KIO__Job* job, unsigned long long offset);
void KIO__TransferJob_Connect_CanResume(KIO__TransferJob* self, intptr_t slot);
libqt_string KIO__TransferJob_Tr2(const char* s, const char* c);
libqt_string KIO__TransferJob_Tr3(const char* s, const char* c, int n);
void KIO__TransferJob_Delete(KIO__TransferJob* self);

KIO__TransferJob* KIO_Get(const QUrl* param1, int param2, int param3);
KIO__TransferJob* KIO_Put(const QUrl* param1, int param2, int param3);
KIO__TransferJob* KIO_HttpPost(const QUrl* param1, const libqt_string param2, int param3);
KIO__TransferJob* KIO_HttpPost2(const QUrl* param1, QIODevice* param2, long long param3, int param4);
KIO__TransferJob* KIO_HttpDelete(const QUrl* param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
