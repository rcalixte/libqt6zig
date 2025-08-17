#pragma once
#ifndef SRCC_LIBQCHAR_H
#define SRCC_LIBQCHAR_H

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
typedef struct QLatin1Char QLatin1Char;
#endif

QLatin1Char* QLatin1Char_new(const QLatin1Char* other);
QLatin1Char* QLatin1Char_new2(QLatin1Char* other);
QLatin1Char* QLatin1Char_new3(char c);
QLatin1Char* QLatin1Char_new4(const QLatin1Char* param1);
void QLatin1Char_CopyAssign(QLatin1Char* self, QLatin1Char* other);
void QLatin1Char_MoveAssign(QLatin1Char* self, QLatin1Char* other);
char QLatin1Char_ToLatin1(const QLatin1Char* self);
void QLatin1Char_Delete(QLatin1Char* self);

QChar* QChar_new(const QChar* other);
QChar* QChar_new2(QChar* other);
QChar* QChar_new3();
QChar* QChar_new4(uint16_t rc);
QChar* QChar_new5(unsigned char c, unsigned char r);
QChar* QChar_new6(int16_t rc);
QChar* QChar_new7(unsigned int rc);
QChar* QChar_new8(int rc);
QChar* QChar_new9(int s);
QChar* QChar_new10(QLatin1Char* ch);
QChar* QChar_new11(char c);
QChar* QChar_new12(unsigned char c);
QChar* QChar_new13(const QChar* param1);
void QChar_CopyAssign(QChar* self, QChar* other);
void QChar_MoveAssign(QChar* self, QChar* other);
int QChar_Category(const QChar* self);
int QChar_Direction(const QChar* self);
int QChar_JoiningType(const QChar* self);
unsigned char QChar_CombiningClass(const QChar* self);
QChar* QChar_MirroredChar(const QChar* self);
bool QChar_HasMirrored(const QChar* self);
libqt_string QChar_Decomposition(const QChar* self);
int QChar_DecompositionTag(const QChar* self);
int QChar_DigitValue(const QChar* self);
QChar* QChar_ToLower(const QChar* self);
QChar* QChar_ToUpper(const QChar* self);
QChar* QChar_ToTitleCase(const QChar* self);
QChar* QChar_ToCaseFolded(const QChar* self);
int QChar_Script(const QChar* self);
int QChar_UnicodeVersion(const QChar* self);
char QChar_ToLatin1(const QChar* self);
QChar* QChar_FromLatin1(char c);
bool QChar_IsNull(const QChar* self);
bool QChar_IsPrint(const QChar* self);
bool QChar_IsSpace(const QChar* self);
bool QChar_IsMark(const QChar* self);
bool QChar_IsPunct(const QChar* self);
bool QChar_IsSymbol(const QChar* self);
bool QChar_IsLetter(const QChar* self);
bool QChar_IsNumber(const QChar* self);
bool QChar_IsLetterOrNumber(const QChar* self);
bool QChar_IsDigit(const QChar* self);
bool QChar_IsLower(const QChar* self);
bool QChar_IsUpper(const QChar* self);
bool QChar_IsTitleCase(const QChar* self);
bool QChar_IsNonCharacter(const QChar* self);
bool QChar_IsHighSurrogate(const QChar* self);
bool QChar_IsLowSurrogate(const QChar* self);
bool QChar_IsSurrogate(const QChar* self);
unsigned char QChar_Cell(const QChar* self);
unsigned char QChar_Row(const QChar* self);
void QChar_SetCell(QChar* self, unsigned char acell);
void QChar_SetRow(QChar* self, unsigned char arow);
int QChar_CurrentUnicodeVersion();
void QChar_Delete(QChar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
