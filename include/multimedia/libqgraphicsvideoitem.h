#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQGRAPHICSVIDEOITEM_H
#define SRC_MULTIMEDIAC_LIBQGRAPHICSVIDEOITEM_H

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
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QCursor QCursor;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemGroup QGraphicsItemGroup;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QGraphicsTransform QGraphicsTransform;
typedef struct QGraphicsVideoItem QGraphicsVideoItem;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QVideoSink QVideoSink;
typedef struct QWidget QWidget;
#endif

QGraphicsVideoItem* QGraphicsVideoItem_new();
QGraphicsVideoItem* QGraphicsVideoItem_new2(QGraphicsItem* parent);
QMetaObject* QGraphicsVideoItem_MetaObject(const QGraphicsVideoItem* self);
void* QGraphicsVideoItem_Metacast(QGraphicsVideoItem* self, const char* param1);
int QGraphicsVideoItem_Metacall(QGraphicsVideoItem* self, int param1, int param2, void** param3);
void QGraphicsVideoItem_OnMetacall(QGraphicsVideoItem* self, intptr_t slot);
int QGraphicsVideoItem_QBaseMetacall(QGraphicsVideoItem* self, int param1, int param2, void** param3);
libqt_string QGraphicsVideoItem_Tr(const char* s);
QVideoSink* QGraphicsVideoItem_VideoSink(const QGraphicsVideoItem* self);
int QGraphicsVideoItem_AspectRatioMode(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetAspectRatioMode(QGraphicsVideoItem* self, int mode);
QPointF* QGraphicsVideoItem_Offset(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetOffset(QGraphicsVideoItem* self, QPointF* offset);
QSizeF* QGraphicsVideoItem_Size(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetSize(QGraphicsVideoItem* self, QSizeF* size);
QSizeF* QGraphicsVideoItem_NativeSize(const QGraphicsVideoItem* self);
QRectF* QGraphicsVideoItem_BoundingRect(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnBoundingRect(const QGraphicsVideoItem* self, intptr_t slot);
QRectF* QGraphicsVideoItem_QBaseBoundingRect(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_Paint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsVideoItem_OnPaint(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBasePaint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsVideoItem_Type(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnType(const QGraphicsVideoItem* self, intptr_t slot);
int QGraphicsVideoItem_QBaseType(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_NativeSizeChanged(QGraphicsVideoItem* self, QSizeF* size);
void QGraphicsVideoItem_Connect_NativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_TimerEvent(QGraphicsVideoItem* self, QTimerEvent* event);
void QGraphicsVideoItem_OnTimerEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseTimerEvent(QGraphicsVideoItem* self, QTimerEvent* event);
QVariant* QGraphicsVideoItem_ItemChange(QGraphicsVideoItem* self, int change, QVariant* value);
void QGraphicsVideoItem_OnItemChange(QGraphicsVideoItem* self, intptr_t slot);
QVariant* QGraphicsVideoItem_QBaseItemChange(QGraphicsVideoItem* self, int change, QVariant* value);
libqt_string QGraphicsVideoItem_Tr2(const char* s, const char* c);
libqt_string QGraphicsVideoItem_Tr3(const char* s, const char* c, int n);
bool QGraphicsVideoItem_Event(QGraphicsVideoItem* self, QEvent* ev);
void QGraphicsVideoItem_OnEvent(QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_QBaseEvent(QGraphicsVideoItem* self, QEvent* ev);
bool QGraphicsVideoItem_EventFilter(QGraphicsVideoItem* self, QObject* watched, QEvent* event);
void QGraphicsVideoItem_OnEventFilter(QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_QBaseEventFilter(QGraphicsVideoItem* self, QObject* watched, QEvent* event);
void QGraphicsVideoItem_ChildEvent(QGraphicsVideoItem* self, QChildEvent* event);
void QGraphicsVideoItem_OnChildEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseChildEvent(QGraphicsVideoItem* self, QChildEvent* event);
void QGraphicsVideoItem_CustomEvent(QGraphicsVideoItem* self, QEvent* event);
void QGraphicsVideoItem_OnCustomEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseCustomEvent(QGraphicsVideoItem* self, QEvent* event);
void QGraphicsVideoItem_ConnectNotify(QGraphicsVideoItem* self, QMetaMethod* signal);
void QGraphicsVideoItem_OnConnectNotify(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseConnectNotify(QGraphicsVideoItem* self, QMetaMethod* signal);
void QGraphicsVideoItem_DisconnectNotify(QGraphicsVideoItem* self, QMetaMethod* signal);
void QGraphicsVideoItem_OnDisconnectNotify(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseDisconnectNotify(QGraphicsVideoItem* self, QMetaMethod* signal);
void QGraphicsVideoItem_Advance(QGraphicsVideoItem* self, int phase);
void QGraphicsVideoItem_OnAdvance(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseAdvance(QGraphicsVideoItem* self, int phase);
QPainterPath* QGraphicsVideoItem_Shape(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnShape(const QGraphicsVideoItem* self, intptr_t slot);
QPainterPath* QGraphicsVideoItem_QBaseShape(const QGraphicsVideoItem* self);
bool QGraphicsVideoItem_Contains(const QGraphicsVideoItem* self, QPointF* point);
void QGraphicsVideoItem_OnContains(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_QBaseContains(const QGraphicsVideoItem* self, QPointF* point);
bool QGraphicsVideoItem_CollidesWithItem(const QGraphicsVideoItem* self, QGraphicsItem* other, int mode);
void QGraphicsVideoItem_OnCollidesWithItem(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_QBaseCollidesWithItem(const QGraphicsVideoItem* self, QGraphicsItem* other, int mode);
bool QGraphicsVideoItem_CollidesWithPath(const QGraphicsVideoItem* self, QPainterPath* path, int mode);
void QGraphicsVideoItem_OnCollidesWithPath(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_QBaseCollidesWithPath(const QGraphicsVideoItem* self, QPainterPath* path, int mode);
bool QGraphicsVideoItem_IsObscuredBy(const QGraphicsVideoItem* self, QGraphicsItem* item);
void QGraphicsVideoItem_OnIsObscuredBy(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_QBaseIsObscuredBy(const QGraphicsVideoItem* self, QGraphicsItem* item);
QPainterPath* QGraphicsVideoItem_OpaqueArea(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnOpaqueArea(const QGraphicsVideoItem* self, intptr_t slot);
QPainterPath* QGraphicsVideoItem_QBaseOpaqueArea(const QGraphicsVideoItem* self);
bool QGraphicsVideoItem_SceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event);
void QGraphicsVideoItem_OnSceneEventFilter(QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_QBaseSceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event);
bool QGraphicsVideoItem_SceneEvent(QGraphicsVideoItem* self, QEvent* event);
void QGraphicsVideoItem_OnSceneEvent(QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_QBaseSceneEvent(QGraphicsVideoItem* self, QEvent* event);
void QGraphicsVideoItem_ContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsVideoItem_OnContextMenuEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsVideoItem_DragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_OnDragEnterEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseDragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_DragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_OnDragLeaveEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseDragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_DragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_OnDragMoveEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseDragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_DropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_OnDropEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseDropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsVideoItem_FocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event);
void QGraphicsVideoItem_OnFocusInEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseFocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event);
void QGraphicsVideoItem_FocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event);
void QGraphicsVideoItem_OnFocusOutEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseFocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event);
void QGraphicsVideoItem_HoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_OnHoverEnterEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseHoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_HoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_OnHoverMoveEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseHoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_HoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_OnHoverLeaveEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseHoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
void QGraphicsVideoItem_KeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event);
void QGraphicsVideoItem_OnKeyPressEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseKeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event);
void QGraphicsVideoItem_KeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event);
void QGraphicsVideoItem_OnKeyReleaseEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseKeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event);
void QGraphicsVideoItem_MousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_OnMousePressEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseMousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_MouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_OnMouseMoveEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseMouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_MouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_OnMouseReleaseEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseMouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_MouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_OnMouseDoubleClickEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseMouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
void QGraphicsVideoItem_WheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event);
void QGraphicsVideoItem_OnWheelEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseWheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event);
void QGraphicsVideoItem_InputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event);
void QGraphicsVideoItem_OnInputMethodEvent(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseInputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event);
void QGraphicsVideoItem_SetExtension(QGraphicsVideoItem* self, int extension, QVariant* variant);
void QGraphicsVideoItem_OnSetExtension(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseSetExtension(QGraphicsVideoItem* self, int extension, QVariant* variant);
QVariant* QGraphicsVideoItem_InputMethodQuery(const QGraphicsVideoItem* self, int query);
void QGraphicsVideoItem_OnInputMethodQuery(const QGraphicsVideoItem* self, intptr_t slot);
QVariant* QGraphicsVideoItem_QBaseInputMethodQuery(const QGraphicsVideoItem* self, int query);
bool QGraphicsVideoItem_SupportsExtension(const QGraphicsVideoItem* self, int extension);
void QGraphicsVideoItem_OnSupportsExtension(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_QBaseSupportsExtension(const QGraphicsVideoItem* self, int extension);
QVariant* QGraphicsVideoItem_Extension(const QGraphicsVideoItem* self, QVariant* variant);
void QGraphicsVideoItem_OnExtension(const QGraphicsVideoItem* self, intptr_t slot);
QVariant* QGraphicsVideoItem_QBaseExtension(const QGraphicsVideoItem* self, QVariant* variant);
void QGraphicsVideoItem_UpdateMicroFocus(QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnUpdateMicroFocus(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseUpdateMicroFocus(QGraphicsVideoItem* self);
QObject* QGraphicsVideoItem_Sender(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnSender(const QGraphicsVideoItem* self, intptr_t slot);
QObject* QGraphicsVideoItem_QBaseSender(const QGraphicsVideoItem* self);
int QGraphicsVideoItem_SenderSignalIndex(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnSenderSignalIndex(const QGraphicsVideoItem* self, intptr_t slot);
int QGraphicsVideoItem_QBaseSenderSignalIndex(const QGraphicsVideoItem* self);
int QGraphicsVideoItem_Receivers(const QGraphicsVideoItem* self, const char* signal);
void QGraphicsVideoItem_OnReceivers(const QGraphicsVideoItem* self, intptr_t slot);
int QGraphicsVideoItem_QBaseReceivers(const QGraphicsVideoItem* self, const char* signal);
bool QGraphicsVideoItem_IsSignalConnected(const QGraphicsVideoItem* self, QMetaMethod* signal);
void QGraphicsVideoItem_OnIsSignalConnected(const QGraphicsVideoItem* self, intptr_t slot);
bool QGraphicsVideoItem_QBaseIsSignalConnected(const QGraphicsVideoItem* self, QMetaMethod* signal);
void QGraphicsVideoItem_AddToIndex(QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnAddToIndex(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseAddToIndex(QGraphicsVideoItem* self);
void QGraphicsVideoItem_RemoveFromIndex(QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnRemoveFromIndex(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBaseRemoveFromIndex(QGraphicsVideoItem* self);
void QGraphicsVideoItem_PrepareGeometryChange(QGraphicsVideoItem* self);
void QGraphicsVideoItem_OnPrepareGeometryChange(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_QBasePrepareGeometryChange(QGraphicsVideoItem* self);
void QGraphicsVideoItem_Delete(QGraphicsVideoItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
