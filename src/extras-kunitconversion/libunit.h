#pragma once
#ifndef SRC_EXTRAS_KUNITCONVERSIONC_LIBUNIT_H
#define SRC_EXTRAS_KUNITCONVERSIONC_LIBUNIT_H

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
typedef KUnitConversion::UnitCategory KUnitConversion__UnitCategory;
#else
typedef struct KUnitConversion__Unit KUnitConversion__Unit;
typedef struct KUnitConversion__UnitCategory KUnitConversion__UnitCategory;
typedef struct QChar QChar;
#endif

KUnitConversion__Unit* KUnitConversion__Unit_new();
KUnitConversion__Unit* KUnitConversion__Unit_new2(const KUnitConversion__Unit* other);
void KUnitConversion__Unit_OperatorAssign(KUnitConversion__Unit* self, const KUnitConversion__Unit* other);
bool KUnitConversion__Unit_OperatorEqual(const KUnitConversion__Unit* self, const KUnitConversion__Unit* other);
bool KUnitConversion__Unit_OperatorNotEqual(const KUnitConversion__Unit* self, const KUnitConversion__Unit* other);
bool KUnitConversion__Unit_IsNull(const KUnitConversion__Unit* self);
bool KUnitConversion__Unit_IsValid(const KUnitConversion__Unit* self);
int KUnitConversion__Unit_Id(const KUnitConversion__Unit* self);
int KUnitConversion__Unit_CategoryId(const KUnitConversion__Unit* self);
KUnitConversion__UnitCategory* KUnitConversion__Unit_Category(const KUnitConversion__Unit* self);
libqt_string KUnitConversion__Unit_Description(const KUnitConversion__Unit* self);
libqt_string KUnitConversion__Unit_Symbol(const KUnitConversion__Unit* self);
libqt_string KUnitConversion__Unit_ToString(const KUnitConversion__Unit* self, double value);
libqt_string KUnitConversion__Unit_ToSymbolString(const KUnitConversion__Unit* self, double value);
libqt_string KUnitConversion__Unit_ToString2(const KUnitConversion__Unit* self, double value, int fieldWidth);
libqt_string KUnitConversion__Unit_ToString3(const KUnitConversion__Unit* self, double value, int fieldWidth, char format);
libqt_string KUnitConversion__Unit_ToString4(const KUnitConversion__Unit* self, double value, int fieldWidth, char format, int precision);
libqt_string KUnitConversion__Unit_ToString5(const KUnitConversion__Unit* self, double value, int fieldWidth, char format, int precision, const QChar* fillChar);
libqt_string KUnitConversion__Unit_ToSymbolString2(const KUnitConversion__Unit* self, double value, int fieldWidth);
libqt_string KUnitConversion__Unit_ToSymbolString3(const KUnitConversion__Unit* self, double value, int fieldWidth, char format);
libqt_string KUnitConversion__Unit_ToSymbolString4(const KUnitConversion__Unit* self, double value, int fieldWidth, char format, int precision);
libqt_string KUnitConversion__Unit_ToSymbolString5(const KUnitConversion__Unit* self, double value, int fieldWidth, char format, int precision, const QChar* fillChar);
void KUnitConversion__Unit_Delete(KUnitConversion__Unit* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
