#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBCHMODJOB_H
#define SRC_EXTRAS_KIOC_LIBCHMODJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__ChmodJob)
typedef KIO::ChmodJob KIO__ChmodJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job)
typedef KIO::Job KIO__Job;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO__ChmodJob KIO__ChmodJob;
typedef struct KIO__Job KIO__Job;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KIO__ChmodJob_MetaObject(const KIO__ChmodJob* self);
void* KIO__ChmodJob_Metacast(KIO__ChmodJob* self, const char* param1);
int KIO__ChmodJob_Metacall(KIO__ChmodJob* self, int param1, int param2, void** param3);
libqt_string KIO__ChmodJob_Tr(const char* s);
libqt_string KIO__ChmodJob_Tr2(const char* s, const char* c);
libqt_string KIO__ChmodJob_Tr3(const char* s, const char* c, int n);
void KIO__ChmodJob_Delete(KIO__ChmodJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
