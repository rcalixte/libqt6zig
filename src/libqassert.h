#pragma once
#ifndef LIBQASSERT_H
#define LIBQASSERT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else

#endif

void qassert_Assert(const char* assertion, const char* file, int line);
void qassert_AssertX(const char* where, const char* what, const char* file, int line);
void qassert_CheckPointer(const char* param1, int param2);
void qassert_QBadAlloc();
bool qassert_AssumeIsDeprecated(bool cond);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
