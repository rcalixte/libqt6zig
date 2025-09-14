#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBPREDICATE_H
#define SRC_EXTRAS_SOLIDC_LIBPREDICATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__Device)
typedef Solid::Device Solid__Device;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__Predicate)
typedef Solid::Predicate Solid__Predicate;
#endif
#else
typedef struct QVariant QVariant;
typedef struct Solid__Device Solid__Device;
typedef struct Solid__Predicate Solid__Predicate;
#endif

Solid__Predicate* Solid__Predicate_new();
Solid__Predicate* Solid__Predicate_new2(const Solid__Predicate* other);
Solid__Predicate* Solid__Predicate_new3(const int* ifaceType, const libqt_string property, const QVariant* value);
Solid__Predicate* Solid__Predicate_new4(const libqt_string ifaceName, const libqt_string property, const QVariant* value);
Solid__Predicate* Solid__Predicate_new5(const int* ifaceType);
Solid__Predicate* Solid__Predicate_new6(const libqt_string ifaceName);
Solid__Predicate* Solid__Predicate_new7(const int* ifaceType, const libqt_string property, const QVariant* value, int compOperator);
Solid__Predicate* Solid__Predicate_new8(const libqt_string ifaceName, const libqt_string property, const QVariant* value, int compOperator);
void Solid__Predicate_OperatorAssign(Solid__Predicate* self, const Solid__Predicate* other);
Solid__Predicate* Solid__Predicate_OperatorBitwiseAnd(Solid__Predicate* self, const Solid__Predicate* other);
void Solid__Predicate_OperatorBitwiseAndAssign(Solid__Predicate* self, const Solid__Predicate* other);
Solid__Predicate* Solid__Predicate_OperatorBitwiseOr(Solid__Predicate* self, const Solid__Predicate* other);
void Solid__Predicate_OperatorBitwiseOrAssign(Solid__Predicate* self, const Solid__Predicate* other);
bool Solid__Predicate_IsValid(const Solid__Predicate* self);
bool Solid__Predicate_Matches(const Solid__Predicate* self, const Solid__Device* device);
libqt_list /* set of int */ Solid__Predicate_UsedTypes(const Solid__Predicate* self);
libqt_string Solid__Predicate_ToString(const Solid__Predicate* self);
Solid__Predicate* Solid__Predicate_FromString(const libqt_string predicate);
int Solid__Predicate_Type(const Solid__Predicate* self);
int Solid__Predicate_InterfaceType(const Solid__Predicate* self);
libqt_string Solid__Predicate_PropertyName(const Solid__Predicate* self);
QVariant* Solid__Predicate_MatchingValue(const Solid__Predicate* self);
int Solid__Predicate_ComparisonOperator(const Solid__Predicate* self);
Solid__Predicate* Solid__Predicate_FirstOperand(const Solid__Predicate* self);
Solid__Predicate* Solid__Predicate_SecondOperand(const Solid__Predicate* self);
void Solid__Predicate_Delete(Solid__Predicate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
