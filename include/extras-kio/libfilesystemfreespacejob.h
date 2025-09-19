#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBFILESYSTEMFREESPACEJOB_H
#define SRC_EXTRAS_KIOC_LIBFILESYSTEMFREESPACEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__FileSystemFreeSpaceJob)
typedef KIO::FileSystemFreeSpaceJob KIO__FileSystemFreeSpaceJob;
#endif
typedef KIO::Job KIO__Job;
typedef KIO::SimpleJob KIO__SimpleJob;
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__FileSystemFreeSpaceJob KIO__FileSystemFreeSpaceJob;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__FileSystemFreeSpaceJob_MetaObject(const KIO__FileSystemFreeSpaceJob* self);
void* KIO__FileSystemFreeSpaceJob_Metacast(KIO__FileSystemFreeSpaceJob* self, const char* param1);
int KIO__FileSystemFreeSpaceJob_Metacall(KIO__FileSystemFreeSpaceJob* self, int param1, int param2, void** param3);
libqt_string KIO__FileSystemFreeSpaceJob_Tr(const char* s);
unsigned long long KIO__FileSystemFreeSpaceJob_Size(const KIO__FileSystemFreeSpaceJob* self);
unsigned long long KIO__FileSystemFreeSpaceJob_AvailableSize(const KIO__FileSystemFreeSpaceJob* self);
libqt_string KIO__FileSystemFreeSpaceJob_Tr2(const char* s, const char* c);
libqt_string KIO__FileSystemFreeSpaceJob_Tr3(const char* s, const char* c, int n);
void KIO__FileSystemFreeSpaceJob_Delete(KIO__FileSystemFreeSpaceJob* self);

KIO__FileSystemFreeSpaceJob* KIO_FileSystemFreeSpace(const QUrl* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
