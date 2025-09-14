#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBWORKERFACTORY_H
#define SRC_EXTRAS_KIOC_LIBWORKERFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerFactory)
typedef KIO::WorkerFactory KIO__WorkerFactory;
#endif
#else
typedef struct KIO__WorkerFactory KIO__WorkerFactory;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KIO__WorkerFactory_MetaObject(const KIO__WorkerFactory* self);
void* KIO__WorkerFactory_Metacast(KIO__WorkerFactory* self, const char* param1);
int KIO__WorkerFactory_Metacall(KIO__WorkerFactory* self, int param1, int param2, void** param3);
libqt_string KIO__WorkerFactory_Tr(const char* s);
libqt_string KIO__WorkerFactory_Tr2(const char* s, const char* c);
libqt_string KIO__WorkerFactory_Tr3(const char* s, const char* c, int n);
void KIO__WorkerFactory_Delete(KIO__WorkerFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
