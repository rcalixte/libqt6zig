#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBDAVJOB_H
#define SRC_EXTRAS_KIOC_LIBDAVJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__DavJob)
typedef KIO::DavJob KIO__DavJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job)
typedef KIO::Job KIO__Job;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__SimpleJob)
typedef KIO::SimpleJob KIO__SimpleJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__TransferJob)
typedef KIO::TransferJob KIO__TransferJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__DavJob KIO__DavJob;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KIO__TransferJob KIO__TransferJob;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__DavJob_MetaObject(const KIO__DavJob* self);
void* KIO__DavJob_Metacast(KIO__DavJob* self, const char* param1);
int KIO__DavJob_Metacall(KIO__DavJob* self, int param1, int param2, void** param3);
libqt_string KIO__DavJob_Tr(const char* s);
libqt_string KIO__DavJob_ResponseData(const KIO__DavJob* self);
libqt_string KIO__DavJob_Tr2(const char* s, const char* c);
libqt_string KIO__DavJob_Tr3(const char* s, const char* c, int n);
void KIO__DavJob_Delete(KIO__DavJob* self);

KIO__DavJob* KIO_DavPropFind(const QUrl* param1, const libqt_string param2, const libqt_string param3, int param4);
KIO__DavJob* KIO_DavPropPatch(const QUrl* param1, const libqt_string param2, int param3);
KIO__DavJob* KIO_DavSearch(const QUrl* param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5);
KIO__DavJob* KIO_DavReport(const QUrl* param1, const libqt_string param2, const libqt_string param3, int param4);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
