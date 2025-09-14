#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKFILEFILTER_H
#define SRC_EXTRAS_KIOC_LIBKFILEFILTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFileFilter KFileFilter;
#endif

KFileFilter* KFileFilter_new();
KFileFilter* KFileFilter_new2(const libqt_string label, const libqt_list /* of libqt_string */ filePatterns, const libqt_list /* of libqt_string */ mimePatterns);
KFileFilter* KFileFilter_new3(const KFileFilter* other);
void KFileFilter_OperatorAssign(KFileFilter* self, const KFileFilter* other);
bool KFileFilter_OperatorEqual(const KFileFilter* self, const KFileFilter* other);
libqt_string KFileFilter_Label(const KFileFilter* self);
libqt_list /* of libqt_string */ KFileFilter_FilePatterns(const KFileFilter* self);
libqt_list /* of libqt_string */ KFileFilter_MimePatterns(const KFileFilter* self);
libqt_string KFileFilter_ToFilterString(const KFileFilter* self);
bool KFileFilter_IsEmpty(const KFileFilter* self);
bool KFileFilter_IsValid(const KFileFilter* self);
KFileFilter* KFileFilter_FromMimeType(const libqt_string mimeType);
libqt_list /* of KFileFilter* */ KFileFilter_FromMimeTypes(const libqt_list /* of libqt_string */ mimeTypes);
void KFileFilter_Delete(KFileFilter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
