#pragma once
#ifndef QUICK_LIBQQUICKFRAMEBUFFEROBJECT_H
#define QUICK_LIBQQUICKFRAMEBUFFEROBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuickFramebufferObject__Renderer)
typedef QQuickFramebufferObject::Renderer QQuickFramebufferObject__Renderer;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__ItemChangeData)
typedef QQuickItem::ItemChangeData QQuickItem__ItemChangeData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__UpdatePaintNodeData)
typedef QQuickItem::UpdatePaintNodeData QQuickItem__UpdatePaintNodeData;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHoverEvent QHoverEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QOpenGLFramebufferObject QOpenGLFramebufferObject;
typedef struct QPointF QPointF;
typedef struct QQmlParserStatus QQmlParserStatus;
typedef struct QQuickFramebufferObject QQuickFramebufferObject;
typedef struct QQuickFramebufferObject__Renderer QQuickFramebufferObject__Renderer;
typedef struct QQuickItem QQuickItem;
typedef struct QQuickItem__ItemChangeData QQuickItem__ItemChangeData;
typedef struct QQuickItem__UpdatePaintNodeData QQuickItem__UpdatePaintNodeData;
typedef struct QRectF QRectF;
typedef struct QSGNode QSGNode;
typedef struct QSGTextureProvider QSGTextureProvider;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
#endif

QQuickFramebufferObject* QQuickFramebufferObject_new();
QQuickFramebufferObject* QQuickFramebufferObject_new2(QQuickItem* parent);
QMetaObject* QQuickFramebufferObject_MetaObject(const QQuickFramebufferObject* self);
void* QQuickFramebufferObject_Metacast(QQuickFramebufferObject* self, const char* param1);
int QQuickFramebufferObject_Metacall(QQuickFramebufferObject* self, int param1, int param2, void** param3);
libqt_string QQuickFramebufferObject_Tr(const char* s);
bool QQuickFramebufferObject_TextureFollowsItemSize(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_SetTextureFollowsItemSize(QQuickFramebufferObject* self, bool follows);
bool QQuickFramebufferObject_MirrorVertically(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_SetMirrorVertically(QQuickFramebufferObject* self, bool enable);
QQuickFramebufferObject__Renderer* QQuickFramebufferObject_CreateRenderer(const QQuickFramebufferObject* self);
bool QQuickFramebufferObject_IsTextureProvider(const QQuickFramebufferObject* self);
QSGTextureProvider* QQuickFramebufferObject_TextureProvider(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_ReleaseResources(QQuickFramebufferObject* self);
void QQuickFramebufferObject_GeometryChange(QQuickFramebufferObject* self, const QRectF* newGeometry, const QRectF* oldGeometry);
QSGNode* QQuickFramebufferObject_UpdatePaintNode(QQuickFramebufferObject* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
void QQuickFramebufferObject_TextureFollowsItemSizeChanged(QQuickFramebufferObject* self, bool param1);
void QQuickFramebufferObject_Connect_TextureFollowsItemSizeChanged(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_MirrorVerticallyChanged(QQuickFramebufferObject* self, bool param1);
void QQuickFramebufferObject_Connect_MirrorVerticallyChanged(QQuickFramebufferObject* self, intptr_t slot);
libqt_string QQuickFramebufferObject_Tr2(const char* s, const char* c);
libqt_string QQuickFramebufferObject_Tr3(const char* s, const char* c, int n);
void QQuickFramebufferObject_OnMetaObject(const QQuickFramebufferObject* self, intptr_t slot);
QMetaObject* QQuickFramebufferObject_SuperMetaObject(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnMetacast(QQuickFramebufferObject* self, intptr_t slot);
void* QQuickFramebufferObject_SuperMetacast(QQuickFramebufferObject* self, const char* param1);
void QQuickFramebufferObject_OnMetacall(QQuickFramebufferObject* self, intptr_t slot);
int QQuickFramebufferObject_SuperMetacall(QQuickFramebufferObject* self, int param1, int param2, void** param3);
void QQuickFramebufferObject_OnCreateRenderer(const QQuickFramebufferObject* self, intptr_t slot);
QQuickFramebufferObject__Renderer* QQuickFramebufferObject_SuperCreateRenderer(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnIsTextureProvider(const QQuickFramebufferObject* self, intptr_t slot);
bool QQuickFramebufferObject_SuperIsTextureProvider(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnTextureProvider(const QQuickFramebufferObject* self, intptr_t slot);
QSGTextureProvider* QQuickFramebufferObject_SuperTextureProvider(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnReleaseResources(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperReleaseResources(QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnGeometryChange(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperGeometryChange(QQuickFramebufferObject* self, const QRectF* newGeometry, const QRectF* oldGeometry);
void QQuickFramebufferObject_OnUpdatePaintNode(QQuickFramebufferObject* self, intptr_t slot);
QSGNode* QQuickFramebufferObject_SuperUpdatePaintNode(QQuickFramebufferObject* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
QRectF* QQuickFramebufferObject_BoundingRect(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnBoundingRect(const QQuickFramebufferObject* self, intptr_t slot);
QRectF* QQuickFramebufferObject_SuperBoundingRect(const QQuickFramebufferObject* self);
QRectF* QQuickFramebufferObject_ClipRect(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnClipRect(const QQuickFramebufferObject* self, intptr_t slot);
QRectF* QQuickFramebufferObject_SuperClipRect(const QQuickFramebufferObject* self);
bool QQuickFramebufferObject_Contains(const QQuickFramebufferObject* self, const QPointF* point);
void QQuickFramebufferObject_OnContains(const QQuickFramebufferObject* self, intptr_t slot);
bool QQuickFramebufferObject_SuperContains(const QQuickFramebufferObject* self, const QPointF* point);
QVariant* QQuickFramebufferObject_InputMethodQuery(const QQuickFramebufferObject* self, int query);
void QQuickFramebufferObject_OnInputMethodQuery(const QQuickFramebufferObject* self, intptr_t slot);
QVariant* QQuickFramebufferObject_SuperInputMethodQuery(const QQuickFramebufferObject* self, int query);
bool QQuickFramebufferObject_Event(QQuickFramebufferObject* self, QEvent* param1);
void QQuickFramebufferObject_OnEvent(QQuickFramebufferObject* self, intptr_t slot);
bool QQuickFramebufferObject_SuperEvent(QQuickFramebufferObject* self, QEvent* param1);
void QQuickFramebufferObject_ItemChange(QQuickFramebufferObject* self, int param1, const QQuickItem__ItemChangeData* param2);
void QQuickFramebufferObject_OnItemChange(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperItemChange(QQuickFramebufferObject* self, int param1, const QQuickItem__ItemChangeData* param2);
void QQuickFramebufferObject_ClassBegin(QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnClassBegin(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperClassBegin(QQuickFramebufferObject* self);
void QQuickFramebufferObject_ComponentComplete(QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnComponentComplete(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperComponentComplete(QQuickFramebufferObject* self);
void QQuickFramebufferObject_KeyPressEvent(QQuickFramebufferObject* self, QKeyEvent* event);
void QQuickFramebufferObject_OnKeyPressEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperKeyPressEvent(QQuickFramebufferObject* self, QKeyEvent* event);
void QQuickFramebufferObject_KeyReleaseEvent(QQuickFramebufferObject* self, QKeyEvent* event);
void QQuickFramebufferObject_OnKeyReleaseEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperKeyReleaseEvent(QQuickFramebufferObject* self, QKeyEvent* event);
void QQuickFramebufferObject_InputMethodEvent(QQuickFramebufferObject* self, QInputMethodEvent* param1);
void QQuickFramebufferObject_OnInputMethodEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperInputMethodEvent(QQuickFramebufferObject* self, QInputMethodEvent* param1);
void QQuickFramebufferObject_FocusInEvent(QQuickFramebufferObject* self, QFocusEvent* param1);
void QQuickFramebufferObject_OnFocusInEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperFocusInEvent(QQuickFramebufferObject* self, QFocusEvent* param1);
void QQuickFramebufferObject_FocusOutEvent(QQuickFramebufferObject* self, QFocusEvent* param1);
void QQuickFramebufferObject_OnFocusOutEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperFocusOutEvent(QQuickFramebufferObject* self, QFocusEvent* param1);
void QQuickFramebufferObject_MousePressEvent(QQuickFramebufferObject* self, QMouseEvent* event);
void QQuickFramebufferObject_OnMousePressEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperMousePressEvent(QQuickFramebufferObject* self, QMouseEvent* event);
void QQuickFramebufferObject_MouseMoveEvent(QQuickFramebufferObject* self, QMouseEvent* event);
void QQuickFramebufferObject_OnMouseMoveEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperMouseMoveEvent(QQuickFramebufferObject* self, QMouseEvent* event);
void QQuickFramebufferObject_MouseReleaseEvent(QQuickFramebufferObject* self, QMouseEvent* event);
void QQuickFramebufferObject_OnMouseReleaseEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperMouseReleaseEvent(QQuickFramebufferObject* self, QMouseEvent* event);
void QQuickFramebufferObject_MouseDoubleClickEvent(QQuickFramebufferObject* self, QMouseEvent* event);
void QQuickFramebufferObject_OnMouseDoubleClickEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperMouseDoubleClickEvent(QQuickFramebufferObject* self, QMouseEvent* event);
void QQuickFramebufferObject_MouseUngrabEvent(QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnMouseUngrabEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperMouseUngrabEvent(QQuickFramebufferObject* self);
void QQuickFramebufferObject_TouchUngrabEvent(QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnTouchUngrabEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperTouchUngrabEvent(QQuickFramebufferObject* self);
void QQuickFramebufferObject_WheelEvent(QQuickFramebufferObject* self, QWheelEvent* event);
void QQuickFramebufferObject_OnWheelEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperWheelEvent(QQuickFramebufferObject* self, QWheelEvent* event);
void QQuickFramebufferObject_TouchEvent(QQuickFramebufferObject* self, QTouchEvent* event);
void QQuickFramebufferObject_OnTouchEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperTouchEvent(QQuickFramebufferObject* self, QTouchEvent* event);
void QQuickFramebufferObject_HoverEnterEvent(QQuickFramebufferObject* self, QHoverEvent* event);
void QQuickFramebufferObject_OnHoverEnterEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperHoverEnterEvent(QQuickFramebufferObject* self, QHoverEvent* event);
void QQuickFramebufferObject_HoverMoveEvent(QQuickFramebufferObject* self, QHoverEvent* event);
void QQuickFramebufferObject_OnHoverMoveEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperHoverMoveEvent(QQuickFramebufferObject* self, QHoverEvent* event);
void QQuickFramebufferObject_HoverLeaveEvent(QQuickFramebufferObject* self, QHoverEvent* event);
void QQuickFramebufferObject_OnHoverLeaveEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperHoverLeaveEvent(QQuickFramebufferObject* self, QHoverEvent* event);
void QQuickFramebufferObject_DragEnterEvent(QQuickFramebufferObject* self, QDragEnterEvent* param1);
void QQuickFramebufferObject_OnDragEnterEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperDragEnterEvent(QQuickFramebufferObject* self, QDragEnterEvent* param1);
void QQuickFramebufferObject_DragMoveEvent(QQuickFramebufferObject* self, QDragMoveEvent* param1);
void QQuickFramebufferObject_OnDragMoveEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperDragMoveEvent(QQuickFramebufferObject* self, QDragMoveEvent* param1);
void QQuickFramebufferObject_DragLeaveEvent(QQuickFramebufferObject* self, QDragLeaveEvent* param1);
void QQuickFramebufferObject_OnDragLeaveEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperDragLeaveEvent(QQuickFramebufferObject* self, QDragLeaveEvent* param1);
void QQuickFramebufferObject_DropEvent(QQuickFramebufferObject* self, QDropEvent* param1);
void QQuickFramebufferObject_OnDropEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperDropEvent(QQuickFramebufferObject* self, QDropEvent* param1);
bool QQuickFramebufferObject_ChildMouseEventFilter(QQuickFramebufferObject* self, QQuickItem* param1, QEvent* param2);
void QQuickFramebufferObject_OnChildMouseEventFilter(QQuickFramebufferObject* self, intptr_t slot);
bool QQuickFramebufferObject_SuperChildMouseEventFilter(QQuickFramebufferObject* self, QQuickItem* param1, QEvent* param2);
void QQuickFramebufferObject_UpdatePolish(QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnUpdatePolish(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperUpdatePolish(QQuickFramebufferObject* self);
bool QQuickFramebufferObject_EventFilter(QQuickFramebufferObject* self, QObject* watched, QEvent* event);
void QQuickFramebufferObject_OnEventFilter(QQuickFramebufferObject* self, intptr_t slot);
bool QQuickFramebufferObject_SuperEventFilter(QQuickFramebufferObject* self, QObject* watched, QEvent* event);
void QQuickFramebufferObject_TimerEvent(QQuickFramebufferObject* self, QTimerEvent* event);
void QQuickFramebufferObject_OnTimerEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperTimerEvent(QQuickFramebufferObject* self, QTimerEvent* event);
void QQuickFramebufferObject_ChildEvent(QQuickFramebufferObject* self, QChildEvent* event);
void QQuickFramebufferObject_OnChildEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperChildEvent(QQuickFramebufferObject* self, QChildEvent* event);
void QQuickFramebufferObject_CustomEvent(QQuickFramebufferObject* self, QEvent* event);
void QQuickFramebufferObject_OnCustomEvent(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperCustomEvent(QQuickFramebufferObject* self, QEvent* event);
void QQuickFramebufferObject_ConnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal);
void QQuickFramebufferObject_OnConnectNotify(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperConnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal);
void QQuickFramebufferObject_DisconnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal);
void QQuickFramebufferObject_OnDisconnectNotify(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperDisconnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal);
bool QQuickFramebufferObject_IsComponentComplete(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnIsComponentComplete(const QQuickFramebufferObject* self, intptr_t slot);
bool QQuickFramebufferObject_SuperIsComponentComplete(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_UpdateInputMethod(QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnUpdateInputMethod(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperUpdateInputMethod(QQuickFramebufferObject* self);
bool QQuickFramebufferObject_WidthValid(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnWidthValid(const QQuickFramebufferObject* self, intptr_t slot);
bool QQuickFramebufferObject_SuperWidthValid(const QQuickFramebufferObject* self);
bool QQuickFramebufferObject_HeightValid(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnHeightValid(const QQuickFramebufferObject* self, intptr_t slot);
bool QQuickFramebufferObject_SuperHeightValid(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_SetImplicitSize(QQuickFramebufferObject* self, double param1, double param2);
void QQuickFramebufferObject_OnSetImplicitSize(QQuickFramebufferObject* self, intptr_t slot);
void QQuickFramebufferObject_SuperSetImplicitSize(QQuickFramebufferObject* self, double param1, double param2);
QObject* QQuickFramebufferObject_Sender(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnSender(const QQuickFramebufferObject* self, intptr_t slot);
QObject* QQuickFramebufferObject_SuperSender(const QQuickFramebufferObject* self);
int QQuickFramebufferObject_SenderSignalIndex(const QQuickFramebufferObject* self);
void QQuickFramebufferObject_OnSenderSignalIndex(const QQuickFramebufferObject* self, intptr_t slot);
int QQuickFramebufferObject_SuperSenderSignalIndex(const QQuickFramebufferObject* self);
int QQuickFramebufferObject_Receivers(const QQuickFramebufferObject* self, const char* signal);
void QQuickFramebufferObject_OnReceivers(const QQuickFramebufferObject* self, intptr_t slot);
int QQuickFramebufferObject_SuperReceivers(const QQuickFramebufferObject* self, const char* signal);
bool QQuickFramebufferObject_IsSignalConnected(const QQuickFramebufferObject* self, const QMetaMethod* signal);
void QQuickFramebufferObject_OnIsSignalConnected(const QQuickFramebufferObject* self, intptr_t slot);
bool QQuickFramebufferObject_SuperIsSignalConnected(const QQuickFramebufferObject* self, const QMetaMethod* signal);
void QQuickFramebufferObject_Delete(QQuickFramebufferObject* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
