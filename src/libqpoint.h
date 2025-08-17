#pragma once
#ifndef SRCC_LIBQPOINT_H
#define SRCC_LIBQPOINT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
#endif

QPoint* QPoint_new(const QPoint* other);
QPoint* QPoint_new2(QPoint* other);
QPoint* QPoint_new3();
QPoint* QPoint_new4(int xpos, int ypos);
QPoint* QPoint_new5(const QPoint* param1);
void QPoint_CopyAssign(QPoint* self, QPoint* other);
void QPoint_MoveAssign(QPoint* self, QPoint* other);
bool QPoint_IsNull(const QPoint* self);
int QPoint_X(const QPoint* self);
int QPoint_Y(const QPoint* self);
void QPoint_SetX(QPoint* self, int x);
void QPoint_SetY(QPoint* self, int y);
int QPoint_ManhattanLength(const QPoint* self);
QPoint* QPoint_Transposed(const QPoint* self);
QPoint* QPoint_OperatorPlusAssign(QPoint* self, const QPoint* p);
QPoint* QPoint_OperatorMinusAssign(QPoint* self, const QPoint* p);
QPoint* QPoint_OperatorMultiplyAssign(QPoint* self, float factor);
QPoint* QPoint_OperatorMultiplyAssign2(QPoint* self, double factor);
QPoint* QPoint_OperatorMultiplyAssign3(QPoint* self, int factor);
QPoint* QPoint_OperatorDivideAssign(QPoint* self, double divisor);
int QPoint_DotProduct(const QPoint* p1, const QPoint* p2);
QPointF* QPoint_ToPointF(const QPoint* self);
void QPoint_Delete(QPoint* self);

QPointF* QPointF_new(const QPointF* other);
QPointF* QPointF_new2(QPointF* other);
QPointF* QPointF_new3();
QPointF* QPointF_new4(const QPoint* p);
QPointF* QPointF_new5(double xpos, double ypos);
QPointF* QPointF_new6(const QPointF* param1);
void QPointF_CopyAssign(QPointF* self, QPointF* other);
void QPointF_MoveAssign(QPointF* self, QPointF* other);
double QPointF_ManhattanLength(const QPointF* self);
bool QPointF_IsNull(const QPointF* self);
double QPointF_X(const QPointF* self);
double QPointF_Y(const QPointF* self);
void QPointF_SetX(QPointF* self, double x);
void QPointF_SetY(QPointF* self, double y);
QPointF* QPointF_Transposed(const QPointF* self);
QPointF* QPointF_OperatorPlusAssign(QPointF* self, const QPointF* p);
QPointF* QPointF_OperatorMinusAssign(QPointF* self, const QPointF* p);
QPointF* QPointF_OperatorMultiplyAssign(QPointF* self, double c);
QPointF* QPointF_OperatorDivideAssign(QPointF* self, double c);
double QPointF_DotProduct(const QPointF* p1, const QPointF* p2);
QPoint* QPointF_ToPoint(const QPointF* self);
void QPointF_Delete(QPointF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
