#pragma once
#ifndef EXTRAS_KSYNTAXHIGHLIGHTING_LIBWILDCARDMATCHER_H
#define EXTRAS_KSYNTAXHIGHLIGHTING_LIBWILDCARDMATCHER_H

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
