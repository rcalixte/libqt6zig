#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBSTOREDTRANSFERJOB_H
#define SRC_EXTRAS_KIOC_LIBSTOREDTRANSFERJOB_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__StoredTransferJob)
typedef KIO::StoredTransferJob KIO__StoredTransferJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__TransferJob)
typedef KIO::TransferJob KIO__TransferJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KIO__StoredTransferJob KIO__StoredTransferJob;
typedef struct KIO__TransferJob KIO__TransferJob;
typedef struct KJob KJob;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__StoredTransferJob_MetaObject(const KIO__StoredTransferJob* self);
void* KIO__StoredTransferJob_Metacast(KIO__StoredTransferJob* self, const char* param1);
int KIO__StoredTransferJob_Metacall(KIO__StoredTransferJob* self, int param1, int param2, void** param3);
libqt_string KIO__StoredTransferJob_Tr(const char* s);
void KIO__StoredTransferJob_SetData(KIO__StoredTransferJob* self, const libqt_string arr);
libqt_string KIO__StoredTransferJob_Data(const KIO__StoredTransferJob* self);
libqt_string KIO__StoredTransferJob_Tr2(const char* s, const char* c);
libqt_string KIO__StoredTransferJob_Tr3(const char* s, const char* c, int n);
void KIO__StoredTransferJob_Delete(KIO__StoredTransferJob* self);

KIO__StoredTransferJob* KIO_StoredGet(const QUrl* param1, int param2, int param3);
KIO__StoredTransferJob* KIO_StoredPut(QIODevice* param1, const QUrl* param2, int param3, int param4);
KIO__StoredTransferJob* KIO_StoredPut2(const libqt_string param1, const QUrl* param2, int param3, int param4);
KIO__StoredTransferJob* KIO_StoredHttpPost(const libqt_string param1, const QUrl* param2, int param3);
KIO__StoredTransferJob* KIO_StoredHttpPost2(QIODevice* param1, const QUrl* param2, long long param3, int param4);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
