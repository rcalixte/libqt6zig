#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBWILDCARDMATCHER_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBWILDCARDMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else

#endif

bool KSyntaxHighlighting__WildcardMatcher_ExactMatch(libqt_string candidate, libqt_string wildcard);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
