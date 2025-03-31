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
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionMatch QRegularExpressionMatch;
typedef struct QRegularExpressionMatchIterator QRegularExpressionMatchIterator;
#endif

#ifdef __cplusplus
typedef QRegularExpression::MatchOption MatchOption;                             // C++ enum
typedef QRegularExpression::MatchOptions MatchOptions;                           // C++ QFlags
typedef QRegularExpression::MatchType MatchType;                                 // C++ enum
typedef QRegularExpression::PatternOption PatternOption;                         // C++ enum
typedef QRegularExpression::PatternOptions PatternOptions;                       // C++ QFlags
typedef QRegularExpression::WildcardConversionOption WildcardConversionOption;   // C++ enum
typedef QRegularExpression::WildcardConversionOptions WildcardConversionOptions; // C++ QFlags
#else
typedef int MatchOption;               // C ABI enum
typedef int MatchOptions;              // C ABI QFlags
typedef int MatchType;                 // C ABI enum
typedef int PatternOption;             // C ABI enum
typedef int PatternOptions;            // C ABI QFlags
typedef int WildcardConversionOption;  // C ABI enum
typedef int WildcardConversionOptions; // C ABI QFlags
#endif

QRegularExpression* QRegularExpression_new();
QRegularExpression* QRegularExpression_new2(libqt_string pattern);
QRegularExpression* QRegularExpression_new3(QRegularExpression* re);
QRegularExpression* QRegularExpression_new4(libqt_string pattern, int options);
int QRegularExpression_PatternOptions(const QRegularExpression* self);
void QRegularExpression_SetPatternOptions(QRegularExpression* self, int options);
void QRegularExpression_OperatorAssign(QRegularExpression* self, QRegularExpression* re);
void QRegularExpression_Swap(QRegularExpression* self, QRegularExpression* other);
libqt_string QRegularExpression_Pattern(const QRegularExpression* self);
void QRegularExpression_SetPattern(QRegularExpression* self, libqt_string pattern);
bool QRegularExpression_IsValid(const QRegularExpression* self);
ptrdiff_t QRegularExpression_PatternErrorOffset(const QRegularExpression* self);
libqt_string QRegularExpression_ErrorString(const QRegularExpression* self);
int QRegularExpression_CaptureCount(const QRegularExpression* self);
libqt_list /* of libqt_string */ QRegularExpression_NamedCaptureGroups(const QRegularExpression* self);
QRegularExpressionMatch* QRegularExpression_Match(const QRegularExpression* self, libqt_string subject);
QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch(const QRegularExpression* self, libqt_string subject);
void QRegularExpression_Optimize(const QRegularExpression* self);
libqt_string QRegularExpression_Escape(libqt_string str);
libqt_string QRegularExpression_WildcardToRegularExpression(libqt_string str);
libqt_string QRegularExpression_AnchoredPattern(libqt_string expression);
bool QRegularExpression_OperatorEqual(const QRegularExpression* self, QRegularExpression* re);
bool QRegularExpression_OperatorNotEqual(const QRegularExpression* self, QRegularExpression* re);
QRegularExpressionMatch* QRegularExpression_Match2(const QRegularExpression* self, libqt_string subject, ptrdiff_t offset);
QRegularExpressionMatch* QRegularExpression_Match3(const QRegularExpression* self, libqt_string subject, ptrdiff_t offset, int matchType);
QRegularExpressionMatch* QRegularExpression_Match4(const QRegularExpression* self, libqt_string subject, ptrdiff_t offset, int matchType, int matchOptions);
QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch2(const QRegularExpression* self, libqt_string subject, ptrdiff_t offset);
QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch3(const QRegularExpression* self, libqt_string subject, ptrdiff_t offset, int matchType);
QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch4(const QRegularExpression* self, libqt_string subject, ptrdiff_t offset, int matchType, int matchOptions);
libqt_string QRegularExpression_WildcardToRegularExpression2(libqt_string str, int options);
void QRegularExpression_Delete(QRegularExpression* self);

QRegularExpressionMatch* QRegularExpressionMatch_new();
QRegularExpressionMatch* QRegularExpressionMatch_new2(QRegularExpressionMatch* match);
void QRegularExpressionMatch_OperatorAssign(QRegularExpressionMatch* self, QRegularExpressionMatch* match);
void QRegularExpressionMatch_Swap(QRegularExpressionMatch* self, QRegularExpressionMatch* other);
QRegularExpression* QRegularExpressionMatch_RegularExpression(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_MatchType(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_MatchOptions(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_HasMatch(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_HasPartialMatch(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_IsValid(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_LastCapturedIndex(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_HasCaptured(const QRegularExpressionMatch* self, libqt_string name);
bool QRegularExpressionMatch_HasCapturedWithNth(const QRegularExpressionMatch* self, int nth);
libqt_string QRegularExpressionMatch_Captured(const QRegularExpressionMatch* self);
libqt_string QRegularExpressionMatch_CapturedWithName(const QRegularExpressionMatch* self, libqt_string name);
libqt_list /* of libqt_string */ QRegularExpressionMatch_CapturedTexts(const QRegularExpressionMatch* self);
ptrdiff_t QRegularExpressionMatch_CapturedStart(const QRegularExpressionMatch* self);
ptrdiff_t QRegularExpressionMatch_CapturedLength(const QRegularExpressionMatch* self);
ptrdiff_t QRegularExpressionMatch_CapturedEnd(const QRegularExpressionMatch* self);
ptrdiff_t QRegularExpressionMatch_CapturedStartWithName(const QRegularExpressionMatch* self, libqt_string name);
ptrdiff_t QRegularExpressionMatch_CapturedLengthWithName(const QRegularExpressionMatch* self, libqt_string name);
ptrdiff_t QRegularExpressionMatch_CapturedEndWithName(const QRegularExpressionMatch* self, libqt_string name);
libqt_string QRegularExpressionMatch_Captured1(const QRegularExpressionMatch* self, int nth);
ptrdiff_t QRegularExpressionMatch_CapturedStart1(const QRegularExpressionMatch* self, int nth);
ptrdiff_t QRegularExpressionMatch_CapturedLength1(const QRegularExpressionMatch* self, int nth);
ptrdiff_t QRegularExpressionMatch_CapturedEnd1(const QRegularExpressionMatch* self, int nth);
void QRegularExpressionMatch_Delete(QRegularExpressionMatch* self);

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new();
QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new2(QRegularExpressionMatchIterator* iterator);
void QRegularExpressionMatchIterator_OperatorAssign(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* iterator);
void QRegularExpressionMatchIterator_Swap(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* other);
bool QRegularExpressionMatchIterator_IsValid(const QRegularExpressionMatchIterator* self);
bool QRegularExpressionMatchIterator_HasNext(const QRegularExpressionMatchIterator* self);
QRegularExpressionMatch* QRegularExpressionMatchIterator_Next(QRegularExpressionMatchIterator* self);
QRegularExpressionMatch* QRegularExpressionMatchIterator_PeekNext(const QRegularExpressionMatchIterator* self);
QRegularExpression* QRegularExpressionMatchIterator_RegularExpression(const QRegularExpressionMatchIterator* self);
int QRegularExpressionMatchIterator_MatchType(const QRegularExpressionMatchIterator* self);
int QRegularExpressionMatchIterator_MatchOptions(const QRegularExpressionMatchIterator* self);
void QRegularExpressionMatchIterator_Delete(QRegularExpressionMatchIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
