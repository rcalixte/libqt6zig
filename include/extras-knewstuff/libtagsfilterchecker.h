#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBTAGSFILTERCHECKER_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBTAGSFILTERCHECKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__TagsFilterChecker)
typedef KNSCore::TagsFilterChecker KNSCore__TagsFilterChecker;
#endif
#else
typedef struct KNSCore__TagsFilterChecker KNSCore__TagsFilterChecker;
#endif

KNSCore__TagsFilterChecker* KNSCore__TagsFilterChecker_new(const libqt_list /* of libqt_string */ tagFilter);
bool KNSCore__TagsFilterChecker_FilterAccepts(KNSCore__TagsFilterChecker* self, const libqt_list /* of libqt_string */ tags);
void KNSCore__TagsFilterChecker_Delete(KNSCore__TagsFilterChecker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
