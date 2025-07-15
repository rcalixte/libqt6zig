#pragma once
#ifndef SRCC_LIBQBYTEARRAYMATCHER_H
#define SRCC_LIBQBYTEARRAYMATCHER_H

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
typedef struct QByteArrayMatcher QByteArrayMatcher;
typedef struct QByteArrayView QByteArrayView;
typedef struct QStaticByteArrayMatcherBase QStaticByteArrayMatcherBase;
#endif

QByteArrayMatcher* QByteArrayMatcher_new();
QByteArrayMatcher* QByteArrayMatcher_new2(const libqt_string pattern);
QByteArrayMatcher* QByteArrayMatcher_new3(QByteArrayView* pattern);
QByteArrayMatcher* QByteArrayMatcher_new4(const char* pattern);
QByteArrayMatcher* QByteArrayMatcher_new5(const QByteArrayMatcher* other);
QByteArrayMatcher* QByteArrayMatcher_new6(const char* pattern, ptrdiff_t length);
void QByteArrayMatcher_OperatorAssign(QByteArrayMatcher* self, const QByteArrayMatcher* other);
void QByteArrayMatcher_SetPattern(QByteArrayMatcher* self, const libqt_string pattern);
ptrdiff_t QByteArrayMatcher_IndexIn(const QByteArrayMatcher* self, const char* str, ptrdiff_t lenVal);
ptrdiff_t QByteArrayMatcher_IndexIn2(const QByteArrayMatcher* self, QByteArrayView* data);
libqt_string QByteArrayMatcher_Pattern(const QByteArrayMatcher* self);
ptrdiff_t QByteArrayMatcher_IndexIn3(const QByteArrayMatcher* self, const char* str, ptrdiff_t lenVal, ptrdiff_t from);
ptrdiff_t QByteArrayMatcher_IndexIn22(const QByteArrayMatcher* self, QByteArrayView* data, ptrdiff_t from);
void QByteArrayMatcher_Delete(QByteArrayMatcher* self);

QStaticByteArrayMatcherBase* QStaticByteArrayMatcherBase_new(const QStaticByteArrayMatcherBase* other);
void QStaticByteArrayMatcherBase_CopyAssign(QStaticByteArrayMatcherBase* self, QStaticByteArrayMatcherBase* other);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
