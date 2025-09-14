#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBBATCHRENAMEJOB_H
#define SRC_EXTRAS_KIOC_LIBBATCHRENAMEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__BatchRenameJob)
typedef KIO::BatchRenameJob KIO__BatchRenameJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job)
typedef KIO::Job KIO__Job;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__BatchRenameJob KIO__BatchRenameJob;
typedef struct KIO__Job KIO__Job;
typedef struct KJob KJob;
typedef struct QChar QChar;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__BatchRenameJob_MetaObject(const KIO__BatchRenameJob* self);
void* KIO__BatchRenameJob_Metacast(KIO__BatchRenameJob* self, const char* param1);
int KIO__BatchRenameJob_Metacall(KIO__BatchRenameJob* self, int param1, int param2, void** param3);
libqt_string KIO__BatchRenameJob_Tr(const char* s);
void KIO__BatchRenameJob_FileRenamed(KIO__BatchRenameJob* self, const QUrl* oldUrl, const QUrl* newUrl);
void KIO__BatchRenameJob_Connect_FileRenamed(KIO__BatchRenameJob* self, intptr_t slot);
libqt_string KIO__BatchRenameJob_Tr2(const char* s, const char* c);
libqt_string KIO__BatchRenameJob_Tr3(const char* s, const char* c, int n);
void KIO__BatchRenameJob_Delete(KIO__BatchRenameJob* self);

KIO__BatchRenameJob* KIO_BatchRename(const libqt_list /* of QUrl* */ param1, const libqt_string param2, int param3, QChar* param4, int param5);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
