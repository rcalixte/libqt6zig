#pragma once
#ifndef SRC_CHARTSC_LIBQPOLARCHART_H
#define SRC_CHARTSC_LIBQPOLARCHART_H

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
typedef struct QPolarChart QPolarChart;
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
typedef QPolarChart::PolarOrientation PolarOrientation;   // C++ enum
typedef QPolarChart::PolarOrientations PolarOrientations; // C++ QFlags
#else
typedef int PolarOrientation;  // C ABI enum
typedef int PolarOrientations; // C ABI QFlags
#endif

QPolarChart* QPolarChart_new();
QPolarChart* QPolarChart_new2(QGraphicsItem* parent);
QPolarChart* QPolarChart_new3(QGraphicsItem* parent, int wFlags);
QMetaObject* QPolarChart_MetaObject(const QPolarChart* self);
void* QPolarChart_Metacast(QPolarChart* self, const char* param1);
int QPolarChart_Metacall(QPolarChart* self, int param1, int param2, void** param3);
void QPolarChart_OnMetacall(QPolarChart* self, intptr_t slot);
int QPolarChart_QBaseMetacall(QPolarChart* self, int param1, int param2, void** param3);
libqt_string QPolarChart_Tr(const char* s);
void QPolarChart_AddAxis(QPolarChart* self, QAbstractAxis* axis, int polarOrientation);
libqt_list /* of QAbstractAxis* */ QPolarChart_Axes(const QPolarChart* self);
int QPolarChart_AxisPolarOrientation(QAbstractAxis* axis);
libqt_string QPolarChart_Tr2(const char* s, const char* c);
libqt_string QPolarChart_Tr3(const char* s, const char* c, int n);
libqt_list /* of QAbstractAxis* */ QPolarChart_Axes1(const QPolarChart* self, int polarOrientation);
libqt_list /* of QAbstractAxis* */ QPolarChart_Axes2(const QPolarChart* self, int polarOrientation, QAbstractSeries* series);
void QPolarChart_SetGeometry(QPolarChart* self, QRectF* rect);
void QPolarChart_OnSetGeometry(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseSetGeometry(QPolarChart* self, QRectF* rect);
void QPolarChart_GetContentsMargins(const QPolarChart* self, double* left, double* top, double* right, double* bottom);
void QPolarChart_OnGetContentsMargins(const QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseGetContentsMargins(const QPolarChart* self, double* left, double* top, double* right, double* bottom);
int QPolarChart_Type(const QPolarChart* self);
void QPolarChart_OnType(const QPolarChart* self, intptr_t slot);
int QPolarChart_QBaseType(const QPolarChart* self);
void QPolarChart_Paint(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QPolarChart_OnPaint(QPolarChart* self, intptr_t slot);
void QPolarChart_QBasePaint(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QPolarChart_PaintWindowFrame(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QPolarChart_OnPaintWindowFrame(QPolarChart* self, intptr_t slot);
void QPolarChart_QBasePaintWindowFrame(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
QRectF* QPolarChart_BoundingRect(const QPolarChart* self);
void QPolarChart_OnBoundingRect(const QPolarChart* self, intptr_t slot);
QRectF* QPolarChart_QBaseBoundingRect(const QPolarChart* self);
QPainterPath* QPolarChart_Shape(const QPolarChart* self);
void QPolarChart_OnShape(const QPolarChart* self, intptr_t slot);
QPainterPath* QPolarChart_QBaseShape(const QPolarChart* self);
void QPolarChart_UpdateGeometry(QPolarChart* self);
void QPolarChart_OnUpdateGeometry(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseUpdateGeometry(QPolarChart* self);
QVariant* QPolarChart_ItemChange(QPolarChart* self, int change, QVariant* value);
void QPolarChart_OnItemChange(QPolarChart* self, intptr_t slot);
QVariant* QPolarChart_QBaseItemChange(QPolarChart* self, int change, QVariant* value);
QVariant* QPolarChart_PropertyChange(QPolarChart* self, libqt_string propertyName, QVariant* value);
void QPolarChart_OnPropertyChange(QPolarChart* self, intptr_t slot);
QVariant* QPolarChart_QBasePropertyChange(QPolarChart* self, libqt_string propertyName, QVariant* value);
bool QPolarChart_SceneEvent(QPolarChart* self, QEvent* event);
void QPolarChart_OnSceneEvent(QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseSceneEvent(QPolarChart* self, QEvent* event);
bool QPolarChart_WindowFrameEvent(QPolarChart* self, QEvent* e);
void QPolarChart_OnWindowFrameEvent(QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseWindowFrameEvent(QPolarChart* self, QEvent* e);
bool QPolarChart_Event(QPolarChart* self, QEvent* event);
void QPolarChart_OnEvent(QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseEvent(QPolarChart* self, QEvent* event);
void QPolarChart_ChangeEvent(QPolarChart* self, QEvent* event);
void QPolarChart_OnChangeEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseChangeEvent(QPolarChart* self, QEvent* event);
void QPolarChart_CloseEvent(QPolarChart* self, QCloseEvent* event);
void QPolarChart_OnCloseEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseCloseEvent(QPolarChart* self, QCloseEvent* event);
void QPolarChart_FocusInEvent(QPolarChart* self, QFocusEvent* event);
void QPolarChart_OnFocusInEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseFocusInEvent(QPolarChart* self, QFocusEvent* event);
bool QPolarChart_FocusNextPrevChild(QPolarChart* self, bool next);
void QPolarChart_OnFocusNextPrevChild(QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseFocusNextPrevChild(QPolarChart* self, bool next);
void QPolarChart_FocusOutEvent(QPolarChart* self, QFocusEvent* event);
void QPolarChart_OnFocusOutEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseFocusOutEvent(QPolarChart* self, QFocusEvent* event);
void QPolarChart_HideEvent(QPolarChart* self, QHideEvent* event);
void QPolarChart_OnHideEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseHideEvent(QPolarChart* self, QHideEvent* event);
void QPolarChart_MoveEvent(QPolarChart* self, QGraphicsSceneMoveEvent* event);
void QPolarChart_OnMoveEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseMoveEvent(QPolarChart* self, QGraphicsSceneMoveEvent* event);
void QPolarChart_PolishEvent(QPolarChart* self);
void QPolarChart_OnPolishEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBasePolishEvent(QPolarChart* self);
void QPolarChart_ResizeEvent(QPolarChart* self, QGraphicsSceneResizeEvent* event);
void QPolarChart_OnResizeEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseResizeEvent(QPolarChart* self, QGraphicsSceneResizeEvent* event);
void QPolarChart_ShowEvent(QPolarChart* self, QShowEvent* event);
void QPolarChart_OnShowEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseShowEvent(QPolarChart* self, QShowEvent* event);
void QPolarChart_HoverMoveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
void QPolarChart_OnHoverMoveEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseHoverMoveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
void QPolarChart_HoverLeaveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
void QPolarChart_OnHoverLeaveEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseHoverLeaveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
void QPolarChart_GrabMouseEvent(QPolarChart* self, QEvent* event);
void QPolarChart_OnGrabMouseEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseGrabMouseEvent(QPolarChart* self, QEvent* event);
void QPolarChart_UngrabMouseEvent(QPolarChart* self, QEvent* event);
void QPolarChart_OnUngrabMouseEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseUngrabMouseEvent(QPolarChart* self, QEvent* event);
void QPolarChart_GrabKeyboardEvent(QPolarChart* self, QEvent* event);
void QPolarChart_OnGrabKeyboardEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseGrabKeyboardEvent(QPolarChart* self, QEvent* event);
void QPolarChart_UngrabKeyboardEvent(QPolarChart* self, QEvent* event);
void QPolarChart_OnUngrabKeyboardEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseUngrabKeyboardEvent(QPolarChart* self, QEvent* event);
bool QPolarChart_EventFilter(QPolarChart* self, QObject* watched, QEvent* event);
void QPolarChart_OnEventFilter(QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseEventFilter(QPolarChart* self, QObject* watched, QEvent* event);
void QPolarChart_TimerEvent(QPolarChart* self, QTimerEvent* event);
void QPolarChart_OnTimerEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseTimerEvent(QPolarChart* self, QTimerEvent* event);
void QPolarChart_ChildEvent(QPolarChart* self, QChildEvent* event);
void QPolarChart_OnChildEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseChildEvent(QPolarChart* self, QChildEvent* event);
void QPolarChart_CustomEvent(QPolarChart* self, QEvent* event);
void QPolarChart_OnCustomEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseCustomEvent(QPolarChart* self, QEvent* event);
void QPolarChart_ConnectNotify(QPolarChart* self, QMetaMethod* signal);
void QPolarChart_OnConnectNotify(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseConnectNotify(QPolarChart* self, QMetaMethod* signal);
void QPolarChart_DisconnectNotify(QPolarChart* self, QMetaMethod* signal);
void QPolarChart_OnDisconnectNotify(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseDisconnectNotify(QPolarChart* self, QMetaMethod* signal);
void QPolarChart_Advance(QPolarChart* self, int phase);
void QPolarChart_OnAdvance(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseAdvance(QPolarChart* self, int phase);
bool QPolarChart_Contains(const QPolarChart* self, QPointF* point);
void QPolarChart_OnContains(const QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseContains(const QPolarChart* self, QPointF* point);
bool QPolarChart_CollidesWithItem(const QPolarChart* self, QGraphicsItem* other, int mode);
void QPolarChart_OnCollidesWithItem(const QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseCollidesWithItem(const QPolarChart* self, QGraphicsItem* other, int mode);
bool QPolarChart_CollidesWithPath(const QPolarChart* self, QPainterPath* path, int mode);
void QPolarChart_OnCollidesWithPath(const QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseCollidesWithPath(const QPolarChart* self, QPainterPath* path, int mode);
bool QPolarChart_IsObscuredBy(const QPolarChart* self, QGraphicsItem* item);
void QPolarChart_OnIsObscuredBy(const QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseIsObscuredBy(const QPolarChart* self, QGraphicsItem* item);
QPainterPath* QPolarChart_OpaqueArea(const QPolarChart* self);
void QPolarChart_OnOpaqueArea(const QPolarChart* self, intptr_t slot);
QPainterPath* QPolarChart_QBaseOpaqueArea(const QPolarChart* self);
bool QPolarChart_SceneEventFilter(QPolarChart* self, QGraphicsItem* watched, QEvent* event);
void QPolarChart_OnSceneEventFilter(QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseSceneEventFilter(QPolarChart* self, QGraphicsItem* watched, QEvent* event);
void QPolarChart_ContextMenuEvent(QPolarChart* self, QGraphicsSceneContextMenuEvent* event);
void QPolarChart_OnContextMenuEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseContextMenuEvent(QPolarChart* self, QGraphicsSceneContextMenuEvent* event);
void QPolarChart_DragEnterEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
void QPolarChart_OnDragEnterEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseDragEnterEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
void QPolarChart_DragLeaveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
void QPolarChart_OnDragLeaveEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseDragLeaveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
void QPolarChart_DragMoveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
void QPolarChart_OnDragMoveEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseDragMoveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
void QPolarChart_DropEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
void QPolarChart_OnDropEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseDropEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
void QPolarChart_HoverEnterEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
void QPolarChart_OnHoverEnterEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseHoverEnterEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
void QPolarChart_KeyPressEvent(QPolarChart* self, QKeyEvent* event);
void QPolarChart_OnKeyPressEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseKeyPressEvent(QPolarChart* self, QKeyEvent* event);
void QPolarChart_KeyReleaseEvent(QPolarChart* self, QKeyEvent* event);
void QPolarChart_OnKeyReleaseEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseKeyReleaseEvent(QPolarChart* self, QKeyEvent* event);
void QPolarChart_MousePressEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
void QPolarChart_OnMousePressEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseMousePressEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
void QPolarChart_MouseMoveEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
void QPolarChart_OnMouseMoveEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseMouseMoveEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
void QPolarChart_MouseReleaseEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
void QPolarChart_OnMouseReleaseEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseMouseReleaseEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
void QPolarChart_MouseDoubleClickEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
void QPolarChart_OnMouseDoubleClickEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseMouseDoubleClickEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
void QPolarChart_WheelEvent(QPolarChart* self, QGraphicsSceneWheelEvent* event);
void QPolarChart_OnWheelEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseWheelEvent(QPolarChart* self, QGraphicsSceneWheelEvent* event);
void QPolarChart_InputMethodEvent(QPolarChart* self, QInputMethodEvent* event);
void QPolarChart_OnInputMethodEvent(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseInputMethodEvent(QPolarChart* self, QInputMethodEvent* event);
void QPolarChart_SetExtension(QPolarChart* self, int extension, QVariant* variant);
void QPolarChart_OnSetExtension(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseSetExtension(QPolarChart* self, int extension, QVariant* variant);
bool QPolarChart_IsEmpty(const QPolarChart* self);
void QPolarChart_OnIsEmpty(const QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseIsEmpty(const QPolarChart* self);
void QPolarChart_InitStyleOption(const QPolarChart* self, QStyleOption* option);
void QPolarChart_OnInitStyleOption(const QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseInitStyleOption(const QPolarChart* self, QStyleOption* option);
QSizeF* QPolarChart_SizeHint(const QPolarChart* self, int which, QSizeF* constraint);
void QPolarChart_OnSizeHint(const QPolarChart* self, intptr_t slot);
QSizeF* QPolarChart_QBaseSizeHint(const QPolarChart* self, int which, QSizeF* constraint);
int QPolarChart_WindowFrameSectionAt(const QPolarChart* self, QPointF* pos);
void QPolarChart_OnWindowFrameSectionAt(const QPolarChart* self, intptr_t slot);
int QPolarChart_QBaseWindowFrameSectionAt(const QPolarChart* self, QPointF* pos);
QVariant* QPolarChart_InputMethodQuery(const QPolarChart* self, int query);
void QPolarChart_OnInputMethodQuery(const QPolarChart* self, intptr_t slot);
QVariant* QPolarChart_QBaseInputMethodQuery(const QPolarChart* self, int query);
bool QPolarChart_SupportsExtension(const QPolarChart* self, int extension);
void QPolarChart_OnSupportsExtension(const QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseSupportsExtension(const QPolarChart* self, int extension);
QVariant* QPolarChart_Extension(const QPolarChart* self, QVariant* variant);
void QPolarChart_OnExtension(const QPolarChart* self, intptr_t slot);
QVariant* QPolarChart_QBaseExtension(const QPolarChart* self, QVariant* variant);
void QPolarChart_UpdateMicroFocus(QPolarChart* self);
void QPolarChart_OnUpdateMicroFocus(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseUpdateMicroFocus(QPolarChart* self);
QObject* QPolarChart_Sender(const QPolarChart* self);
void QPolarChart_OnSender(const QPolarChart* self, intptr_t slot);
QObject* QPolarChart_QBaseSender(const QPolarChart* self);
int QPolarChart_SenderSignalIndex(const QPolarChart* self);
void QPolarChart_OnSenderSignalIndex(const QPolarChart* self, intptr_t slot);
int QPolarChart_QBaseSenderSignalIndex(const QPolarChart* self);
int QPolarChart_Receivers(const QPolarChart* self, const char* signal);
void QPolarChart_OnReceivers(const QPolarChart* self, intptr_t slot);
int QPolarChart_QBaseReceivers(const QPolarChart* self, const char* signal);
bool QPolarChart_IsSignalConnected(const QPolarChart* self, QMetaMethod* signal);
void QPolarChart_OnIsSignalConnected(const QPolarChart* self, intptr_t slot);
bool QPolarChart_QBaseIsSignalConnected(const QPolarChart* self, QMetaMethod* signal);
void QPolarChart_AddToIndex(QPolarChart* self);
void QPolarChart_OnAddToIndex(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseAddToIndex(QPolarChart* self);
void QPolarChart_RemoveFromIndex(QPolarChart* self);
void QPolarChart_OnRemoveFromIndex(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseRemoveFromIndex(QPolarChart* self);
void QPolarChart_PrepareGeometryChange(QPolarChart* self);
void QPolarChart_OnPrepareGeometryChange(QPolarChart* self, intptr_t slot);
void QPolarChart_QBasePrepareGeometryChange(QPolarChart* self);
void QPolarChart_SetGraphicsItem(QPolarChart* self, QGraphicsItem* item);
void QPolarChart_OnSetGraphicsItem(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseSetGraphicsItem(QPolarChart* self, QGraphicsItem* item);
void QPolarChart_SetOwnedByLayout(QPolarChart* self, bool ownedByLayout);
void QPolarChart_OnSetOwnedByLayout(QPolarChart* self, intptr_t slot);
void QPolarChart_QBaseSetOwnedByLayout(QPolarChart* self, bool ownedByLayout);
void QPolarChart_Delete(QPolarChart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
