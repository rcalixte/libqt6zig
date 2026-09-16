#pragma once
#ifndef QUICK_LIBQQUICKRHIITEM_H
#define QUICK_LIBQQUICKRHIITEM_H

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
typedef struct QPointF QPointF;
typedef struct QQmlParserStatus QQmlParserStatus;
typedef struct QQuickItem QQuickItem;
typedef struct QQuickItem__ItemChangeData QQuickItem__ItemChangeData;
typedef struct QQuickItem__UpdatePaintNodeData QQuickItem__UpdatePaintNodeData;
typedef struct QQuickRhiItem QQuickRhiItem;
typedef struct QQuickRhiItemRenderer QQuickRhiItemRenderer;
typedef struct QRectF QRectF;
typedef struct QSGNode QSGNode;
typedef struct QSGTextureProvider QSGTextureProvider;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
#endif

void QQuickRhiItemRenderer_Delete(QQuickRhiItemRenderer* self);

QQuickRhiItem* QQuickRhiItem_new();
QQuickRhiItem* QQuickRhiItem_new2(QQuickItem* parent);
QMetaObject* QQuickRhiItem_MetaObject(const QQuickRhiItem* self);
void* QQuickRhiItem_Metacast(QQuickRhiItem* self, const char* param1);
int QQuickRhiItem_Metacall(QQuickRhiItem* self, int param1, int param2, void** param3);
libqt_string QQuickRhiItem_Tr(const char* s);
int QQuickRhiItem_SampleCount(const QQuickRhiItem* self);
void QQuickRhiItem_SetSampleCount(QQuickRhiItem* self, int samples);
int QQuickRhiItem_ColorBufferFormat(const QQuickRhiItem* self);
void QQuickRhiItem_SetColorBufferFormat(QQuickRhiItem* self, int format);
bool QQuickRhiItem_IsMirrorVerticallyEnabled(const QQuickRhiItem* self);
void QQuickRhiItem_SetMirrorVertically(QQuickRhiItem* self, bool enable);
bool QQuickRhiItem_AlphaBlending(const QQuickRhiItem* self);
void QQuickRhiItem_SetAlphaBlending(QQuickRhiItem* self, bool enable);
int QQuickRhiItem_FixedColorBufferWidth(const QQuickRhiItem* self);
void QQuickRhiItem_SetFixedColorBufferWidth(QQuickRhiItem* self, int width);
int QQuickRhiItem_FixedColorBufferHeight(const QQuickRhiItem* self);
void QQuickRhiItem_SetFixedColorBufferHeight(QQuickRhiItem* self, int height);
QSize* QQuickRhiItem_EffectiveColorBufferSize(const QQuickRhiItem* self);
bool QQuickRhiItem_IsTextureProvider(const QQuickRhiItem* self);
QSGTextureProvider* QQuickRhiItem_TextureProvider(const QQuickRhiItem* self);
void QQuickRhiItem_SampleCountChanged(QQuickRhiItem* self);
void QQuickRhiItem_Connect_SampleCountChanged(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_ColorBufferFormatChanged(QQuickRhiItem* self);
void QQuickRhiItem_Connect_ColorBufferFormatChanged(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_AutoRenderTargetChanged(QQuickRhiItem* self);
void QQuickRhiItem_Connect_AutoRenderTargetChanged(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_MirrorVerticallyChanged(QQuickRhiItem* self);
void QQuickRhiItem_Connect_MirrorVerticallyChanged(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_AlphaBlendingChanged(QQuickRhiItem* self);
void QQuickRhiItem_Connect_AlphaBlendingChanged(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_FixedColorBufferWidthChanged(QQuickRhiItem* self);
void QQuickRhiItem_Connect_FixedColorBufferWidthChanged(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_FixedColorBufferHeightChanged(QQuickRhiItem* self);
void QQuickRhiItem_Connect_FixedColorBufferHeightChanged(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_EffectiveColorBufferSizeChanged(QQuickRhiItem* self);
void QQuickRhiItem_Connect_EffectiveColorBufferSizeChanged(QQuickRhiItem* self, intptr_t slot);
QQuickRhiItemRenderer* QQuickRhiItem_CreateRenderer(QQuickRhiItem* self);
QSGNode* QQuickRhiItem_UpdatePaintNode(QQuickRhiItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
bool QQuickRhiItem_Event(QQuickRhiItem* self, QEvent* param1);
void QQuickRhiItem_GeometryChange(QQuickRhiItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
void QQuickRhiItem_ReleaseResources(QQuickRhiItem* self);
libqt_string QQuickRhiItem_Tr2(const char* s, const char* c);
libqt_string QQuickRhiItem_Tr3(const char* s, const char* c, int n);
void QQuickRhiItem_OnMetaObject(const QQuickRhiItem* self, intptr_t slot);
QMetaObject* QQuickRhiItem_SuperMetaObject(const QQuickRhiItem* self);
void QQuickRhiItem_OnMetacast(QQuickRhiItem* self, intptr_t slot);
void* QQuickRhiItem_SuperMetacast(QQuickRhiItem* self, const char* param1);
void QQuickRhiItem_OnMetacall(QQuickRhiItem* self, intptr_t slot);
int QQuickRhiItem_SuperMetacall(QQuickRhiItem* self, int param1, int param2, void** param3);
void QQuickRhiItem_OnIsTextureProvider(const QQuickRhiItem* self, intptr_t slot);
bool QQuickRhiItem_SuperIsTextureProvider(const QQuickRhiItem* self);
void QQuickRhiItem_OnTextureProvider(const QQuickRhiItem* self, intptr_t slot);
QSGTextureProvider* QQuickRhiItem_SuperTextureProvider(const QQuickRhiItem* self);
void QQuickRhiItem_OnCreateRenderer(QQuickRhiItem* self, intptr_t slot);
QQuickRhiItemRenderer* QQuickRhiItem_SuperCreateRenderer(QQuickRhiItem* self);
void QQuickRhiItem_OnUpdatePaintNode(QQuickRhiItem* self, intptr_t slot);
QSGNode* QQuickRhiItem_SuperUpdatePaintNode(QQuickRhiItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
void QQuickRhiItem_OnEvent(QQuickRhiItem* self, intptr_t slot);
bool QQuickRhiItem_SuperEvent(QQuickRhiItem* self, QEvent* param1);
void QQuickRhiItem_OnGeometryChange(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperGeometryChange(QQuickRhiItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
void QQuickRhiItem_OnReleaseResources(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperReleaseResources(QQuickRhiItem* self);
QRectF* QQuickRhiItem_BoundingRect(const QQuickRhiItem* self);
void QQuickRhiItem_OnBoundingRect(const QQuickRhiItem* self, intptr_t slot);
QRectF* QQuickRhiItem_SuperBoundingRect(const QQuickRhiItem* self);
QRectF* QQuickRhiItem_ClipRect(const QQuickRhiItem* self);
void QQuickRhiItem_OnClipRect(const QQuickRhiItem* self, intptr_t slot);
QRectF* QQuickRhiItem_SuperClipRect(const QQuickRhiItem* self);
bool QQuickRhiItem_Contains(const QQuickRhiItem* self, const QPointF* point);
void QQuickRhiItem_OnContains(const QQuickRhiItem* self, intptr_t slot);
bool QQuickRhiItem_SuperContains(const QQuickRhiItem* self, const QPointF* point);
QVariant* QQuickRhiItem_InputMethodQuery(const QQuickRhiItem* self, int query);
void QQuickRhiItem_OnInputMethodQuery(const QQuickRhiItem* self, intptr_t slot);
QVariant* QQuickRhiItem_SuperInputMethodQuery(const QQuickRhiItem* self, int query);
void QQuickRhiItem_ItemChange(QQuickRhiItem* self, int param1, const QQuickItem__ItemChangeData* param2);
void QQuickRhiItem_OnItemChange(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperItemChange(QQuickRhiItem* self, int param1, const QQuickItem__ItemChangeData* param2);
void QQuickRhiItem_ClassBegin(QQuickRhiItem* self);
void QQuickRhiItem_OnClassBegin(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperClassBegin(QQuickRhiItem* self);
void QQuickRhiItem_ComponentComplete(QQuickRhiItem* self);
void QQuickRhiItem_OnComponentComplete(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperComponentComplete(QQuickRhiItem* self);
void QQuickRhiItem_KeyPressEvent(QQuickRhiItem* self, QKeyEvent* event);
void QQuickRhiItem_OnKeyPressEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperKeyPressEvent(QQuickRhiItem* self, QKeyEvent* event);
void QQuickRhiItem_KeyReleaseEvent(QQuickRhiItem* self, QKeyEvent* event);
void QQuickRhiItem_OnKeyReleaseEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperKeyReleaseEvent(QQuickRhiItem* self, QKeyEvent* event);
void QQuickRhiItem_InputMethodEvent(QQuickRhiItem* self, QInputMethodEvent* param1);
void QQuickRhiItem_OnInputMethodEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperInputMethodEvent(QQuickRhiItem* self, QInputMethodEvent* param1);
void QQuickRhiItem_FocusInEvent(QQuickRhiItem* self, QFocusEvent* param1);
void QQuickRhiItem_OnFocusInEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperFocusInEvent(QQuickRhiItem* self, QFocusEvent* param1);
void QQuickRhiItem_FocusOutEvent(QQuickRhiItem* self, QFocusEvent* param1);
void QQuickRhiItem_OnFocusOutEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperFocusOutEvent(QQuickRhiItem* self, QFocusEvent* param1);
void QQuickRhiItem_MousePressEvent(QQuickRhiItem* self, QMouseEvent* event);
void QQuickRhiItem_OnMousePressEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperMousePressEvent(QQuickRhiItem* self, QMouseEvent* event);
void QQuickRhiItem_MouseMoveEvent(QQuickRhiItem* self, QMouseEvent* event);
void QQuickRhiItem_OnMouseMoveEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperMouseMoveEvent(QQuickRhiItem* self, QMouseEvent* event);
void QQuickRhiItem_MouseReleaseEvent(QQuickRhiItem* self, QMouseEvent* event);
void QQuickRhiItem_OnMouseReleaseEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperMouseReleaseEvent(QQuickRhiItem* self, QMouseEvent* event);
void QQuickRhiItem_MouseDoubleClickEvent(QQuickRhiItem* self, QMouseEvent* event);
void QQuickRhiItem_OnMouseDoubleClickEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperMouseDoubleClickEvent(QQuickRhiItem* self, QMouseEvent* event);
void QQuickRhiItem_MouseUngrabEvent(QQuickRhiItem* self);
void QQuickRhiItem_OnMouseUngrabEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperMouseUngrabEvent(QQuickRhiItem* self);
void QQuickRhiItem_TouchUngrabEvent(QQuickRhiItem* self);
void QQuickRhiItem_OnTouchUngrabEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperTouchUngrabEvent(QQuickRhiItem* self);
void QQuickRhiItem_WheelEvent(QQuickRhiItem* self, QWheelEvent* event);
void QQuickRhiItem_OnWheelEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperWheelEvent(QQuickRhiItem* self, QWheelEvent* event);
void QQuickRhiItem_TouchEvent(QQuickRhiItem* self, QTouchEvent* event);
void QQuickRhiItem_OnTouchEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperTouchEvent(QQuickRhiItem* self, QTouchEvent* event);
void QQuickRhiItem_HoverEnterEvent(QQuickRhiItem* self, QHoverEvent* event);
void QQuickRhiItem_OnHoverEnterEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperHoverEnterEvent(QQuickRhiItem* self, QHoverEvent* event);
void QQuickRhiItem_HoverMoveEvent(QQuickRhiItem* self, QHoverEvent* event);
void QQuickRhiItem_OnHoverMoveEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperHoverMoveEvent(QQuickRhiItem* self, QHoverEvent* event);
void QQuickRhiItem_HoverLeaveEvent(QQuickRhiItem* self, QHoverEvent* event);
void QQuickRhiItem_OnHoverLeaveEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperHoverLeaveEvent(QQuickRhiItem* self, QHoverEvent* event);
void QQuickRhiItem_DragEnterEvent(QQuickRhiItem* self, QDragEnterEvent* param1);
void QQuickRhiItem_OnDragEnterEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperDragEnterEvent(QQuickRhiItem* self, QDragEnterEvent* param1);
void QQuickRhiItem_DragMoveEvent(QQuickRhiItem* self, QDragMoveEvent* param1);
void QQuickRhiItem_OnDragMoveEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperDragMoveEvent(QQuickRhiItem* self, QDragMoveEvent* param1);
void QQuickRhiItem_DragLeaveEvent(QQuickRhiItem* self, QDragLeaveEvent* param1);
void QQuickRhiItem_OnDragLeaveEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperDragLeaveEvent(QQuickRhiItem* self, QDragLeaveEvent* param1);
void QQuickRhiItem_DropEvent(QQuickRhiItem* self, QDropEvent* param1);
void QQuickRhiItem_OnDropEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperDropEvent(QQuickRhiItem* self, QDropEvent* param1);
bool QQuickRhiItem_ChildMouseEventFilter(QQuickRhiItem* self, QQuickItem* param1, QEvent* param2);
void QQuickRhiItem_OnChildMouseEventFilter(QQuickRhiItem* self, intptr_t slot);
bool QQuickRhiItem_SuperChildMouseEventFilter(QQuickRhiItem* self, QQuickItem* param1, QEvent* param2);
void QQuickRhiItem_UpdatePolish(QQuickRhiItem* self);
void QQuickRhiItem_OnUpdatePolish(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperUpdatePolish(QQuickRhiItem* self);
bool QQuickRhiItem_EventFilter(QQuickRhiItem* self, QObject* watched, QEvent* event);
void QQuickRhiItem_OnEventFilter(QQuickRhiItem* self, intptr_t slot);
bool QQuickRhiItem_SuperEventFilter(QQuickRhiItem* self, QObject* watched, QEvent* event);
void QQuickRhiItem_TimerEvent(QQuickRhiItem* self, QTimerEvent* event);
void QQuickRhiItem_OnTimerEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperTimerEvent(QQuickRhiItem* self, QTimerEvent* event);
void QQuickRhiItem_ChildEvent(QQuickRhiItem* self, QChildEvent* event);
void QQuickRhiItem_OnChildEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperChildEvent(QQuickRhiItem* self, QChildEvent* event);
void QQuickRhiItem_CustomEvent(QQuickRhiItem* self, QEvent* event);
void QQuickRhiItem_OnCustomEvent(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperCustomEvent(QQuickRhiItem* self, QEvent* event);
void QQuickRhiItem_ConnectNotify(QQuickRhiItem* self, const QMetaMethod* signal);
void QQuickRhiItem_OnConnectNotify(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperConnectNotify(QQuickRhiItem* self, const QMetaMethod* signal);
void QQuickRhiItem_DisconnectNotify(QQuickRhiItem* self, const QMetaMethod* signal);
void QQuickRhiItem_OnDisconnectNotify(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperDisconnectNotify(QQuickRhiItem* self, const QMetaMethod* signal);
bool QQuickRhiItem_IsAutoRenderTargetEnabled(const QQuickRhiItem* self);
void QQuickRhiItem_OnIsAutoRenderTargetEnabled(const QQuickRhiItem* self, intptr_t slot);
bool QQuickRhiItem_SuperIsAutoRenderTargetEnabled(const QQuickRhiItem* self);
void QQuickRhiItem_SetAutoRenderTarget(QQuickRhiItem* self, bool enabled);
void QQuickRhiItem_OnSetAutoRenderTarget(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperSetAutoRenderTarget(QQuickRhiItem* self, bool enabled);
bool QQuickRhiItem_IsComponentComplete(const QQuickRhiItem* self);
void QQuickRhiItem_OnIsComponentComplete(const QQuickRhiItem* self, intptr_t slot);
bool QQuickRhiItem_SuperIsComponentComplete(const QQuickRhiItem* self);
void QQuickRhiItem_UpdateInputMethod(QQuickRhiItem* self);
void QQuickRhiItem_OnUpdateInputMethod(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperUpdateInputMethod(QQuickRhiItem* self);
bool QQuickRhiItem_WidthValid(const QQuickRhiItem* self);
void QQuickRhiItem_OnWidthValid(const QQuickRhiItem* self, intptr_t slot);
bool QQuickRhiItem_SuperWidthValid(const QQuickRhiItem* self);
bool QQuickRhiItem_HeightValid(const QQuickRhiItem* self);
void QQuickRhiItem_OnHeightValid(const QQuickRhiItem* self, intptr_t slot);
bool QQuickRhiItem_SuperHeightValid(const QQuickRhiItem* self);
void QQuickRhiItem_SetImplicitSize(QQuickRhiItem* self, double param1, double param2);
void QQuickRhiItem_OnSetImplicitSize(QQuickRhiItem* self, intptr_t slot);
void QQuickRhiItem_SuperSetImplicitSize(QQuickRhiItem* self, double param1, double param2);
QObject* QQuickRhiItem_Sender(const QQuickRhiItem* self);
void QQuickRhiItem_OnSender(const QQuickRhiItem* self, intptr_t slot);
QObject* QQuickRhiItem_SuperSender(const QQuickRhiItem* self);
int QQuickRhiItem_SenderSignalIndex(const QQuickRhiItem* self);
void QQuickRhiItem_OnSenderSignalIndex(const QQuickRhiItem* self, intptr_t slot);
int QQuickRhiItem_SuperSenderSignalIndex(const QQuickRhiItem* self);
int QQuickRhiItem_Receivers(const QQuickRhiItem* self, const char* signal);
void QQuickRhiItem_OnReceivers(const QQuickRhiItem* self, intptr_t slot);
int QQuickRhiItem_SuperReceivers(const QQuickRhiItem* self, const char* signal);
bool QQuickRhiItem_IsSignalConnected(const QQuickRhiItem* self, const QMetaMethod* signal);
void QQuickRhiItem_OnIsSignalConnected(const QQuickRhiItem* self, intptr_t slot);
bool QQuickRhiItem_SuperIsSignalConnected(const QQuickRhiItem* self, const QMetaMethod* signal);
void QQuickRhiItem_Delete(QQuickRhiItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
