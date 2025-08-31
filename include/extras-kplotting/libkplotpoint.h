#pragma once
#ifndef SRC_EXTRAS_KPLOTTINGC_LIBKPLOTPOINT_H
#define SRC_EXTRAS_KPLOTTINGC_LIBKPLOTPOINT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPlotPoint KPlotPoint;
typedef struct QPointF QPointF;
#endif

KPlotPoint* KPlotPoint_new();
KPlotPoint* KPlotPoint_new2(double x, double y);
KPlotPoint* KPlotPoint_new3(const QPointF* p);
KPlotPoint* KPlotPoint_new4(double x, double y, const libqt_string label);
KPlotPoint* KPlotPoint_new5(double x, double y, const libqt_string label, double width);
KPlotPoint* KPlotPoint_new6(const QPointF* p, const libqt_string label);
KPlotPoint* KPlotPoint_new7(const QPointF* p, const libqt_string label, double width);
QPointF* KPlotPoint_Position(const KPlotPoint* self);
void KPlotPoint_SetPosition(KPlotPoint* self, const QPointF* pos);
double KPlotPoint_X(const KPlotPoint* self);
void KPlotPoint_SetX(KPlotPoint* self, double x);
double KPlotPoint_Y(const KPlotPoint* self);
void KPlotPoint_SetY(KPlotPoint* self, double y);
libqt_string KPlotPoint_Label(const KPlotPoint* self);
void KPlotPoint_SetLabel(KPlotPoint* self, const libqt_string label);
double KPlotPoint_BarWidth(const KPlotPoint* self);
void KPlotPoint_SetBarWidth(KPlotPoint* self, double w);
void KPlotPoint_Delete(KPlotPoint* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
