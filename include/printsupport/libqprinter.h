#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBQPRINTER_H
#define SRC_PRINTSUPPORTC_LIBQPRINTER_H

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
typedef struct QPrinterInfo QPrinterInfo;
typedef struct QRectF QRectF;
#endif

QPrinter* QPrinter_new();
QPrinter* QPrinter_new2(const QPrinterInfo* printer);
QPrinter* QPrinter_new3(int mode);
QPrinter* QPrinter_new4(const QPrinterInfo* printer, int mode);
int QPrinter_DevType(const QPrinter* self);
void QPrinter_OnDevType(const QPrinter* self, intptr_t slot);
int QPrinter_QBaseDevType(const QPrinter* self);
void QPrinter_SetOutputFormat(QPrinter* self, int format);
int QPrinter_OutputFormat(const QPrinter* self);
void QPrinter_SetPdfVersion(QPrinter* self, int version);
int QPrinter_PdfVersion(const QPrinter* self);
void QPrinter_SetPrinterName(QPrinter* self, const libqt_string printerName);
libqt_string QPrinter_PrinterName(const QPrinter* self);
bool QPrinter_IsValid(const QPrinter* self);
void QPrinter_SetOutputFileName(QPrinter* self, const libqt_string outputFileName);
libqt_string QPrinter_OutputFileName(const QPrinter* self);
void QPrinter_SetPrintProgram(QPrinter* self, const libqt_string printProgram);
libqt_string QPrinter_PrintProgram(const QPrinter* self);
void QPrinter_SetDocName(QPrinter* self, const libqt_string docName);
libqt_string QPrinter_DocName(const QPrinter* self);
void QPrinter_SetCreator(QPrinter* self, const libqt_string creator);
libqt_string QPrinter_Creator(const QPrinter* self);
void QPrinter_SetPageOrder(QPrinter* self, int pageOrder);
int QPrinter_PageOrder(const QPrinter* self);
void QPrinter_SetResolution(QPrinter* self, int resolution);
int QPrinter_Resolution(const QPrinter* self);
void QPrinter_SetColorMode(QPrinter* self, int colorMode);
int QPrinter_ColorMode(const QPrinter* self);
void QPrinter_SetCollateCopies(QPrinter* self, bool collate);
bool QPrinter_CollateCopies(const QPrinter* self);
void QPrinter_SetFullPage(QPrinter* self, bool fullPage);
bool QPrinter_FullPage(const QPrinter* self);
void QPrinter_SetCopyCount(QPrinter* self, int copyCount);
int QPrinter_CopyCount(const QPrinter* self);
bool QPrinter_SupportsMultipleCopies(const QPrinter* self);
void QPrinter_SetPaperSource(QPrinter* self, int paperSource);
int QPrinter_PaperSource(const QPrinter* self);
void QPrinter_SetDuplex(QPrinter* self, int duplex);
int QPrinter_Duplex(const QPrinter* self);
libqt_list /* of int */ QPrinter_SupportedResolutions(const QPrinter* self);
void QPrinter_SetFontEmbeddingEnabled(QPrinter* self, bool enable);
bool QPrinter_FontEmbeddingEnabled(const QPrinter* self);
QRectF* QPrinter_PaperRect(const QPrinter* self, int param1);
QRectF* QPrinter_PageRect(const QPrinter* self, int param1);
libqt_string QPrinter_PrinterSelectionOption(const QPrinter* self);
void QPrinter_SetPrinterSelectionOption(QPrinter* self, const libqt_string printerSelectionOption);
bool QPrinter_NewPage(QPrinter* self);
void QPrinter_OnNewPage(QPrinter* self, intptr_t slot);
bool QPrinter_QBaseNewPage(QPrinter* self);
bool QPrinter_Abort(QPrinter* self);
int QPrinter_PrinterState(const QPrinter* self);
QPaintEngine* QPrinter_PaintEngine(const QPrinter* self);
void QPrinter_OnPaintEngine(const QPrinter* self, intptr_t slot);
QPaintEngine* QPrinter_QBasePaintEngine(const QPrinter* self);
QPrintEngine* QPrinter_PrintEngine(const QPrinter* self);
void QPrinter_SetFromTo(QPrinter* self, int fromPage, int toPage);
int QPrinter_FromPage(const QPrinter* self);
int QPrinter_ToPage(const QPrinter* self);
void QPrinter_SetPrintRange(QPrinter* self, int range);
int QPrinter_PrintRange(const QPrinter* self);
int QPrinter_Metric(const QPrinter* self, int param1);
void QPrinter_OnMetric(const QPrinter* self, intptr_t slot);
int QPrinter_QBaseMetric(const QPrinter* self, int param1);
bool QPrinter_SetPageLayout(QPrinter* self, const QPageLayout* pageLayout);
void QPrinter_OnSetPageLayout(QPrinter* self, intptr_t slot);
bool QPrinter_QBaseSetPageLayout(QPrinter* self, const QPageLayout* pageLayout);
bool QPrinter_SetPageSize(QPrinter* self, const QPageSize* pageSize);
void QPrinter_OnSetPageSize(QPrinter* self, intptr_t slot);
bool QPrinter_QBaseSetPageSize(QPrinter* self, const QPageSize* pageSize);
bool QPrinter_SetPageOrientation(QPrinter* self, int orientation);
void QPrinter_OnSetPageOrientation(QPrinter* self, intptr_t slot);
bool QPrinter_QBaseSetPageOrientation(QPrinter* self, int orientation);
bool QPrinter_SetPageMargins(QPrinter* self, const QMarginsF* margins, int units);
void QPrinter_OnSetPageMargins(QPrinter* self, intptr_t slot);
bool QPrinter_QBaseSetPageMargins(QPrinter* self, const QMarginsF* margins, int units);
void QPrinter_SetPageRanges(QPrinter* self, const QPageRanges* ranges);
void QPrinter_OnSetPageRanges(QPrinter* self, intptr_t slot);
void QPrinter_QBaseSetPageRanges(QPrinter* self, const QPageRanges* ranges);
void QPrinter_InitPainter(const QPrinter* self, QPainter* painter);
void QPrinter_OnInitPainter(const QPrinter* self, intptr_t slot);
void QPrinter_QBaseInitPainter(const QPrinter* self, QPainter* painter);
QPaintDevice* QPrinter_Redirected(const QPrinter* self, QPoint* offset);
void QPrinter_OnRedirected(const QPrinter* self, intptr_t slot);
QPaintDevice* QPrinter_QBaseRedirected(const QPrinter* self, QPoint* offset);
QPainter* QPrinter_SharedPainter(const QPrinter* self);
void QPrinter_OnSharedPainter(const QPrinter* self, intptr_t slot);
QPainter* QPrinter_QBaseSharedPainter(const QPrinter* self);
void QPrinter_SetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
void QPrinter_OnSetEngines(QPrinter* self, intptr_t slot);
void QPrinter_QBaseSetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
double QPrinter_GetDecodedMetricF(const QPrinter* self, int metricA, int metricB);
void QPrinter_OnGetDecodedMetricF(const QPrinter* self, intptr_t slot);
double QPrinter_QBaseGetDecodedMetricF(const QPrinter* self, int metricA, int metricB);
void QPrinter_Delete(QPrinter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
