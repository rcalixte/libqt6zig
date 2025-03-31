#pragma once
#ifndef SRCC_LIBQFRAME_H
#define SRCC_LIBQFRAME_H

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
typedef struct QFrame QFrame;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLayout QLayout;
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
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QFrame::Shadow Shadow;       // C++ enum
typedef QFrame::Shape Shape;         // C++ enum
typedef QFrame::StyleMask StyleMask; // C++ enum
#else
typedef int Shadow;    // C ABI enum
typedef int Shape;     // C ABI enum
typedef int StyleMask; // C ABI enum
#endif

QFrame* QFrame_new(QWidget* parent);
QFrame* QFrame_new2();
QFrame* QFrame_new3(QWidget* parent, int f);
QMetaObject* QFrame_MetaObject(const QFrame* self);
void* QFrame_Metacast(QFrame* self, const char* param1);
int QFrame_Metacall(QFrame* self, int param1, int param2, void** param3);
void QFrame_OnMetacall(QFrame* self, intptr_t slot);
int QFrame_QBaseMetacall(QFrame* self, int param1, int param2, void** param3);
libqt_string QFrame_Tr(const char* s);
int QFrame_FrameStyle(const QFrame* self);
void QFrame_SetFrameStyle(QFrame* self, int frameStyle);
int QFrame_FrameWidth(const QFrame* self);
QSize* QFrame_SizeHint(const QFrame* self);
void QFrame_OnSizeHint(const QFrame* self, intptr_t slot);
QSize* QFrame_QBaseSizeHint(const QFrame* self);
int QFrame_FrameShape(const QFrame* self);
void QFrame_SetFrameShape(QFrame* self, int frameShape);
int QFrame_FrameShadow(const QFrame* self);
void QFrame_SetFrameShadow(QFrame* self, int frameShadow);
int QFrame_LineWidth(const QFrame* self);
void QFrame_SetLineWidth(QFrame* self, int lineWidth);
int QFrame_MidLineWidth(const QFrame* self);
void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth);
QRect* QFrame_FrameRect(const QFrame* self);
void QFrame_SetFrameRect(QFrame* self, QRect* frameRect);
bool QFrame_Event(QFrame* self, QEvent* e);
void QFrame_OnEvent(QFrame* self, intptr_t slot);
bool QFrame_QBaseEvent(QFrame* self, QEvent* e);
void QFrame_PaintEvent(QFrame* self, QPaintEvent* param1);
void QFrame_OnPaintEvent(QFrame* self, intptr_t slot);
void QFrame_QBasePaintEvent(QFrame* self, QPaintEvent* param1);
void QFrame_ChangeEvent(QFrame* self, QEvent* param1);
void QFrame_OnChangeEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseChangeEvent(QFrame* self, QEvent* param1);
void QFrame_InitStyleOption(const QFrame* self, QStyleOptionFrame* option);
void QFrame_OnInitStyleOption(const QFrame* self, intptr_t slot);
void QFrame_QBaseInitStyleOption(const QFrame* self, QStyleOptionFrame* option);
libqt_string QFrame_Tr2(const char* s, const char* c);
libqt_string QFrame_Tr3(const char* s, const char* c, int n);
int QFrame_DevType(const QFrame* self);
void QFrame_OnDevType(const QFrame* self, intptr_t slot);
int QFrame_QBaseDevType(const QFrame* self);
void QFrame_SetVisible(QFrame* self, bool visible);
void QFrame_OnSetVisible(QFrame* self, intptr_t slot);
void QFrame_QBaseSetVisible(QFrame* self, bool visible);
QSize* QFrame_MinimumSizeHint(const QFrame* self);
void QFrame_OnMinimumSizeHint(const QFrame* self, intptr_t slot);
QSize* QFrame_QBaseMinimumSizeHint(const QFrame* self);
int QFrame_HeightForWidth(const QFrame* self, int param1);
void QFrame_OnHeightForWidth(const QFrame* self, intptr_t slot);
int QFrame_QBaseHeightForWidth(const QFrame* self, int param1);
bool QFrame_HasHeightForWidth(const QFrame* self);
void QFrame_OnHasHeightForWidth(const QFrame* self, intptr_t slot);
bool QFrame_QBaseHasHeightForWidth(const QFrame* self);
QPaintEngine* QFrame_PaintEngine(const QFrame* self);
void QFrame_OnPaintEngine(const QFrame* self, intptr_t slot);
QPaintEngine* QFrame_QBasePaintEngine(const QFrame* self);
void QFrame_MousePressEvent(QFrame* self, QMouseEvent* event);
void QFrame_OnMousePressEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseMousePressEvent(QFrame* self, QMouseEvent* event);
void QFrame_MouseReleaseEvent(QFrame* self, QMouseEvent* event);
void QFrame_OnMouseReleaseEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseMouseReleaseEvent(QFrame* self, QMouseEvent* event);
void QFrame_MouseDoubleClickEvent(QFrame* self, QMouseEvent* event);
void QFrame_OnMouseDoubleClickEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseMouseDoubleClickEvent(QFrame* self, QMouseEvent* event);
void QFrame_MouseMoveEvent(QFrame* self, QMouseEvent* event);
void QFrame_OnMouseMoveEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseMouseMoveEvent(QFrame* self, QMouseEvent* event);
void QFrame_WheelEvent(QFrame* self, QWheelEvent* event);
void QFrame_OnWheelEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseWheelEvent(QFrame* self, QWheelEvent* event);
void QFrame_KeyPressEvent(QFrame* self, QKeyEvent* event);
void QFrame_OnKeyPressEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseKeyPressEvent(QFrame* self, QKeyEvent* event);
void QFrame_KeyReleaseEvent(QFrame* self, QKeyEvent* event);
void QFrame_OnKeyReleaseEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseKeyReleaseEvent(QFrame* self, QKeyEvent* event);
void QFrame_FocusInEvent(QFrame* self, QFocusEvent* event);
void QFrame_OnFocusInEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseFocusInEvent(QFrame* self, QFocusEvent* event);
void QFrame_FocusOutEvent(QFrame* self, QFocusEvent* event);
void QFrame_OnFocusOutEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseFocusOutEvent(QFrame* self, QFocusEvent* event);
void QFrame_EnterEvent(QFrame* self, QEnterEvent* event);
void QFrame_OnEnterEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseEnterEvent(QFrame* self, QEnterEvent* event);
void QFrame_LeaveEvent(QFrame* self, QEvent* event);
void QFrame_OnLeaveEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseLeaveEvent(QFrame* self, QEvent* event);
void QFrame_MoveEvent(QFrame* self, QMoveEvent* event);
void QFrame_OnMoveEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseMoveEvent(QFrame* self, QMoveEvent* event);
void QFrame_ResizeEvent(QFrame* self, QResizeEvent* event);
void QFrame_OnResizeEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseResizeEvent(QFrame* self, QResizeEvent* event);
void QFrame_CloseEvent(QFrame* self, QCloseEvent* event);
void QFrame_OnCloseEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseCloseEvent(QFrame* self, QCloseEvent* event);
void QFrame_ContextMenuEvent(QFrame* self, QContextMenuEvent* event);
void QFrame_OnContextMenuEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseContextMenuEvent(QFrame* self, QContextMenuEvent* event);
void QFrame_TabletEvent(QFrame* self, QTabletEvent* event);
void QFrame_OnTabletEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseTabletEvent(QFrame* self, QTabletEvent* event);
void QFrame_ActionEvent(QFrame* self, QActionEvent* event);
void QFrame_OnActionEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseActionEvent(QFrame* self, QActionEvent* event);
void QFrame_DragEnterEvent(QFrame* self, QDragEnterEvent* event);
void QFrame_OnDragEnterEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseDragEnterEvent(QFrame* self, QDragEnterEvent* event);
void QFrame_DragMoveEvent(QFrame* self, QDragMoveEvent* event);
void QFrame_OnDragMoveEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseDragMoveEvent(QFrame* self, QDragMoveEvent* event);
void QFrame_DragLeaveEvent(QFrame* self, QDragLeaveEvent* event);
void QFrame_OnDragLeaveEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseDragLeaveEvent(QFrame* self, QDragLeaveEvent* event);
void QFrame_DropEvent(QFrame* self, QDropEvent* event);
void QFrame_OnDropEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseDropEvent(QFrame* self, QDropEvent* event);
void QFrame_ShowEvent(QFrame* self, QShowEvent* event);
void QFrame_OnShowEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseShowEvent(QFrame* self, QShowEvent* event);
void QFrame_HideEvent(QFrame* self, QHideEvent* event);
void QFrame_OnHideEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseHideEvent(QFrame* self, QHideEvent* event);
bool QFrame_NativeEvent(QFrame* self, libqt_string eventType, void* message, intptr_t* result);
void QFrame_OnNativeEvent(QFrame* self, intptr_t slot);
bool QFrame_QBaseNativeEvent(QFrame* self, libqt_string eventType, void* message, intptr_t* result);
void QFrame_InputMethodEvent(QFrame* self, QInputMethodEvent* param1);
void QFrame_OnInputMethodEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseInputMethodEvent(QFrame* self, QInputMethodEvent* param1);
QVariant* QFrame_InputMethodQuery(const QFrame* self, int param1);
void QFrame_OnInputMethodQuery(const QFrame* self, intptr_t slot);
QVariant* QFrame_QBaseInputMethodQuery(const QFrame* self, int param1);
bool QFrame_FocusNextPrevChild(QFrame* self, bool next);
void QFrame_OnFocusNextPrevChild(QFrame* self, intptr_t slot);
bool QFrame_QBaseFocusNextPrevChild(QFrame* self, bool next);
bool QFrame_EventFilter(QFrame* self, QObject* watched, QEvent* event);
void QFrame_OnEventFilter(QFrame* self, intptr_t slot);
bool QFrame_QBaseEventFilter(QFrame* self, QObject* watched, QEvent* event);
void QFrame_TimerEvent(QFrame* self, QTimerEvent* event);
void QFrame_OnTimerEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseTimerEvent(QFrame* self, QTimerEvent* event);
void QFrame_ChildEvent(QFrame* self, QChildEvent* event);
void QFrame_OnChildEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseChildEvent(QFrame* self, QChildEvent* event);
void QFrame_CustomEvent(QFrame* self, QEvent* event);
void QFrame_OnCustomEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseCustomEvent(QFrame* self, QEvent* event);
void QFrame_ConnectNotify(QFrame* self, QMetaMethod* signal);
void QFrame_OnConnectNotify(QFrame* self, intptr_t slot);
void QFrame_QBaseConnectNotify(QFrame* self, QMetaMethod* signal);
void QFrame_DisconnectNotify(QFrame* self, QMetaMethod* signal);
void QFrame_OnDisconnectNotify(QFrame* self, intptr_t slot);
void QFrame_QBaseDisconnectNotify(QFrame* self, QMetaMethod* signal);
int QFrame_Metric(const QFrame* self, int param1);
void QFrame_OnMetric(const QFrame* self, intptr_t slot);
int QFrame_QBaseMetric(const QFrame* self, int param1);
void QFrame_InitPainter(const QFrame* self, QPainter* painter);
void QFrame_OnInitPainter(const QFrame* self, intptr_t slot);
void QFrame_QBaseInitPainter(const QFrame* self, QPainter* painter);
QPaintDevice* QFrame_Redirected(const QFrame* self, QPoint* offset);
void QFrame_OnRedirected(const QFrame* self, intptr_t slot);
QPaintDevice* QFrame_QBaseRedirected(const QFrame* self, QPoint* offset);
QPainter* QFrame_SharedPainter(const QFrame* self);
void QFrame_OnSharedPainter(const QFrame* self, intptr_t slot);
QPainter* QFrame_QBaseSharedPainter(const QFrame* self);
void QFrame_DrawFrame(QFrame* self, QPainter* param1);
void QFrame_OnDrawFrame(QFrame* self, intptr_t slot);
void QFrame_QBaseDrawFrame(QFrame* self, QPainter* param1);
void QFrame_UpdateMicroFocus(QFrame* self);
void QFrame_OnUpdateMicroFocus(QFrame* self, intptr_t slot);
void QFrame_QBaseUpdateMicroFocus(QFrame* self);
void QFrame_Create(QFrame* self);
void QFrame_OnCreate(QFrame* self, intptr_t slot);
void QFrame_QBaseCreate(QFrame* self);
void QFrame_Destroy(QFrame* self);
void QFrame_OnDestroy(QFrame* self, intptr_t slot);
void QFrame_QBaseDestroy(QFrame* self);
bool QFrame_FocusNextChild(QFrame* self);
void QFrame_OnFocusNextChild(QFrame* self, intptr_t slot);
bool QFrame_QBaseFocusNextChild(QFrame* self);
bool QFrame_FocusPreviousChild(QFrame* self);
void QFrame_OnFocusPreviousChild(QFrame* self, intptr_t slot);
bool QFrame_QBaseFocusPreviousChild(QFrame* self);
QObject* QFrame_Sender(const QFrame* self);
void QFrame_OnSender(const QFrame* self, intptr_t slot);
QObject* QFrame_QBaseSender(const QFrame* self);
int QFrame_SenderSignalIndex(const QFrame* self);
void QFrame_OnSenderSignalIndex(const QFrame* self, intptr_t slot);
int QFrame_QBaseSenderSignalIndex(const QFrame* self);
int QFrame_Receivers(const QFrame* self, const char* signal);
void QFrame_OnReceivers(const QFrame* self, intptr_t slot);
int QFrame_QBaseReceivers(const QFrame* self, const char* signal);
bool QFrame_IsSignalConnected(const QFrame* self, QMetaMethod* signal);
void QFrame_OnIsSignalConnected(const QFrame* self, intptr_t slot);
bool QFrame_QBaseIsSignalConnected(const QFrame* self, QMetaMethod* signal);
void QFrame_Delete(QFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
