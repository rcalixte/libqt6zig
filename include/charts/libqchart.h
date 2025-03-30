#pragma once
#ifndef SRC_CHARTSC_LIBQCHART_H
#define SRC_CHARTSC_LIBQCHART_H

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
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QAction QAction;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChart QChart;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QCursor QCursor;
typedef struct QEasingCurve QEasingCurve;
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
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
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
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

#ifdef __cplusplus
typedef QChart::AnimationOption AnimationOption; // C++ enum
typedef QChart::AnimationOptions AnimationOptions; // C++ QFlags
typedef QChart::ChartTheme ChartTheme; // C++ enum
typedef QChart::ChartType ChartType; // C++ enum
#else
typedef int AnimationOption; // C ABI enum
typedef int AnimationOptions; // C ABI QFlags
typedef int ChartTheme; // C ABI enum
typedef int ChartType; // C ABI enum
#endif

QChart* QChart_new();
QChart* QChart_new2(QGraphicsItem* parent);
QChart* QChart_new3(QGraphicsItem* parent, int wFlags);
QMetaObject* QChart_MetaObject(const QChart* self);
void* QChart_Metacast(QChart* self, const char* param1);
int QChart_Metacall(QChart* self, int param1, int param2, void** param3);
void QChart_OnMetacall(QChart* self, intptr_t slot);
int QChart_QBaseMetacall(QChart* self, int param1, int param2, void** param3);
libqt_string QChart_Tr(const char* s);
void QChart_AddSeries(QChart* self, QAbstractSeries* series);
void QChart_RemoveSeries(QChart* self, QAbstractSeries* series);
void QChart_RemoveAllSeries(QChart* self);
libqt_list /* of QAbstractSeries* */ QChart_Series(const QChart* self);
void QChart_SetAxisX(QChart* self, QAbstractAxis* axis);
void QChart_SetAxisY(QChart* self, QAbstractAxis* axis);
QAbstractAxis* QChart_AxisX(const QChart* self);
QAbstractAxis* QChart_AxisY(const QChart* self);
void QChart_AddAxis(QChart* self, QAbstractAxis* axis, int alignment);
void QChart_RemoveAxis(QChart* self, QAbstractAxis* axis);
libqt_list /* of QAbstractAxis* */ QChart_Axes(const QChart* self);
void QChart_CreateDefaultAxes(QChart* self);
void QChart_SetTheme(QChart* self, int theme);
int QChart_Theme(const QChart* self);
void QChart_SetTitle(QChart* self, libqt_string title);
libqt_string QChart_Title(const QChart* self);
void QChart_SetTitleFont(QChart* self, QFont* font);
QFont* QChart_TitleFont(const QChart* self);
void QChart_SetTitleBrush(QChart* self, QBrush* brush);
QBrush* QChart_TitleBrush(const QChart* self);
void QChart_SetBackgroundBrush(QChart* self, QBrush* brush);
QBrush* QChart_BackgroundBrush(const QChart* self);
void QChart_SetBackgroundPen(QChart* self, QPen* pen);
QPen* QChart_BackgroundPen(const QChart* self);
void QChart_SetBackgroundVisible(QChart* self);
bool QChart_IsBackgroundVisible(const QChart* self);
void QChart_SetDropShadowEnabled(QChart* self);
bool QChart_IsDropShadowEnabled(const QChart* self);
void QChart_SetBackgroundRoundness(QChart* self, double diameter);
double QChart_BackgroundRoundness(const QChart* self);
void QChart_SetAnimationOptions(QChart* self, int options);
int QChart_AnimationOptions(const QChart* self);
void QChart_SetAnimationDuration(QChart* self, int msecs);
int QChart_AnimationDuration(const QChart* self);
void QChart_SetAnimationEasingCurve(QChart* self, QEasingCurve* curve);
QEasingCurve* QChart_AnimationEasingCurve(const QChart* self);
void QChart_ZoomIn(QChart* self);
void QChart_ZoomOut(QChart* self);
void QChart_ZoomInWithRect(QChart* self, QRectF* rect);
void QChart_Zoom(QChart* self, double factor);
void QChart_ZoomReset(QChart* self);
bool QChart_IsZoomed(QChart* self);
void QChart_Scroll(QChart* self, double dx, double dy);
QLegend* QChart_Legend(const QChart* self);
void QChart_SetMargins(QChart* self, QMargins* margins);
QMargins* QChart_Margins(const QChart* self);
QRectF* QChart_PlotArea(const QChart* self);
void QChart_SetPlotArea(QChart* self, QRectF* rect);
void QChart_SetPlotAreaBackgroundBrush(QChart* self, QBrush* brush);
QBrush* QChart_PlotAreaBackgroundBrush(const QChart* self);
void QChart_SetPlotAreaBackgroundPen(QChart* self, QPen* pen);
QPen* QChart_PlotAreaBackgroundPen(const QChart* self);
void QChart_SetPlotAreaBackgroundVisible(QChart* self);
bool QChart_IsPlotAreaBackgroundVisible(const QChart* self);
void QChart_SetLocalizeNumbers(QChart* self, bool localize);
bool QChart_LocalizeNumbers(const QChart* self);
void QChart_SetLocale(QChart* self, QLocale* locale);
QLocale* QChart_Locale(const QChart* self);
QPointF* QChart_MapToValue(QChart* self, QPointF* position);
QPointF* QChart_MapToPosition(QChart* self, QPointF* value);
int QChart_ChartType(const QChart* self);
void QChart_PlotAreaChanged(QChart* self, QRectF* plotArea);
void QChart_Connect_PlotAreaChanged(QChart* self, intptr_t slot);
libqt_string QChart_Tr2(const char* s, const char* c);
libqt_string QChart_Tr3(const char* s, const char* c, int n);
void QChart_SetAxisX2(QChart* self, QAbstractAxis* axis, QAbstractSeries* series);
void QChart_SetAxisY2(QChart* self, QAbstractAxis* axis, QAbstractSeries* series);
QAbstractAxis* QChart_AxisX1(const QChart* self, QAbstractSeries* series);
QAbstractAxis* QChart_AxisY1(const QChart* self, QAbstractSeries* series);
libqt_list /* of QAbstractAxis* */ QChart_Axes1(const QChart* self, int orientation);
libqt_list /* of QAbstractAxis* */ QChart_Axes2(const QChart* self, int orientation, QAbstractSeries* series);
void QChart_SetBackgroundVisible1(QChart* self, bool visible);
void QChart_SetDropShadowEnabled1(QChart* self, bool enabled);
void QChart_SetPlotAreaBackgroundVisible1(QChart* self, bool visible);
QPointF* QChart_MapToValue2(QChart* self, QPointF* position, QAbstractSeries* series);
QPointF* QChart_MapToPosition2(QChart* self, QPointF* value, QAbstractSeries* series);
void QChart_SetGeometry(QChart* self, QRectF* rect);
void QChart_OnSetGeometry(QChart* self, intptr_t slot);
void QChart_QBaseSetGeometry(QChart* self, QRectF* rect);
void QChart_GetContentsMargins(const QChart* self, double* left, double* top, double* right, double* bottom);
void QChart_OnGetContentsMargins(const QChart* self, intptr_t slot);
void QChart_QBaseGetContentsMargins(const QChart* self, double* left, double* top, double* right, double* bottom);
int QChart_Type(const QChart* self);
void QChart_OnType(const QChart* self, intptr_t slot);
int QChart_QBaseType(const QChart* self);
void QChart_Paint(QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QChart_OnPaint(QChart* self, intptr_t slot);
void QChart_QBasePaint(QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QChart_PaintWindowFrame(QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QChart_OnPaintWindowFrame(QChart* self, intptr_t slot);
void QChart_QBasePaintWindowFrame(QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
QRectF* QChart_BoundingRect(const QChart* self);
void QChart_OnBoundingRect(const QChart* self, intptr_t slot);
QRectF* QChart_QBaseBoundingRect(const QChart* self);
QPainterPath* QChart_Shape(const QChart* self);
void QChart_OnShape(const QChart* self, intptr_t slot);
QPainterPath* QChart_QBaseShape(const QChart* self);
void QChart_UpdateGeometry(QChart* self);
void QChart_OnUpdateGeometry(QChart* self, intptr_t slot);
void QChart_QBaseUpdateGeometry(QChart* self);
QVariant* QChart_ItemChange(QChart* self, int change, QVariant* value);
void QChart_OnItemChange(QChart* self, intptr_t slot);
QVariant* QChart_QBaseItemChange(QChart* self, int change, QVariant* value);
QVariant* QChart_PropertyChange(QChart* self, libqt_string propertyName, QVariant* value);
void QChart_OnPropertyChange(QChart* self, intptr_t slot);
QVariant* QChart_QBasePropertyChange(QChart* self, libqt_string propertyName, QVariant* value);
bool QChart_SceneEvent(QChart* self, QEvent* event);
void QChart_OnSceneEvent(QChart* self, intptr_t slot);
bool QChart_QBaseSceneEvent(QChart* self, QEvent* event);
bool QChart_WindowFrameEvent(QChart* self, QEvent* e);
void QChart_OnWindowFrameEvent(QChart* self, intptr_t slot);
bool QChart_QBaseWindowFrameEvent(QChart* self, QEvent* e);
bool QChart_Event(QChart* self, QEvent* event);
void QChart_OnEvent(QChart* self, intptr_t slot);
bool QChart_QBaseEvent(QChart* self, QEvent* event);
void QChart_ChangeEvent(QChart* self, QEvent* event);
void QChart_OnChangeEvent(QChart* self, intptr_t slot);
void QChart_QBaseChangeEvent(QChart* self, QEvent* event);
void QChart_CloseEvent(QChart* self, QCloseEvent* event);
void QChart_OnCloseEvent(QChart* self, intptr_t slot);
void QChart_QBaseCloseEvent(QChart* self, QCloseEvent* event);
void QChart_FocusInEvent(QChart* self, QFocusEvent* event);
void QChart_OnFocusInEvent(QChart* self, intptr_t slot);
void QChart_QBaseFocusInEvent(QChart* self, QFocusEvent* event);
bool QChart_FocusNextPrevChild(QChart* self, bool next);
void QChart_OnFocusNextPrevChild(QChart* self, intptr_t slot);
bool QChart_QBaseFocusNextPrevChild(QChart* self, bool next);
void QChart_FocusOutEvent(QChart* self, QFocusEvent* event);
void QChart_OnFocusOutEvent(QChart* self, intptr_t slot);
void QChart_QBaseFocusOutEvent(QChart* self, QFocusEvent* event);
void QChart_HideEvent(QChart* self, QHideEvent* event);
void QChart_OnHideEvent(QChart* self, intptr_t slot);
void QChart_QBaseHideEvent(QChart* self, QHideEvent* event);
void QChart_MoveEvent(QChart* self, QGraphicsSceneMoveEvent* event);
void QChart_OnMoveEvent(QChart* self, intptr_t slot);
void QChart_QBaseMoveEvent(QChart* self, QGraphicsSceneMoveEvent* event);
void QChart_PolishEvent(QChart* self);
void QChart_OnPolishEvent(QChart* self, intptr_t slot);
void QChart_QBasePolishEvent(QChart* self);
void QChart_ResizeEvent(QChart* self, QGraphicsSceneResizeEvent* event);
void QChart_OnResizeEvent(QChart* self, intptr_t slot);
void QChart_QBaseResizeEvent(QChart* self, QGraphicsSceneResizeEvent* event);
void QChart_ShowEvent(QChart* self, QShowEvent* event);
void QChart_OnShowEvent(QChart* self, intptr_t slot);
void QChart_QBaseShowEvent(QChart* self, QShowEvent* event);
void QChart_HoverMoveEvent(QChart* self, QGraphicsSceneHoverEvent* event);
void QChart_OnHoverMoveEvent(QChart* self, intptr_t slot);
void QChart_QBaseHoverMoveEvent(QChart* self, QGraphicsSceneHoverEvent* event);
void QChart_HoverLeaveEvent(QChart* self, QGraphicsSceneHoverEvent* event);
void QChart_OnHoverLeaveEvent(QChart* self, intptr_t slot);
void QChart_QBaseHoverLeaveEvent(QChart* self, QGraphicsSceneHoverEvent* event);
void QChart_GrabMouseEvent(QChart* self, QEvent* event);
void QChart_OnGrabMouseEvent(QChart* self, intptr_t slot);
void QChart_QBaseGrabMouseEvent(QChart* self, QEvent* event);
void QChart_UngrabMouseEvent(QChart* self, QEvent* event);
void QChart_OnUngrabMouseEvent(QChart* self, intptr_t slot);
void QChart_QBaseUngrabMouseEvent(QChart* self, QEvent* event);
void QChart_GrabKeyboardEvent(QChart* self, QEvent* event);
void QChart_OnGrabKeyboardEvent(QChart* self, intptr_t slot);
void QChart_QBaseGrabKeyboardEvent(QChart* self, QEvent* event);
void QChart_UngrabKeyboardEvent(QChart* self, QEvent* event);
void QChart_OnUngrabKeyboardEvent(QChart* self, intptr_t slot);
void QChart_QBaseUngrabKeyboardEvent(QChart* self, QEvent* event);
bool QChart_EventFilter(QChart* self, QObject* watched, QEvent* event);
void QChart_OnEventFilter(QChart* self, intptr_t slot);
bool QChart_QBaseEventFilter(QChart* self, QObject* watched, QEvent* event);
void QChart_TimerEvent(QChart* self, QTimerEvent* event);
void QChart_OnTimerEvent(QChart* self, intptr_t slot);
void QChart_QBaseTimerEvent(QChart* self, QTimerEvent* event);
void QChart_ChildEvent(QChart* self, QChildEvent* event);
void QChart_OnChildEvent(QChart* self, intptr_t slot);
void QChart_QBaseChildEvent(QChart* self, QChildEvent* event);
void QChart_CustomEvent(QChart* self, QEvent* event);
void QChart_OnCustomEvent(QChart* self, intptr_t slot);
void QChart_QBaseCustomEvent(QChart* self, QEvent* event);
void QChart_ConnectNotify(QChart* self, QMetaMethod* signal);
void QChart_OnConnectNotify(QChart* self, intptr_t slot);
void QChart_QBaseConnectNotify(QChart* self, QMetaMethod* signal);
void QChart_DisconnectNotify(QChart* self, QMetaMethod* signal);
void QChart_OnDisconnectNotify(QChart* self, intptr_t slot);
void QChart_QBaseDisconnectNotify(QChart* self, QMetaMethod* signal);
void QChart_Advance(QChart* self, int phase);
void QChart_OnAdvance(QChart* self, intptr_t slot);
void QChart_QBaseAdvance(QChart* self, int phase);
bool QChart_Contains(const QChart* self, QPointF* point);
void QChart_OnContains(const QChart* self, intptr_t slot);
bool QChart_QBaseContains(const QChart* self, QPointF* point);
bool QChart_CollidesWithItem(const QChart* self, QGraphicsItem* other, int mode);
void QChart_OnCollidesWithItem(const QChart* self, intptr_t slot);
bool QChart_QBaseCollidesWithItem(const QChart* self, QGraphicsItem* other, int mode);
bool QChart_CollidesWithPath(const QChart* self, QPainterPath* path, int mode);
void QChart_OnCollidesWithPath(const QChart* self, intptr_t slot);
bool QChart_QBaseCollidesWithPath(const QChart* self, QPainterPath* path, int mode);
bool QChart_IsObscuredBy(const QChart* self, QGraphicsItem* item);
void QChart_OnIsObscuredBy(const QChart* self, intptr_t slot);
bool QChart_QBaseIsObscuredBy(const QChart* self, QGraphicsItem* item);
QPainterPath* QChart_OpaqueArea(const QChart* self);
void QChart_OnOpaqueArea(const QChart* self, intptr_t slot);
QPainterPath* QChart_QBaseOpaqueArea(const QChart* self);
bool QChart_SceneEventFilter(QChart* self, QGraphicsItem* watched, QEvent* event);
void QChart_OnSceneEventFilter(QChart* self, intptr_t slot);
bool QChart_QBaseSceneEventFilter(QChart* self, QGraphicsItem* watched, QEvent* event);
void QChart_ContextMenuEvent(QChart* self, QGraphicsSceneContextMenuEvent* event);
void QChart_OnContextMenuEvent(QChart* self, intptr_t slot);
void QChart_QBaseContextMenuEvent(QChart* self, QGraphicsSceneContextMenuEvent* event);
void QChart_DragEnterEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
void QChart_OnDragEnterEvent(QChart* self, intptr_t slot);
void QChart_QBaseDragEnterEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
void QChart_DragLeaveEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
void QChart_OnDragLeaveEvent(QChart* self, intptr_t slot);
void QChart_QBaseDragLeaveEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
void QChart_DragMoveEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
void QChart_OnDragMoveEvent(QChart* self, intptr_t slot);
void QChart_QBaseDragMoveEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
void QChart_DropEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
void QChart_OnDropEvent(QChart* self, intptr_t slot);
void QChart_QBaseDropEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
void QChart_HoverEnterEvent(QChart* self, QGraphicsSceneHoverEvent* event);
void QChart_OnHoverEnterEvent(QChart* self, intptr_t slot);
void QChart_QBaseHoverEnterEvent(QChart* self, QGraphicsSceneHoverEvent* event);
void QChart_KeyPressEvent(QChart* self, QKeyEvent* event);
void QChart_OnKeyPressEvent(QChart* self, intptr_t slot);
void QChart_QBaseKeyPressEvent(QChart* self, QKeyEvent* event);
void QChart_KeyReleaseEvent(QChart* self, QKeyEvent* event);
void QChart_OnKeyReleaseEvent(QChart* self, intptr_t slot);
void QChart_QBaseKeyReleaseEvent(QChart* self, QKeyEvent* event);
void QChart_MousePressEvent(QChart* self, QGraphicsSceneMouseEvent* event);
void QChart_OnMousePressEvent(QChart* self, intptr_t slot);
void QChart_QBaseMousePressEvent(QChart* self, QGraphicsSceneMouseEvent* event);
void QChart_MouseMoveEvent(QChart* self, QGraphicsSceneMouseEvent* event);
void QChart_OnMouseMoveEvent(QChart* self, intptr_t slot);
void QChart_QBaseMouseMoveEvent(QChart* self, QGraphicsSceneMouseEvent* event);
void QChart_MouseReleaseEvent(QChart* self, QGraphicsSceneMouseEvent* event);
void QChart_OnMouseReleaseEvent(QChart* self, intptr_t slot);
void QChart_QBaseMouseReleaseEvent(QChart* self, QGraphicsSceneMouseEvent* event);
void QChart_MouseDoubleClickEvent(QChart* self, QGraphicsSceneMouseEvent* event);
void QChart_OnMouseDoubleClickEvent(QChart* self, intptr_t slot);
void QChart_QBaseMouseDoubleClickEvent(QChart* self, QGraphicsSceneMouseEvent* event);
void QChart_WheelEvent(QChart* self, QGraphicsSceneWheelEvent* event);
void QChart_OnWheelEvent(QChart* self, intptr_t slot);
void QChart_QBaseWheelEvent(QChart* self, QGraphicsSceneWheelEvent* event);
void QChart_InputMethodEvent(QChart* self, QInputMethodEvent* event);
void QChart_OnInputMethodEvent(QChart* self, intptr_t slot);
void QChart_QBaseInputMethodEvent(QChart* self, QInputMethodEvent* event);
void QChart_SetExtension(QChart* self, int extension, QVariant* variant);
void QChart_OnSetExtension(QChart* self, intptr_t slot);
void QChart_QBaseSetExtension(QChart* self, int extension, QVariant* variant);
bool QChart_IsEmpty(const QChart* self);
void QChart_OnIsEmpty(const QChart* self, intptr_t slot);
bool QChart_QBaseIsEmpty(const QChart* self);
void QChart_InitStyleOption(const QChart* self, QStyleOption* option);
void QChart_OnInitStyleOption(const QChart* self, intptr_t slot);
void QChart_QBaseInitStyleOption(const QChart* self, QStyleOption* option);
QSizeF* QChart_SizeHint(const QChart* self, int which, QSizeF* constraint);
void QChart_OnSizeHint(const QChart* self, intptr_t slot);
QSizeF* QChart_QBaseSizeHint(const QChart* self, int which, QSizeF* constraint);
int QChart_WindowFrameSectionAt(const QChart* self, QPointF* pos);
void QChart_OnWindowFrameSectionAt(const QChart* self, intptr_t slot);
int QChart_QBaseWindowFrameSectionAt(const QChart* self, QPointF* pos);
QVariant* QChart_InputMethodQuery(const QChart* self, int query);
void QChart_OnInputMethodQuery(const QChart* self, intptr_t slot);
QVariant* QChart_QBaseInputMethodQuery(const QChart* self, int query);
bool QChart_SupportsExtension(const QChart* self, int extension);
void QChart_OnSupportsExtension(const QChart* self, intptr_t slot);
bool QChart_QBaseSupportsExtension(const QChart* self, int extension);
QVariant* QChart_Extension(const QChart* self, QVariant* variant);
void QChart_OnExtension(const QChart* self, intptr_t slot);
QVariant* QChart_QBaseExtension(const QChart* self, QVariant* variant);
void QChart_UpdateMicroFocus(QChart* self);
void QChart_OnUpdateMicroFocus(QChart* self, intptr_t slot);
void QChart_QBaseUpdateMicroFocus(QChart* self);
QObject* QChart_Sender(const QChart* self);
void QChart_OnSender(const QChart* self, intptr_t slot);
QObject* QChart_QBaseSender(const QChart* self);
int QChart_SenderSignalIndex(const QChart* self);
void QChart_OnSenderSignalIndex(const QChart* self, intptr_t slot);
int QChart_QBaseSenderSignalIndex(const QChart* self);
int QChart_Receivers(const QChart* self, const char* signal);
void QChart_OnReceivers(const QChart* self, intptr_t slot);
int QChart_QBaseReceivers(const QChart* self, const char* signal);
bool QChart_IsSignalConnected(const QChart* self, QMetaMethod* signal);
void QChart_OnIsSignalConnected(const QChart* self, intptr_t slot);
bool QChart_QBaseIsSignalConnected(const QChart* self, QMetaMethod* signal);
void QChart_AddToIndex(QChart* self);
void QChart_OnAddToIndex(QChart* self, intptr_t slot);
void QChart_QBaseAddToIndex(QChart* self);
void QChart_RemoveFromIndex(QChart* self);
void QChart_OnRemoveFromIndex(QChart* self, intptr_t slot);
void QChart_QBaseRemoveFromIndex(QChart* self);
void QChart_PrepareGeometryChange(QChart* self);
void QChart_OnPrepareGeometryChange(QChart* self, intptr_t slot);
void QChart_QBasePrepareGeometryChange(QChart* self);
void QChart_SetGraphicsItem(QChart* self, QGraphicsItem* item);
void QChart_OnSetGraphicsItem(QChart* self, intptr_t slot);
void QChart_QBaseSetGraphicsItem(QChart* self, QGraphicsItem* item);
void QChart_SetOwnedByLayout(QChart* self, bool ownedByLayout);
void QChart_OnSetOwnedByLayout(QChart* self, intptr_t slot);
void QChart_QBaseSetOwnedByLayout(QChart* self, bool ownedByLayout);
void QChart_Delete(QChart* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
