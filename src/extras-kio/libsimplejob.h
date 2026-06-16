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
typedef KIO::Job KIO__Job;
typedef KIO::MetaData KIO__MetaData;
typedef KIO::SimpleJob KIO__SimpleJob;
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
QUrl* KIO__SimpleJob_Url(const KIO__SimpleJob* self);
void KIO__SimpleJob_PutOnHold(KIO__SimpleJob* self);
void KIO__SimpleJob_RemoveOnHold();
bool KIO__SimpleJob_IsRedirectionHandlingEnabled(const KIO__SimpleJob* self);
void KIO__SimpleJob_SetRedirectionHandlingEnabled(KIO__SimpleJob* self, bool handle);
void KIO__SimpleJob_SlotError(KIO__SimpleJob* self, int param1, const libqt_string param2);
void KIO__SimpleJob_Delete(KIO__SimpleJob* self);

KIO__SimpleJob* KIO_Rmdir(const QUrl* url);
KIO__SimpleJob* KIO_Chown(const QUrl* url, const libqt_string owner, const libqt_string group);
KIO__SimpleJob* KIO_SetModificationTime(const QUrl* url, const QDateTime* mtime);
KIO__SimpleJob* KIO_Rename(const QUrl* src, const QUrl* dest, int flags);
KIO__SimpleJob* KIO_Symlink(const libqt_string target, const QUrl* dest, int flags);
KIO__SimpleJob* KIO_Special(const QUrl* url, const libqt_string data, int flags);
KIO__SimpleJob* KIO_Mount(bool ro, const libqt_string fstype, const libqt_string dev, const libqt_string point, int flags);
KIO__SimpleJob* KIO_Unmount(const libqt_string point, int flags);
KIO__SimpleJob* KIO_HttpUpdateCache(const QUrl* url, bool no_cache, const QDateTime* expireDate);
KIO__SimpleJob* KIO_FileDelete(const QUrl* src, int flags);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
