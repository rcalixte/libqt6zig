#pragma once
#ifndef SRCC_LIBQLINEEDIT_H
#define SRCC_LIBQLINEEDIT_H

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
typedef struct QCompleter QCompleter;
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
typedef struct QMenu QMenu;
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
typedef struct QValidator QValidator;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QLineEdit::ActionPosition ActionPosition; // C++ enum
typedef QLineEdit::EchoMode EchoMode;             // C++ enum
#else
typedef int ActionPosition; // C ABI enum
typedef int EchoMode;       // C ABI enum
#endif

QLineEdit* QLineEdit_new(QWidget* parent);
QLineEdit* QLineEdit_new2();
QLineEdit* QLineEdit_new3(libqt_string param1);
QLineEdit* QLineEdit_new4(libqt_string param1, QWidget* parent);
QMetaObject* QLineEdit_MetaObject(const QLineEdit* self);
void* QLineEdit_Metacast(QLineEdit* self, const char* param1);
int QLineEdit_Metacall(QLineEdit* self, int param1, int param2, void** param3);
void QLineEdit_OnMetacall(QLineEdit* self, intptr_t slot);
int QLineEdit_QBaseMetacall(QLineEdit* self, int param1, int param2, void** param3);
libqt_string QLineEdit_Tr(const char* s);
libqt_string QLineEdit_Text(const QLineEdit* self);
libqt_string QLineEdit_DisplayText(const QLineEdit* self);
libqt_string QLineEdit_PlaceholderText(const QLineEdit* self);
void QLineEdit_SetPlaceholderText(QLineEdit* self, libqt_string placeholderText);
int QLineEdit_MaxLength(const QLineEdit* self);
void QLineEdit_SetMaxLength(QLineEdit* self, int maxLength);
void QLineEdit_SetFrame(QLineEdit* self, bool frame);
bool QLineEdit_HasFrame(const QLineEdit* self);
void QLineEdit_SetClearButtonEnabled(QLineEdit* self, bool enable);
bool QLineEdit_IsClearButtonEnabled(const QLineEdit* self);
int QLineEdit_EchoMode(const QLineEdit* self);
void QLineEdit_SetEchoMode(QLineEdit* self, int echoMode);
bool QLineEdit_IsReadOnly(const QLineEdit* self);
void QLineEdit_SetReadOnly(QLineEdit* self, bool readOnly);
void QLineEdit_SetValidator(QLineEdit* self, QValidator* validator);
QValidator* QLineEdit_Validator(const QLineEdit* self);
void QLineEdit_SetCompleter(QLineEdit* self, QCompleter* completer);
QCompleter* QLineEdit_Completer(const QLineEdit* self);
QSize* QLineEdit_SizeHint(const QLineEdit* self);
void QLineEdit_OnSizeHint(const QLineEdit* self, intptr_t slot);
QSize* QLineEdit_QBaseSizeHint(const QLineEdit* self);
QSize* QLineEdit_MinimumSizeHint(const QLineEdit* self);
void QLineEdit_OnMinimumSizeHint(const QLineEdit* self, intptr_t slot);
QSize* QLineEdit_QBaseMinimumSizeHint(const QLineEdit* self);
int QLineEdit_CursorPosition(const QLineEdit* self);
void QLineEdit_SetCursorPosition(QLineEdit* self, int cursorPosition);
int QLineEdit_CursorPositionAt(QLineEdit* self, QPoint* pos);
void QLineEdit_SetAlignment(QLineEdit* self, int flag);
int QLineEdit_Alignment(const QLineEdit* self);
void QLineEdit_CursorForward(QLineEdit* self, bool mark);
void QLineEdit_CursorBackward(QLineEdit* self, bool mark);
void QLineEdit_CursorWordForward(QLineEdit* self, bool mark);
void QLineEdit_CursorWordBackward(QLineEdit* self, bool mark);
void QLineEdit_Backspace(QLineEdit* self);
void QLineEdit_Del(QLineEdit* self);
void QLineEdit_Home(QLineEdit* self, bool mark);
void QLineEdit_End(QLineEdit* self, bool mark);
bool QLineEdit_IsModified(const QLineEdit* self);
void QLineEdit_SetModified(QLineEdit* self, bool modified);
void QLineEdit_SetSelection(QLineEdit* self, int param1, int param2);
bool QLineEdit_HasSelectedText(const QLineEdit* self);
libqt_string QLineEdit_SelectedText(const QLineEdit* self);
int QLineEdit_SelectionStart(const QLineEdit* self);
int QLineEdit_SelectionEnd(const QLineEdit* self);
int QLineEdit_SelectionLength(const QLineEdit* self);
bool QLineEdit_IsUndoAvailable(const QLineEdit* self);
bool QLineEdit_IsRedoAvailable(const QLineEdit* self);
void QLineEdit_SetDragEnabled(QLineEdit* self, bool b);
bool QLineEdit_DragEnabled(const QLineEdit* self);
void QLineEdit_SetCursorMoveStyle(QLineEdit* self, int style);
int QLineEdit_CursorMoveStyle(const QLineEdit* self);
libqt_string QLineEdit_InputMask(const QLineEdit* self);
void QLineEdit_SetInputMask(QLineEdit* self, libqt_string inputMask);
bool QLineEdit_HasAcceptableInput(const QLineEdit* self);
void QLineEdit_SetTextMargins(QLineEdit* self, int left, int top, int right, int bottom);
void QLineEdit_SetTextMarginsWithMargins(QLineEdit* self, QMargins* margins);
QMargins* QLineEdit_TextMargins(const QLineEdit* self);
void QLineEdit_AddAction(QLineEdit* self, QAction* action, int position);
QAction* QLineEdit_AddAction2(QLineEdit* self, QIcon* icon, int position);
void QLineEdit_SetText(QLineEdit* self, libqt_string text);
void QLineEdit_Clear(QLineEdit* self);
void QLineEdit_SelectAll(QLineEdit* self);
void QLineEdit_Undo(QLineEdit* self);
void QLineEdit_Redo(QLineEdit* self);
void QLineEdit_Cut(QLineEdit* self);
void QLineEdit_Copy(const QLineEdit* self);
void QLineEdit_Paste(QLineEdit* self);
void QLineEdit_Deselect(QLineEdit* self);
void QLineEdit_Insert(QLineEdit* self, libqt_string param1);
QMenu* QLineEdit_CreateStandardContextMenu(QLineEdit* self);
void QLineEdit_TextChanged(QLineEdit* self, libqt_string param1);
void QLineEdit_Connect_TextChanged(QLineEdit* self, intptr_t slot);
void QLineEdit_TextEdited(QLineEdit* self, libqt_string param1);
void QLineEdit_Connect_TextEdited(QLineEdit* self, intptr_t slot);
void QLineEdit_CursorPositionChanged(QLineEdit* self, int param1, int param2);
void QLineEdit_Connect_CursorPositionChanged(QLineEdit* self, intptr_t slot);
void QLineEdit_ReturnPressed(QLineEdit* self);
void QLineEdit_Connect_ReturnPressed(QLineEdit* self, intptr_t slot);
void QLineEdit_EditingFinished(QLineEdit* self);
void QLineEdit_Connect_EditingFinished(QLineEdit* self, intptr_t slot);
void QLineEdit_SelectionChanged(QLineEdit* self);
void QLineEdit_Connect_SelectionChanged(QLineEdit* self, intptr_t slot);
void QLineEdit_InputRejected(QLineEdit* self);
void QLineEdit_Connect_InputRejected(QLineEdit* self, intptr_t slot);
void QLineEdit_MousePressEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_OnMousePressEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseMousePressEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_MouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_OnMouseMoveEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseMouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_MouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_OnMouseReleaseEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseMouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_MouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_OnMouseDoubleClickEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseMouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_KeyPressEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_OnKeyPressEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseKeyPressEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_KeyReleaseEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_OnKeyReleaseEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseKeyReleaseEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_FocusInEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_OnFocusInEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseFocusInEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_FocusOutEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_OnFocusOutEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseFocusOutEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_PaintEvent(QLineEdit* self, QPaintEvent* param1);
void QLineEdit_OnPaintEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBasePaintEvent(QLineEdit* self, QPaintEvent* param1);
void QLineEdit_DragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
void QLineEdit_OnDragEnterEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseDragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
void QLineEdit_DragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
void QLineEdit_OnDragMoveEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseDragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
void QLineEdit_DragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
void QLineEdit_OnDragLeaveEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseDragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
void QLineEdit_DropEvent(QLineEdit* self, QDropEvent* param1);
void QLineEdit_OnDropEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseDropEvent(QLineEdit* self, QDropEvent* param1);
void QLineEdit_ChangeEvent(QLineEdit* self, QEvent* param1);
void QLineEdit_OnChangeEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseChangeEvent(QLineEdit* self, QEvent* param1);
void QLineEdit_ContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
void QLineEdit_OnContextMenuEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
void QLineEdit_InputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
void QLineEdit_OnInputMethodEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseInputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
void QLineEdit_InitStyleOption(const QLineEdit* self, QStyleOptionFrame* option);
void QLineEdit_OnInitStyleOption(const QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseInitStyleOption(const QLineEdit* self, QStyleOptionFrame* option);
QVariant* QLineEdit_InputMethodQuery(const QLineEdit* self, int param1);
void QLineEdit_OnInputMethodQuery(const QLineEdit* self, intptr_t slot);
QVariant* QLineEdit_QBaseInputMethodQuery(const QLineEdit* self, int param1);
QVariant* QLineEdit_InputMethodQuery2(const QLineEdit* self, int property, QVariant* argument);
void QLineEdit_TimerEvent(QLineEdit* self, QTimerEvent* param1);
void QLineEdit_OnTimerEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseTimerEvent(QLineEdit* self, QTimerEvent* param1);
bool QLineEdit_Event(QLineEdit* self, QEvent* param1);
void QLineEdit_OnEvent(QLineEdit* self, intptr_t slot);
bool QLineEdit_QBaseEvent(QLineEdit* self, QEvent* param1);
libqt_string QLineEdit_Tr2(const char* s, const char* c);
libqt_string QLineEdit_Tr3(const char* s, const char* c, int n);
void QLineEdit_CursorForward2(QLineEdit* self, bool mark, int steps);
void QLineEdit_CursorBackward2(QLineEdit* self, bool mark, int steps);
int QLineEdit_DevType(const QLineEdit* self);
void QLineEdit_OnDevType(const QLineEdit* self, intptr_t slot);
int QLineEdit_QBaseDevType(const QLineEdit* self);
void QLineEdit_SetVisible(QLineEdit* self, bool visible);
void QLineEdit_OnSetVisible(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseSetVisible(QLineEdit* self, bool visible);
int QLineEdit_HeightForWidth(const QLineEdit* self, int param1);
void QLineEdit_OnHeightForWidth(const QLineEdit* self, intptr_t slot);
int QLineEdit_QBaseHeightForWidth(const QLineEdit* self, int param1);
bool QLineEdit_HasHeightForWidth(const QLineEdit* self);
void QLineEdit_OnHasHeightForWidth(const QLineEdit* self, intptr_t slot);
bool QLineEdit_QBaseHasHeightForWidth(const QLineEdit* self);
QPaintEngine* QLineEdit_PaintEngine(const QLineEdit* self);
void QLineEdit_OnPaintEngine(const QLineEdit* self, intptr_t slot);
QPaintEngine* QLineEdit_QBasePaintEngine(const QLineEdit* self);
void QLineEdit_WheelEvent(QLineEdit* self, QWheelEvent* event);
void QLineEdit_OnWheelEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseWheelEvent(QLineEdit* self, QWheelEvent* event);
void QLineEdit_EnterEvent(QLineEdit* self, QEnterEvent* event);
void QLineEdit_OnEnterEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseEnterEvent(QLineEdit* self, QEnterEvent* event);
void QLineEdit_LeaveEvent(QLineEdit* self, QEvent* event);
void QLineEdit_OnLeaveEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseLeaveEvent(QLineEdit* self, QEvent* event);
void QLineEdit_MoveEvent(QLineEdit* self, QMoveEvent* event);
void QLineEdit_OnMoveEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseMoveEvent(QLineEdit* self, QMoveEvent* event);
void QLineEdit_ResizeEvent(QLineEdit* self, QResizeEvent* event);
void QLineEdit_OnResizeEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseResizeEvent(QLineEdit* self, QResizeEvent* event);
void QLineEdit_CloseEvent(QLineEdit* self, QCloseEvent* event);
void QLineEdit_OnCloseEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseCloseEvent(QLineEdit* self, QCloseEvent* event);
void QLineEdit_TabletEvent(QLineEdit* self, QTabletEvent* event);
void QLineEdit_OnTabletEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseTabletEvent(QLineEdit* self, QTabletEvent* event);
void QLineEdit_ActionEvent(QLineEdit* self, QActionEvent* event);
void QLineEdit_OnActionEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseActionEvent(QLineEdit* self, QActionEvent* event);
void QLineEdit_ShowEvent(QLineEdit* self, QShowEvent* event);
void QLineEdit_OnShowEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseShowEvent(QLineEdit* self, QShowEvent* event);
void QLineEdit_HideEvent(QLineEdit* self, QHideEvent* event);
void QLineEdit_OnHideEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseHideEvent(QLineEdit* self, QHideEvent* event);
bool QLineEdit_NativeEvent(QLineEdit* self, libqt_string eventType, void* message, intptr_t* result);
void QLineEdit_OnNativeEvent(QLineEdit* self, intptr_t slot);
bool QLineEdit_QBaseNativeEvent(QLineEdit* self, libqt_string eventType, void* message, intptr_t* result);
bool QLineEdit_FocusNextPrevChild(QLineEdit* self, bool next);
void QLineEdit_OnFocusNextPrevChild(QLineEdit* self, intptr_t slot);
bool QLineEdit_QBaseFocusNextPrevChild(QLineEdit* self, bool next);
bool QLineEdit_EventFilter(QLineEdit* self, QObject* watched, QEvent* event);
void QLineEdit_OnEventFilter(QLineEdit* self, intptr_t slot);
bool QLineEdit_QBaseEventFilter(QLineEdit* self, QObject* watched, QEvent* event);
void QLineEdit_ChildEvent(QLineEdit* self, QChildEvent* event);
void QLineEdit_OnChildEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseChildEvent(QLineEdit* self, QChildEvent* event);
void QLineEdit_CustomEvent(QLineEdit* self, QEvent* event);
void QLineEdit_OnCustomEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseCustomEvent(QLineEdit* self, QEvent* event);
void QLineEdit_ConnectNotify(QLineEdit* self, QMetaMethod* signal);
void QLineEdit_OnConnectNotify(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseConnectNotify(QLineEdit* self, QMetaMethod* signal);
void QLineEdit_DisconnectNotify(QLineEdit* self, QMetaMethod* signal);
void QLineEdit_OnDisconnectNotify(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseDisconnectNotify(QLineEdit* self, QMetaMethod* signal);
int QLineEdit_Metric(const QLineEdit* self, int param1);
void QLineEdit_OnMetric(const QLineEdit* self, intptr_t slot);
int QLineEdit_QBaseMetric(const QLineEdit* self, int param1);
void QLineEdit_InitPainter(const QLineEdit* self, QPainter* painter);
void QLineEdit_OnInitPainter(const QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseInitPainter(const QLineEdit* self, QPainter* painter);
QPaintDevice* QLineEdit_Redirected(const QLineEdit* self, QPoint* offset);
void QLineEdit_OnRedirected(const QLineEdit* self, intptr_t slot);
QPaintDevice* QLineEdit_QBaseRedirected(const QLineEdit* self, QPoint* offset);
QPainter* QLineEdit_SharedPainter(const QLineEdit* self);
void QLineEdit_OnSharedPainter(const QLineEdit* self, intptr_t slot);
QPainter* QLineEdit_QBaseSharedPainter(const QLineEdit* self);
QRect* QLineEdit_CursorRect(const QLineEdit* self);
void QLineEdit_OnCursorRect(const QLineEdit* self, intptr_t slot);
QRect* QLineEdit_QBaseCursorRect(const QLineEdit* self);
void QLineEdit_UpdateMicroFocus(QLineEdit* self);
void QLineEdit_OnUpdateMicroFocus(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseUpdateMicroFocus(QLineEdit* self);
void QLineEdit_Create(QLineEdit* self);
void QLineEdit_OnCreate(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseCreate(QLineEdit* self);
void QLineEdit_Destroy(QLineEdit* self);
void QLineEdit_OnDestroy(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseDestroy(QLineEdit* self);
bool QLineEdit_FocusNextChild(QLineEdit* self);
void QLineEdit_OnFocusNextChild(QLineEdit* self, intptr_t slot);
bool QLineEdit_QBaseFocusNextChild(QLineEdit* self);
bool QLineEdit_FocusPreviousChild(QLineEdit* self);
void QLineEdit_OnFocusPreviousChild(QLineEdit* self, intptr_t slot);
bool QLineEdit_QBaseFocusPreviousChild(QLineEdit* self);
QObject* QLineEdit_Sender(const QLineEdit* self);
void QLineEdit_OnSender(const QLineEdit* self, intptr_t slot);
QObject* QLineEdit_QBaseSender(const QLineEdit* self);
int QLineEdit_SenderSignalIndex(const QLineEdit* self);
void QLineEdit_OnSenderSignalIndex(const QLineEdit* self, intptr_t slot);
int QLineEdit_QBaseSenderSignalIndex(const QLineEdit* self);
int QLineEdit_Receivers(const QLineEdit* self, const char* signal);
void QLineEdit_OnReceivers(const QLineEdit* self, intptr_t slot);
int QLineEdit_QBaseReceivers(const QLineEdit* self, const char* signal);
bool QLineEdit_IsSignalConnected(const QLineEdit* self, QMetaMethod* signal);
void QLineEdit_OnIsSignalConnected(const QLineEdit* self, intptr_t slot);
bool QLineEdit_QBaseIsSignalConnected(const QLineEdit* self, QMetaMethod* signal);
void QLineEdit_Delete(QLineEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
