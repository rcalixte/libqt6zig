#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBPASTEJOB_H
#define SRC_EXTRAS_KIOC_LIBPASTEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__CopyJob)
typedef KIO::CopyJob KIO__CopyJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job)
typedef KIO::Job KIO__Job;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__PasteJob)
typedef KIO::PasteJob KIO__PasteJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__CopyJob KIO__CopyJob;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__PasteJob KIO__PasteJob;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__PasteJob_MetaObject(const KIO__PasteJob* self);
void* KIO__PasteJob_Metacast(KIO__PasteJob* self, const char* param1);
int KIO__PasteJob_Metacall(KIO__PasteJob* self, int param1, int param2, void** param3);
libqt_string KIO__PasteJob_Tr(const char* s);
void KIO__PasteJob_ItemCreated(KIO__PasteJob* self, const QUrl* url);
void KIO__PasteJob_Connect_ItemCreated(KIO__PasteJob* self, intptr_t slot);
void KIO__PasteJob_CopyJobStarted(KIO__PasteJob* self, KIO__CopyJob* job);
void KIO__PasteJob_Connect_CopyJobStarted(KIO__PasteJob* self, intptr_t slot);
libqt_string KIO__PasteJob_Tr2(const char* s, const char* c);
libqt_string KIO__PasteJob_Tr3(const char* s, const char* c, int n);
void KIO__PasteJob_Delete(KIO__PasteJob* self);

KIO__PasteJob* KIO_Paste(const QMimeData* param1, const QUrl* param2, int param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
