#pragma once
#ifndef SRC_EXTRAS_KUNITCONVERSIONC_LIBUNITCATEGORY_H
#define SRC_EXTRAS_KUNITCONVERSIONC_LIBUNITCATEGORY_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__UpdateJob)
typedef KUnitConversion::UpdateJob KUnitConversion__UpdateJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Value)
typedef KUnitConversion::Value KUnitConversion__Value;
#endif
#else
typedef struct KUnitConversion__Unit KUnitConversion__Unit;
typedef struct KUnitConversion__UnitCategory KUnitConversion__UnitCategory;
typedef struct KUnitConversion__UpdateJob KUnitConversion__UpdateJob;
typedef struct KUnitConversion__Value KUnitConversion__Value;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

KUnitConversion__UnitCategory* KUnitConversion__UnitCategory_new();
KUnitConversion__UnitCategory* KUnitConversion__UnitCategory_new2(const KUnitConversion__UnitCategory* other);
void KUnitConversion__UnitCategory_OperatorAssign(KUnitConversion__UnitCategory* self, const KUnitConversion__UnitCategory* other);
bool KUnitConversion__UnitCategory_OperatorEqual(const KUnitConversion__UnitCategory* self, const KUnitConversion__UnitCategory* other);
bool KUnitConversion__UnitCategory_OperatorNotEqual(const KUnitConversion__UnitCategory* self, const KUnitConversion__UnitCategory* other);
bool KUnitConversion__UnitCategory_IsNull(const KUnitConversion__UnitCategory* self);
int KUnitConversion__UnitCategory_Id(const KUnitConversion__UnitCategory* self);
libqt_string KUnitConversion__UnitCategory_Name(const KUnitConversion__UnitCategory* self);
libqt_string KUnitConversion__UnitCategory_Description(const KUnitConversion__UnitCategory* self);
KUnitConversion__Unit* KUnitConversion__UnitCategory_DefaultUnit(const KUnitConversion__UnitCategory* self);
bool KUnitConversion__UnitCategory_HasUnit(const KUnitConversion__UnitCategory* self, const libqt_string unit);
KUnitConversion__Unit* KUnitConversion__UnitCategory_Unit(const KUnitConversion__UnitCategory* self, const libqt_string s);
KUnitConversion__Unit* KUnitConversion__UnitCategory_Unit2(const KUnitConversion__UnitCategory* self, int unitId);
libqt_list /* of KUnitConversion__Unit* */ KUnitConversion__UnitCategory_Units(const KUnitConversion__UnitCategory* self);
libqt_list /* of KUnitConversion__Unit* */ KUnitConversion__UnitCategory_MostCommonUnits(const KUnitConversion__UnitCategory* self);
libqt_list /* of libqt_string */ KUnitConversion__UnitCategory_AllUnits(const KUnitConversion__UnitCategory* self);
KUnitConversion__Value* KUnitConversion__UnitCategory_Convert(const KUnitConversion__UnitCategory* self, const KUnitConversion__Value* value);
KUnitConversion__Value* KUnitConversion__UnitCategory_Convert2(const KUnitConversion__UnitCategory* self, const KUnitConversion__Value* value, int toUnit);
KUnitConversion__Value* KUnitConversion__UnitCategory_Convert3(const KUnitConversion__UnitCategory* self, const KUnitConversion__Value* value, const KUnitConversion__Unit* toUnit);
bool KUnitConversion__UnitCategory_HasOnlineConversionTable(const KUnitConversion__UnitCategory* self);
KUnitConversion__UpdateJob* KUnitConversion__UnitCategory_SyncConversionTable(KUnitConversion__UnitCategory* self);
KUnitConversion__Value* KUnitConversion__UnitCategory_Convert22(const KUnitConversion__UnitCategory* self, const KUnitConversion__Value* value, const libqt_string toUnit);
KUnitConversion__UpdateJob* KUnitConversion__UnitCategory_SyncConversionTable1(KUnitConversion__UnitCategory* self, int64_t updateSkipPeriod);
void KUnitConversion__UnitCategory_Delete(KUnitConversion__UnitCategory* self);

QMetaObject* KUnitConversion__UpdateJob_MetaObject(const KUnitConversion__UpdateJob* self);
void* KUnitConversion__UpdateJob_Metacast(KUnitConversion__UpdateJob* self, const char* param1);
int KUnitConversion__UpdateJob_Metacall(KUnitConversion__UpdateJob* self, int param1, int param2, void** param3);
void KUnitConversion__UpdateJob_Finished(KUnitConversion__UpdateJob* self);
void KUnitConversion__UpdateJob_Connect_Finished(KUnitConversion__UpdateJob* self, intptr_t slot);
void KUnitConversion__UpdateJob_Delete(KUnitConversion__UpdateJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
