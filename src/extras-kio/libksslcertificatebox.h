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
libqt_string KSslCertificateBox_Tr(const char* s);
void KSslCertificateBox_SetCertificate(KSslCertificateBox* self, const QSslCertificate* cert, int party);
void KSslCertificateBox_Clear(KSslCertificateBox* self);
libqt_string KSslCertificateBox_Tr2(const char* s, const char* c);
libqt_string KSslCertificateBox_Tr3(const char* s, const char* c, int n);
void KSslCertificateBox_OnMetacall(KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_QBaseMetacall(KSslCertificateBox* self, int param1, int param2, void** param3);
int KSslCertificateBox_DevType(const KSslCertificateBox* self);
void KSslCertificateBox_OnDevType(const KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_QBaseDevType(const KSslCertificateBox* self);
void KSslCertificateBox_SetVisible(KSslCertificateBox* self, bool visible);
void KSslCertificateBox_OnSetVisible(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseSetVisible(KSslCertificateBox* self, bool visible);
QSize* KSslCertificateBox_SizeHint(const KSslCertificateBox* self);
void KSslCertificateBox_OnSizeHint(const KSslCertificateBox* self, intptr_t slot);
QSize* KSslCertificateBox_QBaseSizeHint(const KSslCertificateBox* self);
QSize* KSslCertificateBox_MinimumSizeHint(const KSslCertificateBox* self);
void KSslCertificateBox_OnMinimumSizeHint(const KSslCertificateBox* self, intptr_t slot);
QSize* KSslCertificateBox_QBaseMinimumSizeHint(const KSslCertificateBox* self);
int KSslCertificateBox_HeightForWidth(const KSslCertificateBox* self, int param1);
void KSslCertificateBox_OnHeightForWidth(const KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_QBaseHeightForWidth(const KSslCertificateBox* self, int param1);
bool KSslCertificateBox_HasHeightForWidth(const KSslCertificateBox* self);
void KSslCertificateBox_OnHasHeightForWidth(const KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_QBaseHasHeightForWidth(const KSslCertificateBox* self);
QPaintEngine* KSslCertificateBox_PaintEngine(const KSslCertificateBox* self);
void KSslCertificateBox_OnPaintEngine(const KSslCertificateBox* self, intptr_t slot);
QPaintEngine* KSslCertificateBox_QBasePaintEngine(const KSslCertificateBox* self);
bool KSslCertificateBox_Event(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_OnEvent(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_QBaseEvent(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_MousePressEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_OnMousePressEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseMousePressEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_MouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_OnMouseReleaseEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseMouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_MouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_OnMouseDoubleClickEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseMouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_MouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_OnMouseMoveEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseMouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event);
void KSslCertificateBox_WheelEvent(KSslCertificateBox* self, QWheelEvent* event);
void KSslCertificateBox_OnWheelEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseWheelEvent(KSslCertificateBox* self, QWheelEvent* event);
void KSslCertificateBox_KeyPressEvent(KSslCertificateBox* self, QKeyEvent* event);
void KSslCertificateBox_OnKeyPressEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseKeyPressEvent(KSslCertificateBox* self, QKeyEvent* event);
void KSslCertificateBox_KeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event);
void KSslCertificateBox_OnKeyReleaseEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseKeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event);
void KSslCertificateBox_FocusInEvent(KSslCertificateBox* self, QFocusEvent* event);
void KSslCertificateBox_OnFocusInEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseFocusInEvent(KSslCertificateBox* self, QFocusEvent* event);
void KSslCertificateBox_FocusOutEvent(KSslCertificateBox* self, QFocusEvent* event);
void KSslCertificateBox_OnFocusOutEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseFocusOutEvent(KSslCertificateBox* self, QFocusEvent* event);
void KSslCertificateBox_EnterEvent(KSslCertificateBox* self, QEnterEvent* event);
void KSslCertificateBox_OnEnterEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseEnterEvent(KSslCertificateBox* self, QEnterEvent* event);
void KSslCertificateBox_LeaveEvent(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_OnLeaveEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseLeaveEvent(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_PaintEvent(KSslCertificateBox* self, QPaintEvent* event);
void KSslCertificateBox_OnPaintEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBasePaintEvent(KSslCertificateBox* self, QPaintEvent* event);
void KSslCertificateBox_MoveEvent(KSslCertificateBox* self, QMoveEvent* event);
void KSslCertificateBox_OnMoveEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseMoveEvent(KSslCertificateBox* self, QMoveEvent* event);
void KSslCertificateBox_ResizeEvent(KSslCertificateBox* self, QResizeEvent* event);
void KSslCertificateBox_OnResizeEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseResizeEvent(KSslCertificateBox* self, QResizeEvent* event);
void KSslCertificateBox_CloseEvent(KSslCertificateBox* self, QCloseEvent* event);
void KSslCertificateBox_OnCloseEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseCloseEvent(KSslCertificateBox* self, QCloseEvent* event);
void KSslCertificateBox_ContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event);
void KSslCertificateBox_OnContextMenuEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event);
void KSslCertificateBox_TabletEvent(KSslCertificateBox* self, QTabletEvent* event);
void KSslCertificateBox_OnTabletEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseTabletEvent(KSslCertificateBox* self, QTabletEvent* event);
void KSslCertificateBox_ActionEvent(KSslCertificateBox* self, QActionEvent* event);
void KSslCertificateBox_OnActionEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseActionEvent(KSslCertificateBox* self, QActionEvent* event);
void KSslCertificateBox_DragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event);
void KSslCertificateBox_OnDragEnterEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseDragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event);
void KSslCertificateBox_DragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event);
void KSslCertificateBox_OnDragMoveEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseDragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event);
void KSslCertificateBox_DragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event);
void KSslCertificateBox_OnDragLeaveEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseDragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event);
void KSslCertificateBox_DropEvent(KSslCertificateBox* self, QDropEvent* event);
void KSslCertificateBox_OnDropEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseDropEvent(KSslCertificateBox* self, QDropEvent* event);
void KSslCertificateBox_ShowEvent(KSslCertificateBox* self, QShowEvent* event);
void KSslCertificateBox_OnShowEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseShowEvent(KSslCertificateBox* self, QShowEvent* event);
void KSslCertificateBox_HideEvent(KSslCertificateBox* self, QHideEvent* event);
void KSslCertificateBox_OnHideEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseHideEvent(KSslCertificateBox* self, QHideEvent* event);
bool KSslCertificateBox_NativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result);
void KSslCertificateBox_OnNativeEvent(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_QBaseNativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result);
void KSslCertificateBox_ChangeEvent(KSslCertificateBox* self, QEvent* param1);
void KSslCertificateBox_OnChangeEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseChangeEvent(KSslCertificateBox* self, QEvent* param1);
int KSslCertificateBox_Metric(const KSslCertificateBox* self, int param1);
void KSslCertificateBox_OnMetric(const KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_QBaseMetric(const KSslCertificateBox* self, int param1);
void KSslCertificateBox_InitPainter(const KSslCertificateBox* self, QPainter* painter);
void KSslCertificateBox_OnInitPainter(const KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseInitPainter(const KSslCertificateBox* self, QPainter* painter);
QPaintDevice* KSslCertificateBox_Redirected(const KSslCertificateBox* self, QPoint* offset);
void KSslCertificateBox_OnRedirected(const KSslCertificateBox* self, intptr_t slot);
QPaintDevice* KSslCertificateBox_QBaseRedirected(const KSslCertificateBox* self, QPoint* offset);
QPainter* KSslCertificateBox_SharedPainter(const KSslCertificateBox* self);
void KSslCertificateBox_OnSharedPainter(const KSslCertificateBox* self, intptr_t slot);
QPainter* KSslCertificateBox_QBaseSharedPainter(const KSslCertificateBox* self);
void KSslCertificateBox_InputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1);
void KSslCertificateBox_OnInputMethodEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseInputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1);
QVariant* KSslCertificateBox_InputMethodQuery(const KSslCertificateBox* self, int param1);
void KSslCertificateBox_OnInputMethodQuery(const KSslCertificateBox* self, intptr_t slot);
QVariant* KSslCertificateBox_QBaseInputMethodQuery(const KSslCertificateBox* self, int param1);
bool KSslCertificateBox_FocusNextPrevChild(KSslCertificateBox* self, bool next);
void KSslCertificateBox_OnFocusNextPrevChild(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_QBaseFocusNextPrevChild(KSslCertificateBox* self, bool next);
bool KSslCertificateBox_EventFilter(KSslCertificateBox* self, QObject* watched, QEvent* event);
void KSslCertificateBox_OnEventFilter(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_QBaseEventFilter(KSslCertificateBox* self, QObject* watched, QEvent* event);
void KSslCertificateBox_TimerEvent(KSslCertificateBox* self, QTimerEvent* event);
void KSslCertificateBox_OnTimerEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseTimerEvent(KSslCertificateBox* self, QTimerEvent* event);
void KSslCertificateBox_ChildEvent(KSslCertificateBox* self, QChildEvent* event);
void KSslCertificateBox_OnChildEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseChildEvent(KSslCertificateBox* self, QChildEvent* event);
void KSslCertificateBox_CustomEvent(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_OnCustomEvent(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseCustomEvent(KSslCertificateBox* self, QEvent* event);
void KSslCertificateBox_ConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
void KSslCertificateBox_OnConnectNotify(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
void KSslCertificateBox_DisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
void KSslCertificateBox_OnDisconnectNotify(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseDisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
void KSslCertificateBox_UpdateMicroFocus(KSslCertificateBox* self);
void KSslCertificateBox_OnUpdateMicroFocus(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseUpdateMicroFocus(KSslCertificateBox* self);
void KSslCertificateBox_Create(KSslCertificateBox* self);
void KSslCertificateBox_OnCreate(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseCreate(KSslCertificateBox* self);
void KSslCertificateBox_Destroy(KSslCertificateBox* self);
void KSslCertificateBox_OnDestroy(KSslCertificateBox* self, intptr_t slot);
void KSslCertificateBox_QBaseDestroy(KSslCertificateBox* self);
bool KSslCertificateBox_FocusNextChild(KSslCertificateBox* self);
void KSslCertificateBox_OnFocusNextChild(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_QBaseFocusNextChild(KSslCertificateBox* self);
bool KSslCertificateBox_FocusPreviousChild(KSslCertificateBox* self);
void KSslCertificateBox_OnFocusPreviousChild(KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_QBaseFocusPreviousChild(KSslCertificateBox* self);
QObject* KSslCertificateBox_Sender(const KSslCertificateBox* self);
void KSslCertificateBox_OnSender(const KSslCertificateBox* self, intptr_t slot);
QObject* KSslCertificateBox_QBaseSender(const KSslCertificateBox* self);
int KSslCertificateBox_SenderSignalIndex(const KSslCertificateBox* self);
void KSslCertificateBox_OnSenderSignalIndex(const KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_QBaseSenderSignalIndex(const KSslCertificateBox* self);
int KSslCertificateBox_Receivers(const KSslCertificateBox* self, const char* signal);
void KSslCertificateBox_OnReceivers(const KSslCertificateBox* self, intptr_t slot);
int KSslCertificateBox_QBaseReceivers(const KSslCertificateBox* self, const char* signal);
bool KSslCertificateBox_IsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal);
void KSslCertificateBox_OnIsSignalConnected(const KSslCertificateBox* self, intptr_t slot);
bool KSslCertificateBox_QBaseIsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal);
double KSslCertificateBox_GetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB);
void KSslCertificateBox_OnGetDecodedMetricF(const KSslCertificateBox* self, intptr_t slot);
double KSslCertificateBox_QBaseGetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB);
void KSslCertificateBox_Delete(KSslCertificateBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
