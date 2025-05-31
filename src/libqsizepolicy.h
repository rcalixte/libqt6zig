#pragma once
#ifndef SRCC_LIBQSIZEPOLICY_H
#define SRCC_LIBQSIZEPOLICY_H

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
typedef struct QSizePolicy QSizePolicy;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QSizePolicy::ControlType ControlType;       // C++ enum
typedef QSizePolicy::ControlTypes ControlTypes;     // C++ QFlags
typedef QSizePolicy::Policy Policy;                 // C++ enum
typedef QSizePolicy::PolicyFlag PolicyFlag;         // C++ enum
typedef QSizePolicy::QtGadgetHelper QtGadgetHelper; // C++ QFlags
#else
typedef int ControlType;     // C ABI enum
typedef int ControlTypes;    // C ABI QFlags
typedef int Policy;          // C ABI enum
typedef int PolicyFlag;      // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QSizePolicy* QSizePolicy_new(const QSizePolicy* other);
QSizePolicy* QSizePolicy_new2(QSizePolicy* other);
QSizePolicy* QSizePolicy_new3();
QSizePolicy* QSizePolicy_new4(int horizontal, int vertical);
QSizePolicy* QSizePolicy_new5(const QSizePolicy* param1);
QSizePolicy* QSizePolicy_new6(int horizontal, int vertical, int typeVal);
void QSizePolicy_CopyAssign(QSizePolicy* self, QSizePolicy* other);
void QSizePolicy_MoveAssign(QSizePolicy* self, QSizePolicy* other);
int QSizePolicy_HorizontalPolicy(const QSizePolicy* self);
int QSizePolicy_VerticalPolicy(const QSizePolicy* self);
int QSizePolicy_ControlType(const QSizePolicy* self);
void QSizePolicy_SetHorizontalPolicy(QSizePolicy* self, int d);
void QSizePolicy_SetVerticalPolicy(QSizePolicy* self, int d);
void QSizePolicy_SetControlType(QSizePolicy* self, int typeVal);
int QSizePolicy_ExpandingDirections(const QSizePolicy* self);
void QSizePolicy_SetHeightForWidth(QSizePolicy* self, bool b);
bool QSizePolicy_HasHeightForWidth(const QSizePolicy* self);
void QSizePolicy_SetWidthForHeight(QSizePolicy* self, bool b);
bool QSizePolicy_HasWidthForHeight(const QSizePolicy* self);
bool QSizePolicy_OperatorEqual(const QSizePolicy* self, const QSizePolicy* s);
bool QSizePolicy_OperatorNotEqual(const QSizePolicy* self, const QSizePolicy* s);
QVariant* QSizePolicy_ToQVariant(const QSizePolicy* self);
int QSizePolicy_HorizontalStretch(const QSizePolicy* self);
int QSizePolicy_VerticalStretch(const QSizePolicy* self);
void QSizePolicy_SetHorizontalStretch(QSizePolicy* self, int stretchFactor);
void QSizePolicy_SetVerticalStretch(QSizePolicy* self, int stretchFactor);
bool QSizePolicy_RetainSizeWhenHidden(const QSizePolicy* self);
void QSizePolicy_SetRetainSizeWhenHidden(QSizePolicy* self, bool retainSize);
void QSizePolicy_Transpose(QSizePolicy* self);
QSizePolicy* QSizePolicy_Transposed(const QSizePolicy* self);
void QSizePolicy_Delete(QSizePolicy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
