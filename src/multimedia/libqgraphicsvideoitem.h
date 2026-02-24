#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQGRAPHICSVIDEOITEM_H
#define SRC_MULTIMEDIAC_LIBQGRAPHICSVIDEOITEM_H

#include <stdbool.h>
#include <stddef.h>

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
typedef struct QGraphicsVideoItem QGraphicsVideoItem;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVideoSink QVideoSink;
typedef struct QWidget QWidget;
#endif

QGraphicsVideoItem* QGraphicsVideoItem_new();
QGraphicsVideoItem* QGraphicsVideoItem_new2(QGraphicsItem* parent);
QMetaObject* QGraphicsVideoItem_MetaObject(const QGraphicsVideoItem* self);
void* QGraphicsVideoItem_Metacast(QGraphicsVideoItem* self, const char* param1);
int QGraphicsVideoItem_Metacall(QGraphicsVideoItem* self, int param1, int param2, void** param3);
QVideoSink* QGraphicsVideoItem_VideoSink(const QGraphicsVideoItem* self);
int QGraphicsVideoItem_AspectRatioMode(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetAspectRatioMode(QGraphicsVideoItem* self, int mode);
QPointF* QGraphicsVideoItem_Offset(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetOffset(QGraphicsVideoItem* self, const QPointF* offset);
QSizeF* QGraphicsVideoItem_Size(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetSize(QGraphicsVideoItem* self, const QSizeF* size);
QSizeF* QGraphicsVideoItem_NativeSize(const QGraphicsVideoItem* self);
QRectF* QGraphicsVideoItem_BoundingRect(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_Paint(QGraphicsVideoItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsVideoItem_Type(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_NativeSizeChanged(QGraphicsVideoItem* self, const QSizeF* size);
void QGraphicsVideoItem_Connect_NativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_TimerEvent(QGraphicsVideoItem* self, QTimerEvent* event);
QVariant* QGraphicsVideoItem_ItemChange(QGraphicsVideoItem* self, int change, const QVariant* value);
void QGraphicsVideoItem_OnMetaObject(const QGraphicsVideoItem* self, intptr_t slot);
QMetaObject* QGraphicsVideoItem_SuperMetaObject(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnMetacast(QGraphicsVideoItem* self, intptr_t slot);
void* QGraphicsVideoItem_SuperMetacast(QGraphicsVideoItem* self, const char* param1);
void QGraphicsVideoItem_OnMetacall(QGraphicsVideoItem* self, intptr_t slot);
int QGraphicsVideoItem_SuperMetacall(QGraphicsVideoItem* self, int param1, int param2, void** param3);
void QGraphicsVideoItem_OnBoundingRect(const QGraphicsVideoItem* self, intptr_t slot);
QRectF* QGraphicsVideoItem_SuperBoundingRect(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnPaint(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperPaint(QGraphicsVideoItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsVideoItem_OnType(const QGraphicsVideoItem* self, intptr_t slot);
int QGraphicsVideoItem_SuperType(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnTimerEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperTimerEvent(QGraphicsVideoItem* self, QTimerEvent* event);
void QGraphicsVideoItem_OnItemChange(QGraphicsVideoItem* self, intptr_t slot);
QVariant* QGraphicsVideoItem_SuperItemChange(QGraphicsVideoItem* self, int change, const QVariant* value);
bool QGraphicsVideoItem_Event(QGraphicsVideoItem* self, QEvent* ev);
void QGraphicsVideoItem_OnEvent(QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_SuperEvent(QGraphicsVideoItem* self, QEvent* ev);
bool QGraphicsVideoItem_EventFilter(QGraphicsVideoItem* self, QObject* watched, QEvent* event);
void QGraphicsVideoItem_OnEventFilter(QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_SuperEventFilter(QGraphicsVideoItem* self, QObject* watched, QEvent* event);
void QGraphicsVideoItem_ChildEvent(QGraphicsVideoItem* self, QChildEvent* event);
void QGraphicsVideoItem_OnChildEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperChildEvent(QGraphicsVideoItem* self, QChildEvent* event);
void QGraphicsVideoItem_CustomEvent(QGraphicsVideoItem* self, QEvent* event);
void QGraphicsVideoItem_OnCustomEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperCustomEvent(QGraphicsVideoItem* self, QEvent* event);
void QGraphicsVideoItem_ConnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal);
void QGraphicsVideoItem_OnConnectNotify(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperConnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal);
void QGraphicsVideoItem_DisconnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal);
void QGraphicsVideoItem_OnDisconnectNotify(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperDisconnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal);
void QGraphicsVideoItem_Advance(QGraphicsVideoItem* self, int phase);
void QGraphicsVideoItem_OnAdvance(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperAdvance(QGraphicsVideoItem* self, int phase);
QPainterPath* QGraphicsVideoItem_Shape(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnShape(const QGraphicsVideoItem* self, intptr_t slot);
QPainterPath* QGraphicsVideoItem_SuperShape(const QGraphicsVideoItem* self);
bool QGraphicsVideoItem_Contains(const QGraphicsVideoItem* self, const QPointF* point);
void QGraphicsVideoItem_OnContains(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_SuperContains(const QGraphicsVideoItem* self, const QPointF* point);
bool QGraphicsVideoItem_CollidesWithItem(const QGraphicsVideoItem* self, const QGraphicsItem* other, int mode);
void QGraphicsVideoItem_OnCollidesWithItem(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_SuperCollidesWithItem(const QGraphicsVideoItem* self, const QGraphicsItem* other, int mode);
bool QGraphicsVideoItem_CollidesWithPath(const QGraphicsVideoItem* self, const QPainterPath* path, int mode);
void QGraphicsVideoItem_OnCollidesWithPath(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_SuperCollidesWithPath(const QGraphicsVideoItem* self, const QPainterPath* path, int mode);
bool QGraphicsVideoItem_IsObscuredBy(const QGraphicsVideoItem* self, const QGraphicsItem* item);
void QGraphicsVideoItem_OnIsObscuredBy(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_SuperIsObscuredBy(const QGraphicsVideoItem* self, const QGraphicsItem* item);
QPainterPath* QGraphicsVideoItem_OpaqueArea(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnOpaqueArea(const QGraphicsVideoItem* self, intptr_t slot);
QPainterPath* QGraphicsVideoItem_SuperOpaqueArea(const QGraphicsVideoItem* self);
bool QGraphicsVideoItem_SceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event);
void QGraphicsVideoItem_OnSceneEventFilter(QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_SuperSceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event);
bool QGraphicsVideoItem_SceneEvent(QGraphicsVideoItem* self, QEvent* event);
void QGraphicsVideoItem_OnSceneEvent(QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_SuperSceneEvent(QGraphicsVideoItem* self, QEvent* event);
void QGraphicsVideoItem_ContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsVideoItem_OnContextMenuEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsVideoItem_DragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_OnDragEnterEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperDragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_DragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_OnDragLeaveEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperDragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_DragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_OnDragMoveEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperDragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_DropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_OnDropEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperDropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_FocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event);
void QGraphicsVideoItem_OnFocusInEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperFocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event);
void QGraphicsVideoItem_FocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event);
void QGraphicsVideoItem_OnFocusOutEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperFocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event);
void QGraphicsVideoItem_HoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_OnHoverEnterEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperHoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_HoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_OnHoverMoveEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperHoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_HoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_OnHoverLeaveEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperHoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_KeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event);
void QGraphicsVideoItem_OnKeyPressEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperKeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event);
void QGraphicsVideoItem_KeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event);
void QGraphicsVideoItem_OnKeyReleaseEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperKeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event);
void QGraphicsVideoItem_MousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_OnMousePressEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperMousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_MouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_OnMouseMoveEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperMouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_MouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_OnMouseReleaseEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperMouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_MouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_OnMouseDoubleClickEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperMouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_WheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event);
void QGraphicsVideoItem_OnWheelEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperWheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event);
void QGraphicsVideoItem_InputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event);
void QGraphicsVideoItem_OnInputMethodEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperInputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event);
QVariant* QGraphicsVideoItem_InputMethodQuery(const QGraphicsVideoItem* self, int query);
void QGraphicsVideoItem_OnInputMethodQuery(const QGraphicsVideoItem* self, intptr_t slot);
QVariant* QGraphicsVideoItem_SuperInputMethodQuery(const QGraphicsVideoItem* self, int query);
bool QGraphicsVideoItem_SupportsExtension(const QGraphicsVideoItem* self, int extension);
void QGraphicsVideoItem_OnSupportsExtension(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_SuperSupportsExtension(const QGraphicsVideoItem* self, int extension);
void QGraphicsVideoItem_SetExtension(QGraphicsVideoItem* self, int extension, const QVariant* variant);
void QGraphicsVideoItem_OnSetExtension(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperSetExtension(QGraphicsVideoItem* self, int extension, const QVariant* variant);
QVariant* QGraphicsVideoItem_Extension(const QGraphicsVideoItem* self, const QVariant* variant);
void QGraphicsVideoItem_OnExtension(const QGraphicsVideoItem* self, intptr_t slot);
QVariant* QGraphicsVideoItem_SuperExtension(const QGraphicsVideoItem* self, const QVariant* variant);
void QGraphicsVideoItem_UpdateMicroFocus(QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnUpdateMicroFocus(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperUpdateMicroFocus(QGraphicsVideoItem* self);
QObject* QGraphicsVideoItem_Sender(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnSender(const QGraphicsVideoItem* self, intptr_t slot);
QObject* QGraphicsVideoItem_SuperSender(const QGraphicsVideoItem* self);
int QGraphicsVideoItem_SenderSignalIndex(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnSenderSignalIndex(const QGraphicsVideoItem* self, intptr_t slot);
int QGraphicsVideoItem_SuperSenderSignalIndex(const QGraphicsVideoItem* self);
int QGraphicsVideoItem_Receivers(const QGraphicsVideoItem* self, const char* signal);
void QGraphicsVideoItem_OnReceivers(const QGraphicsVideoItem* self, intptr_t slot);
int QGraphicsVideoItem_SuperReceivers(const QGraphicsVideoItem* self, const char* signal);
bool QGraphicsVideoItem_IsSignalConnected(const QGraphicsVideoItem* self, const QMetaMethod* signal);
void QGraphicsVideoItem_OnIsSignalConnected(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_SuperIsSignalConnected(const QGraphicsVideoItem* self, const QMetaMethod* signal);
void QGraphicsVideoItem_AddToIndex(QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnAddToIndex(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperAddToIndex(QGraphicsVideoItem* self);
void QGraphicsVideoItem_RemoveFromIndex(QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnRemoveFromIndex(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperRemoveFromIndex(QGraphicsVideoItem* self);
void QGraphicsVideoItem_PrepareGeometryChange(QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnPrepareGeometryChange(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_SuperPrepareGeometryChange(QGraphicsVideoItem* self);
void QGraphicsVideoItem_Delete(QGraphicsVideoItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
