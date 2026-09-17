#pragma once
#ifndef LIBQPOLYGON_H
#define LIBQPOLYGON_H

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
typedef struct QPolygon QPolygon;
typedef struct QPolygonF QPolygonF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QVariant QVariant;
#endif

QPolygon* QPolygon_new();
QPolygon* QPolygon_new2(const libqt_list /* of QPoint* */ v);
QPolygon* QPolygon_new3(const QRect* r);
QPolygon* QPolygon_new4(int nPoints, const int* points);
QPolygon* QPolygon_new5(const QPolygon* param1);
QPolygon* QPolygon_new6(const QRect* r, bool closed);
void QPolygon_Swap(QPolygon* self, QPolygon* other);
QVariant* QPolygon_ToQVariant(const QPolygon* self);
void QPolygon_Translate(QPolygon* self, int dx, int dy);
void QPolygon_Translate2(QPolygon* self, const QPoint* offset);
QPolygon* QPolygon_Translated(const QPolygon* self, int dx, int dy);
QPolygon* QPolygon_Translated2(const QPolygon* self, const QPoint* offset);
QRect* QPolygon_BoundingRect(const QPolygon* self);
void QPolygon_Point(const QPolygon* self, int i, int* x, int* y);
QPoint* QPolygon_Point2(const QPolygon* self, int i);
void QPolygon_SetPoint(QPolygon* self, int index, int x, int y);
void QPolygon_SetPoint2(QPolygon* self, int index, const QPoint* p);
void QPolygon_SetPoints(QPolygon* self, int nPoints, const int* points);
void QPolygon_PutPoints(QPolygon* self, int index, int nPoints, const int* points);
void QPolygon_PutPoints2(QPolygon* self, int index, int nPoints, const QPolygon* from);
bool QPolygon_ContainsPoint(const QPolygon* self, const QPoint* pt, int fillRule);
QPolygon* QPolygon_United(const QPolygon* self, const QPolygon* r);
QPolygon* QPolygon_Intersected(const QPolygon* self, const QPolygon* r);
QPolygon* QPolygon_Subtracted(const QPolygon* self, const QPolygon* r);
bool QPolygon_Intersects(const QPolygon* self, const QPolygon* r);
QPolygonF* QPolygon_ToPolygonF(const QPolygon* self);
void QPolygon_PutPoints4(QPolygon* self, int index, int nPoints, const QPolygon* from, int fromIndex);
void QPolygon_Delete(QPolygon* self);

QPolygonF* QPolygonF_new();
QPolygonF* QPolygonF_new2(const libqt_list /* of QPointF* */ v);
QPolygonF* QPolygonF_new3(const QRectF* r);
QPolygonF* QPolygonF_new4(const QPolygon* a);
QPolygonF* QPolygonF_new5(const QPolygonF* param1);
void QPolygonF_Swap(QPolygonF* self, QPolygonF* other);
QVariant* QPolygonF_ToQVariant(const QPolygonF* self);
void QPolygonF_Translate(QPolygonF* self, double dx, double dy);
void QPolygonF_Translate2(QPolygonF* self, const QPointF* offset);
QPolygonF* QPolygonF_Translated(const QPolygonF* self, double dx, double dy);
QPolygonF* QPolygonF_Translated2(const QPolygonF* self, const QPointF* offset);
QPolygon* QPolygonF_ToPolygon(const QPolygonF* self);
bool QPolygonF_IsClosed(const QPolygonF* self);
QRectF* QPolygonF_BoundingRect(const QPolygonF* self);
bool QPolygonF_ContainsPoint(const QPolygonF* self, const QPointF* pt, int fillRule);
QPolygonF* QPolygonF_United(const QPolygonF* self, const QPolygonF* r);
QPolygonF* QPolygonF_Intersected(const QPolygonF* self, const QPolygonF* r);
QPolygonF* QPolygonF_Subtracted(const QPolygonF* self, const QPolygonF* r);
bool QPolygonF_Intersects(const QPolygonF* self, const QPolygonF* r);
void QPolygonF_Delete(QPolygonF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
