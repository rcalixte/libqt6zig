#pragma once
#ifndef SRC_PDFC_LIBQPDFPAGESELECTOR_H
#define SRC_PDFC_LIBQPDFPAGESELECTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
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
typedef struct QPdfDocument QPdfDocument;
typedef struct QPdfPageSelector QPdfPageSelector;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QPdfPageSelector* QPdfPageSelector_new(QWidget* parent);
QPdfPageSelector* QPdfPageSelector_new2();
QMetaObject* QPdfPageSelector_MetaObject(const QPdfPageSelector* self);
void* QPdfPageSelector_Metacast(QPdfPageSelector* self, const char* param1);
int QPdfPageSelector_Metacall(QPdfPageSelector* self, int param1, int param2, void** param3);
void QPdfPageSelector_SetDocument(QPdfPageSelector* self, QPdfDocument* document);
QPdfDocument* QPdfPageSelector_Document(const QPdfPageSelector* self);
int QPdfPageSelector_CurrentPage(const QPdfPageSelector* self);
libqt_string QPdfPageSelector_CurrentPageLabel(const QPdfPageSelector* self);
void QPdfPageSelector_SetCurrentPage(QPdfPageSelector* self, int index);
void QPdfPageSelector_DocumentChanged(QPdfPageSelector* self, QPdfDocument* document);
void QPdfPageSelector_Connect_DocumentChanged(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_CurrentPageChanged(QPdfPageSelector* self, int index);
void QPdfPageSelector_Connect_CurrentPageChanged(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_CurrentPageLabelChanged(QPdfPageSelector* self, const libqt_string label);
void QPdfPageSelector_Connect_CurrentPageLabelChanged(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_OnMetaObject(const QPdfPageSelector* self, intptr_t slot);
QMetaObject* QPdfPageSelector_SuperMetaObject(const QPdfPageSelector* self);
void QPdfPageSelector_OnMetacast(QPdfPageSelector* self, intptr_t slot);
void* QPdfPageSelector_SuperMetacast(QPdfPageSelector* self, const char* param1);
void QPdfPageSelector_OnMetacall(QPdfPageSelector* self, intptr_t slot);
int QPdfPageSelector_SuperMetacall(QPdfPageSelector* self, int param1, int param2, void** param3);
int QPdfPageSelector_DevType(const QPdfPageSelector* self);
void QPdfPageSelector_OnDevType(const QPdfPageSelector* self, intptr_t slot);
int QPdfPageSelector_SuperDevType(const QPdfPageSelector* self);
void QPdfPageSelector_SetVisible(QPdfPageSelector* self, bool visible);
void QPdfPageSelector_OnSetVisible(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperSetVisible(QPdfPageSelector* self, bool visible);
QSize* QPdfPageSelector_SizeHint(const QPdfPageSelector* self);
void QPdfPageSelector_OnSizeHint(const QPdfPageSelector* self, intptr_t slot);
QSize* QPdfPageSelector_SuperSizeHint(const QPdfPageSelector* self);
QSize* QPdfPageSelector_MinimumSizeHint(const QPdfPageSelector* self);
void QPdfPageSelector_OnMinimumSizeHint(const QPdfPageSelector* self, intptr_t slot);
QSize* QPdfPageSelector_SuperMinimumSizeHint(const QPdfPageSelector* self);
int QPdfPageSelector_HeightForWidth(const QPdfPageSelector* self, int param1);
void QPdfPageSelector_OnHeightForWidth(const QPdfPageSelector* self, intptr_t slot);
int QPdfPageSelector_SuperHeightForWidth(const QPdfPageSelector* self, int param1);
bool QPdfPageSelector_HasHeightForWidth(const QPdfPageSelector* self);
void QPdfPageSelector_OnHasHeightForWidth(const QPdfPageSelector* self, intptr_t slot);
bool QPdfPageSelector_SuperHasHeightForWidth(const QPdfPageSelector* self);
QPaintEngine* QPdfPageSelector_PaintEngine(const QPdfPageSelector* self);
void QPdfPageSelector_OnPaintEngine(const QPdfPageSelector* self, intptr_t slot);
QPaintEngine* QPdfPageSelector_SuperPaintEngine(const QPdfPageSelector* self);
bool QPdfPageSelector_Event(QPdfPageSelector* self, QEvent* event);
void QPdfPageSelector_OnEvent(QPdfPageSelector* self, intptr_t slot);
bool QPdfPageSelector_SuperEvent(QPdfPageSelector* self, QEvent* event);
void QPdfPageSelector_MousePressEvent(QPdfPageSelector* self, QMouseEvent* event);
void QPdfPageSelector_OnMousePressEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperMousePressEvent(QPdfPageSelector* self, QMouseEvent* event);
void QPdfPageSelector_MouseReleaseEvent(QPdfPageSelector* self, QMouseEvent* event);
void QPdfPageSelector_OnMouseReleaseEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperMouseReleaseEvent(QPdfPageSelector* self, QMouseEvent* event);
void QPdfPageSelector_MouseDoubleClickEvent(QPdfPageSelector* self, QMouseEvent* event);
void QPdfPageSelector_OnMouseDoubleClickEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperMouseDoubleClickEvent(QPdfPageSelector* self, QMouseEvent* event);
void QPdfPageSelector_MouseMoveEvent(QPdfPageSelector* self, QMouseEvent* event);
void QPdfPageSelector_OnMouseMoveEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperMouseMoveEvent(QPdfPageSelector* self, QMouseEvent* event);
void QPdfPageSelector_WheelEvent(QPdfPageSelector* self, QWheelEvent* event);
void QPdfPageSelector_OnWheelEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperWheelEvent(QPdfPageSelector* self, QWheelEvent* event);
void QPdfPageSelector_KeyPressEvent(QPdfPageSelector* self, QKeyEvent* event);
void QPdfPageSelector_OnKeyPressEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperKeyPressEvent(QPdfPageSelector* self, QKeyEvent* event);
void QPdfPageSelector_KeyReleaseEvent(QPdfPageSelector* self, QKeyEvent* event);
void QPdfPageSelector_OnKeyReleaseEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperKeyReleaseEvent(QPdfPageSelector* self, QKeyEvent* event);
void QPdfPageSelector_FocusInEvent(QPdfPageSelector* self, QFocusEvent* event);
void QPdfPageSelector_OnFocusInEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperFocusInEvent(QPdfPageSelector* self, QFocusEvent* event);
void QPdfPageSelector_FocusOutEvent(QPdfPageSelector* self, QFocusEvent* event);
void QPdfPageSelector_OnFocusOutEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperFocusOutEvent(QPdfPageSelector* self, QFocusEvent* event);
void QPdfPageSelector_EnterEvent(QPdfPageSelector* self, QEnterEvent* event);
void QPdfPageSelector_OnEnterEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperEnterEvent(QPdfPageSelector* self, QEnterEvent* event);
void QPdfPageSelector_LeaveEvent(QPdfPageSelector* self, QEvent* event);
void QPdfPageSelector_OnLeaveEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperLeaveEvent(QPdfPageSelector* self, QEvent* event);
void QPdfPageSelector_PaintEvent(QPdfPageSelector* self, QPaintEvent* event);
void QPdfPageSelector_OnPaintEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperPaintEvent(QPdfPageSelector* self, QPaintEvent* event);
void QPdfPageSelector_MoveEvent(QPdfPageSelector* self, QMoveEvent* event);
void QPdfPageSelector_OnMoveEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperMoveEvent(QPdfPageSelector* self, QMoveEvent* event);
void QPdfPageSelector_ResizeEvent(QPdfPageSelector* self, QResizeEvent* event);
void QPdfPageSelector_OnResizeEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperResizeEvent(QPdfPageSelector* self, QResizeEvent* event);
void QPdfPageSelector_CloseEvent(QPdfPageSelector* self, QCloseEvent* event);
void QPdfPageSelector_OnCloseEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperCloseEvent(QPdfPageSelector* self, QCloseEvent* event);
void QPdfPageSelector_ContextMenuEvent(QPdfPageSelector* self, QContextMenuEvent* event);
void QPdfPageSelector_OnContextMenuEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperContextMenuEvent(QPdfPageSelector* self, QContextMenuEvent* event);
void QPdfPageSelector_TabletEvent(QPdfPageSelector* self, QTabletEvent* event);
void QPdfPageSelector_OnTabletEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperTabletEvent(QPdfPageSelector* self, QTabletEvent* event);
void QPdfPageSelector_ActionEvent(QPdfPageSelector* self, QActionEvent* event);
void QPdfPageSelector_OnActionEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperActionEvent(QPdfPageSelector* self, QActionEvent* event);
void QPdfPageSelector_DragEnterEvent(QPdfPageSelector* self, QDragEnterEvent* event);
void QPdfPageSelector_OnDragEnterEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperDragEnterEvent(QPdfPageSelector* self, QDragEnterEvent* event);
void QPdfPageSelector_DragMoveEvent(QPdfPageSelector* self, QDragMoveEvent* event);
void QPdfPageSelector_OnDragMoveEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperDragMoveEvent(QPdfPageSelector* self, QDragMoveEvent* event);
void QPdfPageSelector_DragLeaveEvent(QPdfPageSelector* self, QDragLeaveEvent* event);
void QPdfPageSelector_OnDragLeaveEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperDragLeaveEvent(QPdfPageSelector* self, QDragLeaveEvent* event);
void QPdfPageSelector_DropEvent(QPdfPageSelector* self, QDropEvent* event);
void QPdfPageSelector_OnDropEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperDropEvent(QPdfPageSelector* self, QDropEvent* event);
void QPdfPageSelector_ShowEvent(QPdfPageSelector* self, QShowEvent* event);
void QPdfPageSelector_OnShowEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperShowEvent(QPdfPageSelector* self, QShowEvent* event);
void QPdfPageSelector_HideEvent(QPdfPageSelector* self, QHideEvent* event);
void QPdfPageSelector_OnHideEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperHideEvent(QPdfPageSelector* self, QHideEvent* event);
bool QPdfPageSelector_NativeEvent(QPdfPageSelector* self, const libqt_string eventType, void* message, intptr_t* result);
void QPdfPageSelector_OnNativeEvent(QPdfPageSelector* self, intptr_t slot);
bool QPdfPageSelector_SuperNativeEvent(QPdfPageSelector* self, const libqt_string eventType, void* message, intptr_t* result);
void QPdfPageSelector_ChangeEvent(QPdfPageSelector* self, QEvent* param1);
void QPdfPageSelector_OnChangeEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperChangeEvent(QPdfPageSelector* self, QEvent* param1);
int QPdfPageSelector_Metric(const QPdfPageSelector* self, int param1);
void QPdfPageSelector_OnMetric(const QPdfPageSelector* self, intptr_t slot);
int QPdfPageSelector_SuperMetric(const QPdfPageSelector* self, int param1);
void QPdfPageSelector_InitPainter(const QPdfPageSelector* self, QPainter* painter);
void QPdfPageSelector_OnInitPainter(const QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperInitPainter(const QPdfPageSelector* self, QPainter* painter);
QPaintDevice* QPdfPageSelector_Redirected(const QPdfPageSelector* self, QPoint* offset);
void QPdfPageSelector_OnRedirected(const QPdfPageSelector* self, intptr_t slot);
QPaintDevice* QPdfPageSelector_SuperRedirected(const QPdfPageSelector* self, QPoint* offset);
QPainter* QPdfPageSelector_SharedPainter(const QPdfPageSelector* self);
void QPdfPageSelector_OnSharedPainter(const QPdfPageSelector* self, intptr_t slot);
QPainter* QPdfPageSelector_SuperSharedPainter(const QPdfPageSelector* self);
void QPdfPageSelector_InputMethodEvent(QPdfPageSelector* self, QInputMethodEvent* param1);
void QPdfPageSelector_OnInputMethodEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperInputMethodEvent(QPdfPageSelector* self, QInputMethodEvent* param1);
QVariant* QPdfPageSelector_InputMethodQuery(const QPdfPageSelector* self, int param1);
void QPdfPageSelector_OnInputMethodQuery(const QPdfPageSelector* self, intptr_t slot);
QVariant* QPdfPageSelector_SuperInputMethodQuery(const QPdfPageSelector* self, int param1);
bool QPdfPageSelector_FocusNextPrevChild(QPdfPageSelector* self, bool next);
void QPdfPageSelector_OnFocusNextPrevChild(QPdfPageSelector* self, intptr_t slot);
bool QPdfPageSelector_SuperFocusNextPrevChild(QPdfPageSelector* self, bool next);
bool QPdfPageSelector_EventFilter(QPdfPageSelector* self, QObject* watched, QEvent* event);
void QPdfPageSelector_OnEventFilter(QPdfPageSelector* self, intptr_t slot);
bool QPdfPageSelector_SuperEventFilter(QPdfPageSelector* self, QObject* watched, QEvent* event);
void QPdfPageSelector_TimerEvent(QPdfPageSelector* self, QTimerEvent* event);
void QPdfPageSelector_OnTimerEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperTimerEvent(QPdfPageSelector* self, QTimerEvent* event);
void QPdfPageSelector_ChildEvent(QPdfPageSelector* self, QChildEvent* event);
void QPdfPageSelector_OnChildEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperChildEvent(QPdfPageSelector* self, QChildEvent* event);
void QPdfPageSelector_CustomEvent(QPdfPageSelector* self, QEvent* event);
void QPdfPageSelector_OnCustomEvent(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperCustomEvent(QPdfPageSelector* self, QEvent* event);
void QPdfPageSelector_ConnectNotify(QPdfPageSelector* self, const QMetaMethod* signal);
void QPdfPageSelector_OnConnectNotify(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperConnectNotify(QPdfPageSelector* self, const QMetaMethod* signal);
void QPdfPageSelector_DisconnectNotify(QPdfPageSelector* self, const QMetaMethod* signal);
void QPdfPageSelector_OnDisconnectNotify(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperDisconnectNotify(QPdfPageSelector* self, const QMetaMethod* signal);
void QPdfPageSelector_UpdateMicroFocus(QPdfPageSelector* self);
void QPdfPageSelector_OnUpdateMicroFocus(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperUpdateMicroFocus(QPdfPageSelector* self);
void QPdfPageSelector_Create(QPdfPageSelector* self);
void QPdfPageSelector_OnCreate(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperCreate(QPdfPageSelector* self);
void QPdfPageSelector_Destroy(QPdfPageSelector* self);
void QPdfPageSelector_OnDestroy(QPdfPageSelector* self, intptr_t slot);
void QPdfPageSelector_SuperDestroy(QPdfPageSelector* self);
bool QPdfPageSelector_FocusNextChild(QPdfPageSelector* self);
void QPdfPageSelector_OnFocusNextChild(QPdfPageSelector* self, intptr_t slot);
bool QPdfPageSelector_SuperFocusNextChild(QPdfPageSelector* self);
bool QPdfPageSelector_FocusPreviousChild(QPdfPageSelector* self);
void QPdfPageSelector_OnFocusPreviousChild(QPdfPageSelector* self, intptr_t slot);
bool QPdfPageSelector_SuperFocusPreviousChild(QPdfPageSelector* self);
QObject* QPdfPageSelector_Sender(const QPdfPageSelector* self);
void QPdfPageSelector_OnSender(const QPdfPageSelector* self, intptr_t slot);
QObject* QPdfPageSelector_SuperSender(const QPdfPageSelector* self);
int QPdfPageSelector_SenderSignalIndex(const QPdfPageSelector* self);
void QPdfPageSelector_OnSenderSignalIndex(const QPdfPageSelector* self, intptr_t slot);
int QPdfPageSelector_SuperSenderSignalIndex(const QPdfPageSelector* self);
int QPdfPageSelector_Receivers(const QPdfPageSelector* self, const char* signal);
void QPdfPageSelector_OnReceivers(const QPdfPageSelector* self, intptr_t slot);
int QPdfPageSelector_SuperReceivers(const QPdfPageSelector* self, const char* signal);
bool QPdfPageSelector_IsSignalConnected(const QPdfPageSelector* self, const QMetaMethod* signal);
void QPdfPageSelector_OnIsSignalConnected(const QPdfPageSelector* self, intptr_t slot);
bool QPdfPageSelector_SuperIsSignalConnected(const QPdfPageSelector* self, const QMetaMethod* signal);
double QPdfPageSelector_GetDecodedMetricF(const QPdfPageSelector* self, int metricA, int metricB);
void QPdfPageSelector_OnGetDecodedMetricF(const QPdfPageSelector* self, intptr_t slot);
double QPdfPageSelector_SuperGetDecodedMetricF(const QPdfPageSelector* self, int metricA, int metricB);
void QPdfPageSelector_Delete(QPdfPageSelector* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
