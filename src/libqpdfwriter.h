#pragma once
#ifndef SRCC_LIBQPDFWRITER_H
#define SRCC_LIBQPDFWRITER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMarginsF QMarginsF;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPageLayout QPageLayout;
typedef struct QPageRanges QPageRanges;
typedef struct QPageSize QPageSize;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPdfOutputIntent QPdfOutputIntent;
typedef struct QPdfWriter QPdfWriter;
typedef struct QPoint QPoint;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUuid QUuid;
#endif

QPdfWriter* QPdfWriter_new(const libqt_string filename);
QPdfWriter* QPdfWriter_new2(QIODevice* device);
QMetaObject* QPdfWriter_MetaObject(const QPdfWriter* self);
void* QPdfWriter_Metacast(QPdfWriter* self, const char* param1);
int QPdfWriter_Metacall(QPdfWriter* self, int param1, int param2, void** param3);
void QPdfWriter_SetPdfVersion(QPdfWriter* self, int version);
int QPdfWriter_PdfVersion(const QPdfWriter* self);
libqt_string QPdfWriter_Title(const QPdfWriter* self);
void QPdfWriter_SetTitle(QPdfWriter* self, const libqt_string title);
libqt_string QPdfWriter_Creator(const QPdfWriter* self);
void QPdfWriter_SetCreator(QPdfWriter* self, const libqt_string creator);
QUuid* QPdfWriter_DocumentId(const QPdfWriter* self);
void QPdfWriter_SetDocumentId(QPdfWriter* self, QUuid* documentId);
bool QPdfWriter_NewPage(QPdfWriter* self);
void QPdfWriter_SetResolution(QPdfWriter* self, int resolution);
int QPdfWriter_Resolution(const QPdfWriter* self);
void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, const libqt_string xmpMetadata);
libqt_string QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self);
void QPdfWriter_AddFileAttachment(QPdfWriter* self, const libqt_string fileName, const libqt_string data);
int QPdfWriter_ColorModel(const QPdfWriter* self);
void QPdfWriter_SetColorModel(QPdfWriter* self, int model);
QPdfOutputIntent* QPdfWriter_OutputIntent(const QPdfWriter* self);
void QPdfWriter_SetOutputIntent(QPdfWriter* self, const QPdfOutputIntent* intent);
QPaintEngine* QPdfWriter_PaintEngine(const QPdfWriter* self);
int QPdfWriter_Metric(const QPdfWriter* self, int id);
void QPdfWriter_AddFileAttachment3(QPdfWriter* self, const libqt_string fileName, const libqt_string data, const libqt_string mimeType);
void QPdfWriter_OnMetaObject(const QPdfWriter* self, intptr_t slot);
QMetaObject* QPdfWriter_SuperMetaObject(const QPdfWriter* self);
void QPdfWriter_OnMetacast(QPdfWriter* self, intptr_t slot);
void* QPdfWriter_SuperMetacast(QPdfWriter* self, const char* param1);
void QPdfWriter_OnMetacall(QPdfWriter* self, intptr_t slot);
int QPdfWriter_SuperMetacall(QPdfWriter* self, int param1, int param2, void** param3);
void QPdfWriter_OnNewPage(QPdfWriter* self, intptr_t slot);
bool QPdfWriter_SuperNewPage(QPdfWriter* self);
void QPdfWriter_OnPaintEngine(const QPdfWriter* self, intptr_t slot);
QPaintEngine* QPdfWriter_SuperPaintEngine(const QPdfWriter* self);
void QPdfWriter_OnMetric(const QPdfWriter* self, intptr_t slot);
int QPdfWriter_SuperMetric(const QPdfWriter* self, int id);
bool QPdfWriter_Event(QPdfWriter* self, QEvent* event);
void QPdfWriter_OnEvent(QPdfWriter* self, intptr_t slot);
bool QPdfWriter_SuperEvent(QPdfWriter* self, QEvent* event);
bool QPdfWriter_EventFilter(QPdfWriter* self, QObject* watched, QEvent* event);
void QPdfWriter_OnEventFilter(QPdfWriter* self, intptr_t slot);
bool QPdfWriter_SuperEventFilter(QPdfWriter* self, QObject* watched, QEvent* event);
void QPdfWriter_TimerEvent(QPdfWriter* self, QTimerEvent* event);
void QPdfWriter_OnTimerEvent(QPdfWriter* self, intptr_t slot);
void QPdfWriter_SuperTimerEvent(QPdfWriter* self, QTimerEvent* event);
void QPdfWriter_ChildEvent(QPdfWriter* self, QChildEvent* event);
void QPdfWriter_OnChildEvent(QPdfWriter* self, intptr_t slot);
void QPdfWriter_SuperChildEvent(QPdfWriter* self, QChildEvent* event);
void QPdfWriter_CustomEvent(QPdfWriter* self, QEvent* event);
void QPdfWriter_OnCustomEvent(QPdfWriter* self, intptr_t slot);
void QPdfWriter_SuperCustomEvent(QPdfWriter* self, QEvent* event);
void QPdfWriter_ConnectNotify(QPdfWriter* self, const QMetaMethod* signal);
void QPdfWriter_OnConnectNotify(QPdfWriter* self, intptr_t slot);
void QPdfWriter_SuperConnectNotify(QPdfWriter* self, const QMetaMethod* signal);
void QPdfWriter_DisconnectNotify(QPdfWriter* self, const QMetaMethod* signal);
void QPdfWriter_OnDisconnectNotify(QPdfWriter* self, intptr_t slot);
void QPdfWriter_SuperDisconnectNotify(QPdfWriter* self, const QMetaMethod* signal);
bool QPdfWriter_SetPageLayout(QPdfWriter* self, const QPageLayout* pageLayout);
void QPdfWriter_OnSetPageLayout(QPdfWriter* self, intptr_t slot);
bool QPdfWriter_SuperSetPageLayout(QPdfWriter* self, const QPageLayout* pageLayout);
bool QPdfWriter_SetPageSize(QPdfWriter* self, const QPageSize* pageSize);
void QPdfWriter_OnSetPageSize(QPdfWriter* self, intptr_t slot);
bool QPdfWriter_SuperSetPageSize(QPdfWriter* self, const QPageSize* pageSize);
bool QPdfWriter_SetPageOrientation(QPdfWriter* self, int orientation);
void QPdfWriter_OnSetPageOrientation(QPdfWriter* self, intptr_t slot);
bool QPdfWriter_SuperSetPageOrientation(QPdfWriter* self, int orientation);
bool QPdfWriter_SetPageMargins(QPdfWriter* self, const QMarginsF* margins, int units);
void QPdfWriter_OnSetPageMargins(QPdfWriter* self, intptr_t slot);
bool QPdfWriter_SuperSetPageMargins(QPdfWriter* self, const QMarginsF* margins, int units);
void QPdfWriter_SetPageRanges(QPdfWriter* self, const QPageRanges* ranges);
void QPdfWriter_OnSetPageRanges(QPdfWriter* self, intptr_t slot);
void QPdfWriter_SuperSetPageRanges(QPdfWriter* self, const QPageRanges* ranges);
int QPdfWriter_DevType(const QPdfWriter* self);
void QPdfWriter_OnDevType(const QPdfWriter* self, intptr_t slot);
int QPdfWriter_SuperDevType(const QPdfWriter* self);
void QPdfWriter_InitPainter(const QPdfWriter* self, QPainter* painter);
void QPdfWriter_OnInitPainter(const QPdfWriter* self, intptr_t slot);
void QPdfWriter_SuperInitPainter(const QPdfWriter* self, QPainter* painter);
QPaintDevice* QPdfWriter_Redirected(const QPdfWriter* self, QPoint* offset);
void QPdfWriter_OnRedirected(const QPdfWriter* self, intptr_t slot);
QPaintDevice* QPdfWriter_SuperRedirected(const QPdfWriter* self, QPoint* offset);
QPainter* QPdfWriter_SharedPainter(const QPdfWriter* self);
void QPdfWriter_OnSharedPainter(const QPdfWriter* self, intptr_t slot);
QPainter* QPdfWriter_SuperSharedPainter(const QPdfWriter* self);
QObject* QPdfWriter_Sender(const QPdfWriter* self);
void QPdfWriter_OnSender(const QPdfWriter* self, intptr_t slot);
QObject* QPdfWriter_SuperSender(const QPdfWriter* self);
int QPdfWriter_SenderSignalIndex(const QPdfWriter* self);
void QPdfWriter_OnSenderSignalIndex(const QPdfWriter* self, intptr_t slot);
int QPdfWriter_SuperSenderSignalIndex(const QPdfWriter* self);
int QPdfWriter_Receivers(const QPdfWriter* self, const char* signal);
void QPdfWriter_OnReceivers(const QPdfWriter* self, intptr_t slot);
int QPdfWriter_SuperReceivers(const QPdfWriter* self, const char* signal);
bool QPdfWriter_IsSignalConnected(const QPdfWriter* self, const QMetaMethod* signal);
void QPdfWriter_OnIsSignalConnected(const QPdfWriter* self, intptr_t slot);
bool QPdfWriter_SuperIsSignalConnected(const QPdfWriter* self, const QMetaMethod* signal);
double QPdfWriter_GetDecodedMetricF(const QPdfWriter* self, int metricA, int metricB);
void QPdfWriter_OnGetDecodedMetricF(const QPdfWriter* self, intptr_t slot);
double QPdfWriter_SuperGetDecodedMetricF(const QPdfWriter* self, int metricA, int metricB);
void QPdfWriter_Delete(QPdfWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
