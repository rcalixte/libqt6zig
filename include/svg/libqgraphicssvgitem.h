#pragma once
#ifndef SRC_SVGC_LIBQGRAPHICSSVGITEM_H
#define SRC_SVGC_LIBQGRAPHICSSVGITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QGraphicsSvgItem QGraphicsSvgItem;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QGraphicsSvgItem* QGraphicsSvgItem_new();
QGraphicsSvgItem* QGraphicsSvgItem_new2(const libqt_string fileName);
QGraphicsSvgItem* QGraphicsSvgItem_new3(QGraphicsItem* parentItem);
QGraphicsSvgItem* QGraphicsSvgItem_new4(const libqt_string fileName, QGraphicsItem* parentItem);
QMetaObject* QGraphicsSvgItem_MetaObject(const QGraphicsSvgItem* self);
void* QGraphicsSvgItem_Metacast(QGraphicsSvgItem* self, const char* param1);
int QGraphicsSvgItem_Metacall(QGraphicsSvgItem* self, int param1, int param2, void** param3);
void QGraphicsSvgItem_OnMetacall(QGraphicsSvgItem* self, intptr_t slot);
int QGraphicsSvgItem_QBaseMetacall(QGraphicsSvgItem* self, int param1, int param2, void** param3);
libqt_string QGraphicsSvgItem_Tr(const char* s);
void QGraphicsSvgItem_SetSharedRenderer(QGraphicsSvgItem* self, QSvgRenderer* renderer);
QSvgRenderer* QGraphicsSvgItem_Renderer(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_SetElementId(QGraphicsSvgItem* self, const libqt_string id);
libqt_string QGraphicsSvgItem_ElementId(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_SetCachingEnabled(QGraphicsSvgItem* self, bool cachingEnabled);
bool QGraphicsSvgItem_IsCachingEnabled(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_SetMaximumCacheSize(QGraphicsSvgItem* self, const QSize* size);
QSize* QGraphicsSvgItem_MaximumCacheSize(const QGraphicsSvgItem* self);
QRectF* QGraphicsSvgItem_BoundingRect(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnBoundingRect(const QGraphicsSvgItem* self, intptr_t slot);
QRectF* QGraphicsSvgItem_QBaseBoundingRect(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_Paint(QGraphicsSvgItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsSvgItem_OnPaint(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBasePaint(QGraphicsSvgItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsSvgItem_Type(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnType(const QGraphicsSvgItem* self, intptr_t slot);
int QGraphicsSvgItem_QBaseType(const QGraphicsSvgItem* self);
libqt_string QGraphicsSvgItem_Tr2(const char* s, const char* c);
libqt_string QGraphicsSvgItem_Tr3(const char* s, const char* c, int n);
bool QGraphicsSvgItem_Event(QGraphicsSvgItem* self, QEvent* ev);
void QGraphicsSvgItem_OnEvent(QGraphicsSvgItem* self, intptr_t slot);
bool QGraphicsSvgItem_QBaseEvent(QGraphicsSvgItem* self, QEvent* ev);
bool QGraphicsSvgItem_EventFilter(QGraphicsSvgItem* self, QObject* watched, QEvent* event);
void QGraphicsSvgItem_OnEventFilter(QGraphicsSvgItem* self, intptr_t slot);
bool QGraphicsSvgItem_QBaseEventFilter(QGraphicsSvgItem* self, QObject* watched, QEvent* event);
void QGraphicsSvgItem_TimerEvent(QGraphicsSvgItem* self, QTimerEvent* event);
void QGraphicsSvgItem_OnTimerEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseTimerEvent(QGraphicsSvgItem* self, QTimerEvent* event);
void QGraphicsSvgItem_ChildEvent(QGraphicsSvgItem* self, QChildEvent* event);
void QGraphicsSvgItem_OnChildEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseChildEvent(QGraphicsSvgItem* self, QChildEvent* event);
void QGraphicsSvgItem_CustomEvent(QGraphicsSvgItem* self, QEvent* event);
void QGraphicsSvgItem_OnCustomEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseCustomEvent(QGraphicsSvgItem* self, QEvent* event);
void QGraphicsSvgItem_ConnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal);
void QGraphicsSvgItem_OnConnectNotify(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseConnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal);
void QGraphicsSvgItem_DisconnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal);
void QGraphicsSvgItem_OnDisconnectNotify(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseDisconnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal);
void QGraphicsSvgItem_Advance(QGraphicsSvgItem* self, int phase);
void QGraphicsSvgItem_OnAdvance(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseAdvance(QGraphicsSvgItem* self, int phase);
QPainterPath* QGraphicsSvgItem_Shape(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnShape(const QGraphicsSvgItem* self, intptr_t slot);
QPainterPath* QGraphicsSvgItem_QBaseShape(const QGraphicsSvgItem* self);
bool QGraphicsSvgItem_Contains(const QGraphicsSvgItem* self, const QPointF* point);
void QGraphicsSvgItem_OnContains(const QGraphicsSvgItem* self, intptr_t slot);
bool QGraphicsSvgItem_QBaseContains(const QGraphicsSvgItem* self, const QPointF* point);
bool QGraphicsSvgItem_CollidesWithItem(const QGraphicsSvgItem* self, const QGraphicsItem* other, int mode);
void QGraphicsSvgItem_OnCollidesWithItem(const QGraphicsSvgItem* self, intptr_t slot);
bool QGraphicsSvgItem_QBaseCollidesWithItem(const QGraphicsSvgItem* self, const QGraphicsItem* other, int mode);
bool QGraphicsSvgItem_CollidesWithPath(const QGraphicsSvgItem* self, const QPainterPath* path, int mode);
void QGraphicsSvgItem_OnCollidesWithPath(const QGraphicsSvgItem* self, intptr_t slot);
bool QGraphicsSvgItem_QBaseCollidesWithPath(const QGraphicsSvgItem* self, const QPainterPath* path, int mode);
bool QGraphicsSvgItem_IsObscuredBy(const QGraphicsSvgItem* self, const QGraphicsItem* item);
void QGraphicsSvgItem_OnIsObscuredBy(const QGraphicsSvgItem* self, intptr_t slot);
bool QGraphicsSvgItem_QBaseIsObscuredBy(const QGraphicsSvgItem* self, const QGraphicsItem* item);
QPainterPath* QGraphicsSvgItem_OpaqueArea(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnOpaqueArea(const QGraphicsSvgItem* self, intptr_t slot);
QPainterPath* QGraphicsSvgItem_QBaseOpaqueArea(const QGraphicsSvgItem* self);
bool QGraphicsSvgItem_SceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event);
void QGraphicsSvgItem_OnSceneEventFilter(QGraphicsSvgItem* self, intptr_t slot);
bool QGraphicsSvgItem_QBaseSceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event);
bool QGraphicsSvgItem_SceneEvent(QGraphicsSvgItem* self, QEvent* event);
void QGraphicsSvgItem_OnSceneEvent(QGraphicsSvgItem* self, intptr_t slot);
bool QGraphicsSvgItem_QBaseSceneEvent(QGraphicsSvgItem* self, QEvent* event);
void QGraphicsSvgItem_ContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsSvgItem_OnContextMenuEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsSvgItem_DragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsSvgItem_OnDragEnterEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseDragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsSvgItem_DragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsSvgItem_OnDragLeaveEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseDragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsSvgItem_DragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsSvgItem_OnDragMoveEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseDragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsSvgItem_DropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsSvgItem_OnDropEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseDropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsSvgItem_FocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event);
void QGraphicsSvgItem_OnFocusInEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseFocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event);
void QGraphicsSvgItem_FocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event);
void QGraphicsSvgItem_OnFocusOutEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseFocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event);
void QGraphicsSvgItem_HoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsSvgItem_OnHoverEnterEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseHoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsSvgItem_HoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsSvgItem_OnHoverMoveEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseHoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsSvgItem_HoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsSvgItem_OnHoverLeaveEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseHoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsSvgItem_KeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event);
void QGraphicsSvgItem_OnKeyPressEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseKeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event);
void QGraphicsSvgItem_KeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event);
void QGraphicsSvgItem_OnKeyReleaseEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseKeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event);
void QGraphicsSvgItem_MousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsSvgItem_OnMousePressEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseMousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsSvgItem_MouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsSvgItem_OnMouseMoveEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseMouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsSvgItem_MouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsSvgItem_OnMouseReleaseEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseMouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsSvgItem_MouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsSvgItem_OnMouseDoubleClickEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseMouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsSvgItem_WheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event);
void QGraphicsSvgItem_OnWheelEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseWheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event);
void QGraphicsSvgItem_InputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event);
void QGraphicsSvgItem_OnInputMethodEvent(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseInputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event);
QVariant* QGraphicsSvgItem_InputMethodQuery(const QGraphicsSvgItem* self, int query);
void QGraphicsSvgItem_OnInputMethodQuery(const QGraphicsSvgItem* self, intptr_t slot);
QVariant* QGraphicsSvgItem_QBaseInputMethodQuery(const QGraphicsSvgItem* self, int query);
QVariant* QGraphicsSvgItem_ItemChange(QGraphicsSvgItem* self, int change, const QVariant* value);
void QGraphicsSvgItem_OnItemChange(QGraphicsSvgItem* self, intptr_t slot);
QVariant* QGraphicsSvgItem_QBaseItemChange(QGraphicsSvgItem* self, int change, const QVariant* value);
bool QGraphicsSvgItem_SupportsExtension(const QGraphicsSvgItem* self, int extension);
void QGraphicsSvgItem_OnSupportsExtension(const QGraphicsSvgItem* self, intptr_t slot);
bool QGraphicsSvgItem_QBaseSupportsExtension(const QGraphicsSvgItem* self, int extension);
void QGraphicsSvgItem_SetExtension(QGraphicsSvgItem* self, int extension, const QVariant* variant);
void QGraphicsSvgItem_OnSetExtension(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseSetExtension(QGraphicsSvgItem* self, int extension, const QVariant* variant);
QVariant* QGraphicsSvgItem_Extension(const QGraphicsSvgItem* self, const QVariant* variant);
void QGraphicsSvgItem_OnExtension(const QGraphicsSvgItem* self, intptr_t slot);
QVariant* QGraphicsSvgItem_QBaseExtension(const QGraphicsSvgItem* self, const QVariant* variant);
void QGraphicsSvgItem_UpdateMicroFocus(QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnUpdateMicroFocus(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseUpdateMicroFocus(QGraphicsSvgItem* self);
QObject* QGraphicsSvgItem_Sender(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnSender(const QGraphicsSvgItem* self, intptr_t slot);
QObject* QGraphicsSvgItem_QBaseSender(const QGraphicsSvgItem* self);
int QGraphicsSvgItem_SenderSignalIndex(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnSenderSignalIndex(const QGraphicsSvgItem* self, intptr_t slot);
int QGraphicsSvgItem_QBaseSenderSignalIndex(const QGraphicsSvgItem* self);
int QGraphicsSvgItem_Receivers(const QGraphicsSvgItem* self, const char* signal);
void QGraphicsSvgItem_OnReceivers(const QGraphicsSvgItem* self, intptr_t slot);
int QGraphicsSvgItem_QBaseReceivers(const QGraphicsSvgItem* self, const char* signal);
bool QGraphicsSvgItem_IsSignalConnected(const QGraphicsSvgItem* self, const QMetaMethod* signal);
void QGraphicsSvgItem_OnIsSignalConnected(const QGraphicsSvgItem* self, intptr_t slot);
bool QGraphicsSvgItem_QBaseIsSignalConnected(const QGraphicsSvgItem* self, const QMetaMethod* signal);
void QGraphicsSvgItem_AddToIndex(QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnAddToIndex(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseAddToIndex(QGraphicsSvgItem* self);
void QGraphicsSvgItem_RemoveFromIndex(QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnRemoveFromIndex(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBaseRemoveFromIndex(QGraphicsSvgItem* self);
void QGraphicsSvgItem_PrepareGeometryChange(QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnPrepareGeometryChange(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBasePrepareGeometryChange(QGraphicsSvgItem* self);
void QGraphicsSvgItem_Delete(QGraphicsSvgItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
