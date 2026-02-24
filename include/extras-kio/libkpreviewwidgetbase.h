#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKPREVIEWWIDGETBASE_H
#define SRC_EXTRAS_KIOC_LIBKPREVIEWWIDGETBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPreviewWidgetBase KPreviewWidgetBase;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KPreviewWidgetBase* KPreviewWidgetBase_new(QWidget* parent);
QMetaObject* KPreviewWidgetBase_MetaObject(const KPreviewWidgetBase* self);
void* KPreviewWidgetBase_Metacast(KPreviewWidgetBase* self, const char* param1);
int KPreviewWidgetBase_Metacall(KPreviewWidgetBase* self, int param1, int param2, void** param3);
libqt_list /* of libqt_string */ KPreviewWidgetBase_SupportedMimeTypes(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_ShowPreview(KPreviewWidgetBase* self, const QUrl* url);
void KPreviewWidgetBase_ClearPreview(KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnMetaObject(const KPreviewWidgetBase* self, intptr_t slot);
QMetaObject* KPreviewWidgetBase_SuperMetaObject(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnMetacast(KPreviewWidgetBase* self, intptr_t slot);
void* KPreviewWidgetBase_SuperMetacast(KPreviewWidgetBase* self, const char* param1);
void KPreviewWidgetBase_OnMetacall(KPreviewWidgetBase* self, intptr_t slot);
int KPreviewWidgetBase_SuperMetacall(KPreviewWidgetBase* self, int param1, int param2, void** param3);
void KPreviewWidgetBase_OnShowPreview(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperShowPreview(KPreviewWidgetBase* self, const QUrl* url);
void KPreviewWidgetBase_OnClearPreview(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperClearPreview(KPreviewWidgetBase* self);
int KPreviewWidgetBase_DevType(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnDevType(const KPreviewWidgetBase* self, intptr_t slot);
int KPreviewWidgetBase_SuperDevType(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_SetVisible(KPreviewWidgetBase* self, bool visible);
void KPreviewWidgetBase_OnSetVisible(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperSetVisible(KPreviewWidgetBase* self, bool visible);
QSize* KPreviewWidgetBase_SizeHint(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnSizeHint(const KPreviewWidgetBase* self, intptr_t slot);
QSize* KPreviewWidgetBase_SuperSizeHint(const KPreviewWidgetBase* self);
QSize* KPreviewWidgetBase_MinimumSizeHint(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnMinimumSizeHint(const KPreviewWidgetBase* self, intptr_t slot);
QSize* KPreviewWidgetBase_SuperMinimumSizeHint(const KPreviewWidgetBase* self);
int KPreviewWidgetBase_HeightForWidth(const KPreviewWidgetBase* self, int param1);
void KPreviewWidgetBase_OnHeightForWidth(const KPreviewWidgetBase* self, intptr_t slot);
int KPreviewWidgetBase_SuperHeightForWidth(const KPreviewWidgetBase* self, int param1);
bool KPreviewWidgetBase_HasHeightForWidth(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnHasHeightForWidth(const KPreviewWidgetBase* self, intptr_t slot);
bool KPreviewWidgetBase_SuperHasHeightForWidth(const KPreviewWidgetBase* self);
QPaintEngine* KPreviewWidgetBase_PaintEngine(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnPaintEngine(const KPreviewWidgetBase* self, intptr_t slot);
QPaintEngine* KPreviewWidgetBase_SuperPaintEngine(const KPreviewWidgetBase* self);
bool KPreviewWidgetBase_Event(KPreviewWidgetBase* self, QEvent* event);
void KPreviewWidgetBase_OnEvent(KPreviewWidgetBase* self, intptr_t slot);
bool KPreviewWidgetBase_SuperEvent(KPreviewWidgetBase* self, QEvent* event);
void KPreviewWidgetBase_MousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event);
void KPreviewWidgetBase_OnMousePressEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperMousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event);
void KPreviewWidgetBase_MouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event);
void KPreviewWidgetBase_OnMouseReleaseEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperMouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event);
void KPreviewWidgetBase_MouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event);
void KPreviewWidgetBase_OnMouseDoubleClickEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperMouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event);
void KPreviewWidgetBase_MouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event);
void KPreviewWidgetBase_OnMouseMoveEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperMouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event);
void KPreviewWidgetBase_WheelEvent(KPreviewWidgetBase* self, QWheelEvent* event);
void KPreviewWidgetBase_OnWheelEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperWheelEvent(KPreviewWidgetBase* self, QWheelEvent* event);
void KPreviewWidgetBase_KeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event);
void KPreviewWidgetBase_OnKeyPressEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperKeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event);
void KPreviewWidgetBase_KeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event);
void KPreviewWidgetBase_OnKeyReleaseEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperKeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event);
void KPreviewWidgetBase_FocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event);
void KPreviewWidgetBase_OnFocusInEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperFocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event);
void KPreviewWidgetBase_FocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event);
void KPreviewWidgetBase_OnFocusOutEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperFocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event);
void KPreviewWidgetBase_EnterEvent(KPreviewWidgetBase* self, QEnterEvent* event);
void KPreviewWidgetBase_OnEnterEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperEnterEvent(KPreviewWidgetBase* self, QEnterEvent* event);
void KPreviewWidgetBase_LeaveEvent(KPreviewWidgetBase* self, QEvent* event);
void KPreviewWidgetBase_OnLeaveEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperLeaveEvent(KPreviewWidgetBase* self, QEvent* event);
void KPreviewWidgetBase_PaintEvent(KPreviewWidgetBase* self, QPaintEvent* event);
void KPreviewWidgetBase_OnPaintEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperPaintEvent(KPreviewWidgetBase* self, QPaintEvent* event);
void KPreviewWidgetBase_MoveEvent(KPreviewWidgetBase* self, QMoveEvent* event);
void KPreviewWidgetBase_OnMoveEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperMoveEvent(KPreviewWidgetBase* self, QMoveEvent* event);
void KPreviewWidgetBase_ResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event);
void KPreviewWidgetBase_OnResizeEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event);
void KPreviewWidgetBase_CloseEvent(KPreviewWidgetBase* self, QCloseEvent* event);
void KPreviewWidgetBase_OnCloseEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperCloseEvent(KPreviewWidgetBase* self, QCloseEvent* event);
void KPreviewWidgetBase_ContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event);
void KPreviewWidgetBase_OnContextMenuEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event);
void KPreviewWidgetBase_TabletEvent(KPreviewWidgetBase* self, QTabletEvent* event);
void KPreviewWidgetBase_OnTabletEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperTabletEvent(KPreviewWidgetBase* self, QTabletEvent* event);
void KPreviewWidgetBase_ActionEvent(KPreviewWidgetBase* self, QActionEvent* event);
void KPreviewWidgetBase_OnActionEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperActionEvent(KPreviewWidgetBase* self, QActionEvent* event);
void KPreviewWidgetBase_DragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event);
void KPreviewWidgetBase_OnDragEnterEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperDragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event);
void KPreviewWidgetBase_DragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event);
void KPreviewWidgetBase_OnDragMoveEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperDragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event);
void KPreviewWidgetBase_DragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event);
void KPreviewWidgetBase_OnDragLeaveEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperDragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event);
void KPreviewWidgetBase_DropEvent(KPreviewWidgetBase* self, QDropEvent* event);
void KPreviewWidgetBase_OnDropEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperDropEvent(KPreviewWidgetBase* self, QDropEvent* event);
void KPreviewWidgetBase_ShowEvent(KPreviewWidgetBase* self, QShowEvent* event);
void KPreviewWidgetBase_OnShowEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperShowEvent(KPreviewWidgetBase* self, QShowEvent* event);
void KPreviewWidgetBase_HideEvent(KPreviewWidgetBase* self, QHideEvent* event);
void KPreviewWidgetBase_OnHideEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperHideEvent(KPreviewWidgetBase* self, QHideEvent* event);
bool KPreviewWidgetBase_NativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result);
void KPreviewWidgetBase_OnNativeEvent(KPreviewWidgetBase* self, intptr_t slot);
bool KPreviewWidgetBase_SuperNativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result);
void KPreviewWidgetBase_ChangeEvent(KPreviewWidgetBase* self, QEvent* param1);
void KPreviewWidgetBase_OnChangeEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperChangeEvent(KPreviewWidgetBase* self, QEvent* param1);
int KPreviewWidgetBase_Metric(const KPreviewWidgetBase* self, int param1);
void KPreviewWidgetBase_OnMetric(const KPreviewWidgetBase* self, intptr_t slot);
int KPreviewWidgetBase_SuperMetric(const KPreviewWidgetBase* self, int param1);
void KPreviewWidgetBase_InitPainter(const KPreviewWidgetBase* self, QPainter* painter);
void KPreviewWidgetBase_OnInitPainter(const KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperInitPainter(const KPreviewWidgetBase* self, QPainter* painter);
QPaintDevice* KPreviewWidgetBase_Redirected(const KPreviewWidgetBase* self, QPoint* offset);
void KPreviewWidgetBase_OnRedirected(const KPreviewWidgetBase* self, intptr_t slot);
QPaintDevice* KPreviewWidgetBase_SuperRedirected(const KPreviewWidgetBase* self, QPoint* offset);
QPainter* KPreviewWidgetBase_SharedPainter(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnSharedPainter(const KPreviewWidgetBase* self, intptr_t slot);
QPainter* KPreviewWidgetBase_SuperSharedPainter(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_InputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1);
void KPreviewWidgetBase_OnInputMethodEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperInputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1);
QVariant* KPreviewWidgetBase_InputMethodQuery(const KPreviewWidgetBase* self, int param1);
void KPreviewWidgetBase_OnInputMethodQuery(const KPreviewWidgetBase* self, intptr_t slot);
QVariant* KPreviewWidgetBase_SuperInputMethodQuery(const KPreviewWidgetBase* self, int param1);
bool KPreviewWidgetBase_FocusNextPrevChild(KPreviewWidgetBase* self, bool next);
void KPreviewWidgetBase_OnFocusNextPrevChild(KPreviewWidgetBase* self, intptr_t slot);
bool KPreviewWidgetBase_SuperFocusNextPrevChild(KPreviewWidgetBase* self, bool next);
bool KPreviewWidgetBase_EventFilter(KPreviewWidgetBase* self, QObject* watched, QEvent* event);
void KPreviewWidgetBase_OnEventFilter(KPreviewWidgetBase* self, intptr_t slot);
bool KPreviewWidgetBase_SuperEventFilter(KPreviewWidgetBase* self, QObject* watched, QEvent* event);
void KPreviewWidgetBase_TimerEvent(KPreviewWidgetBase* self, QTimerEvent* event);
void KPreviewWidgetBase_OnTimerEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperTimerEvent(KPreviewWidgetBase* self, QTimerEvent* event);
void KPreviewWidgetBase_ChildEvent(KPreviewWidgetBase* self, QChildEvent* event);
void KPreviewWidgetBase_OnChildEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperChildEvent(KPreviewWidgetBase* self, QChildEvent* event);
void KPreviewWidgetBase_CustomEvent(KPreviewWidgetBase* self, QEvent* event);
void KPreviewWidgetBase_OnCustomEvent(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperCustomEvent(KPreviewWidgetBase* self, QEvent* event);
void KPreviewWidgetBase_ConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
void KPreviewWidgetBase_OnConnectNotify(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
void KPreviewWidgetBase_DisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
void KPreviewWidgetBase_OnDisconnectNotify(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperDisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
void KPreviewWidgetBase_SetSupportedMimeTypes(KPreviewWidgetBase* self, const libqt_list /* of libqt_string */ mimeTypes);
void KPreviewWidgetBase_OnSetSupportedMimeTypes(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperSetSupportedMimeTypes(KPreviewWidgetBase* self, const libqt_list /* of libqt_string */ mimeTypes);
void KPreviewWidgetBase_UpdateMicroFocus(KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnUpdateMicroFocus(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperUpdateMicroFocus(KPreviewWidgetBase* self);
void KPreviewWidgetBase_Create(KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnCreate(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperCreate(KPreviewWidgetBase* self);
void KPreviewWidgetBase_Destroy(KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnDestroy(KPreviewWidgetBase* self, intptr_t slot);
void KPreviewWidgetBase_SuperDestroy(KPreviewWidgetBase* self);
bool KPreviewWidgetBase_FocusNextChild(KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnFocusNextChild(KPreviewWidgetBase* self, intptr_t slot);
bool KPreviewWidgetBase_SuperFocusNextChild(KPreviewWidgetBase* self);
bool KPreviewWidgetBase_FocusPreviousChild(KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnFocusPreviousChild(KPreviewWidgetBase* self, intptr_t slot);
bool KPreviewWidgetBase_SuperFocusPreviousChild(KPreviewWidgetBase* self);
QObject* KPreviewWidgetBase_Sender(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnSender(const KPreviewWidgetBase* self, intptr_t slot);
QObject* KPreviewWidgetBase_SuperSender(const KPreviewWidgetBase* self);
int KPreviewWidgetBase_SenderSignalIndex(const KPreviewWidgetBase* self);
void KPreviewWidgetBase_OnSenderSignalIndex(const KPreviewWidgetBase* self, intptr_t slot);
int KPreviewWidgetBase_SuperSenderSignalIndex(const KPreviewWidgetBase* self);
int KPreviewWidgetBase_Receivers(const KPreviewWidgetBase* self, const char* signal);
void KPreviewWidgetBase_OnReceivers(const KPreviewWidgetBase* self, intptr_t slot);
int KPreviewWidgetBase_SuperReceivers(const KPreviewWidgetBase* self, const char* signal);
bool KPreviewWidgetBase_IsSignalConnected(const KPreviewWidgetBase* self, const QMetaMethod* signal);
void KPreviewWidgetBase_OnIsSignalConnected(const KPreviewWidgetBase* self, intptr_t slot);
bool KPreviewWidgetBase_SuperIsSignalConnected(const KPreviewWidgetBase* self, const QMetaMethod* signal);
double KPreviewWidgetBase_GetDecodedMetricF(const KPreviewWidgetBase* self, int metricA, int metricB);
void KPreviewWidgetBase_OnGetDecodedMetricF(const KPreviewWidgetBase* self, intptr_t slot);
double KPreviewWidgetBase_SuperGetDecodedMetricF(const KPreviewWidgetBase* self, int metricA, int metricB);
void KPreviewWidgetBase_Delete(KPreviewWidgetBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
