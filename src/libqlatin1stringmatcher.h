#pragma once
#ifndef SRCC_LIBQLATIN1STRINGMATCHER_H
#define SRCC_LIBQLATIN1STRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
void QLatin1StringMatcher_SetCaseSensitivity(QLatin1StringMatcher* self, int cs);
int QLatin1StringMatcher_CaseSensitivity(const QLatin1StringMatcher* self);
void QLatin1StringMatcher_Delete(QLatin1StringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
