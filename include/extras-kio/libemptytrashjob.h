#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBEMPTYTRASHJOB_H
#define SRC_EXTRAS_KIOC_LIBEMPTYTRASHJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__EmptyTrashJob)
typedef KIO::EmptyTrashJob KIO__EmptyTrashJob;
#endif
typedef KIO::Job KIO__Job;
typedef KIO::SimpleJob KIO__SimpleJob;
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__EmptyTrashJob KIO__EmptyTrashJob;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KIO__EmptyTrashJob_MetaObject(const KIO__EmptyTrashJob* self);
void* KIO__EmptyTrashJob_Metacast(KIO__EmptyTrashJob* self, const char* param1);
int KIO__EmptyTrashJob_Metacall(KIO__EmptyTrashJob* self, int param1, int param2, void** param3);
libqt_string KIO__EmptyTrashJob_Tr(const char* s);
libqt_string KIO__EmptyTrashJob_Tr2(const char* s, const char* c);
libqt_string KIO__EmptyTrashJob_Tr3(const char* s, const char* c, int n);
void KIO__EmptyTrashJob_Delete(KIO__EmptyTrashJob* self);

KIO__EmptyTrashJob* KIO_EmptyTrash();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
