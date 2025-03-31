#pragma once
#ifndef SRCC_LIBQGRAPHICSSCENE_H
#define SRCC_LIBQGRAPHICSSCENE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QGraphicsEllipseItem QGraphicsEllipseItem;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemGroup QGraphicsItemGroup;
typedef struct QGraphicsLineItem QGraphicsLineItem;
typedef struct QGraphicsPathItem QGraphicsPathItem;
typedef struct QGraphicsPixmapItem QGraphicsPixmapItem;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QGraphicsRectItem QGraphicsRectItem;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneHelpEvent QGraphicsSceneHelpEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QGraphicsSimpleTextItem QGraphicsSimpleTextItem;
typedef struct QGraphicsTextItem QGraphicsTextItem;
typedef struct QGraphicsView QGraphicsView;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLineF QLineF;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPen QPen;
typedef struct QPixmap QPixmap;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QStyle QStyle;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

#ifdef __cplusplus
typedef QGraphicsScene::ItemIndexMethod ItemIndexMethod; // C++ enum
typedef QGraphicsScene::SceneLayer SceneLayer;           // C++ enum
typedef QGraphicsScene::SceneLayers SceneLayers;         // C++ QFlags
#else
typedef int ItemIndexMethod; // C ABI enum
typedef int SceneLayer;      // C ABI enum
typedef int SceneLayers;     // C ABI QFlags
#endif

QGraphicsScene* QGraphicsScene_new();
QGraphicsScene* QGraphicsScene_new2(QRectF* sceneRect);
QGraphicsScene* QGraphicsScene_new3(double x, double y, double width, double height);
QGraphicsScene* QGraphicsScene_new4(QObject* parent);
QGraphicsScene* QGraphicsScene_new5(QRectF* sceneRect, QObject* parent);
QGraphicsScene* QGraphicsScene_new6(double x, double y, double width, double height, QObject* parent);
QMetaObject* QGraphicsScene_MetaObject(const QGraphicsScene* self);
void* QGraphicsScene_Metacast(QGraphicsScene* self, const char* param1);
int QGraphicsScene_Metacall(QGraphicsScene* self, int param1, int param2, void** param3);
void QGraphicsScene_OnMetacall(QGraphicsScene* self, intptr_t slot);
int QGraphicsScene_QBaseMetacall(QGraphicsScene* self, int param1, int param2, void** param3);
libqt_string QGraphicsScene_Tr(const char* s);
QRectF* QGraphicsScene_SceneRect(const QGraphicsScene* self);
double QGraphicsScene_Width(const QGraphicsScene* self);
double QGraphicsScene_Height(const QGraphicsScene* self);
void QGraphicsScene_SetSceneRect(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_SetSceneRect2(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_Render(QGraphicsScene* self, QPainter* painter);
int QGraphicsScene_ItemIndexMethod(const QGraphicsScene* self);
void QGraphicsScene_SetItemIndexMethod(QGraphicsScene* self, int method);
int QGraphicsScene_BspTreeDepth(const QGraphicsScene* self);
void QGraphicsScene_SetBspTreeDepth(QGraphicsScene* self, int depth);
QRectF* QGraphicsScene_ItemsBoundingRect(const QGraphicsScene* self);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items(const QGraphicsScene* self);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_ItemsWithPos(const QGraphicsScene* self, QPointF* pos);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_ItemsWithRect(const QGraphicsScene* self, QRectF* rect);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_ItemsWithPath(const QGraphicsScene* self, QPainterPath* path);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items2(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_CollidingItems(const QGraphicsScene* self, QGraphicsItem* item);
QGraphicsItem* QGraphicsScene_ItemAt(const QGraphicsScene* self, QPointF* pos, QTransform* deviceTransform);
QGraphicsItem* QGraphicsScene_ItemAt2(const QGraphicsScene* self, double x, double y, QTransform* deviceTransform);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_SelectedItems(const QGraphicsScene* self);
QPainterPath* QGraphicsScene_SelectionArea(const QGraphicsScene* self);
void QGraphicsScene_SetSelectionArea(QGraphicsScene* self, QPainterPath* path, QTransform* deviceTransform);
void QGraphicsScene_SetSelectionAreaWithPath(QGraphicsScene* self, QPainterPath* path);
QGraphicsItemGroup* QGraphicsScene_CreateItemGroup(QGraphicsScene* self, libqt_list /* of QGraphicsItem* */ items);
void QGraphicsScene_DestroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group);
void QGraphicsScene_AddItem(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse(QGraphicsScene* self, QRectF* rect);
QGraphicsLineItem* QGraphicsScene_AddLine(QGraphicsScene* self, QLineF* line);
QGraphicsPathItem* QGraphicsScene_AddPath(QGraphicsScene* self, QPainterPath* path);
QGraphicsPixmapItem* QGraphicsScene_AddPixmap(QGraphicsScene* self, QPixmap* pixmap);
QGraphicsRectItem* QGraphicsScene_AddRect(QGraphicsScene* self, QRectF* rect);
QGraphicsTextItem* QGraphicsScene_AddText(QGraphicsScene* self, libqt_string text);
QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText(QGraphicsScene* self, libqt_string text);
QGraphicsProxyWidget* QGraphicsScene_AddWidget(QGraphicsScene* self, QWidget* widget);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse2(QGraphicsScene* self, double x, double y, double w, double h);
QGraphicsLineItem* QGraphicsScene_AddLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2);
QGraphicsRectItem* QGraphicsScene_AddRect2(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_RemoveItem(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsItem* QGraphicsScene_FocusItem(const QGraphicsScene* self);
void QGraphicsScene_SetFocusItem(QGraphicsScene* self, QGraphicsItem* item);
bool QGraphicsScene_HasFocus(const QGraphicsScene* self);
void QGraphicsScene_SetFocus(QGraphicsScene* self);
void QGraphicsScene_ClearFocus(QGraphicsScene* self);
void QGraphicsScene_SetStickyFocus(QGraphicsScene* self, bool enabled);
bool QGraphicsScene_StickyFocus(const QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_MouseGrabberItem(const QGraphicsScene* self);
QBrush* QGraphicsScene_BackgroundBrush(const QGraphicsScene* self);
void QGraphicsScene_SetBackgroundBrush(QGraphicsScene* self, QBrush* brush);
QBrush* QGraphicsScene_ForegroundBrush(const QGraphicsScene* self);
void QGraphicsScene_SetForegroundBrush(QGraphicsScene* self, QBrush* brush);
QVariant* QGraphicsScene_InputMethodQuery(const QGraphicsScene* self, int query);
void QGraphicsScene_OnInputMethodQuery(const QGraphicsScene* self, intptr_t slot);
QVariant* QGraphicsScene_QBaseInputMethodQuery(const QGraphicsScene* self, int query);
libqt_list /* of QGraphicsView* */ QGraphicsScene_Views(const QGraphicsScene* self);
void QGraphicsScene_Update(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_Invalidate(QGraphicsScene* self, double x, double y, double w, double h);
QStyle* QGraphicsScene_Style(const QGraphicsScene* self);
void QGraphicsScene_SetStyle(QGraphicsScene* self, QStyle* style);
QFont* QGraphicsScene_Font(const QGraphicsScene* self);
void QGraphicsScene_SetFont(QGraphicsScene* self, QFont* font);
QPalette* QGraphicsScene_Palette(const QGraphicsScene* self);
void QGraphicsScene_SetPalette(QGraphicsScene* self, QPalette* palette);
bool QGraphicsScene_IsActive(const QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_ActivePanel(const QGraphicsScene* self);
void QGraphicsScene_SetActivePanel(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsWidget* QGraphicsScene_ActiveWindow(const QGraphicsScene* self);
void QGraphicsScene_SetActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget);
bool QGraphicsScene_SendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event);
double QGraphicsScene_MinimumRenderSize(const QGraphicsScene* self);
void QGraphicsScene_SetMinimumRenderSize(QGraphicsScene* self, double minSize);
bool QGraphicsScene_FocusOnTouch(const QGraphicsScene* self);
void QGraphicsScene_SetFocusOnTouch(QGraphicsScene* self, bool enabled);
void QGraphicsScene_Update2(QGraphicsScene* self);
void QGraphicsScene_Invalidate2(QGraphicsScene* self);
void QGraphicsScene_Advance(QGraphicsScene* self);
void QGraphicsScene_ClearSelection(QGraphicsScene* self);
void QGraphicsScene_Clear(QGraphicsScene* self);
bool QGraphicsScene_Event(QGraphicsScene* self, QEvent* event);
void QGraphicsScene_OnEvent(QGraphicsScene* self, intptr_t slot);
bool QGraphicsScene_QBaseEvent(QGraphicsScene* self, QEvent* event);
bool QGraphicsScene_EventFilter(QGraphicsScene* self, QObject* watched, QEvent* event);
void QGraphicsScene_OnEventFilter(QGraphicsScene* self, intptr_t slot);
bool QGraphicsScene_QBaseEventFilter(QGraphicsScene* self, QObject* watched, QEvent* event);
void QGraphicsScene_ContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsScene_OnContextMenuEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsScene_DragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_OnDragEnterEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_DragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_OnDragMoveEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_DragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_OnDragLeaveEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_DropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_OnDropEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_FocusInEvent(QGraphicsScene* self, QFocusEvent* event);
void QGraphicsScene_OnFocusInEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseFocusInEvent(QGraphicsScene* self, QFocusEvent* event);
void QGraphicsScene_FocusOutEvent(QGraphicsScene* self, QFocusEvent* event);
void QGraphicsScene_OnFocusOutEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseFocusOutEvent(QGraphicsScene* self, QFocusEvent* event);
void QGraphicsScene_HelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event);
void QGraphicsScene_OnHelpEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseHelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event);
void QGraphicsScene_KeyPressEvent(QGraphicsScene* self, QKeyEvent* event);
void QGraphicsScene_OnKeyPressEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseKeyPressEvent(QGraphicsScene* self, QKeyEvent* event);
void QGraphicsScene_KeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event);
void QGraphicsScene_OnKeyReleaseEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseKeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event);
void QGraphicsScene_MousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_OnMousePressEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseMousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_MouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_OnMouseMoveEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseMouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_MouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_OnMouseReleaseEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseMouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_MouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_OnMouseDoubleClickEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseMouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_WheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event);
void QGraphicsScene_OnWheelEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseWheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event);
void QGraphicsScene_InputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event);
void QGraphicsScene_OnInputMethodEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseInputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event);
void QGraphicsScene_DrawBackground(QGraphicsScene* self, QPainter* painter, QRectF* rect);
void QGraphicsScene_OnDrawBackground(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDrawBackground(QGraphicsScene* self, QPainter* painter, QRectF* rect);
void QGraphicsScene_DrawForeground(QGraphicsScene* self, QPainter* painter, QRectF* rect);
void QGraphicsScene_OnDrawForeground(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDrawForeground(QGraphicsScene* self, QPainter* painter, QRectF* rect);
bool QGraphicsScene_FocusNextPrevChild(QGraphicsScene* self, bool next);
void QGraphicsScene_OnFocusNextPrevChild(QGraphicsScene* self, intptr_t slot);
bool QGraphicsScene_QBaseFocusNextPrevChild(QGraphicsScene* self, bool next);
void QGraphicsScene_Changed(QGraphicsScene* self, libqt_list /* of QRectF* */ region);
void QGraphicsScene_Connect_Changed(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_SceneRectChanged(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_Connect_SceneRectChanged(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_SelectionChanged(QGraphicsScene* self);
void QGraphicsScene_Connect_SelectionChanged(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_FocusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, int reason);
void QGraphicsScene_Connect_FocusItemChanged(QGraphicsScene* self, intptr_t slot);
libqt_string QGraphicsScene_Tr2(const char* s, const char* c);
libqt_string QGraphicsScene_Tr3(const char* s, const char* c, int n);
void QGraphicsScene_Render2(QGraphicsScene* self, QPainter* painter, QRectF* target);
void QGraphicsScene_Render3(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source);
void QGraphicsScene_Render4(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source, int aspectRatioMode);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items1(const QGraphicsScene* self, int order);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items22(const QGraphicsScene* self, QPointF* pos, int mode);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items3(const QGraphicsScene* self, QPointF* pos, int mode, int order);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items4(const QGraphicsScene* self, QPointF* pos, int mode, int order, QTransform* deviceTransform);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items23(const QGraphicsScene* self, QRectF* rect, int mode);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items32(const QGraphicsScene* self, QRectF* rect, int mode, int order);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items42(const QGraphicsScene* self, QRectF* rect, int mode, int order, QTransform* deviceTransform);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items25(const QGraphicsScene* self, QPainterPath* path, int mode);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items34(const QGraphicsScene* self, QPainterPath* path, int mode, int order);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items44(const QGraphicsScene* self, QPainterPath* path, int mode, int order, QTransform* deviceTransform);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items7(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order, QTransform* deviceTransform);
libqt_list /* of QGraphicsItem* */ QGraphicsScene_CollidingItems2(const QGraphicsScene* self, QGraphicsItem* item, int mode);
void QGraphicsScene_SetSelectionArea2(QGraphicsScene* self, QPainterPath* path, int selectionOperation);
void QGraphicsScene_SetSelectionArea3(QGraphicsScene* self, QPainterPath* path, int selectionOperation, int mode);
void QGraphicsScene_SetSelectionArea4(QGraphicsScene* self, QPainterPath* path, int selectionOperation, int mode, QTransform* deviceTransform);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse22(QGraphicsScene* self, QRectF* rect, QPen* pen);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush);
QGraphicsLineItem* QGraphicsScene_AddLine22(QGraphicsScene* self, QLineF* line, QPen* pen);
QGraphicsPathItem* QGraphicsScene_AddPath2(QGraphicsScene* self, QPainterPath* path, QPen* pen);
QGraphicsPathItem* QGraphicsScene_AddPath3(QGraphicsScene* self, QPainterPath* path, QPen* pen, QBrush* brush);
QGraphicsRectItem* QGraphicsScene_AddRect22(QGraphicsScene* self, QRectF* rect, QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush);
QGraphicsTextItem* QGraphicsScene_AddText2(QGraphicsScene* self, libqt_string text, QFont* font);
QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText2(QGraphicsScene* self, libqt_string text, QFont* font);
QGraphicsProxyWidget* QGraphicsScene_AddWidget2(QGraphicsScene* self, QWidget* widget, int wFlags);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush);
QGraphicsLineItem* QGraphicsScene_AddLine5(QGraphicsScene* self, double x1, double y1, double x2, double y2, QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush);
void QGraphicsScene_SetFocusItem2(QGraphicsScene* self, QGraphicsItem* item, int focusReason);
void QGraphicsScene_SetFocus1(QGraphicsScene* self, int focusReason);
void QGraphicsScene_Invalidate5(QGraphicsScene* self, double x, double y, double w, double h, int layers);
void QGraphicsScene_Update1(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_Invalidate1(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_Invalidate22(QGraphicsScene* self, QRectF* rect, int layers);
void QGraphicsScene_TimerEvent(QGraphicsScene* self, QTimerEvent* event);
void QGraphicsScene_OnTimerEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseTimerEvent(QGraphicsScene* self, QTimerEvent* event);
void QGraphicsScene_ChildEvent(QGraphicsScene* self, QChildEvent* event);
void QGraphicsScene_OnChildEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseChildEvent(QGraphicsScene* self, QChildEvent* event);
void QGraphicsScene_CustomEvent(QGraphicsScene* self, QEvent* event);
void QGraphicsScene_OnCustomEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseCustomEvent(QGraphicsScene* self, QEvent* event);
void QGraphicsScene_ConnectNotify(QGraphicsScene* self, QMetaMethod* signal);
void QGraphicsScene_OnConnectNotify(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseConnectNotify(QGraphicsScene* self, QMetaMethod* signal);
void QGraphicsScene_DisconnectNotify(QGraphicsScene* self, QMetaMethod* signal);
void QGraphicsScene_OnDisconnectNotify(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDisconnectNotify(QGraphicsScene* self, QMetaMethod* signal);
QObject* QGraphicsScene_Sender(const QGraphicsScene* self);
void QGraphicsScene_OnSender(const QGraphicsScene* self, intptr_t slot);
QObject* QGraphicsScene_QBaseSender(const QGraphicsScene* self);
int QGraphicsScene_SenderSignalIndex(const QGraphicsScene* self);
void QGraphicsScene_OnSenderSignalIndex(const QGraphicsScene* self, intptr_t slot);
int QGraphicsScene_QBaseSenderSignalIndex(const QGraphicsScene* self);
int QGraphicsScene_Receivers(const QGraphicsScene* self, const char* signal);
void QGraphicsScene_OnReceivers(const QGraphicsScene* self, intptr_t slot);
int QGraphicsScene_QBaseReceivers(const QGraphicsScene* self, const char* signal);
bool QGraphicsScene_IsSignalConnected(const QGraphicsScene* self, QMetaMethod* signal);
void QGraphicsScene_OnIsSignalConnected(const QGraphicsScene* self, intptr_t slot);
bool QGraphicsScene_QBaseIsSignalConnected(const QGraphicsScene* self, QMetaMethod* signal);
void QGraphicsScene_Delete(QGraphicsScene* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
