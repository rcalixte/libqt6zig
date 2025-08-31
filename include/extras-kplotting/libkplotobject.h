#pragma once
#ifndef SRC_EXTRAS_KPLOTTINGC_LIBKPLOTOBJECT_H
#define SRC_EXTRAS_KPLOTTINGC_LIBKPLOTOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPlotObject KPlotObject;
typedef struct KPlotPoint KPlotPoint;
typedef struct KPlotWidget KPlotWidget;
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPainter QPainter;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
#endif

KPlotObject* KPlotObject_new();
KPlotObject* KPlotObject_new2(const QColor* color);
KPlotObject* KPlotObject_new3(const QColor* color, int otype);
KPlotObject* KPlotObject_new4(const QColor* color, int otype, double size);
KPlotObject* KPlotObject_new5(const QColor* color, int otype, double size, int ps);
int KPlotObject_PlotTypes(const KPlotObject* self);
void KPlotObject_SetShowPoints(KPlotObject* self, bool b);
void KPlotObject_SetShowLines(KPlotObject* self, bool b);
void KPlotObject_SetShowBars(KPlotObject* self, bool b);
double KPlotObject_Size(const KPlotObject* self);
void KPlotObject_SetSize(KPlotObject* self, double s);
int KPlotObject_PointStyle(const KPlotObject* self);
void KPlotObject_SetPointStyle(KPlotObject* self, int p);
QPen* KPlotObject_Pen(const KPlotObject* self);
void KPlotObject_SetPen(KPlotObject* self, const QPen* p);
QPen* KPlotObject_LinePen(const KPlotObject* self);
void KPlotObject_SetLinePen(KPlotObject* self, const QPen* p);
QPen* KPlotObject_BarPen(const KPlotObject* self);
void KPlotObject_SetBarPen(KPlotObject* self, const QPen* p);
QPen* KPlotObject_LabelPen(const KPlotObject* self);
void KPlotObject_SetLabelPen(KPlotObject* self, const QPen* p);
QBrush* KPlotObject_Brush(const KPlotObject* self);
void KPlotObject_SetBrush(KPlotObject* self, const QBrush* b);
QBrush* KPlotObject_BarBrush(const KPlotObject* self);
void KPlotObject_SetBarBrush(KPlotObject* self, const QBrush* b);
libqt_list /* of KPlotPoint* */ KPlotObject_Points(const KPlotObject* self);
void KPlotObject_AddPoint(KPlotObject* self, const QPointF* p);
void KPlotObject_AddPoint2(KPlotObject* self, KPlotPoint* p);
void KPlotObject_AddPoint3(KPlotObject* self, double x, double y);
void KPlotObject_RemovePoint(KPlotObject* self, int index);
void KPlotObject_ClearPoints(KPlotObject* self);
void KPlotObject_Draw(KPlotObject* self, QPainter* p, KPlotWidget* pw);
void KPlotObject_AddPoint22(KPlotObject* self, const QPointF* p, const libqt_string label);
void KPlotObject_AddPoint32(KPlotObject* self, const QPointF* p, const libqt_string label, double barWidth);
void KPlotObject_AddPoint33(KPlotObject* self, double x, double y, const libqt_string label);
void KPlotObject_AddPoint4(KPlotObject* self, double x, double y, const libqt_string label, double barWidth);
void KPlotObject_Delete(KPlotObject* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
