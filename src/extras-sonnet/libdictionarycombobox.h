#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBDICTIONARYCOMBOBOX_H
#define SRC_EXTRAS_SONNETC_LIBDICTIONARYCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__DictionaryComboBox)
typedef Sonnet::DictionaryComboBox Sonnet__DictionaryComboBox;
#endif
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
typedef struct Sonnet__DictionaryComboBox Sonnet__DictionaryComboBox;
#endif

Sonnet__DictionaryComboBox* Sonnet__DictionaryComboBox_new(QWidget* parent);
Sonnet__DictionaryComboBox* Sonnet__DictionaryComboBox_new2();
QMetaObject* Sonnet__DictionaryComboBox_MetaObject(const Sonnet__DictionaryComboBox* self);
void* Sonnet__DictionaryComboBox_Metacast(Sonnet__DictionaryComboBox* self, const char* param1);
int Sonnet__DictionaryComboBox_Metacall(Sonnet__DictionaryComboBox* self, int param1, int param2, void** param3);
void Sonnet__DictionaryComboBox_ReloadCombo(Sonnet__DictionaryComboBox* self);
libqt_string Sonnet__DictionaryComboBox_CurrentDictionaryName(const Sonnet__DictionaryComboBox* self);
libqt_string Sonnet__DictionaryComboBox_CurrentDictionary(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_SetCurrentByDictionaryName(Sonnet__DictionaryComboBox* self, const libqt_string dictionaryName);
bool Sonnet__DictionaryComboBox_AssignByDictionnary(Sonnet__DictionaryComboBox* self, const libqt_string dictionary);
bool Sonnet__DictionaryComboBox_AssignDictionnaryName(Sonnet__DictionaryComboBox* self, const libqt_string name);
void Sonnet__DictionaryComboBox_SetCurrentByDictionary(Sonnet__DictionaryComboBox* self, const libqt_string dictionary);
void Sonnet__DictionaryComboBox_DictionaryChanged(Sonnet__DictionaryComboBox* self, const libqt_string dictionary);
void Sonnet__DictionaryComboBox_Connect_DictionaryChanged(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_DictionaryNameChanged(Sonnet__DictionaryComboBox* self, const libqt_string dictionaryName);
void Sonnet__DictionaryComboBox_Connect_DictionaryNameChanged(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_OnMetaObject(const Sonnet__DictionaryComboBox* self, intptr_t slot);
QMetaObject* Sonnet__DictionaryComboBox_SuperMetaObject(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnMetacast(Sonnet__DictionaryComboBox* self, intptr_t slot);
void* Sonnet__DictionaryComboBox_SuperMetacast(Sonnet__DictionaryComboBox* self, const char* param1);
void Sonnet__DictionaryComboBox_OnMetacall(Sonnet__DictionaryComboBox* self, intptr_t slot);
int Sonnet__DictionaryComboBox_SuperMetacall(Sonnet__DictionaryComboBox* self, int param1, int param2, void** param3);
void Sonnet__DictionaryComboBox_SetModel(Sonnet__DictionaryComboBox* self, QAbstractItemModel* model);
void Sonnet__DictionaryComboBox_OnSetModel(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperSetModel(Sonnet__DictionaryComboBox* self, QAbstractItemModel* model);
QSize* Sonnet__DictionaryComboBox_SizeHint(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnSizeHint(const Sonnet__DictionaryComboBox* self, intptr_t slot);
QSize* Sonnet__DictionaryComboBox_SuperSizeHint(const Sonnet__DictionaryComboBox* self);
QSize* Sonnet__DictionaryComboBox_MinimumSizeHint(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnMinimumSizeHint(const Sonnet__DictionaryComboBox* self, intptr_t slot);
QSize* Sonnet__DictionaryComboBox_SuperMinimumSizeHint(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_ShowPopup(Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnShowPopup(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperShowPopup(Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_HidePopup(Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnHidePopup(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperHidePopup(Sonnet__DictionaryComboBox* self);
bool Sonnet__DictionaryComboBox_Event(Sonnet__DictionaryComboBox* self, QEvent* event);
void Sonnet__DictionaryComboBox_OnEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
bool Sonnet__DictionaryComboBox_SuperEvent(Sonnet__DictionaryComboBox* self, QEvent* event);
QVariant* Sonnet__DictionaryComboBox_InputMethodQuery(const Sonnet__DictionaryComboBox* self, int param1);
void Sonnet__DictionaryComboBox_OnInputMethodQuery(const Sonnet__DictionaryComboBox* self, intptr_t slot);
QVariant* Sonnet__DictionaryComboBox_SuperInputMethodQuery(const Sonnet__DictionaryComboBox* self, int param1);
void Sonnet__DictionaryComboBox_FocusInEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e);
void Sonnet__DictionaryComboBox_OnFocusInEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperFocusInEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e);
void Sonnet__DictionaryComboBox_FocusOutEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e);
void Sonnet__DictionaryComboBox_OnFocusOutEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperFocusOutEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e);
void Sonnet__DictionaryComboBox_ChangeEvent(Sonnet__DictionaryComboBox* self, QEvent* e);
void Sonnet__DictionaryComboBox_OnChangeEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperChangeEvent(Sonnet__DictionaryComboBox* self, QEvent* e);
void Sonnet__DictionaryComboBox_ResizeEvent(Sonnet__DictionaryComboBox* self, QResizeEvent* e);
void Sonnet__DictionaryComboBox_OnResizeEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperResizeEvent(Sonnet__DictionaryComboBox* self, QResizeEvent* e);
void Sonnet__DictionaryComboBox_PaintEvent(Sonnet__DictionaryComboBox* self, QPaintEvent* e);
void Sonnet__DictionaryComboBox_OnPaintEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperPaintEvent(Sonnet__DictionaryComboBox* self, QPaintEvent* e);
void Sonnet__DictionaryComboBox_ShowEvent(Sonnet__DictionaryComboBox* self, QShowEvent* e);
void Sonnet__DictionaryComboBox_OnShowEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperShowEvent(Sonnet__DictionaryComboBox* self, QShowEvent* e);
void Sonnet__DictionaryComboBox_HideEvent(Sonnet__DictionaryComboBox* self, QHideEvent* e);
void Sonnet__DictionaryComboBox_OnHideEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperHideEvent(Sonnet__DictionaryComboBox* self, QHideEvent* e);
void Sonnet__DictionaryComboBox_MousePressEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e);
void Sonnet__DictionaryComboBox_OnMousePressEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperMousePressEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e);
void Sonnet__DictionaryComboBox_MouseReleaseEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e);
void Sonnet__DictionaryComboBox_OnMouseReleaseEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperMouseReleaseEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e);
void Sonnet__DictionaryComboBox_KeyPressEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e);
void Sonnet__DictionaryComboBox_OnKeyPressEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperKeyPressEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e);
void Sonnet__DictionaryComboBox_KeyReleaseEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e);
void Sonnet__DictionaryComboBox_OnKeyReleaseEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperKeyReleaseEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e);
void Sonnet__DictionaryComboBox_WheelEvent(Sonnet__DictionaryComboBox* self, QWheelEvent* e);
void Sonnet__DictionaryComboBox_OnWheelEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperWheelEvent(Sonnet__DictionaryComboBox* self, QWheelEvent* e);
void Sonnet__DictionaryComboBox_ContextMenuEvent(Sonnet__DictionaryComboBox* self, QContextMenuEvent* e);
void Sonnet__DictionaryComboBox_OnContextMenuEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperContextMenuEvent(Sonnet__DictionaryComboBox* self, QContextMenuEvent* e);
void Sonnet__DictionaryComboBox_InputMethodEvent(Sonnet__DictionaryComboBox* self, QInputMethodEvent* param1);
void Sonnet__DictionaryComboBox_OnInputMethodEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperInputMethodEvent(Sonnet__DictionaryComboBox* self, QInputMethodEvent* param1);
void Sonnet__DictionaryComboBox_InitStyleOption(const Sonnet__DictionaryComboBox* self, QStyleOptionComboBox* option);
void Sonnet__DictionaryComboBox_OnInitStyleOption(const Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperInitStyleOption(const Sonnet__DictionaryComboBox* self, QStyleOptionComboBox* option);
int Sonnet__DictionaryComboBox_DevType(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnDevType(const Sonnet__DictionaryComboBox* self, intptr_t slot);
int Sonnet__DictionaryComboBox_SuperDevType(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_SetVisible(Sonnet__DictionaryComboBox* self, bool visible);
void Sonnet__DictionaryComboBox_OnSetVisible(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperSetVisible(Sonnet__DictionaryComboBox* self, bool visible);
int Sonnet__DictionaryComboBox_HeightForWidth(const Sonnet__DictionaryComboBox* self, int param1);
void Sonnet__DictionaryComboBox_OnHeightForWidth(const Sonnet__DictionaryComboBox* self, intptr_t slot);
int Sonnet__DictionaryComboBox_SuperHeightForWidth(const Sonnet__DictionaryComboBox* self, int param1);
bool Sonnet__DictionaryComboBox_HasHeightForWidth(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnHasHeightForWidth(const Sonnet__DictionaryComboBox* self, intptr_t slot);
bool Sonnet__DictionaryComboBox_SuperHasHeightForWidth(const Sonnet__DictionaryComboBox* self);
QPaintEngine* Sonnet__DictionaryComboBox_PaintEngine(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnPaintEngine(const Sonnet__DictionaryComboBox* self, intptr_t slot);
QPaintEngine* Sonnet__DictionaryComboBox_SuperPaintEngine(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_MouseDoubleClickEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event);
void Sonnet__DictionaryComboBox_OnMouseDoubleClickEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperMouseDoubleClickEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event);
void Sonnet__DictionaryComboBox_MouseMoveEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event);
void Sonnet__DictionaryComboBox_OnMouseMoveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperMouseMoveEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event);
void Sonnet__DictionaryComboBox_EnterEvent(Sonnet__DictionaryComboBox* self, QEnterEvent* event);
void Sonnet__DictionaryComboBox_OnEnterEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperEnterEvent(Sonnet__DictionaryComboBox* self, QEnterEvent* event);
void Sonnet__DictionaryComboBox_LeaveEvent(Sonnet__DictionaryComboBox* self, QEvent* event);
void Sonnet__DictionaryComboBox_OnLeaveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperLeaveEvent(Sonnet__DictionaryComboBox* self, QEvent* event);
void Sonnet__DictionaryComboBox_MoveEvent(Sonnet__DictionaryComboBox* self, QMoveEvent* event);
void Sonnet__DictionaryComboBox_OnMoveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperMoveEvent(Sonnet__DictionaryComboBox* self, QMoveEvent* event);
void Sonnet__DictionaryComboBox_CloseEvent(Sonnet__DictionaryComboBox* self, QCloseEvent* event);
void Sonnet__DictionaryComboBox_OnCloseEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperCloseEvent(Sonnet__DictionaryComboBox* self, QCloseEvent* event);
void Sonnet__DictionaryComboBox_TabletEvent(Sonnet__DictionaryComboBox* self, QTabletEvent* event);
void Sonnet__DictionaryComboBox_OnTabletEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperTabletEvent(Sonnet__DictionaryComboBox* self, QTabletEvent* event);
void Sonnet__DictionaryComboBox_ActionEvent(Sonnet__DictionaryComboBox* self, QActionEvent* event);
void Sonnet__DictionaryComboBox_OnActionEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperActionEvent(Sonnet__DictionaryComboBox* self, QActionEvent* event);
void Sonnet__DictionaryComboBox_DragEnterEvent(Sonnet__DictionaryComboBox* self, QDragEnterEvent* event);
void Sonnet__DictionaryComboBox_OnDragEnterEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperDragEnterEvent(Sonnet__DictionaryComboBox* self, QDragEnterEvent* event);
void Sonnet__DictionaryComboBox_DragMoveEvent(Sonnet__DictionaryComboBox* self, QDragMoveEvent* event);
void Sonnet__DictionaryComboBox_OnDragMoveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperDragMoveEvent(Sonnet__DictionaryComboBox* self, QDragMoveEvent* event);
void Sonnet__DictionaryComboBox_DragLeaveEvent(Sonnet__DictionaryComboBox* self, QDragLeaveEvent* event);
void Sonnet__DictionaryComboBox_OnDragLeaveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperDragLeaveEvent(Sonnet__DictionaryComboBox* self, QDragLeaveEvent* event);
void Sonnet__DictionaryComboBox_DropEvent(Sonnet__DictionaryComboBox* self, QDropEvent* event);
void Sonnet__DictionaryComboBox_OnDropEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperDropEvent(Sonnet__DictionaryComboBox* self, QDropEvent* event);
bool Sonnet__DictionaryComboBox_NativeEvent(Sonnet__DictionaryComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
void Sonnet__DictionaryComboBox_OnNativeEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
bool Sonnet__DictionaryComboBox_SuperNativeEvent(Sonnet__DictionaryComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
int Sonnet__DictionaryComboBox_Metric(const Sonnet__DictionaryComboBox* self, int param1);
void Sonnet__DictionaryComboBox_OnMetric(const Sonnet__DictionaryComboBox* self, intptr_t slot);
int Sonnet__DictionaryComboBox_SuperMetric(const Sonnet__DictionaryComboBox* self, int param1);
void Sonnet__DictionaryComboBox_InitPainter(const Sonnet__DictionaryComboBox* self, QPainter* painter);
void Sonnet__DictionaryComboBox_OnInitPainter(const Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperInitPainter(const Sonnet__DictionaryComboBox* self, QPainter* painter);
QPaintDevice* Sonnet__DictionaryComboBox_Redirected(const Sonnet__DictionaryComboBox* self, QPoint* offset);
void Sonnet__DictionaryComboBox_OnRedirected(const Sonnet__DictionaryComboBox* self, intptr_t slot);
QPaintDevice* Sonnet__DictionaryComboBox_SuperRedirected(const Sonnet__DictionaryComboBox* self, QPoint* offset);
QPainter* Sonnet__DictionaryComboBox_SharedPainter(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnSharedPainter(const Sonnet__DictionaryComboBox* self, intptr_t slot);
QPainter* Sonnet__DictionaryComboBox_SuperSharedPainter(const Sonnet__DictionaryComboBox* self);
bool Sonnet__DictionaryComboBox_FocusNextPrevChild(Sonnet__DictionaryComboBox* self, bool next);
void Sonnet__DictionaryComboBox_OnFocusNextPrevChild(Sonnet__DictionaryComboBox* self, intptr_t slot);
bool Sonnet__DictionaryComboBox_SuperFocusNextPrevChild(Sonnet__DictionaryComboBox* self, bool next);
bool Sonnet__DictionaryComboBox_EventFilter(Sonnet__DictionaryComboBox* self, QObject* watched, QEvent* event);
void Sonnet__DictionaryComboBox_OnEventFilter(Sonnet__DictionaryComboBox* self, intptr_t slot);
bool Sonnet__DictionaryComboBox_SuperEventFilter(Sonnet__DictionaryComboBox* self, QObject* watched, QEvent* event);
void Sonnet__DictionaryComboBox_TimerEvent(Sonnet__DictionaryComboBox* self, QTimerEvent* event);
void Sonnet__DictionaryComboBox_OnTimerEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperTimerEvent(Sonnet__DictionaryComboBox* self, QTimerEvent* event);
void Sonnet__DictionaryComboBox_ChildEvent(Sonnet__DictionaryComboBox* self, QChildEvent* event);
void Sonnet__DictionaryComboBox_OnChildEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperChildEvent(Sonnet__DictionaryComboBox* self, QChildEvent* event);
void Sonnet__DictionaryComboBox_CustomEvent(Sonnet__DictionaryComboBox* self, QEvent* event);
void Sonnet__DictionaryComboBox_OnCustomEvent(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperCustomEvent(Sonnet__DictionaryComboBox* self, QEvent* event);
void Sonnet__DictionaryComboBox_ConnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal);
void Sonnet__DictionaryComboBox_OnConnectNotify(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperConnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal);
void Sonnet__DictionaryComboBox_DisconnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal);
void Sonnet__DictionaryComboBox_OnDisconnectNotify(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperDisconnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal);
void Sonnet__DictionaryComboBox_UpdateMicroFocus(Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnUpdateMicroFocus(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperUpdateMicroFocus(Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_Create(Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnCreate(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperCreate(Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_Destroy(Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnDestroy(Sonnet__DictionaryComboBox* self, intptr_t slot);
void Sonnet__DictionaryComboBox_SuperDestroy(Sonnet__DictionaryComboBox* self);
bool Sonnet__DictionaryComboBox_FocusNextChild(Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnFocusNextChild(Sonnet__DictionaryComboBox* self, intptr_t slot);
bool Sonnet__DictionaryComboBox_SuperFocusNextChild(Sonnet__DictionaryComboBox* self);
bool Sonnet__DictionaryComboBox_FocusPreviousChild(Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnFocusPreviousChild(Sonnet__DictionaryComboBox* self, intptr_t slot);
bool Sonnet__DictionaryComboBox_SuperFocusPreviousChild(Sonnet__DictionaryComboBox* self);
QObject* Sonnet__DictionaryComboBox_Sender(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnSender(const Sonnet__DictionaryComboBox* self, intptr_t slot);
QObject* Sonnet__DictionaryComboBox_SuperSender(const Sonnet__DictionaryComboBox* self);
int Sonnet__DictionaryComboBox_SenderSignalIndex(const Sonnet__DictionaryComboBox* self);
void Sonnet__DictionaryComboBox_OnSenderSignalIndex(const Sonnet__DictionaryComboBox* self, intptr_t slot);
int Sonnet__DictionaryComboBox_SuperSenderSignalIndex(const Sonnet__DictionaryComboBox* self);
int Sonnet__DictionaryComboBox_Receivers(const Sonnet__DictionaryComboBox* self, const char* signal);
void Sonnet__DictionaryComboBox_OnReceivers(const Sonnet__DictionaryComboBox* self, intptr_t slot);
int Sonnet__DictionaryComboBox_SuperReceivers(const Sonnet__DictionaryComboBox* self, const char* signal);
bool Sonnet__DictionaryComboBox_IsSignalConnected(const Sonnet__DictionaryComboBox* self, const QMetaMethod* signal);
void Sonnet__DictionaryComboBox_OnIsSignalConnected(const Sonnet__DictionaryComboBox* self, intptr_t slot);
bool Sonnet__DictionaryComboBox_SuperIsSignalConnected(const Sonnet__DictionaryComboBox* self, const QMetaMethod* signal);
double Sonnet__DictionaryComboBox_GetDecodedMetricF(const Sonnet__DictionaryComboBox* self, int metricA, int metricB);
void Sonnet__DictionaryComboBox_OnGetDecodedMetricF(const Sonnet__DictionaryComboBox* self, intptr_t slot);
double Sonnet__DictionaryComboBox_SuperGetDecodedMetricF(const Sonnet__DictionaryComboBox* self, int metricA, int metricB);
void Sonnet__DictionaryComboBox_Delete(Sonnet__DictionaryComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
