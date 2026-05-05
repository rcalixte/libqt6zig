#pragma once
#ifndef SRCC_LIBQANYSTRINGVIEW_H
#define SRCC_LIBQANYSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChar QChar;
#endif

int QAnyStringView_Compare(const char* lhs, const char* rhs);
bool QAnyStringView_Equal(const char* lhs, const char* rhs);
int QAnyStringView_Compare3(const char* lhs, const char* rhs, int cs);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
