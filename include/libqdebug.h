#pragma once
#ifndef SRCC_LIBQDEBUG_H
#define SRCC_LIBQDEBUG_H

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
typedef struct QByteArrayView QByteArrayView;
typedef struct QChar QChar;
typedef struct QDebug QDebug;
typedef struct QDebugStateSaver QDebugStateSaver;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QNoDebug QNoDebug;
#endif

QDebug* QDebug_new(QIODevice* device);
QDebug* QDebug_new2(const QDebug* o);
void QDebug_OperatorAssign(QDebug* self, const QDebug* other);
void QDebug_Swap(QDebug* self, QDebug* other);
QDebug* QDebug_ResetFormat(QDebug* self);
QDebug* QDebug_Space(QDebug* self);
QDebug* QDebug_Nospace(QDebug* self);
QDebug* QDebug_MaybeSpace(QDebug* self);
QDebug* QDebug_Verbosity(QDebug* self, int verbosityLevel);
int QDebug_Verbosity2(const QDebug* self);
void QDebug_SetVerbosity(QDebug* self, int verbosityLevel);
bool QDebug_AutoInsertSpaces(const QDebug* self);
void QDebug_SetAutoInsertSpaces(QDebug* self, bool b);
bool QDebug_QuoteStrings(const QDebug* self);
void QDebug_SetQuoteStrings(QDebug* self, bool b);
QDebug* QDebug_Quote(QDebug* self);
QDebug* QDebug_Noquote(QDebug* self);
QDebug* QDebug_MaybeQuote(QDebug* self);
QDebug* QDebug_OperatorShiftLeft(QDebug* self, QChar* t);
QDebug* QDebug_OperatorShiftLeft2(QDebug* self, bool t);
QDebug* QDebug_OperatorShiftLeft3(QDebug* self, char t);
QDebug* QDebug_OperatorShiftLeft4(QDebug* self, int16_t t);
QDebug* QDebug_OperatorShiftLeft5(QDebug* self, uint16_t t);
QDebug* QDebug_OperatorShiftLeft8(QDebug* self, int t);
QDebug* QDebug_OperatorShiftLeft9(QDebug* self, unsigned int t);
QDebug* QDebug_OperatorShiftLeft10(QDebug* self, long t);
QDebug* QDebug_OperatorShiftLeft11(QDebug* self, unsigned long t);
QDebug* QDebug_OperatorShiftLeft12(QDebug* self, long long t);
QDebug* QDebug_OperatorShiftLeft13(QDebug* self, unsigned long long t);
QDebug* QDebug_OperatorShiftLeft15(QDebug* self, float t);
QDebug* QDebug_OperatorShiftLeft16(QDebug* self, double t);
QDebug* QDebug_OperatorShiftLeft17(QDebug* self, const char* t);
QDebug* QDebug_OperatorShiftLeft19(QDebug* self, const libqt_string t);
QDebug* QDebug_OperatorShiftLeft23(QDebug* self, const libqt_string t);
QDebug* QDebug_OperatorShiftLeft24(QDebug* self, QByteArrayView* t);
QDebug* QDebug_OperatorShiftLeft25(QDebug* self, const void* t);
QDebug* QDebug_MaybeQuote1(QDebug* self, char c);
void QDebug_Delete(QDebug* self);

QDebugStateSaver* QDebugStateSaver_new(QDebug* dbg);
void QDebugStateSaver_Delete(QDebugStateSaver* self);

QNoDebug* QNoDebug_new(const QNoDebug* other);
QNoDebug* QNoDebug_new2(QNoDebug* other);
void QNoDebug_CopyAssign(QNoDebug* self, QNoDebug* other);
void QNoDebug_MoveAssign(QNoDebug* self, QNoDebug* other);
QNoDebug* QNoDebug_Space(QNoDebug* self);
QNoDebug* QNoDebug_Nospace(QNoDebug* self);
QNoDebug* QNoDebug_MaybeSpace(QNoDebug* self);
QNoDebug* QNoDebug_Quote(QNoDebug* self);
QNoDebug* QNoDebug_Noquote(QNoDebug* self);
QNoDebug* QNoDebug_MaybeQuote(QNoDebug* self);
QNoDebug* QNoDebug_Verbosity(QNoDebug* self, int param1);
QNoDebug* QNoDebug_MaybeQuote1(QNoDebug* self, const char param1);
void QNoDebug_Delete(QNoDebug* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
