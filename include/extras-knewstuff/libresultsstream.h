#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBRESULTSSTREAM_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBRESULTSSTREAM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KNSCore::Entry KNSCore__Entry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ResultsStream)
typedef KNSCore::ResultsStream KNSCore__ResultsStream;
#endif
#else
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSCore__ResultsStream KNSCore__ResultsStream;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KNSCore__ResultsStream_MetaObject(const KNSCore__ResultsStream* self);
void* KNSCore__ResultsStream_Metacast(KNSCore__ResultsStream* self, const char* param1);
int KNSCore__ResultsStream_Metacall(KNSCore__ResultsStream* self, int param1, int param2, void** param3);
libqt_string KNSCore__ResultsStream_Tr(const char* s);
void KNSCore__ResultsStream_Fetch(KNSCore__ResultsStream* self);
void KNSCore__ResultsStream_FetchMore(KNSCore__ResultsStream* self);
void KNSCore__ResultsStream_EntriesFound(KNSCore__ResultsStream* self, const libqt_list /* of KNSCore__Entry* */ entries);
void KNSCore__ResultsStream_Connect_EntriesFound(KNSCore__ResultsStream* self, intptr_t slot);
void KNSCore__ResultsStream_Finished(KNSCore__ResultsStream* self);
void KNSCore__ResultsStream_Connect_Finished(KNSCore__ResultsStream* self, intptr_t slot);
libqt_string KNSCore__ResultsStream_Tr2(const char* s, const char* c);
libqt_string KNSCore__ResultsStream_Tr3(const char* s, const char* c, int n);
void KNSCore__ResultsStream_Delete(KNSCore__ResultsStream* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
