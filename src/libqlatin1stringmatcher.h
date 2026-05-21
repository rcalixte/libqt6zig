#pragma once
#ifndef SRCC_LIBQLATIN1STRINGMATCHER_H
#define SRCC_LIBQLATIN1STRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLatin1StringMatcher QLatin1StringMatcher;
#endif

QLatin1StringMatcher* QLatin1StringMatcher_new();
QLatin1StringMatcher* QLatin1StringMatcher_new2(libqt_string pattern);
QLatin1StringMatcher* QLatin1StringMatcher_new3(libqt_string pattern, int cs);
void QLatin1StringMatcher_SetPattern(QLatin1StringMatcher* self, libqt_string pattern);
libqt_string QLatin1StringMatcher_Pattern(const QLatin1StringMatcher* self);
void QLatin1StringMatcher_SetCaseSensitivity(QLatin1StringMatcher* self, int cs);
int QLatin1StringMatcher_CaseSensitivity(const QLatin1StringMatcher* self);
ptrdiff_t QLatin1StringMatcher_IndexIn(const QLatin1StringMatcher* self, libqt_string haystack);
ptrdiff_t QLatin1StringMatcher_IndexIn2(const QLatin1StringMatcher* self, libqt_string haystack);
ptrdiff_t QLatin1StringMatcher_IndexIn22(const QLatin1StringMatcher* self, libqt_string haystack, ptrdiff_t from);
ptrdiff_t QLatin1StringMatcher_IndexIn23(const QLatin1StringMatcher* self, libqt_string haystack, ptrdiff_t from);
void QLatin1StringMatcher_Delete(QLatin1StringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
