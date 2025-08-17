#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCIPRINTER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCIPRINTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMarginsF QMarginsF;
typedef struct QPageLayout QPageLayout;
typedef struct QPageRanges QPageRanges;
typedef struct QPageSize QPageSize;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPrintEngine QPrintEngine;
typedef struct QPrinter QPrinter;
typedef struct QRect QRect;
typedef struct QsciPrinter QsciPrinter;
typedef struct QsciScintillaBase QsciScintillaBase;
#endif

QsciPrinter* QsciPrinter_new();
QsciPrinter* QsciPrinter_new2(int mode);
void QsciPrinter_FormatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr);
void QsciPrinter_OnFormatPage(QsciPrinter* self, intptr_t slot);
void QsciPrinter_QBaseFormatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr);
int QsciPrinter_Magnification(const QsciPrinter* self);
void QsciPrinter_SetMagnification(QsciPrinter* self, int magnification);
void QsciPrinter_OnSetMagnification(QsciPrinter* self, intptr_t slot);
void QsciPrinter_QBaseSetMagnification(QsciPrinter* self, int magnification);
int QsciPrinter_PrintRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to);
void QsciPrinter_OnPrintRange(QsciPrinter* self, intptr_t slot);
int QsciPrinter_QBasePrintRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to);
int QsciPrinter_PrintRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to);
void QsciPrinter_OnPrintRange2(QsciPrinter* self, intptr_t slot);
int QsciPrinter_QBasePrintRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to);
int QsciPrinter_WrapMode(const QsciPrinter* self);
void QsciPrinter_SetWrapMode(QsciPrinter* self, int wmode);
void QsciPrinter_OnSetWrapMode(QsciPrinter* self, intptr_t slot);
void QsciPrinter_QBaseSetWrapMode(QsciPrinter* self, int wmode);
int QsciPrinter_DevType(const QsciPrinter* self);
void QsciPrinter_OnDevType(const QsciPrinter* self, intptr_t slot);
int QsciPrinter_QBaseDevType(const QsciPrinter* self);
bool QsciPrinter_NewPage(QsciPrinter* self);
void QsciPrinter_OnNewPage(QsciPrinter* self, intptr_t slot);
bool QsciPrinter_QBaseNewPage(QsciPrinter* self);
QPaintEngine* QsciPrinter_PaintEngine(const QsciPrinter* self);
void QsciPrinter_OnPaintEngine(const QsciPrinter* self, intptr_t slot);
QPaintEngine* QsciPrinter_QBasePaintEngine(const QsciPrinter* self);
int QsciPrinter_Metric(const QsciPrinter* self, int param1);
void QsciPrinter_OnMetric(const QsciPrinter* self, intptr_t slot);
int QsciPrinter_QBaseMetric(const QsciPrinter* self, int param1);
bool QsciPrinter_SetPageLayout(QsciPrinter* self, const QPageLayout* pageLayout);
void QsciPrinter_OnSetPageLayout(QsciPrinter* self, intptr_t slot);
bool QsciPrinter_QBaseSetPageLayout(QsciPrinter* self, const QPageLayout* pageLayout);
bool QsciPrinter_SetPageSize(QsciPrinter* self, const QPageSize* pageSize);
void QsciPrinter_OnSetPageSize(QsciPrinter* self, intptr_t slot);
bool QsciPrinter_QBaseSetPageSize(QsciPrinter* self, const QPageSize* pageSize);
bool QsciPrinter_SetPageOrientation(QsciPrinter* self, int orientation);
void QsciPrinter_OnSetPageOrientation(QsciPrinter* self, intptr_t slot);
bool QsciPrinter_QBaseSetPageOrientation(QsciPrinter* self, int orientation);
bool QsciPrinter_SetPageMargins(QsciPrinter* self, const QMarginsF* margins, int units);
void QsciPrinter_OnSetPageMargins(QsciPrinter* self, intptr_t slot);
bool QsciPrinter_QBaseSetPageMargins(QsciPrinter* self, const QMarginsF* margins, int units);
void QsciPrinter_SetPageRanges(QsciPrinter* self, const QPageRanges* ranges);
void QsciPrinter_OnSetPageRanges(QsciPrinter* self, intptr_t slot);
void QsciPrinter_QBaseSetPageRanges(QsciPrinter* self, const QPageRanges* ranges);
void QsciPrinter_InitPainter(const QsciPrinter* self, QPainter* painter);
void QsciPrinter_OnInitPainter(const QsciPrinter* self, intptr_t slot);
void QsciPrinter_QBaseInitPainter(const QsciPrinter* self, QPainter* painter);
QPaintDevice* QsciPrinter_Redirected(const QsciPrinter* self, QPoint* offset);
void QsciPrinter_OnRedirected(const QsciPrinter* self, intptr_t slot);
QPaintDevice* QsciPrinter_QBaseRedirected(const QsciPrinter* self, QPoint* offset);
QPainter* QsciPrinter_SharedPainter(const QsciPrinter* self);
void QsciPrinter_OnSharedPainter(const QsciPrinter* self, intptr_t slot);
QPainter* QsciPrinter_QBaseSharedPainter(const QsciPrinter* self);
void QsciPrinter_SetEngines(QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
void QsciPrinter_OnSetEngines(QsciPrinter* self, intptr_t slot);
void QsciPrinter_QBaseSetEngines(QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
double QsciPrinter_GetDecodedMetricF(const QsciPrinter* self, int metricA, int metricB);
void QsciPrinter_OnGetDecodedMetricF(const QsciPrinter* self, intptr_t slot);
double QsciPrinter_QBaseGetDecodedMetricF(const QsciPrinter* self, int metricA, int metricB);
void QsciPrinter_Delete(QsciPrinter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
