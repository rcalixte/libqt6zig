#pragma once
#ifndef SRCC_LIBQTEXTSTREAM_H
#define SRCC_LIBQTEXTSTREAM_H

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
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QLocale QLocale;
typedef struct QTextStream QTextStream;
#endif

QTextStream* QTextStream_new();
QTextStream* QTextStream_new2(QIODevice* device);
QTextStream* QTextStream_new3(const libqt_string array);
QTextStream* QTextStream_new4(const libqt_string array, int openMode);
void QTextStream_SetEncoding(QTextStream* self, int encoding);
int QTextStream_Encoding(const QTextStream* self);
void QTextStream_SetAutoDetectUnicode(QTextStream* self, bool enabled);
bool QTextStream_AutoDetectUnicode(const QTextStream* self);
void QTextStream_SetGenerateByteOrderMark(QTextStream* self, bool generate);
bool QTextStream_GenerateByteOrderMark(const QTextStream* self);
void QTextStream_SetLocale(QTextStream* self, const QLocale* locale);
QLocale* QTextStream_Locale(const QTextStream* self);
void QTextStream_SetDevice(QTextStream* self, QIODevice* device);
QIODevice* QTextStream_Device(const QTextStream* self);
libqt_string QTextStream_String(const QTextStream* self);
int QTextStream_Status(const QTextStream* self);
void QTextStream_SetStatus(QTextStream* self, int status);
void QTextStream_ResetStatus(QTextStream* self);
bool QTextStream_AtEnd(const QTextStream* self);
void QTextStream_Reset(QTextStream* self);
void QTextStream_Flush(QTextStream* self);
bool QTextStream_Seek(QTextStream* self, long long pos);
long long QTextStream_Pos(const QTextStream* self);
void QTextStream_SkipWhiteSpace(QTextStream* self);
libqt_string QTextStream_ReadLine(QTextStream* self);
libqt_string QTextStream_ReadAll(QTextStream* self);
libqt_string QTextStream_Read(QTextStream* self, long long maxlen);
void QTextStream_SetFieldAlignment(QTextStream* self, int alignment);
int QTextStream_FieldAlignment(const QTextStream* self);
void QTextStream_SetPadChar(QTextStream* self, QChar* ch);
QChar* QTextStream_PadChar(const QTextStream* self);
void QTextStream_SetFieldWidth(QTextStream* self, int width);
int QTextStream_FieldWidth(const QTextStream* self);
void QTextStream_SetNumberFlags(QTextStream* self, int flags);
int QTextStream_NumberFlags(const QTextStream* self);
void QTextStream_SetIntegerBase(QTextStream* self, int base);
int QTextStream_IntegerBase(const QTextStream* self);
void QTextStream_SetRealNumberNotation(QTextStream* self, int notation);
int QTextStream_RealNumberNotation(const QTextStream* self);
void QTextStream_SetRealNumberPrecision(QTextStream* self, int precision);
int QTextStream_RealNumberPrecision(const QTextStream* self);
QTextStream* QTextStream_OperatorShiftRight(QTextStream* self, QChar* ch);
QTextStream* QTextStream_OperatorShiftRight2(QTextStream* self, char* ch);
QTextStream* QTextStream_OperatorShiftRight4(QTextStream* self, int16_t* i);
QTextStream* QTextStream_OperatorShiftRight5(QTextStream* self, uint16_t* i);
QTextStream* QTextStream_OperatorShiftRight6(QTextStream* self, int* i);
QTextStream* QTextStream_OperatorShiftRight7(QTextStream* self, unsigned int* i);
QTextStream* QTextStream_OperatorShiftRight8(QTextStream* self, long* i);
QTextStream* QTextStream_OperatorShiftRight9(QTextStream* self, unsigned long* i);
QTextStream* QTextStream_OperatorShiftRight10(QTextStream* self, long long* i);
QTextStream* QTextStream_OperatorShiftRight11(QTextStream* self, unsigned long long* i);
QTextStream* QTextStream_OperatorShiftRight12(QTextStream* self, float* f);
QTextStream* QTextStream_OperatorShiftRight13(QTextStream* self, double* f);
QTextStream* QTextStream_OperatorShiftRight14(QTextStream* self, libqt_string s);
QTextStream* QTextStream_OperatorShiftRight15(QTextStream* self, libqt_string array);
QTextStream* QTextStream_OperatorShiftRight16(QTextStream* self, char* c);
QTextStream* QTextStream_OperatorShiftLeft(QTextStream* self, QChar* ch);
QTextStream* QTextStream_OperatorShiftLeft2(QTextStream* self, char ch);
QTextStream* QTextStream_OperatorShiftLeft4(QTextStream* self, int16_t i);
QTextStream* QTextStream_OperatorShiftLeft5(QTextStream* self, uint16_t i);
QTextStream* QTextStream_OperatorShiftLeft6(QTextStream* self, int i);
QTextStream* QTextStream_OperatorShiftLeft7(QTextStream* self, unsigned int i);
QTextStream* QTextStream_OperatorShiftLeft8(QTextStream* self, long i);
QTextStream* QTextStream_OperatorShiftLeft9(QTextStream* self, unsigned long i);
QTextStream* QTextStream_OperatorShiftLeft10(QTextStream* self, long long i);
QTextStream* QTextStream_OperatorShiftLeft11(QTextStream* self, unsigned long long i);
QTextStream* QTextStream_OperatorShiftLeft12(QTextStream* self, float f);
QTextStream* QTextStream_OperatorShiftLeft13(QTextStream* self, double f);
QTextStream* QTextStream_OperatorShiftLeft14(QTextStream* self, const libqt_string s);
QTextStream* QTextStream_OperatorShiftLeft17(QTextStream* self, const libqt_string array);
QTextStream* QTextStream_OperatorShiftLeft18(QTextStream* self, const char* c);
QTextStream* QTextStream_OperatorShiftLeft19(QTextStream* self, const void* ptr);
libqt_string QTextStream_ReadLine1(QTextStream* self, long long maxlen);
void QTextStream_Delete(QTextStream* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
