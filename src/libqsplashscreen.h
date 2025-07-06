#pragma once
#ifndef SRCC_LIBQSPLASHSCREEN_H
#define SRCC_LIBQSPLASHSCREEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
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
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSplashScreen QSplashScreen;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSplashScreen* QSplashScreen_new();
QSplashScreen* QSplashScreen_new2(QScreen* screen);
QSplashScreen* QSplashScreen_new3(const QPixmap* pixmap);
QSplashScreen* QSplashScreen_new4(const QPixmap* pixmap, int f);
QSplashScreen* QSplashScreen_new5(QScreen* screen, const QPixmap* pixmap);
QSplashScreen* QSplashScreen_new6(QScreen* screen, const QPixmap* pixmap, int f);
QMetaObject* QSplashScreen_MetaObject(const QSplashScreen* self);
void* QSplashScreen_Metacast(QSplashScreen* self, const char* param1);
int QSplashScreen_Metacall(QSplashScreen* self, int param1, int param2, void** param3);
void QSplashScreen_OnMetacall(QSplashScreen* self, intptr_t slot);
int QSplashScreen_QBaseMetacall(QSplashScreen* self, int param1, int param2, void** param3);
libqt_string QSplashScreen_Tr(const char* s);
void QSplashScreen_SetPixmap(QSplashScreen* self, const QPixmap* pixmap);
QPixmap* QSplashScreen_Pixmap(const QSplashScreen* self);
void QSplashScreen_Finish(QSplashScreen* self, QWidget* w);
void QSplashScreen_Repaint(QSplashScreen* self);
libqt_string QSplashScreen_Message(const QSplashScreen* self);
void QSplashScreen_ShowMessage(QSplashScreen* self, const libqt_string message);
void QSplashScreen_ClearMessage(QSplashScreen* self);
void QSplashScreen_MessageChanged(QSplashScreen* self, const libqt_string message);
void QSplashScreen_Connect_MessageChanged(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_Event(QSplashScreen* self, QEvent* e);
void QSplashScreen_OnEvent(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_QBaseEvent(QSplashScreen* self, QEvent* e);
void QSplashScreen_DrawContents(QSplashScreen* self, QPainter* painter);
void QSplashScreen_OnDrawContents(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseDrawContents(QSplashScreen* self, QPainter* painter);
void QSplashScreen_MousePressEvent(QSplashScreen* self, QMouseEvent* param1);
void QSplashScreen_OnMousePressEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseMousePressEvent(QSplashScreen* self, QMouseEvent* param1);
libqt_string QSplashScreen_Tr2(const char* s, const char* c);
libqt_string QSplashScreen_Tr3(const char* s, const char* c, int n);
void QSplashScreen_ShowMessage2(QSplashScreen* self, const libqt_string message, int alignment);
void QSplashScreen_ShowMessage3(QSplashScreen* self, const libqt_string message, int alignment, const QColor* color);
int QSplashScreen_DevType(const QSplashScreen* self);
void QSplashScreen_OnDevType(const QSplashScreen* self, intptr_t slot);
int QSplashScreen_QBaseDevType(const QSplashScreen* self);
void QSplashScreen_SetVisible(QSplashScreen* self, bool visible);
void QSplashScreen_OnSetVisible(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseSetVisible(QSplashScreen* self, bool visible);
QSize* QSplashScreen_SizeHint(const QSplashScreen* self);
void QSplashScreen_OnSizeHint(const QSplashScreen* self, intptr_t slot);
QSize* QSplashScreen_QBaseSizeHint(const QSplashScreen* self);
QSize* QSplashScreen_MinimumSizeHint(const QSplashScreen* self);
void QSplashScreen_OnMinimumSizeHint(const QSplashScreen* self, intptr_t slot);
QSize* QSplashScreen_QBaseMinimumSizeHint(const QSplashScreen* self);
int QSplashScreen_HeightForWidth(const QSplashScreen* self, int param1);
void QSplashScreen_OnHeightForWidth(const QSplashScreen* self, intptr_t slot);
int QSplashScreen_QBaseHeightForWidth(const QSplashScreen* self, int param1);
bool QSplashScreen_HasHeightForWidth(const QSplashScreen* self);
void QSplashScreen_OnHasHeightForWidth(const QSplashScreen* self, intptr_t slot);
bool QSplashScreen_QBaseHasHeightForWidth(const QSplashScreen* self);
QPaintEngine* QSplashScreen_PaintEngine(const QSplashScreen* self);
void QSplashScreen_OnPaintEngine(const QSplashScreen* self, intptr_t slot);
QPaintEngine* QSplashScreen_QBasePaintEngine(const QSplashScreen* self);
void QSplashScreen_MouseReleaseEvent(QSplashScreen* self, QMouseEvent* event);
void QSplashScreen_OnMouseReleaseEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseMouseReleaseEvent(QSplashScreen* self, QMouseEvent* event);
void QSplashScreen_MouseDoubleClickEvent(QSplashScreen* self, QMouseEvent* event);
void QSplashScreen_OnMouseDoubleClickEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseMouseDoubleClickEvent(QSplashScreen* self, QMouseEvent* event);
void QSplashScreen_MouseMoveEvent(QSplashScreen* self, QMouseEvent* event);
void QSplashScreen_OnMouseMoveEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseMouseMoveEvent(QSplashScreen* self, QMouseEvent* event);
void QSplashScreen_WheelEvent(QSplashScreen* self, QWheelEvent* event);
void QSplashScreen_OnWheelEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseWheelEvent(QSplashScreen* self, QWheelEvent* event);
void QSplashScreen_KeyPressEvent(QSplashScreen* self, QKeyEvent* event);
void QSplashScreen_OnKeyPressEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseKeyPressEvent(QSplashScreen* self, QKeyEvent* event);
void QSplashScreen_KeyReleaseEvent(QSplashScreen* self, QKeyEvent* event);
void QSplashScreen_OnKeyReleaseEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseKeyReleaseEvent(QSplashScreen* self, QKeyEvent* event);
void QSplashScreen_FocusInEvent(QSplashScreen* self, QFocusEvent* event);
void QSplashScreen_OnFocusInEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseFocusInEvent(QSplashScreen* self, QFocusEvent* event);
void QSplashScreen_FocusOutEvent(QSplashScreen* self, QFocusEvent* event);
void QSplashScreen_OnFocusOutEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseFocusOutEvent(QSplashScreen* self, QFocusEvent* event);
void QSplashScreen_EnterEvent(QSplashScreen* self, QEnterEvent* event);
void QSplashScreen_OnEnterEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseEnterEvent(QSplashScreen* self, QEnterEvent* event);
void QSplashScreen_LeaveEvent(QSplashScreen* self, QEvent* event);
void QSplashScreen_OnLeaveEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseLeaveEvent(QSplashScreen* self, QEvent* event);
void QSplashScreen_PaintEvent(QSplashScreen* self, QPaintEvent* event);
void QSplashScreen_OnPaintEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBasePaintEvent(QSplashScreen* self, QPaintEvent* event);
void QSplashScreen_MoveEvent(QSplashScreen* self, QMoveEvent* event);
void QSplashScreen_OnMoveEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseMoveEvent(QSplashScreen* self, QMoveEvent* event);
void QSplashScreen_ResizeEvent(QSplashScreen* self, QResizeEvent* event);
void QSplashScreen_OnResizeEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseResizeEvent(QSplashScreen* self, QResizeEvent* event);
void QSplashScreen_CloseEvent(QSplashScreen* self, QCloseEvent* event);
void QSplashScreen_OnCloseEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseCloseEvent(QSplashScreen* self, QCloseEvent* event);
void QSplashScreen_ContextMenuEvent(QSplashScreen* self, QContextMenuEvent* event);
void QSplashScreen_OnContextMenuEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseContextMenuEvent(QSplashScreen* self, QContextMenuEvent* event);
void QSplashScreen_TabletEvent(QSplashScreen* self, QTabletEvent* event);
void QSplashScreen_OnTabletEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseTabletEvent(QSplashScreen* self, QTabletEvent* event);
void QSplashScreen_ActionEvent(QSplashScreen* self, QActionEvent* event);
void QSplashScreen_OnActionEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseActionEvent(QSplashScreen* self, QActionEvent* event);
void QSplashScreen_DragEnterEvent(QSplashScreen* self, QDragEnterEvent* event);
void QSplashScreen_OnDragEnterEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseDragEnterEvent(QSplashScreen* self, QDragEnterEvent* event);
void QSplashScreen_DragMoveEvent(QSplashScreen* self, QDragMoveEvent* event);
void QSplashScreen_OnDragMoveEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseDragMoveEvent(QSplashScreen* self, QDragMoveEvent* event);
void QSplashScreen_DragLeaveEvent(QSplashScreen* self, QDragLeaveEvent* event);
void QSplashScreen_OnDragLeaveEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseDragLeaveEvent(QSplashScreen* self, QDragLeaveEvent* event);
void QSplashScreen_DropEvent(QSplashScreen* self, QDropEvent* event);
void QSplashScreen_OnDropEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseDropEvent(QSplashScreen* self, QDropEvent* event);
void QSplashScreen_ShowEvent(QSplashScreen* self, QShowEvent* event);
void QSplashScreen_OnShowEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseShowEvent(QSplashScreen* self, QShowEvent* event);
void QSplashScreen_HideEvent(QSplashScreen* self, QHideEvent* event);
void QSplashScreen_OnHideEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseHideEvent(QSplashScreen* self, QHideEvent* event);
bool QSplashScreen_NativeEvent(QSplashScreen* self, const libqt_string eventType, void* message, intptr_t* result);
void QSplashScreen_OnNativeEvent(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_QBaseNativeEvent(QSplashScreen* self, const libqt_string eventType, void* message, intptr_t* result);
void QSplashScreen_ChangeEvent(QSplashScreen* self, QEvent* param1);
void QSplashScreen_OnChangeEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseChangeEvent(QSplashScreen* self, QEvent* param1);
int QSplashScreen_Metric(const QSplashScreen* self, int param1);
void QSplashScreen_OnMetric(const QSplashScreen* self, intptr_t slot);
int QSplashScreen_QBaseMetric(const QSplashScreen* self, int param1);
void QSplashScreen_InitPainter(const QSplashScreen* self, QPainter* painter);
void QSplashScreen_OnInitPainter(const QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseInitPainter(const QSplashScreen* self, QPainter* painter);
QPaintDevice* QSplashScreen_Redirected(const QSplashScreen* self, QPoint* offset);
void QSplashScreen_OnRedirected(const QSplashScreen* self, intptr_t slot);
QPaintDevice* QSplashScreen_QBaseRedirected(const QSplashScreen* self, QPoint* offset);
QPainter* QSplashScreen_SharedPainter(const QSplashScreen* self);
void QSplashScreen_OnSharedPainter(const QSplashScreen* self, intptr_t slot);
QPainter* QSplashScreen_QBaseSharedPainter(const QSplashScreen* self);
void QSplashScreen_InputMethodEvent(QSplashScreen* self, QInputMethodEvent* param1);
void QSplashScreen_OnInputMethodEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseInputMethodEvent(QSplashScreen* self, QInputMethodEvent* param1);
QVariant* QSplashScreen_InputMethodQuery(const QSplashScreen* self, int param1);
void QSplashScreen_OnInputMethodQuery(const QSplashScreen* self, intptr_t slot);
QVariant* QSplashScreen_QBaseInputMethodQuery(const QSplashScreen* self, int param1);
bool QSplashScreen_FocusNextPrevChild(QSplashScreen* self, bool next);
void QSplashScreen_OnFocusNextPrevChild(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_QBaseFocusNextPrevChild(QSplashScreen* self, bool next);
bool QSplashScreen_EventFilter(QSplashScreen* self, QObject* watched, QEvent* event);
void QSplashScreen_OnEventFilter(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_QBaseEventFilter(QSplashScreen* self, QObject* watched, QEvent* event);
void QSplashScreen_TimerEvent(QSplashScreen* self, QTimerEvent* event);
void QSplashScreen_OnTimerEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseTimerEvent(QSplashScreen* self, QTimerEvent* event);
void QSplashScreen_ChildEvent(QSplashScreen* self, QChildEvent* event);
void QSplashScreen_OnChildEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseChildEvent(QSplashScreen* self, QChildEvent* event);
void QSplashScreen_CustomEvent(QSplashScreen* self, QEvent* event);
void QSplashScreen_OnCustomEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseCustomEvent(QSplashScreen* self, QEvent* event);
void QSplashScreen_ConnectNotify(QSplashScreen* self, const QMetaMethod* signal);
void QSplashScreen_OnConnectNotify(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseConnectNotify(QSplashScreen* self, const QMetaMethod* signal);
void QSplashScreen_DisconnectNotify(QSplashScreen* self, const QMetaMethod* signal);
void QSplashScreen_OnDisconnectNotify(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseDisconnectNotify(QSplashScreen* self, const QMetaMethod* signal);
void QSplashScreen_UpdateMicroFocus(QSplashScreen* self);
void QSplashScreen_OnUpdateMicroFocus(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseUpdateMicroFocus(QSplashScreen* self);
void QSplashScreen_Create(QSplashScreen* self);
void QSplashScreen_OnCreate(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseCreate(QSplashScreen* self);
void QSplashScreen_Destroy(QSplashScreen* self);
void QSplashScreen_OnDestroy(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseDestroy(QSplashScreen* self);
bool QSplashScreen_FocusNextChild(QSplashScreen* self);
void QSplashScreen_OnFocusNextChild(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_QBaseFocusNextChild(QSplashScreen* self);
bool QSplashScreen_FocusPreviousChild(QSplashScreen* self);
void QSplashScreen_OnFocusPreviousChild(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_QBaseFocusPreviousChild(QSplashScreen* self);
QObject* QSplashScreen_Sender(const QSplashScreen* self);
void QSplashScreen_OnSender(const QSplashScreen* self, intptr_t slot);
QObject* QSplashScreen_QBaseSender(const QSplashScreen* self);
int QSplashScreen_SenderSignalIndex(const QSplashScreen* self);
void QSplashScreen_OnSenderSignalIndex(const QSplashScreen* self, intptr_t slot);
int QSplashScreen_QBaseSenderSignalIndex(const QSplashScreen* self);
int QSplashScreen_Receivers(const QSplashScreen* self, const char* signal);
void QSplashScreen_OnReceivers(const QSplashScreen* self, intptr_t slot);
int QSplashScreen_QBaseReceivers(const QSplashScreen* self, const char* signal);
bool QSplashScreen_IsSignalConnected(const QSplashScreen* self, const QMetaMethod* signal);
void QSplashScreen_OnIsSignalConnected(const QSplashScreen* self, intptr_t slot);
bool QSplashScreen_QBaseIsSignalConnected(const QSplashScreen* self, const QMetaMethod* signal);
double QSplashScreen_GetDecodedMetricF(const QSplashScreen* self, int metricA, int metricB);
void QSplashScreen_OnGetDecodedMetricF(const QSplashScreen* self, intptr_t slot);
double QSplashScreen_QBaseGetDecodedMetricF(const QSplashScreen* self, int metricA, int metricB);
void QSplashScreen_Delete(QSplashScreen* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
