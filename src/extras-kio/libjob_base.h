#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBJOB_BASE_H
#define SRC_EXTRAS_KIOC_LIBJOB_BASE_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegateExtension)
typedef KIO::JobUiDelegateExtension KIO__JobUiDelegateExtension;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__MetaData)
typedef KIO::MetaData KIO__MetaData;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__JobUiDelegateExtension KIO__JobUiDelegateExtension;
typedef struct KIO__MetaData KIO__MetaData;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__Job_MetaObject(const KIO__Job* self);
void* KIO__Job_Metacast(KIO__Job* self, const char* param1);
int KIO__Job_Metacall(KIO__Job* self, int param1, int param2, void** param3);
libqt_string KIO__Job_Tr(const char* s);
void KIO__Job_Start(KIO__Job* self);
KIO__JobUiDelegateExtension* KIO__Job_UiDelegateExtension(const KIO__Job* self);
void KIO__Job_SetUiDelegateExtension(KIO__Job* self, KIO__JobUiDelegateExtension* extension);
libqt_string KIO__Job_ErrorString(const KIO__Job* self);
libqt_list /* of libqt_string */ KIO__Job_DetailedErrorStrings(const KIO__Job* self);
void KIO__Job_SetParentJob(KIO__Job* self, KIO__Job* parentJob);
KIO__Job* KIO__Job_ParentJob(const KIO__Job* self);
void KIO__Job_SetMetaData(KIO__Job* self, const KIO__MetaData* metaData);
void KIO__Job_AddMetaData(KIO__Job* self, const libqt_string key, const libqt_string value);
void KIO__Job_AddMetaData2(KIO__Job* self, const libqt_map /* of libqt_string to libqt_string */ values);
void KIO__Job_MergeMetaData(KIO__Job* self, const libqt_map /* of libqt_string to libqt_string */ values);
KIO__MetaData* KIO__Job_OutgoingMetaData(const KIO__Job* self);
KIO__MetaData* KIO__Job_MetaData(const KIO__Job* self);
libqt_string KIO__Job_QueryMetaData(KIO__Job* self, const libqt_string key);
void KIO__Job_Connected(KIO__Job* self, KIO__Job* job);
void KIO__Job_Connect_Connected(KIO__Job* self, intptr_t slot);
libqt_string KIO__Job_Tr2(const char* s, const char* c);
libqt_string KIO__Job_Tr3(const char* s, const char* c, int n);
libqt_list /* of libqt_string */ KIO__Job_DetailedErrorStrings1(const KIO__Job* self, const QUrl* reqUrl);
libqt_list /* of libqt_string */ KIO__Job_DetailedErrorStrings2(const KIO__Job* self, const QUrl* reqUrl, int method);
void KIO__Job_Delete(KIO__Job* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
