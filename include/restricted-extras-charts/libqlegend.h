#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQLEGEND_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQLEGEND_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPen QPen;
typedef struct QShowEvent QShowEvent;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QWidget QWidget;
#endif

QMetaObject* QLegend_MetaObject(const QLegend* self);
void* QLegend_Metacast(QLegend* self, const char* param1);
int QLegend_Metacall(QLegend* self, int param1, int param2, void** param3);
libqt_string QLegend_Tr(const char* s);
void QLegend_Paint(QLegend* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
void QLegend_SetBrush(QLegend* self, const QBrush* brush);
QBrush* QLegend_Brush(const QLegend* self);
void QLegend_SetColor(QLegend* self, QColor* color);
QColor* QLegend_Color(QLegend* self);
void QLegend_SetPen(QLegend* self, const QPen* pen);
QPen* QLegend_Pen(const QLegend* self);
void QLegend_SetBorderColor(QLegend* self, QColor* color);
QColor* QLegend_BorderColor(QLegend* self);
void QLegend_SetFont(QLegend* self, const QFont* font);
QFont* QLegend_Font(const QLegend* self);
void QLegend_SetLabelBrush(QLegend* self, const QBrush* brush);
QBrush* QLegend_LabelBrush(const QLegend* self);
void QLegend_SetLabelColor(QLegend* self, QColor* color);
QColor* QLegend_LabelColor(const QLegend* self);
void QLegend_SetAlignment(QLegend* self, int alignment);
int QLegend_Alignment(const QLegend* self);
void QLegend_DetachFromChart(QLegend* self);
void QLegend_AttachToChart(QLegend* self);
bool QLegend_IsAttachedToChart(QLegend* self);
void QLegend_SetBackgroundVisible(QLegend* self);
bool QLegend_IsBackgroundVisible(const QLegend* self);
libqt_list /* of QLegendMarker* */ QLegend_Markers(const QLegend* self);
bool QLegend_ReverseMarkers(QLegend* self);
void QLegend_SetReverseMarkers(QLegend* self);
bool QLegend_ShowToolTips(const QLegend* self);
void QLegend_SetShowToolTips(QLegend* self, bool show);
bool QLegend_IsInteractive(const QLegend* self);
void QLegend_SetInteractive(QLegend* self, bool interactive);
int QLegend_MarkerShape(const QLegend* self);
void QLegend_SetMarkerShape(QLegend* self, int shape);
void QLegend_BackgroundVisibleChanged(QLegend* self, bool visible);
void QLegend_Connect_BackgroundVisibleChanged(QLegend* self, intptr_t slot);
void QLegend_ColorChanged(QLegend* self, QColor* color);
void QLegend_Connect_ColorChanged(QLegend* self, intptr_t slot);
void QLegend_BorderColorChanged(QLegend* self, QColor* color);
void QLegend_Connect_BorderColorChanged(QLegend* self, intptr_t slot);
void QLegend_FontChanged(QLegend* self, QFont* font);
void QLegend_Connect_FontChanged(QLegend* self, intptr_t slot);
void QLegend_LabelColorChanged(QLegend* self, QColor* color);
void QLegend_Connect_LabelColorChanged(QLegend* self, intptr_t slot);
void QLegend_ReverseMarkersChanged(QLegend* self, bool reverseMarkers);
void QLegend_Connect_ReverseMarkersChanged(QLegend* self, intptr_t slot);
void QLegend_ShowToolTipsChanged(QLegend* self, bool showToolTips);
void QLegend_Connect_ShowToolTipsChanged(QLegend* self, intptr_t slot);
void QLegend_MarkerShapeChanged(QLegend* self, int shape);
void QLegend_Connect_MarkerShapeChanged(QLegend* self, intptr_t slot);
void QLegend_AttachedToChartChanged(QLegend* self, bool attachedToChart);
void QLegend_Connect_AttachedToChartChanged(QLegend* self, intptr_t slot);
void QLegend_InteractiveChanged(QLegend* self, bool interactive);
void QLegend_Connect_InteractiveChanged(QLegend* self, intptr_t slot);
libqt_string QLegend_Tr2(const char* s, const char* c);
libqt_string QLegend_Tr3(const char* s, const char* c, int n);
void QLegend_SetBackgroundVisible1(QLegend* self, bool visible);
libqt_list /* of QLegendMarker* */ QLegend_Markers1(const QLegend* self, QAbstractSeries* series);
void QLegend_SetReverseMarkers1(QLegend* self, bool reverseMarkers);
void QLegend_Delete(QLegend* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
