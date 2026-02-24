#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKSSLCERTIFICATEBOX_H
#define SRC_EXTRAS_KIOC_LIBKSSLCERTIFICATEBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSslCertificateBox KSslCertificateBox;
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
typedef struct QSslCertificate QSslCertificate;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KSslCertificateBox* KSslCertificateBox_new(QWidget* parent);
KSslCertificateBox* KSslCertificateBox_new2();
QMetaObject* KSslCertificateBox_MetaObject(const KSslCertificateBox* self);
void* KSslCertificateBox_Metacast(KSslCertificateBox* self, const char* param1);
int KSslCertificateBox_Metacall(KSslCertificateBox* self, int param1, int param2, void** param3);
void KSslCertificateBox_SetCertificate(KSslCertificateBox* self, const QSslCertificate* cert, int party);
void KSslCertificateBox_Clear(KSslCertificateBox* self);
void KSslCertificateBox_OnMetaObject(const KSslCertificateBox* self, intptr_t slot);
QMetaObject* KSslCertificateBox_SuperMetaObject(const KSslCertificateBox* self);
void KSslCertificateBox_OnMetacast(KSslCertificateBox* self, intptr_t slot);
void* KSslCertificateBox_SuperMetacast(KSslCertificateBox* self, const char* param1);
void KSslCertificateBox_OnMetacall(KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_SuperMetacall(KSslCertificateBox* self, int param1, int param2, void** param3);
int KSslCertificateBox_DevType(const KSslCertificateBox* self);
void KSslCertificateBox_OnDevType(const KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_SuperDevType(const KSslCertificateBox* self);
void KSslCertificateBox_SetVisible(KSslCertificateBox* self, bool visible);
void KSslCertificateBox_OnSetVisible(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperSetVisible(KSslCertificateBox* self, bool visible);
QSize* KSslCertificateBox_SizeHint(const KSslCertificateBox* self);
void KSslCertificateBox_OnSizeHint(const KSslCertificateBox* self, intptr_t slot);
QSize* KSslCertificateBox_SuperSizeHint(const KSslCertificateBox* self);
QSize* KSslCertificateBox_MinimumSizeHint(const KSslCertificateBox* self);
void KSslCertificateBox_OnMinimumSizeHint(const KSslCertificateBox* self, intptr_t slot);
QSize* KSslCertificateBox_SuperMinimumSizeHint(const KSslCertificateBox* self);
int KSslCertificateBox_HeightForWidth(const KSslCertificateBox* self, int param1);
void KSslCertificateBox_OnHeightForWidth(const KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_SuperHeightForWidth(const KSslCertificateBox* self, int param1);
bool KSslCertificateBox_HasHeightForWidth(const KSslCertificateBox* self);
void KSslCertificateBox_OnHasHeightForWidth(const KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_SuperHasHeightForWidth(const KSslCertificateBox* self);
QPaintEngine* KSslCertificateBox_PaintEngine(const KSslCertificateBox* self);
void KSslCertificateBox_OnPaintEngine(const KSslCertificateBox* self, intptr_t slot);
QPaintEngine* KSslCertificateBox_SuperPaintEngine(const KSslCertificateBox* self);
bool KSslCertificateBox_Event(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_OnEvent(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_SuperEvent(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_MousePressEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_OnMousePressEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperMousePressEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_MouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_OnMouseReleaseEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperMouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_MouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_OnMouseDoubleClickEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperMouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_MouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_OnMouseMoveEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperMouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_WheelEvent(KSslCertificateBox* self, QWheelEvent* event);
void KSslCertificateBox_OnWheelEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperWheelEvent(KSslCertificateBox* self, QWheelEvent* event);
void KSslCertificateBox_KeyPressEvent(KSslCertificateBox* self, QKeyEvent* event);
void KSslCertificateBox_OnKeyPressEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperKeyPressEvent(KSslCertificateBox* self, QKeyEvent* event);
void KSslCertificateBox_KeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event);
void KSslCertificateBox_OnKeyReleaseEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperKeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event);
void KSslCertificateBox_FocusInEvent(KSslCertificateBox* self, QFocusEvent* event);
void KSslCertificateBox_OnFocusInEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperFocusInEvent(KSslCertificateBox* self, QFocusEvent* event);
void KSslCertificateBox_FocusOutEvent(KSslCertificateBox* self, QFocusEvent* event);
void KSslCertificateBox_OnFocusOutEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperFocusOutEvent(KSslCertificateBox* self, QFocusEvent* event);
void KSslCertificateBox_EnterEvent(KSslCertificateBox* self, QEnterEvent* event);
void KSslCertificateBox_OnEnterEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperEnterEvent(KSslCertificateBox* self, QEnterEvent* event);
void KSslCertificateBox_LeaveEvent(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_OnLeaveEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperLeaveEvent(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_PaintEvent(KSslCertificateBox* self, QPaintEvent* event);
void KSslCertificateBox_OnPaintEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperPaintEvent(KSslCertificateBox* self, QPaintEvent* event);
void KSslCertificateBox_MoveEvent(KSslCertificateBox* self, QMoveEvent* event);
void KSslCertificateBox_OnMoveEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperMoveEvent(KSslCertificateBox* self, QMoveEvent* event);
void KSslCertificateBox_ResizeEvent(KSslCertificateBox* self, QResizeEvent* event);
void KSslCertificateBox_OnResizeEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperResizeEvent(KSslCertificateBox* self, QResizeEvent* event);
void KSslCertificateBox_CloseEvent(KSslCertificateBox* self, QCloseEvent* event);
void KSslCertificateBox_OnCloseEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperCloseEvent(KSslCertificateBox* self, QCloseEvent* event);
void KSslCertificateBox_ContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event);
void KSslCertificateBox_OnContextMenuEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event);
void KSslCertificateBox_TabletEvent(KSslCertificateBox* self, QTabletEvent* event);
void KSslCertificateBox_OnTabletEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperTabletEvent(KSslCertificateBox* self, QTabletEvent* event);
void KSslCertificateBox_ActionEvent(KSslCertificateBox* self, QActionEvent* event);
void KSslCertificateBox_OnActionEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperActionEvent(KSslCertificateBox* self, QActionEvent* event);
void KSslCertificateBox_DragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event);
void KSslCertificateBox_OnDragEnterEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperDragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event);
void KSslCertificateBox_DragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event);
void KSslCertificateBox_OnDragMoveEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperDragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event);
void KSslCertificateBox_DragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event);
void KSslCertificateBox_OnDragLeaveEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperDragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event);
void KSslCertificateBox_DropEvent(KSslCertificateBox* self, QDropEvent* event);
void KSslCertificateBox_OnDropEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperDropEvent(KSslCertificateBox* self, QDropEvent* event);
void KSslCertificateBox_ShowEvent(KSslCertificateBox* self, QShowEvent* event);
void KSslCertificateBox_OnShowEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperShowEvent(KSslCertificateBox* self, QShowEvent* event);
void KSslCertificateBox_HideEvent(KSslCertificateBox* self, QHideEvent* event);
void KSslCertificateBox_OnHideEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperHideEvent(KSslCertificateBox* self, QHideEvent* event);
bool KSslCertificateBox_NativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result);
void KSslCertificateBox_OnNativeEvent(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_SuperNativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result);
void KSslCertificateBox_ChangeEvent(KSslCertificateBox* self, QEvent* param1);
void KSslCertificateBox_OnChangeEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperChangeEvent(KSslCertificateBox* self, QEvent* param1);
int KSslCertificateBox_Metric(const KSslCertificateBox* self, int param1);
void KSslCertificateBox_OnMetric(const KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_SuperMetric(const KSslCertificateBox* self, int param1);
void KSslCertificateBox_InitPainter(const KSslCertificateBox* self, QPainter* painter);
void KSslCertificateBox_OnInitPainter(const KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperInitPainter(const KSslCertificateBox* self, QPainter* painter);
QPaintDevice* KSslCertificateBox_Redirected(const KSslCertificateBox* self, QPoint* offset);
void KSslCertificateBox_OnRedirected(const KSslCertificateBox* self, intptr_t slot);
QPaintDevice* KSslCertificateBox_SuperRedirected(const KSslCertificateBox* self, QPoint* offset);
QPainter* KSslCertificateBox_SharedPainter(const KSslCertificateBox* self);
void KSslCertificateBox_OnSharedPainter(const KSslCertificateBox* self, intptr_t slot);
QPainter* KSslCertificateBox_SuperSharedPainter(const KSslCertificateBox* self);
void KSslCertificateBox_InputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1);
void KSslCertificateBox_OnInputMethodEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperInputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1);
QVariant* KSslCertificateBox_InputMethodQuery(const KSslCertificateBox* self, int param1);
void KSslCertificateBox_OnInputMethodQuery(const KSslCertificateBox* self, intptr_t slot);
QVariant* KSslCertificateBox_SuperInputMethodQuery(const KSslCertificateBox* self, int param1);
bool KSslCertificateBox_FocusNextPrevChild(KSslCertificateBox* self, bool next);
void KSslCertificateBox_OnFocusNextPrevChild(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_SuperFocusNextPrevChild(KSslCertificateBox* self, bool next);
bool KSslCertificateBox_EventFilter(KSslCertificateBox* self, QObject* watched, QEvent* event);
void KSslCertificateBox_OnEventFilter(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_SuperEventFilter(KSslCertificateBox* self, QObject* watched, QEvent* event);
void KSslCertificateBox_TimerEvent(KSslCertificateBox* self, QTimerEvent* event);
void KSslCertificateBox_OnTimerEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperTimerEvent(KSslCertificateBox* self, QTimerEvent* event);
void KSslCertificateBox_ChildEvent(KSslCertificateBox* self, QChildEvent* event);
void KSslCertificateBox_OnChildEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperChildEvent(KSslCertificateBox* self, QChildEvent* event);
void KSslCertificateBox_CustomEvent(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_OnCustomEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperCustomEvent(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_ConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
void KSslCertificateBox_OnConnectNotify(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
void KSslCertificateBox_DisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
void KSslCertificateBox_OnDisconnectNotify(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperDisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
void KSslCertificateBox_UpdateMicroFocus(KSslCertificateBox* self);
void KSslCertificateBox_OnUpdateMicroFocus(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperUpdateMicroFocus(KSslCertificateBox* self);
void KSslCertificateBox_Create(KSslCertificateBox* self);
void KSslCertificateBox_OnCreate(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperCreate(KSslCertificateBox* self);
void KSslCertificateBox_Destroy(KSslCertificateBox* self);
void KSslCertificateBox_OnDestroy(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_SuperDestroy(KSslCertificateBox* self);
bool KSslCertificateBox_FocusNextChild(KSslCertificateBox* self);
void KSslCertificateBox_OnFocusNextChild(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_SuperFocusNextChild(KSslCertificateBox* self);
bool KSslCertificateBox_FocusPreviousChild(KSslCertificateBox* self);
void KSslCertificateBox_OnFocusPreviousChild(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_SuperFocusPreviousChild(KSslCertificateBox* self);
QObject* KSslCertificateBox_Sender(const KSslCertificateBox* self);
void KSslCertificateBox_OnSender(const KSslCertificateBox* self, intptr_t slot);
QObject* KSslCertificateBox_SuperSender(const KSslCertificateBox* self);
int KSslCertificateBox_SenderSignalIndex(const KSslCertificateBox* self);
void KSslCertificateBox_OnSenderSignalIndex(const KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_SuperSenderSignalIndex(const KSslCertificateBox* self);
int KSslCertificateBox_Receivers(const KSslCertificateBox* self, const char* signal);
void KSslCertificateBox_OnReceivers(const KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_SuperReceivers(const KSslCertificateBox* self, const char* signal);
bool KSslCertificateBox_IsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal);
void KSslCertificateBox_OnIsSignalConnected(const KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_SuperIsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal);
double KSslCertificateBox_GetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB);
void KSslCertificateBox_OnGetDecodedMetricF(const KSslCertificateBox* self, intptr_t slot);
double KSslCertificateBox_SuperGetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB);
void KSslCertificateBox_Delete(KSslCertificateBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
