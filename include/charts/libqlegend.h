#pragma once
#ifndef SRC_CHARTSC_LIBQLEGEND_H
#define SRC_CHARTSC_LIBQLEGEND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QAction QAction;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
typedef struct QCursor QCursor;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemGroup QGraphicsItemGroup;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneMoveEvent QGraphicsSceneMoveEvent;
typedef struct QGraphicsSceneResizeEvent QGraphicsSceneResizeEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QGraphicsTransform QGraphicsTransform;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMarginsF QMarginsF;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

#ifdef __cplusplus
typedef QLegend::MarkerShape MarkerShape; // C++ enum
#else
typedef int MarkerShape; // C ABI enum
#endif

QMetaObject* QLegend_MetaObject(const QLegend* self);
void* QLegend_Metacast(QLegend* self, const char* param1);
int QLegend_Metacall(QLegend* self, int param1, int param2, void** param3);
libqt_string QLegend_Tr(const char* s);
void QLegend_Paint(QLegend* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QLegend_SetBrush(QLegend* self, QBrush* brush);
QBrush* QLegend_Brush(const QLegend* self);
void QLegend_SetColor(QLegend* self, QColor* color);
QColor* QLegend_Color(QLegend* self);
void QLegend_SetPen(QLegend* self, QPen* pen);
QPen* QLegend_Pen(const QLegend* self);
void QLegend_SetBorderColor(QLegend* self, QColor* color);
QColor* QLegend_BorderColor(QLegend* self);
void QLegend_SetFont(QLegend* self, QFont* font);
QFont* QLegend_Font(const QLegend* self);
void QLegend_SetLabelBrush(QLegend* self, QBrush* brush);
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
void QLegend_SetGeometry(QLegend* self, QRectF* rect);
void QLegend_GetContentsMargins(const QLegend* self, double* left, double* top, double* right, double* bottom);
int QLegend_Type(const QLegend* self);
void QLegend_PaintWindowFrame(QLegend* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
QRectF* QLegend_BoundingRect(const QLegend* self);
QPainterPath* QLegend_Shape(const QLegend* self);
bool QLegend_EventFilter(QLegend* self, QObject* watched, QEvent* event);
void QLegend_Advance(QLegend* self, int phase);
bool QLegend_Contains(const QLegend* self, QPointF* point);
bool QLegend_CollidesWithItem(const QLegend* self, QGraphicsItem* other, int mode);
bool QLegend_CollidesWithPath(const QLegend* self, QPainterPath* path, int mode);
bool QLegend_IsObscuredBy(const QLegend* self, QGraphicsItem* item);
QPainterPath* QLegend_OpaqueArea(const QLegend* self);
bool QLegend_IsEmpty(const QLegend* self);
void QLegend_Delete(QLegend* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
