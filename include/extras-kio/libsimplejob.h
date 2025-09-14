#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBSIMPLEJOB_H
#define SRC_EXTRAS_KIOC_LIBSIMPLEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job)
typedef KIO::Job KIO__Job;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__MetaData)
typedef KIO::MetaData KIO__MetaData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__SimpleJob)
typedef KIO::SimpleJob KIO__SimpleJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__MetaData KIO__MetaData;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KJob KJob;
typedef struct QDateTime QDateTime;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__SimpleJob_MetaObject(const KIO__SimpleJob* self);
void* KIO__SimpleJob_Metacast(KIO__SimpleJob* self, const char* param1);
int KIO__SimpleJob_Metacall(KIO__SimpleJob* self, int param1, int param2, void** param3);
libqt_string KIO__SimpleJob_Tr(const char* s);
QUrl* KIO__SimpleJob_Url(const KIO__SimpleJob* self);
void KIO__SimpleJob_PutOnHold(KIO__SimpleJob* self);
void KIO__SimpleJob_RemoveOnHold();
bool KIO__SimpleJob_IsRedirectionHandlingEnabled(const KIO__SimpleJob* self);
void KIO__SimpleJob_SetRedirectionHandlingEnabled(KIO__SimpleJob* self, bool handle);
void KIO__SimpleJob_SlotError(KIO__SimpleJob* self, int param1, const libqt_string param2);
libqt_string KIO__SimpleJob_Tr2(const char* s, const char* c);
libqt_string KIO__SimpleJob_Tr3(const char* s, const char* c, int n);
void KIO__SimpleJob_Delete(KIO__SimpleJob* self);

KIO__SimpleJob* KIO_Rmdir(const QUrl* param1);
KIO__SimpleJob* KIO_Chown(const QUrl* param1, const libqt_string param2, const libqt_string param3);
KIO__SimpleJob* KIO_SetModificationTime(const QUrl* param1, const QDateTime* param2);
KIO__SimpleJob* KIO_Rename(const QUrl* param1, const QUrl* param2, int param3);
KIO__SimpleJob* KIO_Symlink(const libqt_string param1, const QUrl* param2, int param3);
KIO__SimpleJob* KIO_Special(const QUrl* param1, const libqt_string param2, int param3);
KIO__SimpleJob* KIO_Mount(bool param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5);
KIO__SimpleJob* KIO_Unmount(const libqt_string param1, int param2);
KIO__SimpleJob* KIO_HttpUpdateCache(const QUrl* param1, bool param2, const QDateTime* param3);
KIO__SimpleJob* KIO_FileDelete(const QUrl* param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
