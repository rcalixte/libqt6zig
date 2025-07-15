#pragma once
#ifndef SRCC_LIBQRECT_H
#define SRCC_LIBQRECT_H

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
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
#endif

QRect* QRect_new(const QRect* other);
QRect* QRect_new2(QRect* other);
QRect* QRect_new3();
QRect* QRect_new4(const QPoint* topleft, const QPoint* bottomright);
QRect* QRect_new5(const QPoint* topleft, const QSize* size);
QRect* QRect_new6(int left, int top, int width, int height);
QRect* QRect_new7(const QRect* param1);
void QRect_CopyAssign(QRect* self, QRect* other);
void QRect_MoveAssign(QRect* self, QRect* other);
bool QRect_IsNull(const QRect* self);
bool QRect_IsEmpty(const QRect* self);
bool QRect_IsValid(const QRect* self);
int QRect_Left(const QRect* self);
int QRect_Top(const QRect* self);
int QRect_Right(const QRect* self);
int QRect_Bottom(const QRect* self);
QRect* QRect_Normalized(const QRect* self);
int QRect_X(const QRect* self);
int QRect_Y(const QRect* self);
void QRect_SetLeft(QRect* self, int pos);
void QRect_SetTop(QRect* self, int pos);
void QRect_SetRight(QRect* self, int pos);
void QRect_SetBottom(QRect* self, int pos);
void QRect_SetX(QRect* self, int x);
void QRect_SetY(QRect* self, int y);
void QRect_SetTopLeft(QRect* self, const QPoint* p);
void QRect_SetBottomRight(QRect* self, const QPoint* p);
void QRect_SetTopRight(QRect* self, const QPoint* p);
void QRect_SetBottomLeft(QRect* self, const QPoint* p);
QPoint* QRect_TopLeft(const QRect* self);
QPoint* QRect_BottomRight(const QRect* self);
QPoint* QRect_TopRight(const QRect* self);
QPoint* QRect_BottomLeft(const QRect* self);
QPoint* QRect_Center(const QRect* self);
void QRect_MoveLeft(QRect* self, int pos);
void QRect_MoveTop(QRect* self, int pos);
void QRect_MoveRight(QRect* self, int pos);
void QRect_MoveBottom(QRect* self, int pos);
void QRect_MoveTopLeft(QRect* self, const QPoint* p);
void QRect_MoveBottomRight(QRect* self, const QPoint* p);
void QRect_MoveTopRight(QRect* self, const QPoint* p);
void QRect_MoveBottomLeft(QRect* self, const QPoint* p);
void QRect_MoveCenter(QRect* self, const QPoint* p);
void QRect_Translate(QRect* self, int dx, int dy);
void QRect_Translate2(QRect* self, const QPoint* p);
QRect* QRect_Translated(const QRect* self, int dx, int dy);
QRect* QRect_Translated2(const QRect* self, const QPoint* p);
QRect* QRect_Transposed(const QRect* self);
void QRect_MoveTo(QRect* self, int x, int t);
void QRect_MoveTo2(QRect* self, const QPoint* p);
void QRect_SetRect(QRect* self, int x, int y, int w, int h);
void QRect_GetRect(const QRect* self, int* x, int* y, int* w, int* h);
void QRect_SetCoords(QRect* self, int x1, int y1, int x2, int y2);
void QRect_GetCoords(const QRect* self, int* x1, int* y1, int* x2, int* y2);
void QRect_Adjust(QRect* self, int x1, int y1, int x2, int y2);
QRect* QRect_Adjusted(const QRect* self, int x1, int y1, int x2, int y2);
QSize* QRect_Size(const QRect* self);
int QRect_Width(const QRect* self);
int QRect_Height(const QRect* self);
void QRect_SetWidth(QRect* self, int w);
void QRect_SetHeight(QRect* self, int h);
void QRect_SetSize(QRect* self, const QSize* s);
QRect* QRect_OperatorBitwiseOr(const QRect* self, const QRect* r);
QRect* QRect_OperatorBitwiseAnd(const QRect* self, const QRect* r);
void QRect_OperatorBitwiseOrAssign(QRect* self, const QRect* r);
void QRect_OperatorBitwiseAndAssign(QRect* self, const QRect* r);
bool QRect_Contains(const QRect* self, const QRect* r);
bool QRect_Contains2(const QRect* self, const QPoint* p);
bool QRect_Contains3(const QRect* self, int x, int y);
bool QRect_Contains4(const QRect* self, int x, int y, bool proper);
QRect* QRect_United(const QRect* self, const QRect* other);
QRect* QRect_Intersected(const QRect* self, const QRect* other);
bool QRect_Intersects(const QRect* self, const QRect* r);
QRect* QRect_MarginsAdded(const QRect* self, const QMargins* margins);
QRect* QRect_MarginsRemoved(const QRect* self, const QMargins* margins);
QRect* QRect_OperatorPlusAssign(QRect* self, const QMargins* margins);
QRect* QRect_OperatorMinusAssign(QRect* self, const QMargins* margins);
QRect* QRect_Span(const QPoint* p1, const QPoint* p2);
QRectF* QRect_ToRectF(const QRect* self);
bool QRect_Contains22(const QRect* self, const QRect* r, bool proper);
bool QRect_Contains23(const QRect* self, const QPoint* p, bool proper);
void QRect_Delete(QRect* self);

QRectF* QRectF_new(const QRectF* other);
QRectF* QRectF_new2(QRectF* other);
QRectF* QRectF_new3();
QRectF* QRectF_new4(const QPointF* topleft, const QSizeF* size);
QRectF* QRectF_new5(const QPointF* topleft, const QPointF* bottomRight);
QRectF* QRectF_new6(double left, double top, double width, double height);
QRectF* QRectF_new7(const QRect* rect);
QRectF* QRectF_new8(const QRectF* param1);
void QRectF_CopyAssign(QRectF* self, QRectF* other);
void QRectF_MoveAssign(QRectF* self, QRectF* other);
bool QRectF_IsNull(const QRectF* self);
bool QRectF_IsEmpty(const QRectF* self);
bool QRectF_IsValid(const QRectF* self);
QRectF* QRectF_Normalized(const QRectF* self);
double QRectF_Left(const QRectF* self);
double QRectF_Top(const QRectF* self);
double QRectF_Right(const QRectF* self);
double QRectF_Bottom(const QRectF* self);
double QRectF_X(const QRectF* self);
double QRectF_Y(const QRectF* self);
void QRectF_SetLeft(QRectF* self, double pos);
void QRectF_SetTop(QRectF* self, double pos);
void QRectF_SetRight(QRectF* self, double pos);
void QRectF_SetBottom(QRectF* self, double pos);
void QRectF_SetX(QRectF* self, double pos);
void QRectF_SetY(QRectF* self, double pos);
QPointF* QRectF_TopLeft(const QRectF* self);
QPointF* QRectF_BottomRight(const QRectF* self);
QPointF* QRectF_TopRight(const QRectF* self);
QPointF* QRectF_BottomLeft(const QRectF* self);
QPointF* QRectF_Center(const QRectF* self);
void QRectF_SetTopLeft(QRectF* self, const QPointF* p);
void QRectF_SetBottomRight(QRectF* self, const QPointF* p);
void QRectF_SetTopRight(QRectF* self, const QPointF* p);
void QRectF_SetBottomLeft(QRectF* self, const QPointF* p);
void QRectF_MoveLeft(QRectF* self, double pos);
void QRectF_MoveTop(QRectF* self, double pos);
void QRectF_MoveRight(QRectF* self, double pos);
void QRectF_MoveBottom(QRectF* self, double pos);
void QRectF_MoveTopLeft(QRectF* self, const QPointF* p);
void QRectF_MoveBottomRight(QRectF* self, const QPointF* p);
void QRectF_MoveTopRight(QRectF* self, const QPointF* p);
void QRectF_MoveBottomLeft(QRectF* self, const QPointF* p);
void QRectF_MoveCenter(QRectF* self, const QPointF* p);
void QRectF_Translate(QRectF* self, double dx, double dy);
void QRectF_Translate2(QRectF* self, const QPointF* p);
QRectF* QRectF_Translated(const QRectF* self, double dx, double dy);
QRectF* QRectF_Translated2(const QRectF* self, const QPointF* p);
QRectF* QRectF_Transposed(const QRectF* self);
void QRectF_MoveTo(QRectF* self, double x, double y);
void QRectF_MoveTo2(QRectF* self, const QPointF* p);
void QRectF_SetRect(QRectF* self, double x, double y, double w, double h);
void QRectF_GetRect(const QRectF* self, double* x, double* y, double* w, double* h);
void QRectF_SetCoords(QRectF* self, double x1, double y1, double x2, double y2);
void QRectF_GetCoords(const QRectF* self, double* x1, double* y1, double* x2, double* y2);
void QRectF_Adjust(QRectF* self, double x1, double y1, double x2, double y2);
QRectF* QRectF_Adjusted(const QRectF* self, double x1, double y1, double x2, double y2);
QSizeF* QRectF_Size(const QRectF* self);
double QRectF_Width(const QRectF* self);
double QRectF_Height(const QRectF* self);
void QRectF_SetWidth(QRectF* self, double w);
void QRectF_SetHeight(QRectF* self, double h);
void QRectF_SetSize(QRectF* self, const QSizeF* s);
QRectF* QRectF_OperatorBitwiseOr(const QRectF* self, const QRectF* r);
QRectF* QRectF_OperatorBitwiseAnd(const QRectF* self, const QRectF* r);
void QRectF_OperatorBitwiseOrAssign(QRectF* self, const QRectF* r);
void QRectF_OperatorBitwiseAndAssign(QRectF* self, const QRectF* r);
bool QRectF_Contains(const QRectF* self, const QRectF* r);
bool QRectF_Contains2(const QRectF* self, const QPointF* p);
bool QRectF_Contains3(const QRectF* self, double x, double y);
QRectF* QRectF_United(const QRectF* self, const QRectF* other);
QRectF* QRectF_Intersected(const QRectF* self, const QRectF* other);
bool QRectF_Intersects(const QRectF* self, const QRectF* r);
QRectF* QRectF_MarginsAdded(const QRectF* self, const QMarginsF* margins);
QRectF* QRectF_MarginsRemoved(const QRectF* self, const QMarginsF* margins);
QRectF* QRectF_OperatorPlusAssign(QRectF* self, const QMarginsF* margins);
QRectF* QRectF_OperatorMinusAssign(QRectF* self, const QMarginsF* margins);
QRect* QRectF_ToRect(const QRectF* self);
QRect* QRectF_ToAlignedRect(const QRectF* self);
void QRectF_Delete(QRectF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
