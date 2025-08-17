#pragma once
#ifndef SRCC_LIBQNAMESPACE_H
#define SRCC_LIBQNAMESPACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t)
typedef Qt::Disambiguated_t Disambiguated_t;
#endif
#else
typedef struct Disambiguated_t Disambiguated_t;
typedef struct QInternal QInternal;
typedef struct QKeyCombination QKeyCombination;
#endif

Disambiguated_t* Disambiguated_t_new(const Disambiguated_t* other);
Disambiguated_t* Disambiguated_t_new2(Disambiguated_t* other);
Disambiguated_t* Disambiguated_t_new3();
Disambiguated_t* Disambiguated_t_new4(const Disambiguated_t* param1);
void Disambiguated_t_CopyAssign(Disambiguated_t* self, Disambiguated_t* other);
void Disambiguated_t_MoveAssign(Disambiguated_t* self, Disambiguated_t* other);
void Disambiguated_t_Delete(Disambiguated_t* self);

QInternal* QInternal_new(const QInternal* other);
QInternal* QInternal_new2(QInternal* other);
void QInternal_CopyAssign(QInternal* self, QInternal* other);
void QInternal_MoveAssign(QInternal* self, QInternal* other);
bool QInternal_ActivateCallbacks(int param1, void** param2);
void QInternal_Delete(QInternal* self);

QKeyCombination* QKeyCombination_new(const QKeyCombination* other);
QKeyCombination* QKeyCombination_new2(QKeyCombination* other);
QKeyCombination* QKeyCombination_new3();
QKeyCombination* QKeyCombination_new4(int modifiers);
QKeyCombination* QKeyCombination_new5(int modifiers);
QKeyCombination* QKeyCombination_new6(const QKeyCombination* param1);
QKeyCombination* QKeyCombination_new7(int key);
QKeyCombination* QKeyCombination_new8(int modifiers, int key);
QKeyCombination* QKeyCombination_new9(int modifiers, int key);
void QKeyCombination_CopyAssign(QKeyCombination* self, QKeyCombination* other);
void QKeyCombination_MoveAssign(QKeyCombination* self, QKeyCombination* other);
int QKeyCombination_KeyboardModifiers(const QKeyCombination* self);
int QKeyCombination_Key(const QKeyCombination* self);
QKeyCombination* QKeyCombination_FromCombined(int combined);
int QKeyCombination_ToCombined(const QKeyCombination* self);
int QKeyCombination_ToInt(const QKeyCombination* self);
void QKeyCombination_Delete(QKeyCombination* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
