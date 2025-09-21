#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBCATEGORYMETADATA_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBCATEGORYMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__CategoryMetadata)
typedef KNSCore::CategoryMetadata KNSCore__CategoryMetadata;
#endif
#else
typedef struct KNSCore__CategoryMetadata KNSCore__CategoryMetadata;
#endif

KNSCore__CategoryMetadata* KNSCore__CategoryMetadata_new(const KNSCore__CategoryMetadata* param1);
libqt_string KNSCore__CategoryMetadata_Id(const KNSCore__CategoryMetadata* self);
libqt_string KNSCore__CategoryMetadata_Name(const KNSCore__CategoryMetadata* self);
libqt_string KNSCore__CategoryMetadata_DisplayName(const KNSCore__CategoryMetadata* self);
void KNSCore__CategoryMetadata_Delete(KNSCore__CategoryMetadata* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
