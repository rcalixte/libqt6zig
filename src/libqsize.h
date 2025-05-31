#pragma once
#ifndef SRCC_LIBQSIZE_H
#define SRCC_LIBQSIZE_H

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
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
#endif

QSize* QSize_new(const QSize* other);
QSize* QSize_new2(QSize* other);
QSize* QSize_new3();
QSize* QSize_new4(int w, int h);
QSize* QSize_new5(const QSize* param1);
void QSize_CopyAssign(QSize* self, QSize* other);
void QSize_MoveAssign(QSize* self, QSize* other);
bool QSize_IsNull(const QSize* self);
bool QSize_IsEmpty(const QSize* self);
bool QSize_IsValid(const QSize* self);
int QSize_Width(const QSize* self);
int QSize_Height(const QSize* self);
void QSize_SetWidth(QSize* self, int w);
void QSize_SetHeight(QSize* self, int h);
void QSize_Transpose(QSize* self);
QSize* QSize_Transposed(const QSize* self);
void QSize_Scale(QSize* self, int w, int h, int mode);
void QSize_Scale2(QSize* self, const QSize* s, int mode);
QSize* QSize_Scaled(const QSize* self, int w, int h, int mode);
QSize* QSize_Scaled2(const QSize* self, const QSize* s, int mode);
QSize* QSize_ExpandedTo(const QSize* self, const QSize* param1);
QSize* QSize_BoundedTo(const QSize* self, const QSize* param1);
QSize* QSize_GrownBy(const QSize* self, QMargins* m);
QSize* QSize_ShrunkBy(const QSize* self, QMargins* m);
QSize* QSize_OperatorPlusAssign(QSize* self, const QSize* param1);
QSize* QSize_OperatorMinusAssign(QSize* self, const QSize* param1);
QSize* QSize_OperatorMultiplyAssign(QSize* self, double c);
QSize* QSize_OperatorDivideAssign(QSize* self, double c);
QSizeF* QSize_ToSizeF(const QSize* self);
void QSize_Delete(QSize* self);

QSizeF* QSizeF_new(const QSizeF* other);
QSizeF* QSizeF_new2(QSizeF* other);
QSizeF* QSizeF_new3();
QSizeF* QSizeF_new4(const QSize* sz);
QSizeF* QSizeF_new5(double w, double h);
QSizeF* QSizeF_new6(const QSizeF* param1);
void QSizeF_CopyAssign(QSizeF* self, QSizeF* other);
void QSizeF_MoveAssign(QSizeF* self, QSizeF* other);
bool QSizeF_IsNull(const QSizeF* self);
bool QSizeF_IsEmpty(const QSizeF* self);
bool QSizeF_IsValid(const QSizeF* self);
double QSizeF_Width(const QSizeF* self);
double QSizeF_Height(const QSizeF* self);
void QSizeF_SetWidth(QSizeF* self, double w);
void QSizeF_SetHeight(QSizeF* self, double h);
void QSizeF_Transpose(QSizeF* self);
QSizeF* QSizeF_Transposed(const QSizeF* self);
void QSizeF_Scale(QSizeF* self, double w, double h, int mode);
void QSizeF_Scale2(QSizeF* self, const QSizeF* s, int mode);
QSizeF* QSizeF_Scaled(const QSizeF* self, double w, double h, int mode);
QSizeF* QSizeF_Scaled2(const QSizeF* self, const QSizeF* s, int mode);
QSizeF* QSizeF_ExpandedTo(const QSizeF* self, const QSizeF* param1);
QSizeF* QSizeF_BoundedTo(const QSizeF* self, const QSizeF* param1);
QSizeF* QSizeF_GrownBy(const QSizeF* self, QMarginsF* m);
QSizeF* QSizeF_ShrunkBy(const QSizeF* self, QMarginsF* m);
QSizeF* QSizeF_OperatorPlusAssign(QSizeF* self, const QSizeF* param1);
QSizeF* QSizeF_OperatorMinusAssign(QSizeF* self, const QSizeF* param1);
QSizeF* QSizeF_OperatorMultiplyAssign(QSizeF* self, double c);
QSizeF* QSizeF_OperatorDivideAssign(QSizeF* self, double c);
QSize* QSizeF_ToSize(const QSizeF* self);
void QSizeF_Delete(QSizeF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
