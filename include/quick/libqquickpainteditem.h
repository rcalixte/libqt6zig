#pragma once
#ifndef QUICK_LIBQQUICKPAINTEDITEM_H
#define QUICK_LIBQQUICKPAINTEDITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__ItemChangeData)
typedef QQuickItem::ItemChangeData QQuickItem__ItemChangeData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__UpdatePaintNodeData)
typedef QQuickItem::UpdatePaintNodeData QQuickItem__UpdatePaintNodeData;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
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
typedef struct QPainter QPainter;
typedef struct QPointF QPointF;
typedef struct QQmlParserStatus QQmlParserStatus;
typedef struct QQuickItem QQuickItem;
typedef struct QQuickItem__ItemChangeData QQuickItem__ItemChangeData;
typedef struct QQuickItem__UpdatePaintNodeData QQuickItem__UpdatePaintNodeData;
typedef struct QQuickPaintedItem QQuickPaintedItem;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSGNode QSGNode;
typedef struct QSGTextureProvider QSGTextureProvider;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
#endif

QQuickPaintedItem* QQuickPaintedItem_new();
QQuickPaintedItem* QQuickPaintedItem_new2(QQuickItem* parent);
QMetaObject* QQuickPaintedItem_MetaObject(const QQuickPaintedItem* self);
void* QQuickPaintedItem_Metacast(QQuickPaintedItem* self, const char* param1);
int QQuickPaintedItem_Metacall(QQuickPaintedItem* self, int param1, int param2, void** param3);
libqt_string QQuickPaintedItem_Tr(const char* s);
void QQuickPaintedItem_Update(QQuickPaintedItem* self);
bool QQuickPaintedItem_OpaquePainting(const QQuickPaintedItem* self);
void QQuickPaintedItem_SetOpaquePainting(QQuickPaintedItem* self, bool opaqueVal);
bool QQuickPaintedItem_Antialiasing(const QQuickPaintedItem* self);
void QQuickPaintedItem_SetAntialiasing(QQuickPaintedItem* self, bool enable);
bool QQuickPaintedItem_Mipmap(const QQuickPaintedItem* self);
void QQuickPaintedItem_SetMipmap(QQuickPaintedItem* self, bool enable);
int QQuickPaintedItem_PerformanceHints(const QQuickPaintedItem* self);
void QQuickPaintedItem_SetPerformanceHint(QQuickPaintedItem* self, int hint);
void QQuickPaintedItem_SetPerformanceHints(QQuickPaintedItem* self, int hints);
QRectF* QQuickPaintedItem_ContentsBoundingRect(const QQuickPaintedItem* self);
QSize* QQuickPaintedItem_ContentsSize(const QQuickPaintedItem* self);
void QQuickPaintedItem_SetContentsSize(QQuickPaintedItem* self, const QSize* contentsSize);
void QQuickPaintedItem_ResetContentsSize(QQuickPaintedItem* self);
double QQuickPaintedItem_ContentsScale(const QQuickPaintedItem* self);
void QQuickPaintedItem_SetContentsScale(QQuickPaintedItem* self, double contentsScale);
QSize* QQuickPaintedItem_TextureSize(const QQuickPaintedItem* self);
void QQuickPaintedItem_SetTextureSize(QQuickPaintedItem* self, const QSize* size);
QColor* QQuickPaintedItem_FillColor(const QQuickPaintedItem* self);
void QQuickPaintedItem_SetFillColor(QQuickPaintedItem* self, const QColor* fillColor);
int QQuickPaintedItem_RenderTarget(const QQuickPaintedItem* self);
void QQuickPaintedItem_SetRenderTarget(QQuickPaintedItem* self, int target);
void QQuickPaintedItem_Paint(QQuickPaintedItem* self, QPainter* painter);
bool QQuickPaintedItem_IsTextureProvider(const QQuickPaintedItem* self);
QSGTextureProvider* QQuickPaintedItem_TextureProvider(const QQuickPaintedItem* self);
void QQuickPaintedItem_FillColorChanged(QQuickPaintedItem* self);
void QQuickPaintedItem_Connect_FillColorChanged(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_ContentsSizeChanged(QQuickPaintedItem* self);
void QQuickPaintedItem_Connect_ContentsSizeChanged(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_ContentsScaleChanged(QQuickPaintedItem* self);
void QQuickPaintedItem_Connect_ContentsScaleChanged(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_RenderTargetChanged(QQuickPaintedItem* self);
void QQuickPaintedItem_Connect_RenderTargetChanged(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_TextureSizeChanged(QQuickPaintedItem* self);
void QQuickPaintedItem_Connect_TextureSizeChanged(QQuickPaintedItem* self, intptr_t slot);
QSGNode* QQuickPaintedItem_UpdatePaintNode(QQuickPaintedItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
void QQuickPaintedItem_ReleaseResources(QQuickPaintedItem* self);
void QQuickPaintedItem_ItemChange(QQuickPaintedItem* self, int param1, const QQuickItem__ItemChangeData* param2);
libqt_string QQuickPaintedItem_Tr2(const char* s, const char* c);
libqt_string QQuickPaintedItem_Tr3(const char* s, const char* c, int n);
void QQuickPaintedItem_Update1(QQuickPaintedItem* self, const QRect* rect);
void QQuickPaintedItem_SetPerformanceHint2(QQuickPaintedItem* self, int hint, bool enabled);
void QQuickPaintedItem_OnMetaObject(const QQuickPaintedItem* self, intptr_t slot);
QMetaObject* QQuickPaintedItem_SuperMetaObject(const QQuickPaintedItem* self);
void QQuickPaintedItem_OnMetacast(QQuickPaintedItem* self, intptr_t slot);
void* QQuickPaintedItem_SuperMetacast(QQuickPaintedItem* self, const char* param1);
void QQuickPaintedItem_OnMetacall(QQuickPaintedItem* self, intptr_t slot);
int QQuickPaintedItem_SuperMetacall(QQuickPaintedItem* self, int param1, int param2, void** param3);
void QQuickPaintedItem_OnPaint(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperPaint(QQuickPaintedItem* self, QPainter* painter);
void QQuickPaintedItem_OnIsTextureProvider(const QQuickPaintedItem* self, intptr_t slot);
bool QQuickPaintedItem_SuperIsTextureProvider(const QQuickPaintedItem* self);
void QQuickPaintedItem_OnTextureProvider(const QQuickPaintedItem* self, intptr_t slot);
QSGTextureProvider* QQuickPaintedItem_SuperTextureProvider(const QQuickPaintedItem* self);
void QQuickPaintedItem_OnUpdatePaintNode(QQuickPaintedItem* self, intptr_t slot);
QSGNode* QQuickPaintedItem_SuperUpdatePaintNode(QQuickPaintedItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
void QQuickPaintedItem_OnReleaseResources(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperReleaseResources(QQuickPaintedItem* self);
void QQuickPaintedItem_OnItemChange(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperItemChange(QQuickPaintedItem* self, int param1, const QQuickItem__ItemChangeData* param2);
QRectF* QQuickPaintedItem_BoundingRect(const QQuickPaintedItem* self);
void QQuickPaintedItem_OnBoundingRect(const QQuickPaintedItem* self, intptr_t slot);
QRectF* QQuickPaintedItem_SuperBoundingRect(const QQuickPaintedItem* self);
QRectF* QQuickPaintedItem_ClipRect(const QQuickPaintedItem* self);
void QQuickPaintedItem_OnClipRect(const QQuickPaintedItem* self, intptr_t slot);
QRectF* QQuickPaintedItem_SuperClipRect(const QQuickPaintedItem* self);
bool QQuickPaintedItem_Contains(const QQuickPaintedItem* self, const QPointF* point);
void QQuickPaintedItem_OnContains(const QQuickPaintedItem* self, intptr_t slot);
bool QQuickPaintedItem_SuperContains(const QQuickPaintedItem* self, const QPointF* point);
QVariant* QQuickPaintedItem_InputMethodQuery(const QQuickPaintedItem* self, int query);
void QQuickPaintedItem_OnInputMethodQuery(const QQuickPaintedItem* self, intptr_t slot);
QVariant* QQuickPaintedItem_SuperInputMethodQuery(const QQuickPaintedItem* self, int query);
bool QQuickPaintedItem_Event(QQuickPaintedItem* self, QEvent* param1);
void QQuickPaintedItem_OnEvent(QQuickPaintedItem* self, intptr_t slot);
bool QQuickPaintedItem_SuperEvent(QQuickPaintedItem* self, QEvent* param1);
void QQuickPaintedItem_GeometryChange(QQuickPaintedItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
void QQuickPaintedItem_OnGeometryChange(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperGeometryChange(QQuickPaintedItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
void QQuickPaintedItem_ClassBegin(QQuickPaintedItem* self);
void QQuickPaintedItem_OnClassBegin(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperClassBegin(QQuickPaintedItem* self);
void QQuickPaintedItem_ComponentComplete(QQuickPaintedItem* self);
void QQuickPaintedItem_OnComponentComplete(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperComponentComplete(QQuickPaintedItem* self);
void QQuickPaintedItem_KeyPressEvent(QQuickPaintedItem* self, QKeyEvent* event);
void QQuickPaintedItem_OnKeyPressEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperKeyPressEvent(QQuickPaintedItem* self, QKeyEvent* event);
void QQuickPaintedItem_KeyReleaseEvent(QQuickPaintedItem* self, QKeyEvent* event);
void QQuickPaintedItem_OnKeyReleaseEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperKeyReleaseEvent(QQuickPaintedItem* self, QKeyEvent* event);
void QQuickPaintedItem_InputMethodEvent(QQuickPaintedItem* self, QInputMethodEvent* param1);
void QQuickPaintedItem_OnInputMethodEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperInputMethodEvent(QQuickPaintedItem* self, QInputMethodEvent* param1);
void QQuickPaintedItem_FocusInEvent(QQuickPaintedItem* self, QFocusEvent* param1);
void QQuickPaintedItem_OnFocusInEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperFocusInEvent(QQuickPaintedItem* self, QFocusEvent* param1);
void QQuickPaintedItem_FocusOutEvent(QQuickPaintedItem* self, QFocusEvent* param1);
void QQuickPaintedItem_OnFocusOutEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperFocusOutEvent(QQuickPaintedItem* self, QFocusEvent* param1);
void QQuickPaintedItem_MousePressEvent(QQuickPaintedItem* self, QMouseEvent* event);
void QQuickPaintedItem_OnMousePressEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperMousePressEvent(QQuickPaintedItem* self, QMouseEvent* event);
void QQuickPaintedItem_MouseMoveEvent(QQuickPaintedItem* self, QMouseEvent* event);
void QQuickPaintedItem_OnMouseMoveEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperMouseMoveEvent(QQuickPaintedItem* self, QMouseEvent* event);
void QQuickPaintedItem_MouseReleaseEvent(QQuickPaintedItem* self, QMouseEvent* event);
void QQuickPaintedItem_OnMouseReleaseEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperMouseReleaseEvent(QQuickPaintedItem* self, QMouseEvent* event);
void QQuickPaintedItem_MouseDoubleClickEvent(QQuickPaintedItem* self, QMouseEvent* event);
void QQuickPaintedItem_OnMouseDoubleClickEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperMouseDoubleClickEvent(QQuickPaintedItem* self, QMouseEvent* event);
void QQuickPaintedItem_MouseUngrabEvent(QQuickPaintedItem* self);
void QQuickPaintedItem_OnMouseUngrabEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperMouseUngrabEvent(QQuickPaintedItem* self);
void QQuickPaintedItem_TouchUngrabEvent(QQuickPaintedItem* self);
void QQuickPaintedItem_OnTouchUngrabEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperTouchUngrabEvent(QQuickPaintedItem* self);
void QQuickPaintedItem_WheelEvent(QQuickPaintedItem* self, QWheelEvent* event);
void QQuickPaintedItem_OnWheelEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperWheelEvent(QQuickPaintedItem* self, QWheelEvent* event);
void QQuickPaintedItem_TouchEvent(QQuickPaintedItem* self, QTouchEvent* event);
void QQuickPaintedItem_OnTouchEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperTouchEvent(QQuickPaintedItem* self, QTouchEvent* event);
void QQuickPaintedItem_HoverEnterEvent(QQuickPaintedItem* self, QHoverEvent* event);
void QQuickPaintedItem_OnHoverEnterEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperHoverEnterEvent(QQuickPaintedItem* self, QHoverEvent* event);
void QQuickPaintedItem_HoverMoveEvent(QQuickPaintedItem* self, QHoverEvent* event);
void QQuickPaintedItem_OnHoverMoveEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperHoverMoveEvent(QQuickPaintedItem* self, QHoverEvent* event);
void QQuickPaintedItem_HoverLeaveEvent(QQuickPaintedItem* self, QHoverEvent* event);
void QQuickPaintedItem_OnHoverLeaveEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperHoverLeaveEvent(QQuickPaintedItem* self, QHoverEvent* event);
void QQuickPaintedItem_DragEnterEvent(QQuickPaintedItem* self, QDragEnterEvent* param1);
void QQuickPaintedItem_OnDragEnterEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperDragEnterEvent(QQuickPaintedItem* self, QDragEnterEvent* param1);
void QQuickPaintedItem_DragMoveEvent(QQuickPaintedItem* self, QDragMoveEvent* param1);
void QQuickPaintedItem_OnDragMoveEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperDragMoveEvent(QQuickPaintedItem* self, QDragMoveEvent* param1);
void QQuickPaintedItem_DragLeaveEvent(QQuickPaintedItem* self, QDragLeaveEvent* param1);
void QQuickPaintedItem_OnDragLeaveEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperDragLeaveEvent(QQuickPaintedItem* self, QDragLeaveEvent* param1);
void QQuickPaintedItem_DropEvent(QQuickPaintedItem* self, QDropEvent* param1);
void QQuickPaintedItem_OnDropEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperDropEvent(QQuickPaintedItem* self, QDropEvent* param1);
bool QQuickPaintedItem_ChildMouseEventFilter(QQuickPaintedItem* self, QQuickItem* param1, QEvent* param2);
void QQuickPaintedItem_OnChildMouseEventFilter(QQuickPaintedItem* self, intptr_t slot);
bool QQuickPaintedItem_SuperChildMouseEventFilter(QQuickPaintedItem* self, QQuickItem* param1, QEvent* param2);
void QQuickPaintedItem_UpdatePolish(QQuickPaintedItem* self);
void QQuickPaintedItem_OnUpdatePolish(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperUpdatePolish(QQuickPaintedItem* self);
bool QQuickPaintedItem_EventFilter(QQuickPaintedItem* self, QObject* watched, QEvent* event);
void QQuickPaintedItem_OnEventFilter(QQuickPaintedItem* self, intptr_t slot);
bool QQuickPaintedItem_SuperEventFilter(QQuickPaintedItem* self, QObject* watched, QEvent* event);
void QQuickPaintedItem_TimerEvent(QQuickPaintedItem* self, QTimerEvent* event);
void QQuickPaintedItem_OnTimerEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperTimerEvent(QQuickPaintedItem* self, QTimerEvent* event);
void QQuickPaintedItem_ChildEvent(QQuickPaintedItem* self, QChildEvent* event);
void QQuickPaintedItem_OnChildEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperChildEvent(QQuickPaintedItem* self, QChildEvent* event);
void QQuickPaintedItem_CustomEvent(QQuickPaintedItem* self, QEvent* event);
void QQuickPaintedItem_OnCustomEvent(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperCustomEvent(QQuickPaintedItem* self, QEvent* event);
void QQuickPaintedItem_ConnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal);
void QQuickPaintedItem_OnConnectNotify(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperConnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal);
void QQuickPaintedItem_DisconnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal);
void QQuickPaintedItem_OnDisconnectNotify(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperDisconnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal);
bool QQuickPaintedItem_IsComponentComplete(const QQuickPaintedItem* self);
void QQuickPaintedItem_OnIsComponentComplete(const QQuickPaintedItem* self, intptr_t slot);
bool QQuickPaintedItem_SuperIsComponentComplete(const QQuickPaintedItem* self);
void QQuickPaintedItem_UpdateInputMethod(QQuickPaintedItem* self);
void QQuickPaintedItem_OnUpdateInputMethod(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperUpdateInputMethod(QQuickPaintedItem* self);
bool QQuickPaintedItem_WidthValid(const QQuickPaintedItem* self);
void QQuickPaintedItem_OnWidthValid(const QQuickPaintedItem* self, intptr_t slot);
bool QQuickPaintedItem_SuperWidthValid(const QQuickPaintedItem* self);
bool QQuickPaintedItem_HeightValid(const QQuickPaintedItem* self);
void QQuickPaintedItem_OnHeightValid(const QQuickPaintedItem* self, intptr_t slot);
bool QQuickPaintedItem_SuperHeightValid(const QQuickPaintedItem* self);
void QQuickPaintedItem_SetImplicitSize(QQuickPaintedItem* self, double param1, double param2);
void QQuickPaintedItem_OnSetImplicitSize(QQuickPaintedItem* self, intptr_t slot);
void QQuickPaintedItem_SuperSetImplicitSize(QQuickPaintedItem* self, double param1, double param2);
QObject* QQuickPaintedItem_Sender(const QQuickPaintedItem* self);
void QQuickPaintedItem_OnSender(const QQuickPaintedItem* self, intptr_t slot);
QObject* QQuickPaintedItem_SuperSender(const QQuickPaintedItem* self);
int QQuickPaintedItem_SenderSignalIndex(const QQuickPaintedItem* self);
void QQuickPaintedItem_OnSenderSignalIndex(const QQuickPaintedItem* self, intptr_t slot);
int QQuickPaintedItem_SuperSenderSignalIndex(const QQuickPaintedItem* self);
int QQuickPaintedItem_Receivers(const QQuickPaintedItem* self, const char* signal);
void QQuickPaintedItem_OnReceivers(const QQuickPaintedItem* self, intptr_t slot);
int QQuickPaintedItem_SuperReceivers(const QQuickPaintedItem* self, const char* signal);
bool QQuickPaintedItem_IsSignalConnected(const QQuickPaintedItem* self, const QMetaMethod* signal);
void QQuickPaintedItem_OnIsSignalConnected(const QQuickPaintedItem* self, intptr_t slot);
bool QQuickPaintedItem_SuperIsSignalConnected(const QQuickPaintedItem* self, const QMetaMethod* signal);
void QQuickPaintedItem_Delete(QQuickPaintedItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
