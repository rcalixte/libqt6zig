#pragma once
#ifndef SRC_CHARTSC_LIBQCHARTVIEW_H
#define SRC_CHARTSC_LIBQCHARTVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QBrush QBrush;
typedef struct QChart QChart;
typedef struct QChartView QChartView;
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
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsView QGraphicsView;
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
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QChartView::RubberBand RubberBand;   // C++ enum
typedef QChartView::RubberBands RubberBands; // C++ QFlags
#else
typedef int RubberBand;  // C ABI enum
typedef int RubberBands; // C ABI QFlags
#endif

QChartView* QChartView_new(QWidget* parent);
QChartView* QChartView_new2();
QChartView* QChartView_new3(QChart* chart);
QChartView* QChartView_new4(QChart* chart, QWidget* parent);
QMetaObject* QChartView_MetaObject(const QChartView* self);
void* QChartView_Metacast(QChartView* self, const char* param1);
int QChartView_Metacall(QChartView* self, int param1, int param2, void** param3);
void QChartView_OnMetacall(QChartView* self, intptr_t slot);
int QChartView_QBaseMetacall(QChartView* self, int param1, int param2, void** param3);
libqt_string QChartView_Tr(const char* s);
void QChartView_SetRubberBand(QChartView* self, int* rubberBands);
int QChartView_RubberBand(const QChartView* self);
QChart* QChartView_Chart(const QChartView* self);
void QChartView_SetChart(QChartView* self, QChart* chart);
void QChartView_ResizeEvent(QChartView* self, QResizeEvent* event);
void QChartView_OnResizeEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseResizeEvent(QChartView* self, QResizeEvent* event);
void QChartView_MousePressEvent(QChartView* self, QMouseEvent* event);
void QChartView_OnMousePressEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseMousePressEvent(QChartView* self, QMouseEvent* event);
void QChartView_MouseMoveEvent(QChartView* self, QMouseEvent* event);
void QChartView_OnMouseMoveEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseMouseMoveEvent(QChartView* self, QMouseEvent* event);
void QChartView_MouseReleaseEvent(QChartView* self, QMouseEvent* event);
void QChartView_OnMouseReleaseEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseMouseReleaseEvent(QChartView* self, QMouseEvent* event);
libqt_string QChartView_Tr2(const char* s, const char* c);
libqt_string QChartView_Tr3(const char* s, const char* c, int n);
QSize* QChartView_SizeHint(const QChartView* self);
void QChartView_OnSizeHint(const QChartView* self, intptr_t slot);
QSize* QChartView_QBaseSizeHint(const QChartView* self);
QVariant* QChartView_InputMethodQuery(const QChartView* self, int query);
void QChartView_OnInputMethodQuery(const QChartView* self, intptr_t slot);
QVariant* QChartView_QBaseInputMethodQuery(const QChartView* self, int query);
void QChartView_SetupViewport(QChartView* self, QWidget* widget);
void QChartView_OnSetupViewport(QChartView* self, intptr_t slot);
void QChartView_QBaseSetupViewport(QChartView* self, QWidget* widget);
bool QChartView_Event(QChartView* self, QEvent* event);
void QChartView_OnEvent(QChartView* self, intptr_t slot);
bool QChartView_QBaseEvent(QChartView* self, QEvent* event);
bool QChartView_ViewportEvent(QChartView* self, QEvent* event);
void QChartView_OnViewportEvent(QChartView* self, intptr_t slot);
bool QChartView_QBaseViewportEvent(QChartView* self, QEvent* event);
void QChartView_ContextMenuEvent(QChartView* self, QContextMenuEvent* event);
void QChartView_OnContextMenuEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseContextMenuEvent(QChartView* self, QContextMenuEvent* event);
void QChartView_DragEnterEvent(QChartView* self, QDragEnterEvent* event);
void QChartView_OnDragEnterEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseDragEnterEvent(QChartView* self, QDragEnterEvent* event);
void QChartView_DragLeaveEvent(QChartView* self, QDragLeaveEvent* event);
void QChartView_OnDragLeaveEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseDragLeaveEvent(QChartView* self, QDragLeaveEvent* event);
void QChartView_DragMoveEvent(QChartView* self, QDragMoveEvent* event);
void QChartView_OnDragMoveEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseDragMoveEvent(QChartView* self, QDragMoveEvent* event);
void QChartView_DropEvent(QChartView* self, QDropEvent* event);
void QChartView_OnDropEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseDropEvent(QChartView* self, QDropEvent* event);
void QChartView_FocusInEvent(QChartView* self, QFocusEvent* event);
void QChartView_OnFocusInEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseFocusInEvent(QChartView* self, QFocusEvent* event);
bool QChartView_FocusNextPrevChild(QChartView* self, bool next);
void QChartView_OnFocusNextPrevChild(QChartView* self, intptr_t slot);
bool QChartView_QBaseFocusNextPrevChild(QChartView* self, bool next);
void QChartView_FocusOutEvent(QChartView* self, QFocusEvent* event);
void QChartView_OnFocusOutEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseFocusOutEvent(QChartView* self, QFocusEvent* event);
void QChartView_KeyPressEvent(QChartView* self, QKeyEvent* event);
void QChartView_OnKeyPressEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseKeyPressEvent(QChartView* self, QKeyEvent* event);
void QChartView_KeyReleaseEvent(QChartView* self, QKeyEvent* event);
void QChartView_OnKeyReleaseEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseKeyReleaseEvent(QChartView* self, QKeyEvent* event);
void QChartView_MouseDoubleClickEvent(QChartView* self, QMouseEvent* event);
void QChartView_OnMouseDoubleClickEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseMouseDoubleClickEvent(QChartView* self, QMouseEvent* event);
void QChartView_WheelEvent(QChartView* self, QWheelEvent* event);
void QChartView_OnWheelEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseWheelEvent(QChartView* self, QWheelEvent* event);
void QChartView_PaintEvent(QChartView* self, QPaintEvent* event);
void QChartView_OnPaintEvent(QChartView* self, intptr_t slot);
void QChartView_QBasePaintEvent(QChartView* self, QPaintEvent* event);
void QChartView_ScrollContentsBy(QChartView* self, int dx, int dy);
void QChartView_OnScrollContentsBy(QChartView* self, intptr_t slot);
void QChartView_QBaseScrollContentsBy(QChartView* self, int dx, int dy);
void QChartView_ShowEvent(QChartView* self, QShowEvent* event);
void QChartView_OnShowEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseShowEvent(QChartView* self, QShowEvent* event);
void QChartView_InputMethodEvent(QChartView* self, QInputMethodEvent* event);
void QChartView_OnInputMethodEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseInputMethodEvent(QChartView* self, QInputMethodEvent* event);
void QChartView_DrawBackground(QChartView* self, QPainter* painter, QRectF* rect);
void QChartView_OnDrawBackground(QChartView* self, intptr_t slot);
void QChartView_QBaseDrawBackground(QChartView* self, QPainter* painter, QRectF* rect);
void QChartView_DrawForeground(QChartView* self, QPainter* painter, QRectF* rect);
void QChartView_OnDrawForeground(QChartView* self, intptr_t slot);
void QChartView_QBaseDrawForeground(QChartView* self, QPainter* painter, QRectF* rect);
QSize* QChartView_MinimumSizeHint(const QChartView* self);
void QChartView_OnMinimumSizeHint(const QChartView* self, intptr_t slot);
QSize* QChartView_QBaseMinimumSizeHint(const QChartView* self);
bool QChartView_EventFilter(QChartView* self, QObject* param1, QEvent* param2);
void QChartView_OnEventFilter(QChartView* self, intptr_t slot);
bool QChartView_QBaseEventFilter(QChartView* self, QObject* param1, QEvent* param2);
void QChartView_ChangeEvent(QChartView* self, QEvent* param1);
void QChartView_OnChangeEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseChangeEvent(QChartView* self, QEvent* param1);
int QChartView_DevType(const QChartView* self);
void QChartView_OnDevType(const QChartView* self, intptr_t slot);
int QChartView_QBaseDevType(const QChartView* self);
void QChartView_SetVisible(QChartView* self, bool visible);
void QChartView_OnSetVisible(QChartView* self, intptr_t slot);
void QChartView_QBaseSetVisible(QChartView* self, bool visible);
int QChartView_HeightForWidth(const QChartView* self, int param1);
void QChartView_OnHeightForWidth(const QChartView* self, intptr_t slot);
int QChartView_QBaseHeightForWidth(const QChartView* self, int param1);
bool QChartView_HasHeightForWidth(const QChartView* self);
void QChartView_OnHasHeightForWidth(const QChartView* self, intptr_t slot);
bool QChartView_QBaseHasHeightForWidth(const QChartView* self);
QPaintEngine* QChartView_PaintEngine(const QChartView* self);
void QChartView_OnPaintEngine(const QChartView* self, intptr_t slot);
QPaintEngine* QChartView_QBasePaintEngine(const QChartView* self);
void QChartView_EnterEvent(QChartView* self, QEnterEvent* event);
void QChartView_OnEnterEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseEnterEvent(QChartView* self, QEnterEvent* event);
void QChartView_LeaveEvent(QChartView* self, QEvent* event);
void QChartView_OnLeaveEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseLeaveEvent(QChartView* self, QEvent* event);
void QChartView_MoveEvent(QChartView* self, QMoveEvent* event);
void QChartView_OnMoveEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseMoveEvent(QChartView* self, QMoveEvent* event);
void QChartView_CloseEvent(QChartView* self, QCloseEvent* event);
void QChartView_OnCloseEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseCloseEvent(QChartView* self, QCloseEvent* event);
void QChartView_TabletEvent(QChartView* self, QTabletEvent* event);
void QChartView_OnTabletEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseTabletEvent(QChartView* self, QTabletEvent* event);
void QChartView_ActionEvent(QChartView* self, QActionEvent* event);
void QChartView_OnActionEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseActionEvent(QChartView* self, QActionEvent* event);
void QChartView_HideEvent(QChartView* self, QHideEvent* event);
void QChartView_OnHideEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseHideEvent(QChartView* self, QHideEvent* event);
bool QChartView_NativeEvent(QChartView* self, libqt_string eventType, void* message, intptr_t* result);
void QChartView_OnNativeEvent(QChartView* self, intptr_t slot);
bool QChartView_QBaseNativeEvent(QChartView* self, libqt_string eventType, void* message, intptr_t* result);
void QChartView_TimerEvent(QChartView* self, QTimerEvent* event);
void QChartView_OnTimerEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseTimerEvent(QChartView* self, QTimerEvent* event);
void QChartView_ChildEvent(QChartView* self, QChildEvent* event);
void QChartView_OnChildEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseChildEvent(QChartView* self, QChildEvent* event);
void QChartView_CustomEvent(QChartView* self, QEvent* event);
void QChartView_OnCustomEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseCustomEvent(QChartView* self, QEvent* event);
void QChartView_ConnectNotify(QChartView* self, QMetaMethod* signal);
void QChartView_OnConnectNotify(QChartView* self, intptr_t slot);
void QChartView_QBaseConnectNotify(QChartView* self, QMetaMethod* signal);
void QChartView_DisconnectNotify(QChartView* self, QMetaMethod* signal);
void QChartView_OnDisconnectNotify(QChartView* self, intptr_t slot);
void QChartView_QBaseDisconnectNotify(QChartView* self, QMetaMethod* signal);
QSize* QChartView_ViewportSizeHint(const QChartView* self);
void QChartView_OnViewportSizeHint(const QChartView* self, intptr_t slot);
QSize* QChartView_QBaseViewportSizeHint(const QChartView* self);
void QChartView_InitStyleOption(const QChartView* self, QStyleOptionFrame* option);
void QChartView_OnInitStyleOption(const QChartView* self, intptr_t slot);
void QChartView_QBaseInitStyleOption(const QChartView* self, QStyleOptionFrame* option);
int QChartView_Metric(const QChartView* self, int param1);
void QChartView_OnMetric(const QChartView* self, intptr_t slot);
int QChartView_QBaseMetric(const QChartView* self, int param1);
void QChartView_InitPainter(const QChartView* self, QPainter* painter);
void QChartView_OnInitPainter(const QChartView* self, intptr_t slot);
void QChartView_QBaseInitPainter(const QChartView* self, QPainter* painter);
QPaintDevice* QChartView_Redirected(const QChartView* self, QPoint* offset);
void QChartView_OnRedirected(const QChartView* self, intptr_t slot);
QPaintDevice* QChartView_QBaseRedirected(const QChartView* self, QPoint* offset);
QPainter* QChartView_SharedPainter(const QChartView* self);
void QChartView_OnSharedPainter(const QChartView* self, intptr_t slot);
QPainter* QChartView_QBaseSharedPainter(const QChartView* self);
void QChartView_SetViewportMargins(QChartView* self, int left, int top, int right, int bottom);
void QChartView_OnSetViewportMargins(QChartView* self, intptr_t slot);
void QChartView_QBaseSetViewportMargins(QChartView* self, int left, int top, int right, int bottom);
QMargins* QChartView_ViewportMargins(const QChartView* self);
void QChartView_OnViewportMargins(const QChartView* self, intptr_t slot);
QMargins* QChartView_QBaseViewportMargins(const QChartView* self);
void QChartView_DrawFrame(QChartView* self, QPainter* param1);
void QChartView_OnDrawFrame(QChartView* self, intptr_t slot);
void QChartView_QBaseDrawFrame(QChartView* self, QPainter* param1);
void QChartView_UpdateMicroFocus(QChartView* self);
void QChartView_OnUpdateMicroFocus(QChartView* self, intptr_t slot);
void QChartView_QBaseUpdateMicroFocus(QChartView* self);
void QChartView_Create(QChartView* self);
void QChartView_OnCreate(QChartView* self, intptr_t slot);
void QChartView_QBaseCreate(QChartView* self);
void QChartView_Destroy(QChartView* self);
void QChartView_OnDestroy(QChartView* self, intptr_t slot);
void QChartView_QBaseDestroy(QChartView* self);
bool QChartView_FocusNextChild(QChartView* self);
void QChartView_OnFocusNextChild(QChartView* self, intptr_t slot);
bool QChartView_QBaseFocusNextChild(QChartView* self);
bool QChartView_FocusPreviousChild(QChartView* self);
void QChartView_OnFocusPreviousChild(QChartView* self, intptr_t slot);
bool QChartView_QBaseFocusPreviousChild(QChartView* self);
QObject* QChartView_Sender(const QChartView* self);
void QChartView_OnSender(const QChartView* self, intptr_t slot);
QObject* QChartView_QBaseSender(const QChartView* self);
int QChartView_SenderSignalIndex(const QChartView* self);
void QChartView_OnSenderSignalIndex(const QChartView* self, intptr_t slot);
int QChartView_QBaseSenderSignalIndex(const QChartView* self);
int QChartView_Receivers(const QChartView* self, const char* signal);
void QChartView_OnReceivers(const QChartView* self, intptr_t slot);
int QChartView_QBaseReceivers(const QChartView* self, const char* signal);
bool QChartView_IsSignalConnected(const QChartView* self, QMetaMethod* signal);
void QChartView_OnIsSignalConnected(const QChartView* self, intptr_t slot);
bool QChartView_QBaseIsSignalConnected(const QChartView* self, QMetaMethod* signal);
void QChartView_Delete(QChartView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
