#pragma once
#ifndef SRCC_LIBQABSTRACTSPINBOX_H
#define SRCC_LIBQABSTRACTSPINBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractSpinBox QAbstractSpinBox;
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLayout QLayout;
typedef struct QLineEdit QLineEdit;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOptionSpinBox QStyleOptionSpinBox;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QAbstractSpinBox::ButtonSymbols ButtonSymbols;     // C++ enum
typedef QAbstractSpinBox::CorrectionMode CorrectionMode;   // C++ enum
typedef QAbstractSpinBox::StepEnabled StepEnabled;         // C++ QFlags
typedef QAbstractSpinBox::StepEnabledFlag StepEnabledFlag; // C++ enum
typedef QAbstractSpinBox::StepType StepType;               // C++ enum
#else
typedef int ButtonSymbols;   // C ABI enum
typedef int CorrectionMode;  // C ABI enum
typedef int StepEnabled;     // C ABI QFlags
typedef int StepEnabledFlag; // C ABI enum
typedef int StepType;        // C ABI enum
#endif

QAbstractSpinBox* QAbstractSpinBox_new(QWidget* parent);
QAbstractSpinBox* QAbstractSpinBox_new2();
QMetaObject* QAbstractSpinBox_MetaObject(const QAbstractSpinBox* self);
void* QAbstractSpinBox_Metacast(QAbstractSpinBox* self, const char* param1);
int QAbstractSpinBox_Metacall(QAbstractSpinBox* self, int param1, int param2, void** param3);
void QAbstractSpinBox_OnMetacall(QAbstractSpinBox* self, intptr_t slot);
int QAbstractSpinBox_QBaseMetacall(QAbstractSpinBox* self, int param1, int param2, void** param3);
libqt_string QAbstractSpinBox_Tr(const char* s);
int QAbstractSpinBox_ButtonSymbols(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, int bs);
void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, int cm);
int QAbstractSpinBox_CorrectionMode(const QAbstractSpinBox* self);
bool QAbstractSpinBox_HasAcceptableInput(const QAbstractSpinBox* self);
libqt_string QAbstractSpinBox_Text(const QAbstractSpinBox* self);
libqt_string QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, libqt_string txt);
bool QAbstractSpinBox_Wrapping(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w);
void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r);
bool QAbstractSpinBox_IsReadOnly(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt);
bool QAbstractSpinBox_KeyboardTracking(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag);
int QAbstractSpinBox_Alignment(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame);
bool QAbstractSpinBox_HasFrame(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on);
bool QAbstractSpinBox_IsAccelerated(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown);
bool QAbstractSpinBox_IsGroupSeparatorShown(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnSizeHint(const QAbstractSpinBox* self, intptr_t slot);
QSize* QAbstractSpinBox_QBaseSizeHint(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnMinimumSizeHint(const QAbstractSpinBox* self, intptr_t slot);
QSize* QAbstractSpinBox_QBaseMinimumSizeHint(const QAbstractSpinBox* self);
void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self);
bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_OnEvent(QAbstractSpinBox* self, intptr_t slot);
bool QAbstractSpinBox_QBaseEvent(QAbstractSpinBox* self, QEvent* event);
QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, int param1);
void QAbstractSpinBox_OnInputMethodQuery(const QAbstractSpinBox* self, intptr_t slot);
QVariant* QAbstractSpinBox_QBaseInputMethodQuery(const QAbstractSpinBox* self, int param1);
int QAbstractSpinBox_Validate(const QAbstractSpinBox* self, libqt_string input, int* pos);
void QAbstractSpinBox_OnValidate(const QAbstractSpinBox* self, intptr_t slot);
int QAbstractSpinBox_QBaseValidate(const QAbstractSpinBox* self, libqt_string input, int* pos);
void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, libqt_string input);
void QAbstractSpinBox_OnFixup(const QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseFixup(const QAbstractSpinBox* self, libqt_string input);
void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps);
void QAbstractSpinBox_OnStepBy(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseStepBy(QAbstractSpinBox* self, int steps);
void QAbstractSpinBox_StepUp(QAbstractSpinBox* self);
void QAbstractSpinBox_StepDown(QAbstractSpinBox* self);
void QAbstractSpinBox_SelectAll(QAbstractSpinBox* self);
void QAbstractSpinBox_Clear(QAbstractSpinBox* self);
void QAbstractSpinBox_OnClear(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseClear(QAbstractSpinBox* self);
void QAbstractSpinBox_ResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
void QAbstractSpinBox_OnResizeEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
void QAbstractSpinBox_KeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_OnKeyPressEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseKeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_KeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_OnKeyReleaseEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseKeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_WheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
void QAbstractSpinBox_OnWheelEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseWheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
void QAbstractSpinBox_FocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_OnFocusInEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseFocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_FocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_OnFocusOutEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseFocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_ContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
void QAbstractSpinBox_OnContextMenuEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
void QAbstractSpinBox_ChangeEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_OnChangeEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseChangeEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_CloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
void QAbstractSpinBox_OnCloseEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseCloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
void QAbstractSpinBox_HideEvent(QAbstractSpinBox* self, QHideEvent* event);
void QAbstractSpinBox_OnHideEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseHideEvent(QAbstractSpinBox* self, QHideEvent* event);
void QAbstractSpinBox_MousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_OnMousePressEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseMousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_MouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_OnMouseReleaseEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseMouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_MouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_OnMouseMoveEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseMouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_TimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
void QAbstractSpinBox_OnTimerEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseTimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
void QAbstractSpinBox_PaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
void QAbstractSpinBox_OnPaintEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBasePaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
void QAbstractSpinBox_ShowEvent(QAbstractSpinBox* self, QShowEvent* event);
void QAbstractSpinBox_OnShowEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseShowEvent(QAbstractSpinBox* self, QShowEvent* event);
void QAbstractSpinBox_InitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
void QAbstractSpinBox_OnInitStyleOption(const QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseInitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
int QAbstractSpinBox_StepEnabled(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnStepEnabled(const QAbstractSpinBox* self, intptr_t slot);
int QAbstractSpinBox_QBaseStepEnabled(const QAbstractSpinBox* self);
void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self);
void QAbstractSpinBox_Connect_EditingFinished(QAbstractSpinBox* self, intptr_t slot);
libqt_string QAbstractSpinBox_Tr2(const char* s, const char* c);
libqt_string QAbstractSpinBox_Tr3(const char* s, const char* c, int n);
int QAbstractSpinBox_DevType(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnDevType(const QAbstractSpinBox* self, intptr_t slot);
int QAbstractSpinBox_QBaseDevType(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetVisible(QAbstractSpinBox* self, bool visible);
void QAbstractSpinBox_OnSetVisible(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseSetVisible(QAbstractSpinBox* self, bool visible);
int QAbstractSpinBox_HeightForWidth(const QAbstractSpinBox* self, int param1);
void QAbstractSpinBox_OnHeightForWidth(const QAbstractSpinBox* self, intptr_t slot);
int QAbstractSpinBox_QBaseHeightForWidth(const QAbstractSpinBox* self, int param1);
bool QAbstractSpinBox_HasHeightForWidth(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnHasHeightForWidth(const QAbstractSpinBox* self, intptr_t slot);
bool QAbstractSpinBox_QBaseHasHeightForWidth(const QAbstractSpinBox* self);
QPaintEngine* QAbstractSpinBox_PaintEngine(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnPaintEngine(const QAbstractSpinBox* self, intptr_t slot);
QPaintEngine* QAbstractSpinBox_QBasePaintEngine(const QAbstractSpinBox* self);
void QAbstractSpinBox_MouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_OnMouseDoubleClickEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseMouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_EnterEvent(QAbstractSpinBox* self, QEnterEvent* event);
void QAbstractSpinBox_OnEnterEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseEnterEvent(QAbstractSpinBox* self, QEnterEvent* event);
void QAbstractSpinBox_LeaveEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_OnLeaveEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseLeaveEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_MoveEvent(QAbstractSpinBox* self, QMoveEvent* event);
void QAbstractSpinBox_OnMoveEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseMoveEvent(QAbstractSpinBox* self, QMoveEvent* event);
void QAbstractSpinBox_TabletEvent(QAbstractSpinBox* self, QTabletEvent* event);
void QAbstractSpinBox_OnTabletEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseTabletEvent(QAbstractSpinBox* self, QTabletEvent* event);
void QAbstractSpinBox_ActionEvent(QAbstractSpinBox* self, QActionEvent* event);
void QAbstractSpinBox_OnActionEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseActionEvent(QAbstractSpinBox* self, QActionEvent* event);
void QAbstractSpinBox_DragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event);
void QAbstractSpinBox_OnDragEnterEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseDragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event);
void QAbstractSpinBox_DragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event);
void QAbstractSpinBox_OnDragMoveEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseDragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event);
void QAbstractSpinBox_DragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event);
void QAbstractSpinBox_OnDragLeaveEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseDragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event);
void QAbstractSpinBox_DropEvent(QAbstractSpinBox* self, QDropEvent* event);
void QAbstractSpinBox_OnDropEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseDropEvent(QAbstractSpinBox* self, QDropEvent* event);
bool QAbstractSpinBox_NativeEvent(QAbstractSpinBox* self, libqt_string eventType, void* message, intptr_t* result);
void QAbstractSpinBox_OnNativeEvent(QAbstractSpinBox* self, intptr_t slot);
bool QAbstractSpinBox_QBaseNativeEvent(QAbstractSpinBox* self, libqt_string eventType, void* message, intptr_t* result);
void QAbstractSpinBox_InputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1);
void QAbstractSpinBox_OnInputMethodEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseInputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1);
bool QAbstractSpinBox_FocusNextPrevChild(QAbstractSpinBox* self, bool next);
void QAbstractSpinBox_OnFocusNextPrevChild(QAbstractSpinBox* self, intptr_t slot);
bool QAbstractSpinBox_QBaseFocusNextPrevChild(QAbstractSpinBox* self, bool next);
bool QAbstractSpinBox_EventFilter(QAbstractSpinBox* self, QObject* watched, QEvent* event);
void QAbstractSpinBox_OnEventFilter(QAbstractSpinBox* self, intptr_t slot);
bool QAbstractSpinBox_QBaseEventFilter(QAbstractSpinBox* self, QObject* watched, QEvent* event);
void QAbstractSpinBox_ChildEvent(QAbstractSpinBox* self, QChildEvent* event);
void QAbstractSpinBox_OnChildEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseChildEvent(QAbstractSpinBox* self, QChildEvent* event);
void QAbstractSpinBox_CustomEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_OnCustomEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseCustomEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_ConnectNotify(QAbstractSpinBox* self, QMetaMethod* signal);
void QAbstractSpinBox_OnConnectNotify(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseConnectNotify(QAbstractSpinBox* self, QMetaMethod* signal);
void QAbstractSpinBox_DisconnectNotify(QAbstractSpinBox* self, QMetaMethod* signal);
void QAbstractSpinBox_OnDisconnectNotify(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseDisconnectNotify(QAbstractSpinBox* self, QMetaMethod* signal);
int QAbstractSpinBox_Metric(const QAbstractSpinBox* self, int param1);
void QAbstractSpinBox_OnMetric(const QAbstractSpinBox* self, intptr_t slot);
int QAbstractSpinBox_QBaseMetric(const QAbstractSpinBox* self, int param1);
void QAbstractSpinBox_InitPainter(const QAbstractSpinBox* self, QPainter* painter);
void QAbstractSpinBox_OnInitPainter(const QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseInitPainter(const QAbstractSpinBox* self, QPainter* painter);
QPaintDevice* QAbstractSpinBox_Redirected(const QAbstractSpinBox* self, QPoint* offset);
void QAbstractSpinBox_OnRedirected(const QAbstractSpinBox* self, intptr_t slot);
QPaintDevice* QAbstractSpinBox_QBaseRedirected(const QAbstractSpinBox* self, QPoint* offset);
QPainter* QAbstractSpinBox_SharedPainter(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnSharedPainter(const QAbstractSpinBox* self, intptr_t slot);
QPainter* QAbstractSpinBox_QBaseSharedPainter(const QAbstractSpinBox* self);
QLineEdit* QAbstractSpinBox_LineEdit(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnLineEdit(const QAbstractSpinBox* self, intptr_t slot);
QLineEdit* QAbstractSpinBox_QBaseLineEdit(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetLineEdit(QAbstractSpinBox* self, QLineEdit* edit);
void QAbstractSpinBox_OnSetLineEdit(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseSetLineEdit(QAbstractSpinBox* self, QLineEdit* edit);
void QAbstractSpinBox_UpdateMicroFocus(QAbstractSpinBox* self);
void QAbstractSpinBox_OnUpdateMicroFocus(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseUpdateMicroFocus(QAbstractSpinBox* self);
void QAbstractSpinBox_Create(QAbstractSpinBox* self);
void QAbstractSpinBox_OnCreate(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseCreate(QAbstractSpinBox* self);
void QAbstractSpinBox_Destroy(QAbstractSpinBox* self);
void QAbstractSpinBox_OnDestroy(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseDestroy(QAbstractSpinBox* self);
bool QAbstractSpinBox_FocusNextChild(QAbstractSpinBox* self);
void QAbstractSpinBox_OnFocusNextChild(QAbstractSpinBox* self, intptr_t slot);
bool QAbstractSpinBox_QBaseFocusNextChild(QAbstractSpinBox* self);
bool QAbstractSpinBox_FocusPreviousChild(QAbstractSpinBox* self);
void QAbstractSpinBox_OnFocusPreviousChild(QAbstractSpinBox* self, intptr_t slot);
bool QAbstractSpinBox_QBaseFocusPreviousChild(QAbstractSpinBox* self);
QObject* QAbstractSpinBox_Sender(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnSender(const QAbstractSpinBox* self, intptr_t slot);
QObject* QAbstractSpinBox_QBaseSender(const QAbstractSpinBox* self);
int QAbstractSpinBox_SenderSignalIndex(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnSenderSignalIndex(const QAbstractSpinBox* self, intptr_t slot);
int QAbstractSpinBox_QBaseSenderSignalIndex(const QAbstractSpinBox* self);
int QAbstractSpinBox_Receivers(const QAbstractSpinBox* self, const char* signal);
void QAbstractSpinBox_OnReceivers(const QAbstractSpinBox* self, intptr_t slot);
int QAbstractSpinBox_QBaseReceivers(const QAbstractSpinBox* self, const char* signal);
bool QAbstractSpinBox_IsSignalConnected(const QAbstractSpinBox* self, QMetaMethod* signal);
void QAbstractSpinBox_OnIsSignalConnected(const QAbstractSpinBox* self, intptr_t slot);
bool QAbstractSpinBox_QBaseIsSignalConnected(const QAbstractSpinBox* self, QMetaMethod* signal);
void QAbstractSpinBox_Delete(QAbstractSpinBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
