#pragma once
#ifndef SRCC_LIBQMARGINS_H
#define SRCC_LIBQMARGINS_H

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
typedef struct QMargins QMargins;
typedef struct QMarginsF QMarginsF;
#endif

QMargins* QMargins_new(const QMargins* other);
QMargins* QMargins_new2(QMargins* other);
QMargins* QMargins_new3();
QMargins* QMargins_new4(int left, int top, int right, int bottom);
QMargins* QMargins_new5(const QMargins* param1);
void QMargins_CopyAssign(QMargins* self, QMargins* other);
void QMargins_MoveAssign(QMargins* self, QMargins* other);
bool QMargins_IsNull(const QMargins* self);
int QMargins_Left(const QMargins* self);
int QMargins_Top(const QMargins* self);
int QMargins_Right(const QMargins* self);
int QMargins_Bottom(const QMargins* self);
void QMargins_SetLeft(QMargins* self, int left);
void QMargins_SetTop(QMargins* self, int top);
void QMargins_SetRight(QMargins* self, int right);
void QMargins_SetBottom(QMargins* self, int bottom);
QMargins* QMargins_OperatorPlusAssign(QMargins* self, const QMargins* margins);
QMargins* QMargins_OperatorMinusAssign(QMargins* self, const QMargins* margins);
QMargins* QMargins_OperatorPlusAssign2(QMargins* self, int param1);
QMargins* QMargins_OperatorMinusAssign2(QMargins* self, int param1);
QMargins* QMargins_OperatorMultiplyAssign(QMargins* self, int param1);
QMargins* QMargins_OperatorDivideAssign(QMargins* self, int param1);
QMargins* QMargins_OperatorMultiplyAssign2(QMargins* self, double param1);
QMargins* QMargins_OperatorDivideAssign2(QMargins* self, double param1);
QMarginsF* QMargins_ToMarginsF(const QMargins* self);
void QMargins_Delete(QMargins* self);

QMarginsF* QMarginsF_new(const QMarginsF* other);
QMarginsF* QMarginsF_new2(QMarginsF* other);
QMarginsF* QMarginsF_new3();
QMarginsF* QMarginsF_new4(double left, double top, double right, double bottom);
QMarginsF* QMarginsF_new5(const QMargins* margins);
QMarginsF* QMarginsF_new6(const QMarginsF* param1);
void QMarginsF_CopyAssign(QMarginsF* self, QMarginsF* other);
void QMarginsF_MoveAssign(QMarginsF* self, QMarginsF* other);
bool QMarginsF_IsNull(const QMarginsF* self);
double QMarginsF_Left(const QMarginsF* self);
double QMarginsF_Top(const QMarginsF* self);
double QMarginsF_Right(const QMarginsF* self);
double QMarginsF_Bottom(const QMarginsF* self);
void QMarginsF_SetLeft(QMarginsF* self, double aleft);
void QMarginsF_SetTop(QMarginsF* self, double atop);
void QMarginsF_SetRight(QMarginsF* self, double aright);
void QMarginsF_SetBottom(QMarginsF* self, double abottom);
QMarginsF* QMarginsF_OperatorPlusAssign(QMarginsF* self, const QMarginsF* margins);
QMarginsF* QMarginsF_OperatorMinusAssign(QMarginsF* self, const QMarginsF* margins);
QMarginsF* QMarginsF_OperatorPlusAssign2(QMarginsF* self, double addend);
QMarginsF* QMarginsF_OperatorMinusAssign2(QMarginsF* self, double subtrahend);
QMarginsF* QMarginsF_OperatorMultiplyAssign(QMarginsF* self, double factor);
QMarginsF* QMarginsF_OperatorDivideAssign(QMarginsF* self, double divisor);
QMargins* QMarginsF_ToMargins(const QMarginsF* self);
void QMarginsF_Delete(QMarginsF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
