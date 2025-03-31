#pragma once
#ifndef SRCC_LIBQSTRINGMATCHER_H
#define SRCC_LIBQSTRINGMATCHER_H

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
typedef struct QChar QChar;
typedef struct QStringMatcher QStringMatcher;
#endif

QStringMatcher* QStringMatcher_new();
QStringMatcher* QStringMatcher_new2(libqt_string pattern);
QStringMatcher* QStringMatcher_new3(QChar* uc, ptrdiff_t lenVal);
QStringMatcher* QStringMatcher_new4(QStringMatcher* other);
QStringMatcher* QStringMatcher_new5(libqt_string pattern, int cs);
QStringMatcher* QStringMatcher_new6(QChar* uc, ptrdiff_t lenVal, int cs);
void QStringMatcher_OperatorAssign(QStringMatcher* self, QStringMatcher* other);
void QStringMatcher_SetPattern(QStringMatcher* self, libqt_string pattern);
void QStringMatcher_SetCaseSensitivity(QStringMatcher* self, int cs);
ptrdiff_t QStringMatcher_IndexIn(const QStringMatcher* self, libqt_string str);
ptrdiff_t QStringMatcher_IndexIn2(const QStringMatcher* self, QChar* str, ptrdiff_t length);
libqt_string QStringMatcher_Pattern(const QStringMatcher* self);
int QStringMatcher_CaseSensitivity(const QStringMatcher* self);
ptrdiff_t QStringMatcher_IndexIn22(const QStringMatcher* self, libqt_string str, ptrdiff_t from);
ptrdiff_t QStringMatcher_IndexIn3(const QStringMatcher* self, QChar* str, ptrdiff_t length, ptrdiff_t from);
void QStringMatcher_Delete(QStringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
