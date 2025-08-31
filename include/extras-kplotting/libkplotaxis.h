#pragma once
#ifndef SRC_EXTRAS_KPLOTTINGC_LIBKPLOTAXIS_H
#define SRC_EXTRAS_KPLOTTINGC_LIBKPLOTAXIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPlotAxis KPlotAxis;
#endif

KPlotAxis* KPlotAxis_new();
KPlotAxis* KPlotAxis_new2(const libqt_string label);
bool KPlotAxis_IsVisible(const KPlotAxis* self);
void KPlotAxis_SetVisible(KPlotAxis* self, bool visible);
bool KPlotAxis_AreTickLabelsShown(const KPlotAxis* self);
void KPlotAxis_SetTickLabelsShown(KPlotAxis* self, bool b);
void KPlotAxis_SetLabel(KPlotAxis* self, const libqt_string label);
libqt_string KPlotAxis_Label(const KPlotAxis* self);
libqt_string KPlotAxis_TickLabel(const KPlotAxis* self, double value);
void KPlotAxis_SetTickLabelFormat(KPlotAxis* self);
int KPlotAxis_TickLabelWidth(const KPlotAxis* self);
char KPlotAxis_TickLabelFormat(const KPlotAxis* self);
int KPlotAxis_TickLabelPrecision(const KPlotAxis* self);
void KPlotAxis_SetTickMarks(KPlotAxis* self, double x0, double length);
libqt_list /* of double */ KPlotAxis_MajorTickMarks(const KPlotAxis* self);
libqt_list /* of double */ KPlotAxis_MinorTickMarks(const KPlotAxis* self);
void KPlotAxis_SetTickLabelFormat1(KPlotAxis* self, char format);
void KPlotAxis_SetTickLabelFormat2(KPlotAxis* self, char format, int fieldWidth);
void KPlotAxis_SetTickLabelFormat3(KPlotAxis* self, char format, int fieldWidth, int precision);
void KPlotAxis_Delete(KPlotAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
