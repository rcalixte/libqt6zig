#pragma once
#ifndef SRCC_LIBQREGULAREXPRESSION_H
#define SRCC_LIBQREGULAREXPRESSION_H

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
typedef struct QAnyStringView QAnyStringView;
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionMatch QRegularExpressionMatch;
#endif

QRegularExpression* QRegularExpression_new();
QRegularExpression* QRegularExpression_new2(const libqt_string pattern);
QRegularExpression* QRegularExpression_new3(const QRegularExpression* re);
QRegularExpression* QRegularExpression_new4(const libqt_string pattern, int options);
int QRegularExpression_PatternOptions(const QRegularExpression* self);
void QRegularExpression_SetPatternOptions(QRegularExpression* self, int options);
void QRegularExpression_OperatorAssign(QRegularExpression* self, const QRegularExpression* re);
void QRegularExpression_Swap(QRegularExpression* self, QRegularExpression* other);
libqt_string QRegularExpression_Pattern(const QRegularExpression* self);
void QRegularExpression_SetPattern(QRegularExpression* self, const libqt_string pattern);
bool QRegularExpression_IsValid(const QRegularExpression* self);
ptrdiff_t QRegularExpression_PatternErrorOffset(const QRegularExpression* self);
libqt_string QRegularExpression_ErrorString(const QRegularExpression* self);
int QRegularExpression_CaptureCount(const QRegularExpression* self);
libqt_list /* of libqt_string */ QRegularExpression_NamedCaptureGroups(const QRegularExpression* self);
QRegularExpressionMatch* QRegularExpression_Match(const QRegularExpression* self, const libqt_string subject);
void QRegularExpression_Optimize(const QRegularExpression* self);
libqt_string QRegularExpression_Escape(const libqt_string str);
libqt_string QRegularExpression_WildcardToRegularExpression(const libqt_string str);
libqt_string QRegularExpression_AnchoredPattern(const libqt_string expression);
QRegularExpressionMatch* QRegularExpression_Match22(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset);
QRegularExpressionMatch* QRegularExpression_Match3(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset, int matchType);
QRegularExpressionMatch* QRegularExpression_Match4(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset, int matchType, int matchOptions);
libqt_string QRegularExpression_WildcardToRegularExpression22(const libqt_string str, int options);
void QRegularExpression_Delete(QRegularExpression* self);

QRegularExpressionMatch* QRegularExpressionMatch_new();
QRegularExpressionMatch* QRegularExpressionMatch_new2(const QRegularExpressionMatch* match);
void QRegularExpressionMatch_OperatorAssign(QRegularExpressionMatch* self, const QRegularExpressionMatch* match);
void QRegularExpressionMatch_Swap(QRegularExpressionMatch* self, QRegularExpressionMatch* other);
QRegularExpression* QRegularExpressionMatch_RegularExpression(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_MatchType(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_MatchOptions(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_HasMatch(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_HasPartialMatch(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_IsValid(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_LastCapturedIndex(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_HasCaptured(const QRegularExpressionMatch* self, libqt_string name);
bool QRegularExpressionMatch_HasCaptured2(const QRegularExpressionMatch* self, int nth);
libqt_string QRegularExpressionMatch_Captured(const QRegularExpressionMatch* self);
libqt_string QRegularExpressionMatch_Captured2(const QRegularExpressionMatch* self, libqt_string name);
libqt_list /* of libqt_string */ QRegularExpressionMatch_CapturedTexts(const QRegularExpressionMatch* self);
ptrdiff_t QRegularExpressionMatch_CapturedStart(const QRegularExpressionMatch* self);
ptrdiff_t QRegularExpressionMatch_CapturedLength(const QRegularExpressionMatch* self);
ptrdiff_t QRegularExpressionMatch_CapturedEnd(const QRegularExpressionMatch* self);
ptrdiff_t QRegularExpressionMatch_CapturedStart2(const QRegularExpressionMatch* self, libqt_string name);
ptrdiff_t QRegularExpressionMatch_CapturedLength2(const QRegularExpressionMatch* self, libqt_string name);
ptrdiff_t QRegularExpressionMatch_CapturedEnd2(const QRegularExpressionMatch* self, libqt_string name);
libqt_string QRegularExpressionMatch_Captured1(const QRegularExpressionMatch* self, int nth);
ptrdiff_t QRegularExpressionMatch_CapturedStart1(const QRegularExpressionMatch* self, int nth);
ptrdiff_t QRegularExpressionMatch_CapturedLength1(const QRegularExpressionMatch* self, int nth);
ptrdiff_t QRegularExpressionMatch_CapturedEnd1(const QRegularExpressionMatch* self, int nth);
void QRegularExpressionMatch_Delete(QRegularExpressionMatch* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
