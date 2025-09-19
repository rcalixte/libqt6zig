#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBFILEJOB_H
#define SRC_EXTRAS_KIOC_LIBFILEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__FileJob)
typedef KIO::FileJob KIO__FileJob;
#endif
typedef KIO::Job KIO__Job;
typedef KIO::SimpleJob KIO__SimpleJob;
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__FileJob KIO__FileJob;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__FileJob_MetaObject(const KIO__FileJob* self);
void* KIO__FileJob_Metacast(KIO__FileJob* self, const char* param1);
int KIO__FileJob_Metacall(KIO__FileJob* self, int param1, int param2, void** param3);
libqt_string KIO__FileJob_Tr(const char* s);
void KIO__FileJob_Read(KIO__FileJob* self, unsigned long long size);
void KIO__FileJob_Write(KIO__FileJob* self, const libqt_string data);
void KIO__FileJob_Close(KIO__FileJob* self);
void KIO__FileJob_Seek(KIO__FileJob* self, unsigned long long offset);
void KIO__FileJob_Truncate(KIO__FileJob* self, unsigned long long length);
unsigned long long KIO__FileJob_Size(KIO__FileJob* self);
void KIO__FileJob_Data(KIO__FileJob* self, KIO__Job* job, const libqt_string data);
void KIO__FileJob_Connect_Data(KIO__FileJob* self, intptr_t slot);
void KIO__FileJob_Redirection(KIO__FileJob* self, KIO__Job* job, const QUrl* url);
void KIO__FileJob_Connect_Redirection(KIO__FileJob* self, intptr_t slot);
void KIO__FileJob_MimeTypeFound(KIO__FileJob* self, KIO__Job* job, const libqt_string mimeType);
void KIO__FileJob_Connect_MimeTypeFound(KIO__FileJob* self, intptr_t slot);
void KIO__FileJob_Open(KIO__FileJob* self, KIO__Job* job);
void KIO__FileJob_Connect_Open(KIO__FileJob* self, intptr_t slot);
void KIO__FileJob_Written(KIO__FileJob* self, KIO__Job* job, unsigned long long written);
void KIO__FileJob_Connect_Written(KIO__FileJob* self, intptr_t slot);
void KIO__FileJob_FileClosed(KIO__FileJob* self, KIO__Job* job);
void KIO__FileJob_Connect_FileClosed(KIO__FileJob* self, intptr_t slot);
void KIO__FileJob_Position(KIO__FileJob* self, KIO__Job* job, unsigned long long offset);
void KIO__FileJob_Connect_Position(KIO__FileJob* self, intptr_t slot);
void KIO__FileJob_Truncated(KIO__FileJob* self, KIO__Job* job, unsigned long long length);
void KIO__FileJob_Connect_Truncated(KIO__FileJob* self, intptr_t slot);
libqt_string KIO__FileJob_Tr2(const char* s, const char* c);
libqt_string KIO__FileJob_Tr3(const char* s, const char* c, int n);
void KIO__FileJob_Delete(KIO__FileJob* self);

KIO__FileJob* KIO_Open(const QUrl* param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
