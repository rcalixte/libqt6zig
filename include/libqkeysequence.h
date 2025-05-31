#pragma once
#ifndef SRCC_LIBQKEYSEQUENCE_H
#define SRCC_LIBQKEYSEQUENCE_H

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
typedef struct QKeyCombination QKeyCombination;
typedef struct QKeySequence QKeySequence;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QKeySequence::DataPtr DataPtr;               // C++ QFlags
typedef QKeySequence::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QKeySequence::SequenceFormat SequenceFormat; // C++ enum
typedef QKeySequence::SequenceMatch SequenceMatch;   // C++ enum
typedef QKeySequence::StandardKey StandardKey;       // C++ enum
#else
typedef int SequenceFormat;  // C ABI enum
typedef int SequenceMatch;   // C ABI enum
typedef int StandardKey;     // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QKeySequence* QKeySequence_new();
QKeySequence* QKeySequence_new2(const libqt_string key);
QKeySequence* QKeySequence_new3(int k1);
QKeySequence* QKeySequence_new4(QKeyCombination* k1);
QKeySequence* QKeySequence_new5(const QKeySequence* ks);
QKeySequence* QKeySequence_new6(int key);
QKeySequence* QKeySequence_new7(const libqt_string key, int format);
QKeySequence* QKeySequence_new8(int k1, int k2);
QKeySequence* QKeySequence_new9(int k1, int k2, int k3);
QKeySequence* QKeySequence_new10(int k1, int k2, int k3, int k4);
QKeySequence* QKeySequence_new11(QKeyCombination* k1, QKeyCombination* k2);
QKeySequence* QKeySequence_new12(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3);
QKeySequence* QKeySequence_new13(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3, QKeyCombination* k4);
int QKeySequence_Count(const QKeySequence* self);
bool QKeySequence_IsEmpty(const QKeySequence* self);
libqt_string QKeySequence_ToString(const QKeySequence* self);
QKeySequence* QKeySequence_FromString(const libqt_string str);
libqt_list /* of QKeySequence* */ QKeySequence_ListFromString(const libqt_string str);
libqt_string QKeySequence_ListToString(const libqt_list /* of QKeySequence* */ list);
int QKeySequence_Matches(const QKeySequence* self, const QKeySequence* seq);
QKeySequence* QKeySequence_Mnemonic(const libqt_string text);
libqt_list /* of QKeySequence* */ QKeySequence_KeyBindings(int key);
QVariant* QKeySequence_ToQVariant(const QKeySequence* self);
QKeyCombination* QKeySequence_OperatorSubscript(const QKeySequence* self, unsigned int i);
void QKeySequence_OperatorAssign(QKeySequence* self, const QKeySequence* other);
void QKeySequence_Swap(QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorEqual(const QKeySequence* self, const QKeySequence* other);
bool QKeySequence_OperatorNotEqual(const QKeySequence* self, const QKeySequence* other);
bool QKeySequence_OperatorLesser(const QKeySequence* self, const QKeySequence* ks);
bool QKeySequence_OperatorGreater(const QKeySequence* self, const QKeySequence* other);
bool QKeySequence_OperatorLesserOrEqual(const QKeySequence* self, const QKeySequence* other);
bool QKeySequence_OperatorGreaterOrEqual(const QKeySequence* self, const QKeySequence* other);
bool QKeySequence_IsDetached(const QKeySequence* self);
libqt_string QKeySequence_ToString1(const QKeySequence* self, int format);
QKeySequence* QKeySequence_FromString2(const libqt_string str, int format);
libqt_list /* of QKeySequence* */ QKeySequence_ListFromString2(const libqt_string str, int format);
libqt_string QKeySequence_ListToString2(const libqt_list /* of QKeySequence* */ list, int format);
void QKeySequence_Delete(QKeySequence* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
