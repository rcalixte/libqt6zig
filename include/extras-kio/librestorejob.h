#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBRESTOREJOB_H
#define SRC_EXTRAS_KIOC_LIBRESTOREJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::Job KIO__Job;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__RestoreJob)
typedef KIO::RestoreJob KIO__RestoreJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__RestoreJob KIO__RestoreJob;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__RestoreJob_MetaObject(const KIO__RestoreJob* self);
void* KIO__RestoreJob_Metacast(KIO__RestoreJob* self, const char* param1);
int KIO__RestoreJob_Metacall(KIO__RestoreJob* self, int param1, int param2, void** param3);
libqt_string KIO__RestoreJob_Tr(const char* s);
libqt_string KIO__RestoreJob_Tr2(const char* s, const char* c);
libqt_string KIO__RestoreJob_Tr3(const char* s, const char* c, int n);
void KIO__RestoreJob_Delete(KIO__RestoreJob* self);

KIO__RestoreJob* KIO_RestoreFromTrash(const libqt_list /* of QUrl* */ param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
