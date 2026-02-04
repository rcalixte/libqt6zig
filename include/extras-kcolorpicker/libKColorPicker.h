#pragma once
#ifndef SRC_EXTRAS_KCOLORPICKERC_LIBKCOLORPICKER_H
#define SRC_EXTRAS_KCOLORPICKERC_LIBKCOLORPICKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_kColorPicker__KColorPicker)
typedef kColorPicker::KColorPicker kColorPicker__KColorPicker;
#endif
#else
typedef struct QAbstractButton QAbstractButton;
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
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionToolButton QStyleOptionToolButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolButton QToolButton;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct kColorPicker__KColorPicker kColorPicker__KColorPicker;
#endif

kColorPicker__KColorPicker* kColorPicker__KColorPicker_new();
kColorPicker__KColorPicker* kColorPicker__KColorPicker_new2(bool showAlphaChannel);
kColorPicker__KColorPicker* kColorPicker__KColorPicker_new3(bool showAlphaChannel, QWidget* parent);
QMetaObject* kColorPicker__KColorPicker_MetaObject(const kColorPicker__KColorPicker* self);
void* kColorPicker__KColorPicker_Metacast(kColorPicker__KColorPicker* self, const char* param1);
int kColorPicker__KColorPicker_Metacall(kColorPicker__KColorPicker* self, int param1, int param2, void** param3);
void kColorPicker__KColorPicker_SetFixedSize(kColorPicker__KColorPicker* self, const QSize* size);
void kColorPicker__KColorPicker_SetFixedSize2(kColorPicker__KColorPicker* self, int width, int height);
QColor* kColorPicker__KColorPicker_Color(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_ResetColors(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_SetColor(kColorPicker__KColorPicker* self, const QColor* color);
void kColorPicker__KColorPicker_ColorChanged(const kColorPicker__KColorPicker* self, const QColor* color);
void kColorPicker__KColorPicker_Connect_ColorChanged(const kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_ResetColors1(kColorPicker__KColorPicker* self, bool showAlphaChannel);
void kColorPicker__KColorPicker_OnMetaObject(const kColorPicker__KColorPicker* self, intptr_t slot);
QMetaObject* kColorPicker__KColorPicker_QBaseMetaObject(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnMetacast(kColorPicker__KColorPicker* self, intptr_t slot);
void* kColorPicker__KColorPicker_QBaseMetacast(kColorPicker__KColorPicker* self, const char* param1);
void kColorPicker__KColorPicker_OnMetacall(kColorPicker__KColorPicker* self, intptr_t slot);
int kColorPicker__KColorPicker_QBaseMetacall(kColorPicker__KColorPicker* self, int param1, int param2, void** param3);
QSize* kColorPicker__KColorPicker_SizeHint(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnSizeHint(const kColorPicker__KColorPicker* self, intptr_t slot);
QSize* kColorPicker__KColorPicker_QBaseSizeHint(const kColorPicker__KColorPicker* self);
QSize* kColorPicker__KColorPicker_MinimumSizeHint(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnMinimumSizeHint(const kColorPicker__KColorPicker* self, intptr_t slot);
QSize* kColorPicker__KColorPicker_QBaseMinimumSizeHint(const kColorPicker__KColorPicker* self);
bool kColorPicker__KColorPicker_Event(kColorPicker__KColorPicker* self, QEvent* e);
void kColorPicker__KColorPicker_OnEvent(kColorPicker__KColorPicker* self, intptr_t slot);
bool kColorPicker__KColorPicker_QBaseEvent(kColorPicker__KColorPicker* self, QEvent* e);
void kColorPicker__KColorPicker_MousePressEvent(kColorPicker__KColorPicker* self, QMouseEvent* param1);
void kColorPicker__KColorPicker_OnMousePressEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseMousePressEvent(kColorPicker__KColorPicker* self, QMouseEvent* param1);
void kColorPicker__KColorPicker_MouseReleaseEvent(kColorPicker__KColorPicker* self, QMouseEvent* param1);
void kColorPicker__KColorPicker_OnMouseReleaseEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseMouseReleaseEvent(kColorPicker__KColorPicker* self, QMouseEvent* param1);
void kColorPicker__KColorPicker_PaintEvent(kColorPicker__KColorPicker* self, QPaintEvent* param1);
void kColorPicker__KColorPicker_OnPaintEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBasePaintEvent(kColorPicker__KColorPicker* self, QPaintEvent* param1);
void kColorPicker__KColorPicker_ActionEvent(kColorPicker__KColorPicker* self, QActionEvent* param1);
void kColorPicker__KColorPicker_OnActionEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseActionEvent(kColorPicker__KColorPicker* self, QActionEvent* param1);
void kColorPicker__KColorPicker_EnterEvent(kColorPicker__KColorPicker* self, QEnterEvent* param1);
void kColorPicker__KColorPicker_OnEnterEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseEnterEvent(kColorPicker__KColorPicker* self, QEnterEvent* param1);
void kColorPicker__KColorPicker_LeaveEvent(kColorPicker__KColorPicker* self, QEvent* param1);
void kColorPicker__KColorPicker_OnLeaveEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseLeaveEvent(kColorPicker__KColorPicker* self, QEvent* param1);
void kColorPicker__KColorPicker_TimerEvent(kColorPicker__KColorPicker* self, QTimerEvent* param1);
void kColorPicker__KColorPicker_OnTimerEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseTimerEvent(kColorPicker__KColorPicker* self, QTimerEvent* param1);
void kColorPicker__KColorPicker_ChangeEvent(kColorPicker__KColorPicker* self, QEvent* param1);
void kColorPicker__KColorPicker_OnChangeEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseChangeEvent(kColorPicker__KColorPicker* self, QEvent* param1);
bool kColorPicker__KColorPicker_HitButton(const kColorPicker__KColorPicker* self, const QPoint* pos);
void kColorPicker__KColorPicker_OnHitButton(const kColorPicker__KColorPicker* self, intptr_t slot);
bool kColorPicker__KColorPicker_QBaseHitButton(const kColorPicker__KColorPicker* self, const QPoint* pos);
void kColorPicker__KColorPicker_CheckStateSet(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnCheckStateSet(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseCheckStateSet(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_NextCheckState(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnNextCheckState(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseNextCheckState(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_InitStyleOption(const kColorPicker__KColorPicker* self, QStyleOptionToolButton* option);
void kColorPicker__KColorPicker_OnInitStyleOption(const kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseInitStyleOption(const kColorPicker__KColorPicker* self, QStyleOptionToolButton* option);
void kColorPicker__KColorPicker_KeyPressEvent(kColorPicker__KColorPicker* self, QKeyEvent* e);
void kColorPicker__KColorPicker_OnKeyPressEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseKeyPressEvent(kColorPicker__KColorPicker* self, QKeyEvent* e);
void kColorPicker__KColorPicker_KeyReleaseEvent(kColorPicker__KColorPicker* self, QKeyEvent* e);
void kColorPicker__KColorPicker_OnKeyReleaseEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseKeyReleaseEvent(kColorPicker__KColorPicker* self, QKeyEvent* e);
void kColorPicker__KColorPicker_MouseMoveEvent(kColorPicker__KColorPicker* self, QMouseEvent* e);
void kColorPicker__KColorPicker_OnMouseMoveEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseMouseMoveEvent(kColorPicker__KColorPicker* self, QMouseEvent* e);
void kColorPicker__KColorPicker_FocusInEvent(kColorPicker__KColorPicker* self, QFocusEvent* e);
void kColorPicker__KColorPicker_OnFocusInEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseFocusInEvent(kColorPicker__KColorPicker* self, QFocusEvent* e);
void kColorPicker__KColorPicker_FocusOutEvent(kColorPicker__KColorPicker* self, QFocusEvent* e);
void kColorPicker__KColorPicker_OnFocusOutEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseFocusOutEvent(kColorPicker__KColorPicker* self, QFocusEvent* e);
int kColorPicker__KColorPicker_DevType(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnDevType(const kColorPicker__KColorPicker* self, intptr_t slot);
int kColorPicker__KColorPicker_QBaseDevType(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_SetVisible(kColorPicker__KColorPicker* self, bool visible);
void kColorPicker__KColorPicker_OnSetVisible(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseSetVisible(kColorPicker__KColorPicker* self, bool visible);
int kColorPicker__KColorPicker_HeightForWidth(const kColorPicker__KColorPicker* self, int param1);
void kColorPicker__KColorPicker_OnHeightForWidth(const kColorPicker__KColorPicker* self, intptr_t slot);
int kColorPicker__KColorPicker_QBaseHeightForWidth(const kColorPicker__KColorPicker* self, int param1);
bool kColorPicker__KColorPicker_HasHeightForWidth(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnHasHeightForWidth(const kColorPicker__KColorPicker* self, intptr_t slot);
bool kColorPicker__KColorPicker_QBaseHasHeightForWidth(const kColorPicker__KColorPicker* self);
QPaintEngine* kColorPicker__KColorPicker_PaintEngine(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnPaintEngine(const kColorPicker__KColorPicker* self, intptr_t slot);
QPaintEngine* kColorPicker__KColorPicker_QBasePaintEngine(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_MouseDoubleClickEvent(kColorPicker__KColorPicker* self, QMouseEvent* event);
void kColorPicker__KColorPicker_OnMouseDoubleClickEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseMouseDoubleClickEvent(kColorPicker__KColorPicker* self, QMouseEvent* event);
void kColorPicker__KColorPicker_WheelEvent(kColorPicker__KColorPicker* self, QWheelEvent* event);
void kColorPicker__KColorPicker_OnWheelEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseWheelEvent(kColorPicker__KColorPicker* self, QWheelEvent* event);
void kColorPicker__KColorPicker_MoveEvent(kColorPicker__KColorPicker* self, QMoveEvent* event);
void kColorPicker__KColorPicker_OnMoveEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseMoveEvent(kColorPicker__KColorPicker* self, QMoveEvent* event);
void kColorPicker__KColorPicker_ResizeEvent(kColorPicker__KColorPicker* self, QResizeEvent* event);
void kColorPicker__KColorPicker_OnResizeEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseResizeEvent(kColorPicker__KColorPicker* self, QResizeEvent* event);
void kColorPicker__KColorPicker_CloseEvent(kColorPicker__KColorPicker* self, QCloseEvent* event);
void kColorPicker__KColorPicker_OnCloseEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseCloseEvent(kColorPicker__KColorPicker* self, QCloseEvent* event);
void kColorPicker__KColorPicker_ContextMenuEvent(kColorPicker__KColorPicker* self, QContextMenuEvent* event);
void kColorPicker__KColorPicker_OnContextMenuEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseContextMenuEvent(kColorPicker__KColorPicker* self, QContextMenuEvent* event);
void kColorPicker__KColorPicker_TabletEvent(kColorPicker__KColorPicker* self, QTabletEvent* event);
void kColorPicker__KColorPicker_OnTabletEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseTabletEvent(kColorPicker__KColorPicker* self, QTabletEvent* event);
void kColorPicker__KColorPicker_DragEnterEvent(kColorPicker__KColorPicker* self, QDragEnterEvent* event);
void kColorPicker__KColorPicker_OnDragEnterEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseDragEnterEvent(kColorPicker__KColorPicker* self, QDragEnterEvent* event);
void kColorPicker__KColorPicker_DragMoveEvent(kColorPicker__KColorPicker* self, QDragMoveEvent* event);
void kColorPicker__KColorPicker_OnDragMoveEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseDragMoveEvent(kColorPicker__KColorPicker* self, QDragMoveEvent* event);
void kColorPicker__KColorPicker_DragLeaveEvent(kColorPicker__KColorPicker* self, QDragLeaveEvent* event);
void kColorPicker__KColorPicker_OnDragLeaveEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseDragLeaveEvent(kColorPicker__KColorPicker* self, QDragLeaveEvent* event);
void kColorPicker__KColorPicker_DropEvent(kColorPicker__KColorPicker* self, QDropEvent* event);
void kColorPicker__KColorPicker_OnDropEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseDropEvent(kColorPicker__KColorPicker* self, QDropEvent* event);
void kColorPicker__KColorPicker_ShowEvent(kColorPicker__KColorPicker* self, QShowEvent* event);
void kColorPicker__KColorPicker_OnShowEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseShowEvent(kColorPicker__KColorPicker* self, QShowEvent* event);
void kColorPicker__KColorPicker_HideEvent(kColorPicker__KColorPicker* self, QHideEvent* event);
void kColorPicker__KColorPicker_OnHideEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseHideEvent(kColorPicker__KColorPicker* self, QHideEvent* event);
bool kColorPicker__KColorPicker_NativeEvent(kColorPicker__KColorPicker* self, const libqt_string eventType, void* message, intptr_t* result);
void kColorPicker__KColorPicker_OnNativeEvent(kColorPicker__KColorPicker* self, intptr_t slot);
bool kColorPicker__KColorPicker_QBaseNativeEvent(kColorPicker__KColorPicker* self, const libqt_string eventType, void* message, intptr_t* result);
int kColorPicker__KColorPicker_Metric(const kColorPicker__KColorPicker* self, int param1);
void kColorPicker__KColorPicker_OnMetric(const kColorPicker__KColorPicker* self, intptr_t slot);
int kColorPicker__KColorPicker_QBaseMetric(const kColorPicker__KColorPicker* self, int param1);
void kColorPicker__KColorPicker_InitPainter(const kColorPicker__KColorPicker* self, QPainter* painter);
void kColorPicker__KColorPicker_OnInitPainter(const kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseInitPainter(const kColorPicker__KColorPicker* self, QPainter* painter);
QPaintDevice* kColorPicker__KColorPicker_Redirected(const kColorPicker__KColorPicker* self, QPoint* offset);
void kColorPicker__KColorPicker_OnRedirected(const kColorPicker__KColorPicker* self, intptr_t slot);
QPaintDevice* kColorPicker__KColorPicker_QBaseRedirected(const kColorPicker__KColorPicker* self, QPoint* offset);
QPainter* kColorPicker__KColorPicker_SharedPainter(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnSharedPainter(const kColorPicker__KColorPicker* self, intptr_t slot);
QPainter* kColorPicker__KColorPicker_QBaseSharedPainter(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_InputMethodEvent(kColorPicker__KColorPicker* self, QInputMethodEvent* param1);
void kColorPicker__KColorPicker_OnInputMethodEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseInputMethodEvent(kColorPicker__KColorPicker* self, QInputMethodEvent* param1);
QVariant* kColorPicker__KColorPicker_InputMethodQuery(const kColorPicker__KColorPicker* self, int param1);
void kColorPicker__KColorPicker_OnInputMethodQuery(const kColorPicker__KColorPicker* self, intptr_t slot);
QVariant* kColorPicker__KColorPicker_QBaseInputMethodQuery(const kColorPicker__KColorPicker* self, int param1);
bool kColorPicker__KColorPicker_FocusNextPrevChild(kColorPicker__KColorPicker* self, bool next);
void kColorPicker__KColorPicker_OnFocusNextPrevChild(kColorPicker__KColorPicker* self, intptr_t slot);
bool kColorPicker__KColorPicker_QBaseFocusNextPrevChild(kColorPicker__KColorPicker* self, bool next);
bool kColorPicker__KColorPicker_EventFilter(kColorPicker__KColorPicker* self, QObject* watched, QEvent* event);
void kColorPicker__KColorPicker_OnEventFilter(kColorPicker__KColorPicker* self, intptr_t slot);
bool kColorPicker__KColorPicker_QBaseEventFilter(kColorPicker__KColorPicker* self, QObject* watched, QEvent* event);
void kColorPicker__KColorPicker_ChildEvent(kColorPicker__KColorPicker* self, QChildEvent* event);
void kColorPicker__KColorPicker_OnChildEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseChildEvent(kColorPicker__KColorPicker* self, QChildEvent* event);
void kColorPicker__KColorPicker_CustomEvent(kColorPicker__KColorPicker* self, QEvent* event);
void kColorPicker__KColorPicker_OnCustomEvent(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseCustomEvent(kColorPicker__KColorPicker* self, QEvent* event);
void kColorPicker__KColorPicker_ConnectNotify(kColorPicker__KColorPicker* self, const QMetaMethod* signal);
void kColorPicker__KColorPicker_OnConnectNotify(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseConnectNotify(kColorPicker__KColorPicker* self, const QMetaMethod* signal);
void kColorPicker__KColorPicker_DisconnectNotify(kColorPicker__KColorPicker* self, const QMetaMethod* signal);
void kColorPicker__KColorPicker_OnDisconnectNotify(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseDisconnectNotify(kColorPicker__KColorPicker* self, const QMetaMethod* signal);
void kColorPicker__KColorPicker_UpdateMicroFocus(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnUpdateMicroFocus(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseUpdateMicroFocus(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_Create(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnCreate(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseCreate(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_Destroy(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnDestroy(kColorPicker__KColorPicker* self, intptr_t slot);
void kColorPicker__KColorPicker_QBaseDestroy(kColorPicker__KColorPicker* self);
bool kColorPicker__KColorPicker_FocusNextChild(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnFocusNextChild(kColorPicker__KColorPicker* self, intptr_t slot);
bool kColorPicker__KColorPicker_QBaseFocusNextChild(kColorPicker__KColorPicker* self);
bool kColorPicker__KColorPicker_FocusPreviousChild(kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnFocusPreviousChild(kColorPicker__KColorPicker* self, intptr_t slot);
bool kColorPicker__KColorPicker_QBaseFocusPreviousChild(kColorPicker__KColorPicker* self);
QObject* kColorPicker__KColorPicker_Sender(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnSender(const kColorPicker__KColorPicker* self, intptr_t slot);
QObject* kColorPicker__KColorPicker_QBaseSender(const kColorPicker__KColorPicker* self);
int kColorPicker__KColorPicker_SenderSignalIndex(const kColorPicker__KColorPicker* self);
void kColorPicker__KColorPicker_OnSenderSignalIndex(const kColorPicker__KColorPicker* self, intptr_t slot);
int kColorPicker__KColorPicker_QBaseSenderSignalIndex(const kColorPicker__KColorPicker* self);
int kColorPicker__KColorPicker_Receivers(const kColorPicker__KColorPicker* self, const char* signal);
void kColorPicker__KColorPicker_OnReceivers(const kColorPicker__KColorPicker* self, intptr_t slot);
int kColorPicker__KColorPicker_QBaseReceivers(const kColorPicker__KColorPicker* self, const char* signal);
bool kColorPicker__KColorPicker_IsSignalConnected(const kColorPicker__KColorPicker* self, const QMetaMethod* signal);
void kColorPicker__KColorPicker_OnIsSignalConnected(const kColorPicker__KColorPicker* self, intptr_t slot);
bool kColorPicker__KColorPicker_QBaseIsSignalConnected(const kColorPicker__KColorPicker* self, const QMetaMethod* signal);
double kColorPicker__KColorPicker_GetDecodedMetricF(const kColorPicker__KColorPicker* self, int metricA, int metricB);
void kColorPicker__KColorPicker_OnGetDecodedMetricF(const kColorPicker__KColorPicker* self, intptr_t slot);
double kColorPicker__KColorPicker_QBaseGetDecodedMetricF(const kColorPicker__KColorPicker* self, int metricA, int metricB);
void kColorPicker__KColorPicker_Delete(kColorPicker__KColorPicker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
