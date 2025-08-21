#pragma once
#ifndef SRCC_LIBQ20TYPE_TRAITS_H
#define SRCC_LIBQ20TYPE_TRAITS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct q20 q20;
#endif

bool q20_IsConstantEvaluated();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
