#pragma once
#ifndef SRCC_LIBQCALENDARWIDGET_H
#define SRCC_LIBQCALENDARWIDGET_H

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
typedef struct QCalendar QCalendar;
typedef struct QCalendarWidget QCalendarWidget;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
typedef struct QDate QDate;
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
typedef struct QTabletEvent QTabletEvent;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QCalendarWidget::HorizontalHeaderFormat HorizontalHeaderFormat; // C++ enum
typedef QCalendarWidget::SelectionMode SelectionMode;                   // C++ enum
typedef QCalendarWidget::VerticalHeaderFormat VerticalHeaderFormat;     // C++ enum
#else
typedef int HorizontalHeaderFormat; // C ABI enum
typedef int SelectionMode;          // C ABI enum
typedef int VerticalHeaderFormat;   // C ABI enum
#endif

QCalendarWidget* QCalendarWidget_new(QWidget* parent);
QCalendarWidget* QCalendarWidget_new2();
QMetaObject* QCalendarWidget_MetaObject(const QCalendarWidget* self);
void* QCalendarWidget_Metacast(QCalendarWidget* self, const char* param1);
int QCalendarWidget_Metacall(QCalendarWidget* self, int param1, int param2, void** param3);
void QCalendarWidget_OnMetacall(QCalendarWidget* self, intptr_t slot);
int QCalendarWidget_QBaseMetacall(QCalendarWidget* self, int param1, int param2, void** param3);
libqt_string QCalendarWidget_Tr(const char* s);
QSize* QCalendarWidget_SizeHint(const QCalendarWidget* self);
void QCalendarWidget_OnSizeHint(const QCalendarWidget* self, intptr_t slot);
QSize* QCalendarWidget_QBaseSizeHint(const QCalendarWidget* self);
QSize* QCalendarWidget_MinimumSizeHint(const QCalendarWidget* self);
void QCalendarWidget_OnMinimumSizeHint(const QCalendarWidget* self, intptr_t slot);
QSize* QCalendarWidget_QBaseMinimumSizeHint(const QCalendarWidget* self);
QDate* QCalendarWidget_SelectedDate(const QCalendarWidget* self);
int QCalendarWidget_YearShown(const QCalendarWidget* self);
int QCalendarWidget_MonthShown(const QCalendarWidget* self);
QDate* QCalendarWidget_MinimumDate(const QCalendarWidget* self);
void QCalendarWidget_SetMinimumDate(QCalendarWidget* self, QDate* date);
QDate* QCalendarWidget_MaximumDate(const QCalendarWidget* self);
void QCalendarWidget_SetMaximumDate(QCalendarWidget* self, QDate* date);
int QCalendarWidget_FirstDayOfWeek(const QCalendarWidget* self);
void QCalendarWidget_SetFirstDayOfWeek(QCalendarWidget* self, int dayOfWeek);
bool QCalendarWidget_IsNavigationBarVisible(const QCalendarWidget* self);
bool QCalendarWidget_IsGridVisible(const QCalendarWidget* self);
QCalendar* QCalendarWidget_Calendar(const QCalendarWidget* self);
void QCalendarWidget_SetCalendar(QCalendarWidget* self, QCalendar* calendar);
int QCalendarWidget_SelectionMode(const QCalendarWidget* self);
void QCalendarWidget_SetSelectionMode(QCalendarWidget* self, int mode);
int QCalendarWidget_HorizontalHeaderFormat(const QCalendarWidget* self);
void QCalendarWidget_SetHorizontalHeaderFormat(QCalendarWidget* self, int format);
int QCalendarWidget_VerticalHeaderFormat(const QCalendarWidget* self);
void QCalendarWidget_SetVerticalHeaderFormat(QCalendarWidget* self, int format);
QTextCharFormat* QCalendarWidget_HeaderTextFormat(const QCalendarWidget* self);
void QCalendarWidget_SetHeaderTextFormat(QCalendarWidget* self, QTextCharFormat* format);
QTextCharFormat* QCalendarWidget_WeekdayTextFormat(const QCalendarWidget* self, int dayOfWeek);
void QCalendarWidget_SetWeekdayTextFormat(QCalendarWidget* self, int dayOfWeek, QTextCharFormat* format);
libqt_map /* of QDate* to QTextCharFormat* */ QCalendarWidget_DateTextFormat(const QCalendarWidget* self);
QTextCharFormat* QCalendarWidget_DateTextFormatWithDate(const QCalendarWidget* self, QDate* date);
void QCalendarWidget_SetDateTextFormat(QCalendarWidget* self, QDate* date, QTextCharFormat* format);
bool QCalendarWidget_IsDateEditEnabled(const QCalendarWidget* self);
void QCalendarWidget_SetDateEditEnabled(QCalendarWidget* self, bool enable);
int QCalendarWidget_DateEditAcceptDelay(const QCalendarWidget* self);
void QCalendarWidget_SetDateEditAcceptDelay(QCalendarWidget* self, int delay);
bool QCalendarWidget_Event(QCalendarWidget* self, QEvent* event);
void QCalendarWidget_OnEvent(QCalendarWidget* self, intptr_t slot);
bool QCalendarWidget_QBaseEvent(QCalendarWidget* self, QEvent* event);
bool QCalendarWidget_EventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
void QCalendarWidget_OnEventFilter(QCalendarWidget* self, intptr_t slot);
bool QCalendarWidget_QBaseEventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
void QCalendarWidget_MousePressEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_OnMousePressEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseMousePressEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_ResizeEvent(QCalendarWidget* self, QResizeEvent* event);
void QCalendarWidget_OnResizeEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseResizeEvent(QCalendarWidget* self, QResizeEvent* event);
void QCalendarWidget_KeyPressEvent(QCalendarWidget* self, QKeyEvent* event);
void QCalendarWidget_OnKeyPressEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseKeyPressEvent(QCalendarWidget* self, QKeyEvent* event);
void QCalendarWidget_PaintCell(const QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date);
void QCalendarWidget_OnPaintCell(const QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBasePaintCell(const QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date);
void QCalendarWidget_SetSelectedDate(QCalendarWidget* self, QDate* date);
void QCalendarWidget_SetDateRange(QCalendarWidget* self, QDate* min, QDate* max);
void QCalendarWidget_SetCurrentPage(QCalendarWidget* self, int year, int month);
void QCalendarWidget_SetGridVisible(QCalendarWidget* self, bool show);
void QCalendarWidget_SetNavigationBarVisible(QCalendarWidget* self, bool visible);
void QCalendarWidget_ShowNextMonth(QCalendarWidget* self);
void QCalendarWidget_ShowPreviousMonth(QCalendarWidget* self);
void QCalendarWidget_ShowNextYear(QCalendarWidget* self);
void QCalendarWidget_ShowPreviousYear(QCalendarWidget* self);
void QCalendarWidget_ShowSelectedDate(QCalendarWidget* self);
void QCalendarWidget_ShowToday(QCalendarWidget* self);
void QCalendarWidget_SelectionChanged(QCalendarWidget* self);
void QCalendarWidget_Connect_SelectionChanged(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_Clicked(QCalendarWidget* self, QDate* date);
void QCalendarWidget_Connect_Clicked(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_Activated(QCalendarWidget* self, QDate* date);
void QCalendarWidget_Connect_Activated(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_CurrentPageChanged(QCalendarWidget* self, int year, int month);
void QCalendarWidget_Connect_CurrentPageChanged(QCalendarWidget* self, intptr_t slot);
libqt_string QCalendarWidget_Tr2(const char* s, const char* c);
libqt_string QCalendarWidget_Tr3(const char* s, const char* c, int n);
int QCalendarWidget_DevType(const QCalendarWidget* self);
void QCalendarWidget_OnDevType(const QCalendarWidget* self, intptr_t slot);
int QCalendarWidget_QBaseDevType(const QCalendarWidget* self);
void QCalendarWidget_SetVisible(QCalendarWidget* self, bool visible);
void QCalendarWidget_OnSetVisible(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseSetVisible(QCalendarWidget* self, bool visible);
int QCalendarWidget_HeightForWidth(const QCalendarWidget* self, int param1);
void QCalendarWidget_OnHeightForWidth(const QCalendarWidget* self, intptr_t slot);
int QCalendarWidget_QBaseHeightForWidth(const QCalendarWidget* self, int param1);
bool QCalendarWidget_HasHeightForWidth(const QCalendarWidget* self);
void QCalendarWidget_OnHasHeightForWidth(const QCalendarWidget* self, intptr_t slot);
bool QCalendarWidget_QBaseHasHeightForWidth(const QCalendarWidget* self);
QPaintEngine* QCalendarWidget_PaintEngine(const QCalendarWidget* self);
void QCalendarWidget_OnPaintEngine(const QCalendarWidget* self, intptr_t slot);
QPaintEngine* QCalendarWidget_QBasePaintEngine(const QCalendarWidget* self);
void QCalendarWidget_MouseReleaseEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_OnMouseReleaseEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseMouseReleaseEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_MouseDoubleClickEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_OnMouseDoubleClickEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseMouseDoubleClickEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_MouseMoveEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_OnMouseMoveEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseMouseMoveEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_WheelEvent(QCalendarWidget* self, QWheelEvent* event);
void QCalendarWidget_OnWheelEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseWheelEvent(QCalendarWidget* self, QWheelEvent* event);
void QCalendarWidget_KeyReleaseEvent(QCalendarWidget* self, QKeyEvent* event);
void QCalendarWidget_OnKeyReleaseEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseKeyReleaseEvent(QCalendarWidget* self, QKeyEvent* event);
void QCalendarWidget_FocusInEvent(QCalendarWidget* self, QFocusEvent* event);
void QCalendarWidget_OnFocusInEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseFocusInEvent(QCalendarWidget* self, QFocusEvent* event);
void QCalendarWidget_FocusOutEvent(QCalendarWidget* self, QFocusEvent* event);
void QCalendarWidget_OnFocusOutEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseFocusOutEvent(QCalendarWidget* self, QFocusEvent* event);
void QCalendarWidget_EnterEvent(QCalendarWidget* self, QEnterEvent* event);
void QCalendarWidget_OnEnterEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseEnterEvent(QCalendarWidget* self, QEnterEvent* event);
void QCalendarWidget_LeaveEvent(QCalendarWidget* self, QEvent* event);
void QCalendarWidget_OnLeaveEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseLeaveEvent(QCalendarWidget* self, QEvent* event);
void QCalendarWidget_PaintEvent(QCalendarWidget* self, QPaintEvent* event);
void QCalendarWidget_OnPaintEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBasePaintEvent(QCalendarWidget* self, QPaintEvent* event);
void QCalendarWidget_MoveEvent(QCalendarWidget* self, QMoveEvent* event);
void QCalendarWidget_OnMoveEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseMoveEvent(QCalendarWidget* self, QMoveEvent* event);
void QCalendarWidget_CloseEvent(QCalendarWidget* self, QCloseEvent* event);
void QCalendarWidget_OnCloseEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseCloseEvent(QCalendarWidget* self, QCloseEvent* event);
void QCalendarWidget_ContextMenuEvent(QCalendarWidget* self, QContextMenuEvent* event);
void QCalendarWidget_OnContextMenuEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseContextMenuEvent(QCalendarWidget* self, QContextMenuEvent* event);
void QCalendarWidget_TabletEvent(QCalendarWidget* self, QTabletEvent* event);
void QCalendarWidget_OnTabletEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseTabletEvent(QCalendarWidget* self, QTabletEvent* event);
void QCalendarWidget_ActionEvent(QCalendarWidget* self, QActionEvent* event);
void QCalendarWidget_OnActionEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseActionEvent(QCalendarWidget* self, QActionEvent* event);
void QCalendarWidget_DragEnterEvent(QCalendarWidget* self, QDragEnterEvent* event);
void QCalendarWidget_OnDragEnterEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseDragEnterEvent(QCalendarWidget* self, QDragEnterEvent* event);
void QCalendarWidget_DragMoveEvent(QCalendarWidget* self, QDragMoveEvent* event);
void QCalendarWidget_OnDragMoveEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseDragMoveEvent(QCalendarWidget* self, QDragMoveEvent* event);
void QCalendarWidget_DragLeaveEvent(QCalendarWidget* self, QDragLeaveEvent* event);
void QCalendarWidget_OnDragLeaveEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseDragLeaveEvent(QCalendarWidget* self, QDragLeaveEvent* event);
void QCalendarWidget_DropEvent(QCalendarWidget* self, QDropEvent* event);
void QCalendarWidget_OnDropEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseDropEvent(QCalendarWidget* self, QDropEvent* event);
void QCalendarWidget_ShowEvent(QCalendarWidget* self, QShowEvent* event);
void QCalendarWidget_OnShowEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseShowEvent(QCalendarWidget* self, QShowEvent* event);
void QCalendarWidget_HideEvent(QCalendarWidget* self, QHideEvent* event);
void QCalendarWidget_OnHideEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseHideEvent(QCalendarWidget* self, QHideEvent* event);
bool QCalendarWidget_NativeEvent(QCalendarWidget* self, libqt_string eventType, void* message, intptr_t* result);
void QCalendarWidget_OnNativeEvent(QCalendarWidget* self, intptr_t slot);
bool QCalendarWidget_QBaseNativeEvent(QCalendarWidget* self, libqt_string eventType, void* message, intptr_t* result);
void QCalendarWidget_ChangeEvent(QCalendarWidget* self, QEvent* param1);
void QCalendarWidget_OnChangeEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseChangeEvent(QCalendarWidget* self, QEvent* param1);
void QCalendarWidget_InputMethodEvent(QCalendarWidget* self, QInputMethodEvent* param1);
void QCalendarWidget_OnInputMethodEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseInputMethodEvent(QCalendarWidget* self, QInputMethodEvent* param1);
QVariant* QCalendarWidget_InputMethodQuery(const QCalendarWidget* self, int param1);
void QCalendarWidget_OnInputMethodQuery(const QCalendarWidget* self, intptr_t slot);
QVariant* QCalendarWidget_QBaseInputMethodQuery(const QCalendarWidget* self, int param1);
bool QCalendarWidget_FocusNextPrevChild(QCalendarWidget* self, bool next);
void QCalendarWidget_OnFocusNextPrevChild(QCalendarWidget* self, intptr_t slot);
bool QCalendarWidget_QBaseFocusNextPrevChild(QCalendarWidget* self, bool next);
void QCalendarWidget_TimerEvent(QCalendarWidget* self, QTimerEvent* event);
void QCalendarWidget_OnTimerEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseTimerEvent(QCalendarWidget* self, QTimerEvent* event);
void QCalendarWidget_ChildEvent(QCalendarWidget* self, QChildEvent* event);
void QCalendarWidget_OnChildEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseChildEvent(QCalendarWidget* self, QChildEvent* event);
void QCalendarWidget_CustomEvent(QCalendarWidget* self, QEvent* event);
void QCalendarWidget_OnCustomEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseCustomEvent(QCalendarWidget* self, QEvent* event);
void QCalendarWidget_ConnectNotify(QCalendarWidget* self, QMetaMethod* signal);
void QCalendarWidget_OnConnectNotify(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseConnectNotify(QCalendarWidget* self, QMetaMethod* signal);
void QCalendarWidget_DisconnectNotify(QCalendarWidget* self, QMetaMethod* signal);
void QCalendarWidget_OnDisconnectNotify(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseDisconnectNotify(QCalendarWidget* self, QMetaMethod* signal);
int QCalendarWidget_Metric(const QCalendarWidget* self, int param1);
void QCalendarWidget_OnMetric(const QCalendarWidget* self, intptr_t slot);
int QCalendarWidget_QBaseMetric(const QCalendarWidget* self, int param1);
void QCalendarWidget_InitPainter(const QCalendarWidget* self, QPainter* painter);
void QCalendarWidget_OnInitPainter(const QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseInitPainter(const QCalendarWidget* self, QPainter* painter);
QPaintDevice* QCalendarWidget_Redirected(const QCalendarWidget* self, QPoint* offset);
void QCalendarWidget_OnRedirected(const QCalendarWidget* self, intptr_t slot);
QPaintDevice* QCalendarWidget_QBaseRedirected(const QCalendarWidget* self, QPoint* offset);
QPainter* QCalendarWidget_SharedPainter(const QCalendarWidget* self);
void QCalendarWidget_OnSharedPainter(const QCalendarWidget* self, intptr_t slot);
QPainter* QCalendarWidget_QBaseSharedPainter(const QCalendarWidget* self);
void QCalendarWidget_UpdateCell(QCalendarWidget* self, QDate* date);
void QCalendarWidget_OnUpdateCell(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseUpdateCell(QCalendarWidget* self, QDate* date);
void QCalendarWidget_UpdateCells(QCalendarWidget* self);
void QCalendarWidget_OnUpdateCells(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseUpdateCells(QCalendarWidget* self);
void QCalendarWidget_UpdateMicroFocus(QCalendarWidget* self);
void QCalendarWidget_OnUpdateMicroFocus(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseUpdateMicroFocus(QCalendarWidget* self);
void QCalendarWidget_Create(QCalendarWidget* self);
void QCalendarWidget_OnCreate(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseCreate(QCalendarWidget* self);
void QCalendarWidget_Destroy(QCalendarWidget* self);
void QCalendarWidget_OnDestroy(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseDestroy(QCalendarWidget* self);
bool QCalendarWidget_FocusNextChild(QCalendarWidget* self);
void QCalendarWidget_OnFocusNextChild(QCalendarWidget* self, intptr_t slot);
bool QCalendarWidget_QBaseFocusNextChild(QCalendarWidget* self);
bool QCalendarWidget_FocusPreviousChild(QCalendarWidget* self);
void QCalendarWidget_OnFocusPreviousChild(QCalendarWidget* self, intptr_t slot);
bool QCalendarWidget_QBaseFocusPreviousChild(QCalendarWidget* self);
QObject* QCalendarWidget_Sender(const QCalendarWidget* self);
void QCalendarWidget_OnSender(const QCalendarWidget* self, intptr_t slot);
QObject* QCalendarWidget_QBaseSender(const QCalendarWidget* self);
int QCalendarWidget_SenderSignalIndex(const QCalendarWidget* self);
void QCalendarWidget_OnSenderSignalIndex(const QCalendarWidget* self, intptr_t slot);
int QCalendarWidget_QBaseSenderSignalIndex(const QCalendarWidget* self);
int QCalendarWidget_Receivers(const QCalendarWidget* self, const char* signal);
void QCalendarWidget_OnReceivers(const QCalendarWidget* self, intptr_t slot);
int QCalendarWidget_QBaseReceivers(const QCalendarWidget* self, const char* signal);
bool QCalendarWidget_IsSignalConnected(const QCalendarWidget* self, QMetaMethod* signal);
void QCalendarWidget_OnIsSignalConnected(const QCalendarWidget* self, intptr_t slot);
bool QCalendarWidget_QBaseIsSignalConnected(const QCalendarWidget* self, QMetaMethod* signal);
void QCalendarWidget_Delete(QCalendarWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
