#pragma once
#ifndef SRCC_LIBQKEYSEQUENCEEDIT_H
#define SRCC_LIBQKEYSEQUENCEEDIT_H

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
typedef struct QKeySequence QKeySequence;
typedef struct QKeySequenceEdit QKeySequenceEdit;
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
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent);
QKeySequenceEdit* QKeySequenceEdit_new2();
QKeySequenceEdit* QKeySequenceEdit_new3(const QKeySequence* keySequence);
QKeySequenceEdit* QKeySequenceEdit_new4(const QKeySequence* keySequence, QWidget* parent);
QMetaObject* QKeySequenceEdit_MetaObject(const QKeySequenceEdit* self);
void* QKeySequenceEdit_Metacast(QKeySequenceEdit* self, const char* param1);
int QKeySequenceEdit_Metacall(QKeySequenceEdit* self, int param1, int param2, void** param3);
void QKeySequenceEdit_OnMetacall(QKeySequenceEdit* self, intptr_t slot);
int QKeySequenceEdit_QBaseMetacall(QKeySequenceEdit* self, int param1, int param2, void** param3);
libqt_string QKeySequenceEdit_Tr(const char* s);
QKeySequence* QKeySequenceEdit_KeySequence(const QKeySequenceEdit* self);
void QKeySequenceEdit_SetClearButtonEnabled(QKeySequenceEdit* self, bool enable);
bool QKeySequenceEdit_IsClearButtonEnabled(const QKeySequenceEdit* self);
void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, const QKeySequence* keySequence);
void QKeySequenceEdit_Clear(QKeySequenceEdit* self);
void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self);
void QKeySequenceEdit_Connect_EditingFinished(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, const QKeySequence* keySequence);
void QKeySequenceEdit_Connect_KeySequenceChanged(QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_Event(QKeySequenceEdit* self, QEvent* param1);
void QKeySequenceEdit_OnEvent(QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_QBaseEvent(QKeySequenceEdit* self, QEvent* param1);
void QKeySequenceEdit_KeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
void QKeySequenceEdit_OnKeyPressEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseKeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
void QKeySequenceEdit_KeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
void QKeySequenceEdit_OnKeyReleaseEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseKeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
void QKeySequenceEdit_TimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
void QKeySequenceEdit_OnTimerEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseTimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
void QKeySequenceEdit_FocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
void QKeySequenceEdit_OnFocusOutEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseFocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
libqt_string QKeySequenceEdit_Tr2(const char* s, const char* c);
libqt_string QKeySequenceEdit_Tr3(const char* s, const char* c, int n);
int QKeySequenceEdit_DevType(const QKeySequenceEdit* self);
void QKeySequenceEdit_OnDevType(const QKeySequenceEdit* self, intptr_t slot);
int QKeySequenceEdit_QBaseDevType(const QKeySequenceEdit* self);
void QKeySequenceEdit_SetVisible(QKeySequenceEdit* self, bool visible);
void QKeySequenceEdit_OnSetVisible(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseSetVisible(QKeySequenceEdit* self, bool visible);
QSize* QKeySequenceEdit_SizeHint(const QKeySequenceEdit* self);
void QKeySequenceEdit_OnSizeHint(const QKeySequenceEdit* self, intptr_t slot);
QSize* QKeySequenceEdit_QBaseSizeHint(const QKeySequenceEdit* self);
QSize* QKeySequenceEdit_MinimumSizeHint(const QKeySequenceEdit* self);
void QKeySequenceEdit_OnMinimumSizeHint(const QKeySequenceEdit* self, intptr_t slot);
QSize* QKeySequenceEdit_QBaseMinimumSizeHint(const QKeySequenceEdit* self);
int QKeySequenceEdit_HeightForWidth(const QKeySequenceEdit* self, int param1);
void QKeySequenceEdit_OnHeightForWidth(const QKeySequenceEdit* self, intptr_t slot);
int QKeySequenceEdit_QBaseHeightForWidth(const QKeySequenceEdit* self, int param1);
bool QKeySequenceEdit_HasHeightForWidth(const QKeySequenceEdit* self);
void QKeySequenceEdit_OnHasHeightForWidth(const QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_QBaseHasHeightForWidth(const QKeySequenceEdit* self);
QPaintEngine* QKeySequenceEdit_PaintEngine(const QKeySequenceEdit* self);
void QKeySequenceEdit_OnPaintEngine(const QKeySequenceEdit* self, intptr_t slot);
QPaintEngine* QKeySequenceEdit_QBasePaintEngine(const QKeySequenceEdit* self);
void QKeySequenceEdit_MousePressEvent(QKeySequenceEdit* self, QMouseEvent* event);
void QKeySequenceEdit_OnMousePressEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseMousePressEvent(QKeySequenceEdit* self, QMouseEvent* event);
void QKeySequenceEdit_MouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event);
void QKeySequenceEdit_OnMouseReleaseEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseMouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event);
void QKeySequenceEdit_MouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event);
void QKeySequenceEdit_OnMouseDoubleClickEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseMouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event);
void QKeySequenceEdit_MouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event);
void QKeySequenceEdit_OnMouseMoveEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseMouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event);
void QKeySequenceEdit_WheelEvent(QKeySequenceEdit* self, QWheelEvent* event);
void QKeySequenceEdit_OnWheelEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseWheelEvent(QKeySequenceEdit* self, QWheelEvent* event);
void QKeySequenceEdit_FocusInEvent(QKeySequenceEdit* self, QFocusEvent* event);
void QKeySequenceEdit_OnFocusInEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseFocusInEvent(QKeySequenceEdit* self, QFocusEvent* event);
void QKeySequenceEdit_EnterEvent(QKeySequenceEdit* self, QEnterEvent* event);
void QKeySequenceEdit_OnEnterEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseEnterEvent(QKeySequenceEdit* self, QEnterEvent* event);
void QKeySequenceEdit_LeaveEvent(QKeySequenceEdit* self, QEvent* event);
void QKeySequenceEdit_OnLeaveEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseLeaveEvent(QKeySequenceEdit* self, QEvent* event);
void QKeySequenceEdit_PaintEvent(QKeySequenceEdit* self, QPaintEvent* event);
void QKeySequenceEdit_OnPaintEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBasePaintEvent(QKeySequenceEdit* self, QPaintEvent* event);
void QKeySequenceEdit_MoveEvent(QKeySequenceEdit* self, QMoveEvent* event);
void QKeySequenceEdit_OnMoveEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseMoveEvent(QKeySequenceEdit* self, QMoveEvent* event);
void QKeySequenceEdit_ResizeEvent(QKeySequenceEdit* self, QResizeEvent* event);
void QKeySequenceEdit_OnResizeEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseResizeEvent(QKeySequenceEdit* self, QResizeEvent* event);
void QKeySequenceEdit_CloseEvent(QKeySequenceEdit* self, QCloseEvent* event);
void QKeySequenceEdit_OnCloseEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseCloseEvent(QKeySequenceEdit* self, QCloseEvent* event);
void QKeySequenceEdit_ContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event);
void QKeySequenceEdit_OnContextMenuEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event);
void QKeySequenceEdit_TabletEvent(QKeySequenceEdit* self, QTabletEvent* event);
void QKeySequenceEdit_OnTabletEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseTabletEvent(QKeySequenceEdit* self, QTabletEvent* event);
void QKeySequenceEdit_ActionEvent(QKeySequenceEdit* self, QActionEvent* event);
void QKeySequenceEdit_OnActionEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseActionEvent(QKeySequenceEdit* self, QActionEvent* event);
void QKeySequenceEdit_DragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event);
void QKeySequenceEdit_OnDragEnterEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseDragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event);
void QKeySequenceEdit_DragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event);
void QKeySequenceEdit_OnDragMoveEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseDragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event);
void QKeySequenceEdit_DragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event);
void QKeySequenceEdit_OnDragLeaveEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseDragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event);
void QKeySequenceEdit_DropEvent(QKeySequenceEdit* self, QDropEvent* event);
void QKeySequenceEdit_OnDropEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseDropEvent(QKeySequenceEdit* self, QDropEvent* event);
void QKeySequenceEdit_ShowEvent(QKeySequenceEdit* self, QShowEvent* event);
void QKeySequenceEdit_OnShowEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseShowEvent(QKeySequenceEdit* self, QShowEvent* event);
void QKeySequenceEdit_HideEvent(QKeySequenceEdit* self, QHideEvent* event);
void QKeySequenceEdit_OnHideEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseHideEvent(QKeySequenceEdit* self, QHideEvent* event);
bool QKeySequenceEdit_NativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result);
void QKeySequenceEdit_OnNativeEvent(QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_QBaseNativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result);
void QKeySequenceEdit_ChangeEvent(QKeySequenceEdit* self, QEvent* param1);
void QKeySequenceEdit_OnChangeEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseChangeEvent(QKeySequenceEdit* self, QEvent* param1);
int QKeySequenceEdit_Metric(const QKeySequenceEdit* self, int param1);
void QKeySequenceEdit_OnMetric(const QKeySequenceEdit* self, intptr_t slot);
int QKeySequenceEdit_QBaseMetric(const QKeySequenceEdit* self, int param1);
void QKeySequenceEdit_InitPainter(const QKeySequenceEdit* self, QPainter* painter);
void QKeySequenceEdit_OnInitPainter(const QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseInitPainter(const QKeySequenceEdit* self, QPainter* painter);
QPaintDevice* QKeySequenceEdit_Redirected(const QKeySequenceEdit* self, QPoint* offset);
void QKeySequenceEdit_OnRedirected(const QKeySequenceEdit* self, intptr_t slot);
QPaintDevice* QKeySequenceEdit_QBaseRedirected(const QKeySequenceEdit* self, QPoint* offset);
QPainter* QKeySequenceEdit_SharedPainter(const QKeySequenceEdit* self);
void QKeySequenceEdit_OnSharedPainter(const QKeySequenceEdit* self, intptr_t slot);
QPainter* QKeySequenceEdit_QBaseSharedPainter(const QKeySequenceEdit* self);
void QKeySequenceEdit_InputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1);
void QKeySequenceEdit_OnInputMethodEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseInputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1);
QVariant* QKeySequenceEdit_InputMethodQuery(const QKeySequenceEdit* self, int param1);
void QKeySequenceEdit_OnInputMethodQuery(const QKeySequenceEdit* self, intptr_t slot);
QVariant* QKeySequenceEdit_QBaseInputMethodQuery(const QKeySequenceEdit* self, int param1);
bool QKeySequenceEdit_FocusNextPrevChild(QKeySequenceEdit* self, bool next);
void QKeySequenceEdit_OnFocusNextPrevChild(QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_QBaseFocusNextPrevChild(QKeySequenceEdit* self, bool next);
bool QKeySequenceEdit_EventFilter(QKeySequenceEdit* self, QObject* watched, QEvent* event);
void QKeySequenceEdit_OnEventFilter(QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_QBaseEventFilter(QKeySequenceEdit* self, QObject* watched, QEvent* event);
void QKeySequenceEdit_ChildEvent(QKeySequenceEdit* self, QChildEvent* event);
void QKeySequenceEdit_OnChildEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseChildEvent(QKeySequenceEdit* self, QChildEvent* event);
void QKeySequenceEdit_CustomEvent(QKeySequenceEdit* self, QEvent* event);
void QKeySequenceEdit_OnCustomEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseCustomEvent(QKeySequenceEdit* self, QEvent* event);
void QKeySequenceEdit_ConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
void QKeySequenceEdit_OnConnectNotify(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
void QKeySequenceEdit_DisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
void QKeySequenceEdit_OnDisconnectNotify(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseDisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
void QKeySequenceEdit_UpdateMicroFocus(QKeySequenceEdit* self);
void QKeySequenceEdit_OnUpdateMicroFocus(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseUpdateMicroFocus(QKeySequenceEdit* self);
void QKeySequenceEdit_Create(QKeySequenceEdit* self);
void QKeySequenceEdit_OnCreate(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseCreate(QKeySequenceEdit* self);
void QKeySequenceEdit_Destroy(QKeySequenceEdit* self);
void QKeySequenceEdit_OnDestroy(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseDestroy(QKeySequenceEdit* self);
bool QKeySequenceEdit_FocusNextChild(QKeySequenceEdit* self);
void QKeySequenceEdit_OnFocusNextChild(QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_QBaseFocusNextChild(QKeySequenceEdit* self);
bool QKeySequenceEdit_FocusPreviousChild(QKeySequenceEdit* self);
void QKeySequenceEdit_OnFocusPreviousChild(QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_QBaseFocusPreviousChild(QKeySequenceEdit* self);
QObject* QKeySequenceEdit_Sender(const QKeySequenceEdit* self);
void QKeySequenceEdit_OnSender(const QKeySequenceEdit* self, intptr_t slot);
QObject* QKeySequenceEdit_QBaseSender(const QKeySequenceEdit* self);
int QKeySequenceEdit_SenderSignalIndex(const QKeySequenceEdit* self);
void QKeySequenceEdit_OnSenderSignalIndex(const QKeySequenceEdit* self, intptr_t slot);
int QKeySequenceEdit_QBaseSenderSignalIndex(const QKeySequenceEdit* self);
int QKeySequenceEdit_Receivers(const QKeySequenceEdit* self, const char* signal);
void QKeySequenceEdit_OnReceivers(const QKeySequenceEdit* self, intptr_t slot);
int QKeySequenceEdit_QBaseReceivers(const QKeySequenceEdit* self, const char* signal);
bool QKeySequenceEdit_IsSignalConnected(const QKeySequenceEdit* self, const QMetaMethod* signal);
void QKeySequenceEdit_OnIsSignalConnected(const QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_QBaseIsSignalConnected(const QKeySequenceEdit* self, const QMetaMethod* signal);
void QKeySequenceEdit_Delete(QKeySequenceEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
