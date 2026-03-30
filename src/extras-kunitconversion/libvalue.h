#pragma once
#ifndef SRC_EXTRAS_KUNITCONVERSIONC_LIBVALUE_H
#define SRC_EXTRAS_KUNITCONVERSIONC_LIBVALUE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Unit)
typedef KUnitConversion::Unit KUnitConversion__Unit;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Value)
typedef KUnitConversion::Value KUnitConversion__Value;
#endif
#else
typedef struct KUnitConversion__Unit KUnitConversion__Unit;
typedef struct KUnitConversion__Value KUnitConversion__Value;
typedef struct QChar QChar;
typedef struct QVariant QVariant;
#endif

KUnitConversion__Value* KUnitConversion__Value_new();
KUnitConversion__Value* KUnitConversion__Value_new2(double number, const KUnitConversion__Unit* unit);
KUnitConversion__Value* KUnitConversion__Value_new3(double number, const libqt_string unitString);
KUnitConversion__Value* KUnitConversion__Value_new4(double number, int unitId);
KUnitConversion__Value* KUnitConversion__Value_new5(const QVariant* number, const libqt_string unitString);
KUnitConversion__Value* KUnitConversion__Value_new6(const KUnitConversion__Value* other);
void KUnitConversion__Value_OperatorAssign(KUnitConversion__Value* self, const KUnitConversion__Value* other);
void KUnitConversion__Value_Swap(KUnitConversion__Value* self, KUnitConversion__Value* other);
bool KUnitConversion__Value_OperatorEqual(const KUnitConversion__Value* self, const KUnitConversion__Value* other);
bool KUnitConversion__Value_OperatorNotEqual(const KUnitConversion__Value* self, const KUnitConversion__Value* other);
bool KUnitConversion__Value_IsNull(const KUnitConversion__Value* self);
bool KUnitConversion__Value_IsValid(const KUnitConversion__Value* self);
double KUnitConversion__Value_Number(const KUnitConversion__Value* self);
KUnitConversion__Unit* KUnitConversion__Value_Unit(const KUnitConversion__Value* self);
libqt_string KUnitConversion__Value_ToString(const KUnitConversion__Value* self);
libqt_string KUnitConversion__Value_ToSymbolString(const KUnitConversion__Value* self);
KUnitConversion__Value* KUnitConversion__Value_Round(KUnitConversion__Value* self, unsigned int decimals);
KUnitConversion__Value* KUnitConversion__Value_ConvertTo(const KUnitConversion__Value* self, const KUnitConversion__Unit* unit);
KUnitConversion__Value* KUnitConversion__Value_ConvertTo2(const KUnitConversion__Value* self, int unit);
KUnitConversion__Value* KUnitConversion__Value_ConvertTo3(const KUnitConversion__Value* self, const libqt_string unit);
libqt_string KUnitConversion__Value_ToString1(const KUnitConversion__Value* self, int fieldWidth);
libqt_string KUnitConversion__Value_ToString2(const KUnitConversion__Value* self, int fieldWidth, char format);
libqt_string KUnitConversion__Value_ToString3(const KUnitConversion__Value* self, int fieldWidth, char format, int precision);
libqt_string KUnitConversion__Value_ToString4(const KUnitConversion__Value* self, int fieldWidth, char format, int precision, const QChar* fillChar);
libqt_string KUnitConversion__Value_ToSymbolString1(const KUnitConversion__Value* self, int fieldWidth);
libqt_string KUnitConversion__Value_ToSymbolString2(const KUnitConversion__Value* self, int fieldWidth, char format);
libqt_string KUnitConversion__Value_ToSymbolString3(const KUnitConversion__Value* self, int fieldWidth, char format, int precision);
libqt_string KUnitConversion__Value_ToSymbolString4(const KUnitConversion__Value* self, int fieldWidth, char format, int precision, const QChar* fillChar);
void KUnitConversion__Value_Delete(KUnitConversion__Value* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
