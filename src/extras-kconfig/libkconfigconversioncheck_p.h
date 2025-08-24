#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKCONFIGCONVERSIONCHECK_P_H
#define SRC_EXTRAS_KCONFIGC_LIBKCONFIGCONVERSIONCHECK_P_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KConfigConversionCheck__supported)
typedef KConfigConversionCheck::supported KConfigConversionCheck__supported;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KConfigConversionCheck__unsupported)
typedef KConfigConversionCheck::unsupported KConfigConversionCheck__unsupported;
#endif
#else
typedef struct KConfigConversionCheck__supported KConfigConversionCheck__supported;
typedef struct KConfigConversionCheck__unsupported KConfigConversionCheck__unsupported;
#endif

KConfigConversionCheck__supported* KConfigConversionCheck__supported_new(const KConfigConversionCheck__supported* other);
KConfigConversionCheck__supported* KConfigConversionCheck__supported_new2(KConfigConversionCheck__supported* other);
void KConfigConversionCheck__supported_CopyAssign(KConfigConversionCheck__supported* self, KConfigConversionCheck__supported* other);
void KConfigConversionCheck__supported_MoveAssign(KConfigConversionCheck__supported* self, KConfigConversionCheck__supported* other);
void KConfigConversionCheck__supported_Delete(KConfigConversionCheck__supported* self);

KConfigConversionCheck__unsupported* KConfigConversionCheck__unsupported_new(const KConfigConversionCheck__unsupported* other);
KConfigConversionCheck__unsupported* KConfigConversionCheck__unsupported_new2(KConfigConversionCheck__unsupported* other);
void KConfigConversionCheck__unsupported_CopyAssign(KConfigConversionCheck__unsupported* self, KConfigConversionCheck__unsupported* other);
void KConfigConversionCheck__unsupported_MoveAssign(KConfigConversionCheck__unsupported* self, KConfigConversionCheck__unsupported* other);
void KConfigConversionCheck__unsupported_Delete(KConfigConversionCheck__unsupported* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
