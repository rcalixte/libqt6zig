#pragma once
#ifndef SRCC_LIBQMESSAGEBOX_H
#define SRCC_LIBQMESSAGEBOX_H

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
typedef struct QAbstractButton QAbstractButton;
typedef struct QActionEvent QActionEvent;
typedef struct QCheckBox QCheckBox;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
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
typedef struct QMessageBox QMessageBox;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

#ifdef __cplusplus
typedef QMessageBox::Button Button;                   // C++ QFlags
typedef QMessageBox::ButtonRole ButtonRole;           // C++ enum
typedef QMessageBox::Icon Icon;                       // C++ enum
typedef QMessageBox::StandardButton StandardButton;   // C++ enum
typedef QMessageBox::StandardButtons StandardButtons; // C++ QFlags
#else
typedef int Button;          // C ABI QFlags
typedef int ButtonRole;      // C ABI enum
typedef int Icon;            // C ABI enum
typedef int StandardButton;  // C ABI enum
typedef int StandardButtons; // C ABI QFlags
#endif

QMessageBox* QMessageBox_new(QWidget* parent);
QMessageBox* QMessageBox_new2();
QMessageBox* QMessageBox_new3(int icon, const libqt_string title, const libqt_string text);
QMessageBox* QMessageBox_new4(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2);
QMessageBox* QMessageBox_new5(int icon, const libqt_string title, const libqt_string text, int buttons);
QMessageBox* QMessageBox_new6(int icon, const libqt_string title, const libqt_string text, int buttons, QWidget* parent);
QMessageBox* QMessageBox_new7(int icon, const libqt_string title, const libqt_string text, int buttons, QWidget* parent, int flags);
QMessageBox* QMessageBox_new8(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2, QWidget* parent);
QMessageBox* QMessageBox_new9(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2, QWidget* parent, int f);
QMetaObject* QMessageBox_MetaObject(const QMessageBox* self);
void* QMessageBox_Metacast(QMessageBox* self, const char* param1);
int QMessageBox_Metacall(QMessageBox* self, int param1, int param2, void** param3);
void QMessageBox_OnMetacall(QMessageBox* self, intptr_t slot);
int QMessageBox_QBaseMetacall(QMessageBox* self, int param1, int param2, void** param3);
libqt_string QMessageBox_Tr(const char* s);
void QMessageBox_AddButton(QMessageBox* self, QAbstractButton* button, int role);
QPushButton* QMessageBox_AddButton2(QMessageBox* self, const libqt_string text, int role);
QPushButton* QMessageBox_AddButtonWithButton(QMessageBox* self, int button);
void QMessageBox_RemoveButton(QMessageBox* self, QAbstractButton* button);
libqt_list /* of QAbstractButton* */ QMessageBox_Buttons(const QMessageBox* self);
int QMessageBox_ButtonRole(const QMessageBox* self, QAbstractButton* button);
void QMessageBox_SetStandardButtons(QMessageBox* self, int buttons);
int QMessageBox_StandardButtons(const QMessageBox* self);
int QMessageBox_StandardButton(const QMessageBox* self, QAbstractButton* button);
QAbstractButton* QMessageBox_Button(const QMessageBox* self, int which);
QPushButton* QMessageBox_DefaultButton(const QMessageBox* self);
void QMessageBox_SetDefaultButton(QMessageBox* self, QPushButton* button);
void QMessageBox_SetDefaultButtonWithButton(QMessageBox* self, int button);
QAbstractButton* QMessageBox_EscapeButton(const QMessageBox* self);
void QMessageBox_SetEscapeButton(QMessageBox* self, QAbstractButton* button);
void QMessageBox_SetEscapeButtonWithButton(QMessageBox* self, int button);
QAbstractButton* QMessageBox_ClickedButton(const QMessageBox* self);
libqt_string QMessageBox_Text(const QMessageBox* self);
void QMessageBox_SetText(QMessageBox* self, const libqt_string text);
int QMessageBox_Icon(const QMessageBox* self);
void QMessageBox_SetIcon(QMessageBox* self, int icon);
QPixmap* QMessageBox_IconPixmap(const QMessageBox* self);
void QMessageBox_SetIconPixmap(QMessageBox* self, const QPixmap* pixmap);
int QMessageBox_TextFormat(const QMessageBox* self);
void QMessageBox_SetTextFormat(QMessageBox* self, int format);
void QMessageBox_SetTextInteractionFlags(QMessageBox* self, int flags);
int QMessageBox_TextInteractionFlags(const QMessageBox* self);
void QMessageBox_SetCheckBox(QMessageBox* self, QCheckBox* cb);
QCheckBox* QMessageBox_CheckBox(const QMessageBox* self);
int QMessageBox_Information(QWidget* parent, const libqt_string title, const libqt_string text);
int QMessageBox_Information2(QWidget* parent, const libqt_string title, const libqt_string text, int button0);
int QMessageBox_Question(QWidget* parent, const libqt_string title, const libqt_string text);
int QMessageBox_Question2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Warning(QWidget* parent, const libqt_string title, const libqt_string text);
int QMessageBox_Warning2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Critical(QWidget* parent, const libqt_string title, const libqt_string text);
int QMessageBox_Critical2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
void QMessageBox_About(QWidget* parent, const libqt_string title, const libqt_string text);
void QMessageBox_AboutQt(QWidget* parent);
int QMessageBox_Information3(QWidget* parent, const libqt_string title, const libqt_string text, int button0);
int QMessageBox_Information4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text);
int QMessageBox_Question3(QWidget* parent, const libqt_string title, const libqt_string text, int button0);
int QMessageBox_Question4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text);
int QMessageBox_Warning3(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Warning4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text);
int QMessageBox_Critical3(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Critical4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text);
libqt_string QMessageBox_ButtonText(const QMessageBox* self, int button);
void QMessageBox_SetButtonText(QMessageBox* self, int button, const libqt_string text);
libqt_string QMessageBox_InformativeText(const QMessageBox* self);
void QMessageBox_SetInformativeText(QMessageBox* self, const libqt_string text);
libqt_string QMessageBox_DetailedText(const QMessageBox* self);
void QMessageBox_SetDetailedText(QMessageBox* self, const libqt_string text);
void QMessageBox_SetWindowTitle(QMessageBox* self, const libqt_string title);
void QMessageBox_SetWindowModality(QMessageBox* self, int windowModality);
QPixmap* QMessageBox_StandardIcon(int icon);
void QMessageBox_ButtonClicked(QMessageBox* self, QAbstractButton* button);
void QMessageBox_Connect_ButtonClicked(QMessageBox* self, intptr_t slot);
bool QMessageBox_Event(QMessageBox* self, QEvent* e);
void QMessageBox_OnEvent(QMessageBox* self, intptr_t slot);
bool QMessageBox_QBaseEvent(QMessageBox* self, QEvent* e);
void QMessageBox_ResizeEvent(QMessageBox* self, QResizeEvent* event);
void QMessageBox_OnResizeEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseResizeEvent(QMessageBox* self, QResizeEvent* event);
void QMessageBox_ShowEvent(QMessageBox* self, QShowEvent* event);
void QMessageBox_OnShowEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseShowEvent(QMessageBox* self, QShowEvent* event);
void QMessageBox_CloseEvent(QMessageBox* self, QCloseEvent* event);
void QMessageBox_OnCloseEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseCloseEvent(QMessageBox* self, QCloseEvent* event);
void QMessageBox_KeyPressEvent(QMessageBox* self, QKeyEvent* event);
void QMessageBox_OnKeyPressEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseKeyPressEvent(QMessageBox* self, QKeyEvent* event);
void QMessageBox_ChangeEvent(QMessageBox* self, QEvent* event);
void QMessageBox_OnChangeEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseChangeEvent(QMessageBox* self, QEvent* event);
libqt_string QMessageBox_Tr2(const char* s, const char* c);
libqt_string QMessageBox_Tr3(const char* s, const char* c, int n);
int QMessageBox_Information42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons);
int QMessageBox_Information5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton);
int QMessageBox_Information52(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Question42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons);
int QMessageBox_Question5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton);
int QMessageBox_Warning42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons);
int QMessageBox_Warning5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton);
int QMessageBox_Critical42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons);
int QMessageBox_Critical5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton);
void QMessageBox_AboutQt2(QWidget* parent, const libqt_string title);
int QMessageBox_Information53(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Information6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2);
int QMessageBox_Information54(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text);
int QMessageBox_Information62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text);
int QMessageBox_Information7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Information8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Question52(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Question6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2);
int QMessageBox_Question53(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text);
int QMessageBox_Question62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text);
int QMessageBox_Question7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Question8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Warning6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2);
int QMessageBox_Warning52(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text);
int QMessageBox_Warning62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text);
int QMessageBox_Warning7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Warning8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Critical6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2);
int QMessageBox_Critical52(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text);
int QMessageBox_Critical62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text);
int QMessageBox_Critical7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Critical8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
void QMessageBox_SetVisible(QMessageBox* self, bool visible);
void QMessageBox_OnSetVisible(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseSetVisible(QMessageBox* self, bool visible);
QSize* QMessageBox_SizeHint(const QMessageBox* self);
void QMessageBox_OnSizeHint(const QMessageBox* self, intptr_t slot);
QSize* QMessageBox_QBaseSizeHint(const QMessageBox* self);
QSize* QMessageBox_MinimumSizeHint(const QMessageBox* self);
void QMessageBox_OnMinimumSizeHint(const QMessageBox* self, intptr_t slot);
QSize* QMessageBox_QBaseMinimumSizeHint(const QMessageBox* self);
void QMessageBox_Open(QMessageBox* self);
void QMessageBox_OnOpen(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseOpen(QMessageBox* self);
int QMessageBox_Exec(QMessageBox* self);
void QMessageBox_OnExec(QMessageBox* self, intptr_t slot);
int QMessageBox_QBaseExec(QMessageBox* self);
void QMessageBox_Done(QMessageBox* self, int param1);
void QMessageBox_OnDone(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseDone(QMessageBox* self, int param1);
void QMessageBox_Accept(QMessageBox* self);
void QMessageBox_OnAccept(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseAccept(QMessageBox* self);
void QMessageBox_Reject(QMessageBox* self);
void QMessageBox_OnReject(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseReject(QMessageBox* self);
void QMessageBox_ContextMenuEvent(QMessageBox* self, QContextMenuEvent* param1);
void QMessageBox_OnContextMenuEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseContextMenuEvent(QMessageBox* self, QContextMenuEvent* param1);
bool QMessageBox_EventFilter(QMessageBox* self, QObject* param1, QEvent* param2);
void QMessageBox_OnEventFilter(QMessageBox* self, intptr_t slot);
bool QMessageBox_QBaseEventFilter(QMessageBox* self, QObject* param1, QEvent* param2);
int QMessageBox_DevType(const QMessageBox* self);
void QMessageBox_OnDevType(const QMessageBox* self, intptr_t slot);
int QMessageBox_QBaseDevType(const QMessageBox* self);
int QMessageBox_HeightForWidth(const QMessageBox* self, int param1);
void QMessageBox_OnHeightForWidth(const QMessageBox* self, intptr_t slot);
int QMessageBox_QBaseHeightForWidth(const QMessageBox* self, int param1);
bool QMessageBox_HasHeightForWidth(const QMessageBox* self);
void QMessageBox_OnHasHeightForWidth(const QMessageBox* self, intptr_t slot);
bool QMessageBox_QBaseHasHeightForWidth(const QMessageBox* self);
QPaintEngine* QMessageBox_PaintEngine(const QMessageBox* self);
void QMessageBox_OnPaintEngine(const QMessageBox* self, intptr_t slot);
QPaintEngine* QMessageBox_QBasePaintEngine(const QMessageBox* self);
void QMessageBox_MousePressEvent(QMessageBox* self, QMouseEvent* event);
void QMessageBox_OnMousePressEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseMousePressEvent(QMessageBox* self, QMouseEvent* event);
void QMessageBox_MouseReleaseEvent(QMessageBox* self, QMouseEvent* event);
void QMessageBox_OnMouseReleaseEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseMouseReleaseEvent(QMessageBox* self, QMouseEvent* event);
void QMessageBox_MouseDoubleClickEvent(QMessageBox* self, QMouseEvent* event);
void QMessageBox_OnMouseDoubleClickEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseMouseDoubleClickEvent(QMessageBox* self, QMouseEvent* event);
void QMessageBox_MouseMoveEvent(QMessageBox* self, QMouseEvent* event);
void QMessageBox_OnMouseMoveEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseMouseMoveEvent(QMessageBox* self, QMouseEvent* event);
void QMessageBox_WheelEvent(QMessageBox* self, QWheelEvent* event);
void QMessageBox_OnWheelEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseWheelEvent(QMessageBox* self, QWheelEvent* event);
void QMessageBox_KeyReleaseEvent(QMessageBox* self, QKeyEvent* event);
void QMessageBox_OnKeyReleaseEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseKeyReleaseEvent(QMessageBox* self, QKeyEvent* event);
void QMessageBox_FocusInEvent(QMessageBox* self, QFocusEvent* event);
void QMessageBox_OnFocusInEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseFocusInEvent(QMessageBox* self, QFocusEvent* event);
void QMessageBox_FocusOutEvent(QMessageBox* self, QFocusEvent* event);
void QMessageBox_OnFocusOutEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseFocusOutEvent(QMessageBox* self, QFocusEvent* event);
void QMessageBox_EnterEvent(QMessageBox* self, QEnterEvent* event);
void QMessageBox_OnEnterEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseEnterEvent(QMessageBox* self, QEnterEvent* event);
void QMessageBox_LeaveEvent(QMessageBox* self, QEvent* event);
void QMessageBox_OnLeaveEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseLeaveEvent(QMessageBox* self, QEvent* event);
void QMessageBox_PaintEvent(QMessageBox* self, QPaintEvent* event);
void QMessageBox_OnPaintEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBasePaintEvent(QMessageBox* self, QPaintEvent* event);
void QMessageBox_MoveEvent(QMessageBox* self, QMoveEvent* event);
void QMessageBox_OnMoveEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseMoveEvent(QMessageBox* self, QMoveEvent* event);
void QMessageBox_TabletEvent(QMessageBox* self, QTabletEvent* event);
void QMessageBox_OnTabletEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseTabletEvent(QMessageBox* self, QTabletEvent* event);
void QMessageBox_ActionEvent(QMessageBox* self, QActionEvent* event);
void QMessageBox_OnActionEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseActionEvent(QMessageBox* self, QActionEvent* event);
void QMessageBox_DragEnterEvent(QMessageBox* self, QDragEnterEvent* event);
void QMessageBox_OnDragEnterEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseDragEnterEvent(QMessageBox* self, QDragEnterEvent* event);
void QMessageBox_DragMoveEvent(QMessageBox* self, QDragMoveEvent* event);
void QMessageBox_OnDragMoveEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseDragMoveEvent(QMessageBox* self, QDragMoveEvent* event);
void QMessageBox_DragLeaveEvent(QMessageBox* self, QDragLeaveEvent* event);
void QMessageBox_OnDragLeaveEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseDragLeaveEvent(QMessageBox* self, QDragLeaveEvent* event);
void QMessageBox_DropEvent(QMessageBox* self, QDropEvent* event);
void QMessageBox_OnDropEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseDropEvent(QMessageBox* self, QDropEvent* event);
void QMessageBox_HideEvent(QMessageBox* self, QHideEvent* event);
void QMessageBox_OnHideEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseHideEvent(QMessageBox* self, QHideEvent* event);
bool QMessageBox_NativeEvent(QMessageBox* self, const libqt_string eventType, void* message, intptr_t* result);
void QMessageBox_OnNativeEvent(QMessageBox* self, intptr_t slot);
bool QMessageBox_QBaseNativeEvent(QMessageBox* self, const libqt_string eventType, void* message, intptr_t* result);
int QMessageBox_Metric(const QMessageBox* self, int param1);
void QMessageBox_OnMetric(const QMessageBox* self, intptr_t slot);
int QMessageBox_QBaseMetric(const QMessageBox* self, int param1);
void QMessageBox_InitPainter(const QMessageBox* self, QPainter* painter);
void QMessageBox_OnInitPainter(const QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseInitPainter(const QMessageBox* self, QPainter* painter);
QPaintDevice* QMessageBox_Redirected(const QMessageBox* self, QPoint* offset);
void QMessageBox_OnRedirected(const QMessageBox* self, intptr_t slot);
QPaintDevice* QMessageBox_QBaseRedirected(const QMessageBox* self, QPoint* offset);
QPainter* QMessageBox_SharedPainter(const QMessageBox* self);
void QMessageBox_OnSharedPainter(const QMessageBox* self, intptr_t slot);
QPainter* QMessageBox_QBaseSharedPainter(const QMessageBox* self);
void QMessageBox_InputMethodEvent(QMessageBox* self, QInputMethodEvent* param1);
void QMessageBox_OnInputMethodEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseInputMethodEvent(QMessageBox* self, QInputMethodEvent* param1);
QVariant* QMessageBox_InputMethodQuery(const QMessageBox* self, int param1);
void QMessageBox_OnInputMethodQuery(const QMessageBox* self, intptr_t slot);
QVariant* QMessageBox_QBaseInputMethodQuery(const QMessageBox* self, int param1);
bool QMessageBox_FocusNextPrevChild(QMessageBox* self, bool next);
void QMessageBox_OnFocusNextPrevChild(QMessageBox* self, intptr_t slot);
bool QMessageBox_QBaseFocusNextPrevChild(QMessageBox* self, bool next);
void QMessageBox_TimerEvent(QMessageBox* self, QTimerEvent* event);
void QMessageBox_OnTimerEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseTimerEvent(QMessageBox* self, QTimerEvent* event);
void QMessageBox_ChildEvent(QMessageBox* self, QChildEvent* event);
void QMessageBox_OnChildEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseChildEvent(QMessageBox* self, QChildEvent* event);
void QMessageBox_CustomEvent(QMessageBox* self, QEvent* event);
void QMessageBox_OnCustomEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseCustomEvent(QMessageBox* self, QEvent* event);
void QMessageBox_ConnectNotify(QMessageBox* self, const QMetaMethod* signal);
void QMessageBox_OnConnectNotify(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseConnectNotify(QMessageBox* self, const QMetaMethod* signal);
void QMessageBox_DisconnectNotify(QMessageBox* self, const QMetaMethod* signal);
void QMessageBox_OnDisconnectNotify(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseDisconnectNotify(QMessageBox* self, const QMetaMethod* signal);
void QMessageBox_AdjustPosition(QMessageBox* self, QWidget* param1);
void QMessageBox_OnAdjustPosition(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseAdjustPosition(QMessageBox* self, QWidget* param1);
void QMessageBox_UpdateMicroFocus(QMessageBox* self);
void QMessageBox_OnUpdateMicroFocus(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseUpdateMicroFocus(QMessageBox* self);
void QMessageBox_Create(QMessageBox* self);
void QMessageBox_OnCreate(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseCreate(QMessageBox* self);
void QMessageBox_Destroy(QMessageBox* self);
void QMessageBox_OnDestroy(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseDestroy(QMessageBox* self);
bool QMessageBox_FocusNextChild(QMessageBox* self);
void QMessageBox_OnFocusNextChild(QMessageBox* self, intptr_t slot);
bool QMessageBox_QBaseFocusNextChild(QMessageBox* self);
bool QMessageBox_FocusPreviousChild(QMessageBox* self);
void QMessageBox_OnFocusPreviousChild(QMessageBox* self, intptr_t slot);
bool QMessageBox_QBaseFocusPreviousChild(QMessageBox* self);
QObject* QMessageBox_Sender(const QMessageBox* self);
void QMessageBox_OnSender(const QMessageBox* self, intptr_t slot);
QObject* QMessageBox_QBaseSender(const QMessageBox* self);
int QMessageBox_SenderSignalIndex(const QMessageBox* self);
void QMessageBox_OnSenderSignalIndex(const QMessageBox* self, intptr_t slot);
int QMessageBox_QBaseSenderSignalIndex(const QMessageBox* self);
int QMessageBox_Receivers(const QMessageBox* self, const char* signal);
void QMessageBox_OnReceivers(const QMessageBox* self, intptr_t slot);
int QMessageBox_QBaseReceivers(const QMessageBox* self, const char* signal);
bool QMessageBox_IsSignalConnected(const QMessageBox* self, const QMetaMethod* signal);
void QMessageBox_OnIsSignalConnected(const QMessageBox* self, intptr_t slot);
bool QMessageBox_QBaseIsSignalConnected(const QMessageBox* self, const QMetaMethod* signal);
void QMessageBox_Delete(QMessageBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
