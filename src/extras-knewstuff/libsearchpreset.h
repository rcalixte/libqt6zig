#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBSEARCHPRESET_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBSEARCHPRESET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__SearchPreset)
typedef KNSCore::SearchPreset KNSCore__SearchPreset;
#endif
typedef KNSCore::SearchRequest KNSCore__SearchRequest;
#else
typedef struct KNSCore__SearchPreset KNSCore__SearchPreset;
typedef struct KNSCore__SearchRequest KNSCore__SearchRequest;
#endif

KNSCore__SearchPreset* KNSCore__SearchPreset_new(const KNSCore__SearchPreset* param1);
KNSCore__SearchRequest* KNSCore__SearchPreset_Request(const KNSCore__SearchPreset* self);
libqt_string KNSCore__SearchPreset_DisplayName(const KNSCore__SearchPreset* self);
libqt_string KNSCore__SearchPreset_IconName(const KNSCore__SearchPreset* self);
int KNSCore__SearchPreset_Type(const KNSCore__SearchPreset* self);
libqt_string KNSCore__SearchPreset_ProviderId(const KNSCore__SearchPreset* self);
void KNSCore__SearchPreset_Delete(KNSCore__SearchPreset* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
