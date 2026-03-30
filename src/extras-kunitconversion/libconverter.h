#pragma once
#ifndef SRC_EXTRAS_KUNITCONVERSIONC_LIBCONVERTER_H
#define SRC_EXTRAS_KUNITCONVERSIONC_LIBCONVERTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Converter)
typedef KUnitConversion::Converter KUnitConversion__Converter;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Unit)
typedef KUnitConversion::Unit KUnitConversion__Unit;
#endif
typedef KUnitConversion::UnitCategory KUnitConversion__UnitCategory;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Value)
typedef KUnitConversion::Value KUnitConversion__Value;
#endif
#else
typedef struct KUnitConversion__Converter KUnitConversion__Converter;
typedef struct KUnitConversion__Unit KUnitConversion__Unit;
typedef struct KUnitConversion__UnitCategory KUnitConversion__UnitCategory;
typedef struct KUnitConversion__Value KUnitConversion__Value;
#endif

KUnitConversion__Converter* KUnitConversion__Converter_new();
KUnitConversion__Converter* KUnitConversion__Converter_new2(const KUnitConversion__Converter* other);
void KUnitConversion__Converter_OperatorAssign(KUnitConversion__Converter* self, const KUnitConversion__Converter* other);
KUnitConversion__Value* KUnitConversion__Converter_Convert(const KUnitConversion__Converter* self, const KUnitConversion__Value* value);
KUnitConversion__Value* KUnitConversion__Converter_Convert2(const KUnitConversion__Converter* self, const KUnitConversion__Value* value, int toUnit);
KUnitConversion__Value* KUnitConversion__Converter_Convert3(const KUnitConversion__Converter* self, const KUnitConversion__Value* value, const KUnitConversion__Unit* toUnit);
KUnitConversion__UnitCategory* KUnitConversion__Converter_CategoryForUnit(const KUnitConversion__Converter* self, const libqt_string unit);
KUnitConversion__Unit* KUnitConversion__Converter_Unit(const KUnitConversion__Converter* self, const libqt_string unitString);
KUnitConversion__Unit* KUnitConversion__Converter_Unit2(const KUnitConversion__Converter* self, int unitId);
KUnitConversion__UnitCategory* KUnitConversion__Converter_Category(const KUnitConversion__Converter* self, const libqt_string category);
KUnitConversion__UnitCategory* KUnitConversion__Converter_Category2(const KUnitConversion__Converter* self, int categoryId);
libqt_list /* of KUnitConversion__UnitCategory* */ KUnitConversion__Converter_Categories(const KUnitConversion__Converter* self);
KUnitConversion__Value* KUnitConversion__Converter_Convert22(const KUnitConversion__Converter* self, const KUnitConversion__Value* value, const libqt_string toUnit);
void KUnitConversion__Converter_Delete(KUnitConversion__Converter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
