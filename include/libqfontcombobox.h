#pragma once
#ifndef SRCC_LIBQFONTCOMBOBOX_H
#define SRCC_LIBQFONTCOMBOBOX_H

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
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QComboBox QComboBox;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontComboBox QFontComboBox;
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
typedef struct QStyleOptionComboBox QStyleOptionComboBox;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

#ifdef __cplusplus
typedef QFontComboBox::FontFilter FontFilter;   // C++ enum
typedef QFontComboBox::FontFilters FontFilters; // C++ QFlags
#else
typedef int FontFilter;  // C ABI enum
typedef int FontFilters; // C ABI QFlags
#endif

QFontComboBox* QFontComboBox_new(QWidget* parent);
QFontComboBox* QFontComboBox_new2();
QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self);
void* QFontComboBox_Metacast(QFontComboBox* self, const char* param1);
int QFontComboBox_Metacall(QFontComboBox* self, int param1, int param2, void** param3);
void QFontComboBox_OnMetacall(QFontComboBox* self, intptr_t slot);
int QFontComboBox_QBaseMetacall(QFontComboBox* self, int param1, int param2, void** param3);
libqt_string QFontComboBox_Tr(const char* s);
void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem);
int QFontComboBox_WritingSystem(const QFontComboBox* self);
void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters);
int QFontComboBox_FontFilters(const QFontComboBox* self);
QFont* QFontComboBox_CurrentFont(const QFontComboBox* self);
QSize* QFontComboBox_SizeHint(const QFontComboBox* self);
void QFontComboBox_OnSizeHint(const QFontComboBox* self, intptr_t slot);
QSize* QFontComboBox_QBaseSizeHint(const QFontComboBox* self);
void QFontComboBox_SetSampleTextForSystem(QFontComboBox* self, int writingSystem, const libqt_string sampleText);
libqt_string QFontComboBox_SampleTextForSystem(const QFontComboBox* self, int writingSystem);
void QFontComboBox_SetSampleTextForFont(QFontComboBox* self, const libqt_string fontFamily, const libqt_string sampleText);
libqt_string QFontComboBox_SampleTextForFont(const QFontComboBox* self, const libqt_string fontFamily);
void QFontComboBox_SetDisplayFont(QFontComboBox* self, const libqt_string fontFamily, const QFont* font);
void QFontComboBox_SetCurrentFont(QFontComboBox* self, const QFont* f);
void QFontComboBox_CurrentFontChanged(QFontComboBox* self, const QFont* f);
void QFontComboBox_Connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_Event(QFontComboBox* self, QEvent* e);
void QFontComboBox_OnEvent(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_QBaseEvent(QFontComboBox* self, QEvent* e);
libqt_string QFontComboBox_Tr2(const char* s, const char* c);
libqt_string QFontComboBox_Tr3(const char* s, const char* c, int n);
void QFontComboBox_SetModel(QFontComboBox* self, QAbstractItemModel* model);
void QFontComboBox_OnSetModel(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseSetModel(QFontComboBox* self, QAbstractItemModel* model);
QSize* QFontComboBox_MinimumSizeHint(const QFontComboBox* self);
void QFontComboBox_OnMinimumSizeHint(const QFontComboBox* self, intptr_t slot);
QSize* QFontComboBox_QBaseMinimumSizeHint(const QFontComboBox* self);
void QFontComboBox_ShowPopup(QFontComboBox* self);
void QFontComboBox_OnShowPopup(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseShowPopup(QFontComboBox* self);
void QFontComboBox_HidePopup(QFontComboBox* self);
void QFontComboBox_OnHidePopup(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseHidePopup(QFontComboBox* self);
QVariant* QFontComboBox_InputMethodQuery(const QFontComboBox* self, int param1);
void QFontComboBox_OnInputMethodQuery(const QFontComboBox* self, intptr_t slot);
QVariant* QFontComboBox_QBaseInputMethodQuery(const QFontComboBox* self, int param1);
void QFontComboBox_FocusInEvent(QFontComboBox* self, QFocusEvent* e);
void QFontComboBox_OnFocusInEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseFocusInEvent(QFontComboBox* self, QFocusEvent* e);
void QFontComboBox_FocusOutEvent(QFontComboBox* self, QFocusEvent* e);
void QFontComboBox_OnFocusOutEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseFocusOutEvent(QFontComboBox* self, QFocusEvent* e);
void QFontComboBox_ChangeEvent(QFontComboBox* self, QEvent* e);
void QFontComboBox_OnChangeEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseChangeEvent(QFontComboBox* self, QEvent* e);
void QFontComboBox_ResizeEvent(QFontComboBox* self, QResizeEvent* e);
void QFontComboBox_OnResizeEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseResizeEvent(QFontComboBox* self, QResizeEvent* e);
void QFontComboBox_PaintEvent(QFontComboBox* self, QPaintEvent* e);
void QFontComboBox_OnPaintEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBasePaintEvent(QFontComboBox* self, QPaintEvent* e);
void QFontComboBox_ShowEvent(QFontComboBox* self, QShowEvent* e);
void QFontComboBox_OnShowEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseShowEvent(QFontComboBox* self, QShowEvent* e);
void QFontComboBox_HideEvent(QFontComboBox* self, QHideEvent* e);
void QFontComboBox_OnHideEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseHideEvent(QFontComboBox* self, QHideEvent* e);
void QFontComboBox_MousePressEvent(QFontComboBox* self, QMouseEvent* e);
void QFontComboBox_OnMousePressEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseMousePressEvent(QFontComboBox* self, QMouseEvent* e);
void QFontComboBox_MouseReleaseEvent(QFontComboBox* self, QMouseEvent* e);
void QFontComboBox_OnMouseReleaseEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseMouseReleaseEvent(QFontComboBox* self, QMouseEvent* e);
void QFontComboBox_KeyPressEvent(QFontComboBox* self, QKeyEvent* e);
void QFontComboBox_OnKeyPressEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseKeyPressEvent(QFontComboBox* self, QKeyEvent* e);
void QFontComboBox_KeyReleaseEvent(QFontComboBox* self, QKeyEvent* e);
void QFontComboBox_OnKeyReleaseEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseKeyReleaseEvent(QFontComboBox* self, QKeyEvent* e);
void QFontComboBox_WheelEvent(QFontComboBox* self, QWheelEvent* e);
void QFontComboBox_OnWheelEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseWheelEvent(QFontComboBox* self, QWheelEvent* e);
void QFontComboBox_ContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e);
void QFontComboBox_OnContextMenuEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e);
void QFontComboBox_InputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1);
void QFontComboBox_OnInputMethodEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseInputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1);
void QFontComboBox_InitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option);
void QFontComboBox_OnInitStyleOption(const QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseInitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option);
int QFontComboBox_DevType(const QFontComboBox* self);
void QFontComboBox_OnDevType(const QFontComboBox* self, intptr_t slot);
int QFontComboBox_QBaseDevType(const QFontComboBox* self);
void QFontComboBox_SetVisible(QFontComboBox* self, bool visible);
void QFontComboBox_OnSetVisible(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseSetVisible(QFontComboBox* self, bool visible);
int QFontComboBox_HeightForWidth(const QFontComboBox* self, int param1);
void QFontComboBox_OnHeightForWidth(const QFontComboBox* self, intptr_t slot);
int QFontComboBox_QBaseHeightForWidth(const QFontComboBox* self, int param1);
bool QFontComboBox_HasHeightForWidth(const QFontComboBox* self);
void QFontComboBox_OnHasHeightForWidth(const QFontComboBox* self, intptr_t slot);
bool QFontComboBox_QBaseHasHeightForWidth(const QFontComboBox* self);
QPaintEngine* QFontComboBox_PaintEngine(const QFontComboBox* self);
void QFontComboBox_OnPaintEngine(const QFontComboBox* self, intptr_t slot);
QPaintEngine* QFontComboBox_QBasePaintEngine(const QFontComboBox* self);
void QFontComboBox_MouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event);
void QFontComboBox_OnMouseDoubleClickEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseMouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event);
void QFontComboBox_MouseMoveEvent(QFontComboBox* self, QMouseEvent* event);
void QFontComboBox_OnMouseMoveEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseMouseMoveEvent(QFontComboBox* self, QMouseEvent* event);
void QFontComboBox_EnterEvent(QFontComboBox* self, QEnterEvent* event);
void QFontComboBox_OnEnterEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseEnterEvent(QFontComboBox* self, QEnterEvent* event);
void QFontComboBox_LeaveEvent(QFontComboBox* self, QEvent* event);
void QFontComboBox_OnLeaveEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseLeaveEvent(QFontComboBox* self, QEvent* event);
void QFontComboBox_MoveEvent(QFontComboBox* self, QMoveEvent* event);
void QFontComboBox_OnMoveEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseMoveEvent(QFontComboBox* self, QMoveEvent* event);
void QFontComboBox_CloseEvent(QFontComboBox* self, QCloseEvent* event);
void QFontComboBox_OnCloseEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseCloseEvent(QFontComboBox* self, QCloseEvent* event);
void QFontComboBox_TabletEvent(QFontComboBox* self, QTabletEvent* event);
void QFontComboBox_OnTabletEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseTabletEvent(QFontComboBox* self, QTabletEvent* event);
void QFontComboBox_ActionEvent(QFontComboBox* self, QActionEvent* event);
void QFontComboBox_OnActionEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseActionEvent(QFontComboBox* self, QActionEvent* event);
void QFontComboBox_DragEnterEvent(QFontComboBox* self, QDragEnterEvent* event);
void QFontComboBox_OnDragEnterEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseDragEnterEvent(QFontComboBox* self, QDragEnterEvent* event);
void QFontComboBox_DragMoveEvent(QFontComboBox* self, QDragMoveEvent* event);
void QFontComboBox_OnDragMoveEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseDragMoveEvent(QFontComboBox* self, QDragMoveEvent* event);
void QFontComboBox_DragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event);
void QFontComboBox_OnDragLeaveEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseDragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event);
void QFontComboBox_DropEvent(QFontComboBox* self, QDropEvent* event);
void QFontComboBox_OnDropEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseDropEvent(QFontComboBox* self, QDropEvent* event);
bool QFontComboBox_NativeEvent(QFontComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
void QFontComboBox_OnNativeEvent(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_QBaseNativeEvent(QFontComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
int QFontComboBox_Metric(const QFontComboBox* self, int param1);
void QFontComboBox_OnMetric(const QFontComboBox* self, intptr_t slot);
int QFontComboBox_QBaseMetric(const QFontComboBox* self, int param1);
void QFontComboBox_InitPainter(const QFontComboBox* self, QPainter* painter);
void QFontComboBox_OnInitPainter(const QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseInitPainter(const QFontComboBox* self, QPainter* painter);
QPaintDevice* QFontComboBox_Redirected(const QFontComboBox* self, QPoint* offset);
void QFontComboBox_OnRedirected(const QFontComboBox* self, intptr_t slot);
QPaintDevice* QFontComboBox_QBaseRedirected(const QFontComboBox* self, QPoint* offset);
QPainter* QFontComboBox_SharedPainter(const QFontComboBox* self);
void QFontComboBox_OnSharedPainter(const QFontComboBox* self, intptr_t slot);
QPainter* QFontComboBox_QBaseSharedPainter(const QFontComboBox* self);
bool QFontComboBox_FocusNextPrevChild(QFontComboBox* self, bool next);
void QFontComboBox_OnFocusNextPrevChild(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_QBaseFocusNextPrevChild(QFontComboBox* self, bool next);
bool QFontComboBox_EventFilter(QFontComboBox* self, QObject* watched, QEvent* event);
void QFontComboBox_OnEventFilter(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_QBaseEventFilter(QFontComboBox* self, QObject* watched, QEvent* event);
void QFontComboBox_TimerEvent(QFontComboBox* self, QTimerEvent* event);
void QFontComboBox_OnTimerEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseTimerEvent(QFontComboBox* self, QTimerEvent* event);
void QFontComboBox_ChildEvent(QFontComboBox* self, QChildEvent* event);
void QFontComboBox_OnChildEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseChildEvent(QFontComboBox* self, QChildEvent* event);
void QFontComboBox_CustomEvent(QFontComboBox* self, QEvent* event);
void QFontComboBox_OnCustomEvent(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseCustomEvent(QFontComboBox* self, QEvent* event);
void QFontComboBox_ConnectNotify(QFontComboBox* self, const QMetaMethod* signal);
void QFontComboBox_OnConnectNotify(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseConnectNotify(QFontComboBox* self, const QMetaMethod* signal);
void QFontComboBox_DisconnectNotify(QFontComboBox* self, const QMetaMethod* signal);
void QFontComboBox_OnDisconnectNotify(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseDisconnectNotify(QFontComboBox* self, const QMetaMethod* signal);
void QFontComboBox_UpdateMicroFocus(QFontComboBox* self);
void QFontComboBox_OnUpdateMicroFocus(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseUpdateMicroFocus(QFontComboBox* self);
void QFontComboBox_Create(QFontComboBox* self);
void QFontComboBox_OnCreate(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseCreate(QFontComboBox* self);
void QFontComboBox_Destroy(QFontComboBox* self);
void QFontComboBox_OnDestroy(QFontComboBox* self, intptr_t slot);
void QFontComboBox_QBaseDestroy(QFontComboBox* self);
bool QFontComboBox_FocusNextChild(QFontComboBox* self);
void QFontComboBox_OnFocusNextChild(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_QBaseFocusNextChild(QFontComboBox* self);
bool QFontComboBox_FocusPreviousChild(QFontComboBox* self);
void QFontComboBox_OnFocusPreviousChild(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_QBaseFocusPreviousChild(QFontComboBox* self);
QObject* QFontComboBox_Sender(const QFontComboBox* self);
void QFontComboBox_OnSender(const QFontComboBox* self, intptr_t slot);
QObject* QFontComboBox_QBaseSender(const QFontComboBox* self);
int QFontComboBox_SenderSignalIndex(const QFontComboBox* self);
void QFontComboBox_OnSenderSignalIndex(const QFontComboBox* self, intptr_t slot);
int QFontComboBox_QBaseSenderSignalIndex(const QFontComboBox* self);
int QFontComboBox_Receivers(const QFontComboBox* self, const char* signal);
void QFontComboBox_OnReceivers(const QFontComboBox* self, intptr_t slot);
int QFontComboBox_QBaseReceivers(const QFontComboBox* self, const char* signal);
bool QFontComboBox_IsSignalConnected(const QFontComboBox* self, const QMetaMethod* signal);
void QFontComboBox_OnIsSignalConnected(const QFontComboBox* self, intptr_t slot);
bool QFontComboBox_QBaseIsSignalConnected(const QFontComboBox* self, const QMetaMethod* signal);
void QFontComboBox_Delete(QFontComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
