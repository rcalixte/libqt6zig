#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBMIMETYPEJOB_H
#define SRC_EXTRAS_KIOC_LIBMIMETYPEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::Job KIO__Job;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__MimetypeJob)
typedef KIO::MimetypeJob KIO__MimetypeJob;
#endif
typedef KIO::SimpleJob KIO__SimpleJob;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__TransferJob)
typedef KIO::TransferJob KIO__TransferJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__MimetypeJob KIO__MimetypeJob;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KIO__TransferJob KIO__TransferJob;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__MimetypeJob_MetaObject(const KIO__MimetypeJob* self);
void* KIO__MimetypeJob_Metacast(KIO__MimetypeJob* self, const char* param1);
int KIO__MimetypeJob_Metacall(KIO__MimetypeJob* self, int param1, int param2, void** param3);
libqt_string KIO__MimetypeJob_Tr(const char* s);
libqt_string KIO__MimetypeJob_Tr2(const char* s, const char* c);
libqt_string KIO__MimetypeJob_Tr3(const char* s, const char* c, int n);
void KIO__MimetypeJob_Delete(KIO__MimetypeJob* self);

KIO__MimetypeJob* KIO_Mimetype(const QUrl* param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
