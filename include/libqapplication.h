#pragma once
#ifndef SRCC_LIBQAPPLICATION_H
#define SRCC_LIBQAPPLICATION_H

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
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QAnyStringView QAnyStringView;
typedef struct QApplication QApplication;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QClipboard QClipboard;
typedef struct QCoreApplication QCoreApplication;
typedef struct QCursor QCursor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGuiApplication QGuiApplication;
typedef struct QIcon QIcon;
typedef struct QInputMethod QInputMethod;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QScreen QScreen;
typedef struct QSessionManager QSessionManager;
typedef struct QStyle QStyle;
typedef struct QStyleHints QStyleHints;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTranslator QTranslator;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

QApplication* QApplication_new(int* argc, char** argv);
QApplication* QApplication_new2(int* argc, char** argv, int param3);
QMetaObject* QApplication_MetaObject(const QApplication* self);
void* QApplication_Metacast(QApplication* self, const char* param1);
int QApplication_Metacall(QApplication* self, int param1, int param2, void** param3);
void QApplication_OnMetacall(QApplication* self, intptr_t slot);
int QApplication_QBaseMetacall(QApplication* self, int param1, int param2, void** param3);
libqt_string QApplication_Tr(const char* s);
QStyle* QApplication_Style();
void QApplication_SetStyle(QStyle* style);
QStyle* QApplication_SetStyleWithStyle(libqt_string style);
QPalette* QApplication_Palette(QWidget* param1);
QPalette* QApplication_PaletteWithClassName(const char* className);
void QApplication_SetPalette(QPalette* param1);
QFont* QApplication_Font();
QFont* QApplication_FontWithQWidget(QWidget* param1);
QFont* QApplication_FontWithClassName(const char* className);
void QApplication_SetFont(QFont* param1);
QFontMetrics* QApplication_FontMetrics();
libqt_list /* of QWidget* */ QApplication_AllWidgets();
libqt_list /* of QWidget* */ QApplication_TopLevelWidgets();
QWidget* QApplication_ActivePopupWidget();
QWidget* QApplication_ActiveModalWidget();
QWidget* QApplication_FocusWidget();
QWidget* QApplication_ActiveWindow();
void QApplication_SetActiveWindow(QWidget* act);
QWidget* QApplication_WidgetAt(QPoint* p);
QWidget* QApplication_WidgetAt2(int x, int y);
QWidget* QApplication_TopLevelAt(QPoint* p);
QWidget* QApplication_TopLevelAt2(int x, int y);
void QApplication_Beep();
void QApplication_Alert(QWidget* widget);
void QApplication_SetCursorFlashTime(int cursorFlashTime);
int QApplication_CursorFlashTime();
void QApplication_SetDoubleClickInterval(int doubleClickInterval);
int QApplication_DoubleClickInterval();
void QApplication_SetKeyboardInputInterval(int keyboardInputInterval);
int QApplication_KeyboardInputInterval();
void QApplication_SetWheelScrollLines(int wheelScrollLines);
int QApplication_WheelScrollLines();
void QApplication_SetStartDragTime(int ms);
int QApplication_StartDragTime();
void QApplication_SetStartDragDistance(int l);
int QApplication_StartDragDistance();
bool QApplication_IsEffectEnabled(int param1);
void QApplication_SetEffectEnabled(int param1);
int QApplication_Exec();
bool QApplication_Notify(QApplication* self, QObject* param1, QEvent* param2);
void QApplication_OnNotify(QApplication* self, intptr_t slot);
bool QApplication_QBaseNotify(QApplication* self, QObject* param1, QEvent* param2);
void QApplication_FocusChanged(QApplication* self, QWidget* old, QWidget* now);
void QApplication_Connect_FocusChanged(QApplication* self, intptr_t slot);
libqt_string QApplication_StyleSheet(const QApplication* self);
void QApplication_SetStyleSheet(QApplication* self, libqt_string sheet);
void QApplication_SetAutoSipEnabled(QApplication* self, const bool enabled);
bool QApplication_AutoSipEnabled(const QApplication* self);
void QApplication_CloseAllWindows();
void QApplication_AboutQt();
bool QApplication_Event(QApplication* self, QEvent* param1);
void QApplication_OnEvent(QApplication* self, intptr_t slot);
bool QApplication_QBaseEvent(QApplication* self, QEvent* param1);
libqt_string QApplication_Tr2(const char* s, const char* c);
libqt_string QApplication_Tr3(const char* s, const char* c, int n);
void QApplication_SetPalette2(QPalette* param1, const char* className);
void QApplication_SetFont2(QFont* param1, const char* className);
void QApplication_Alert2(QWidget* widget, int duration);
void QApplication_SetEffectEnabled2(int param1, bool enable);
bool QApplication_EventFilter(QApplication* self, QObject* watched, QEvent* event);
void QApplication_OnEventFilter(QApplication* self, intptr_t slot);
bool QApplication_QBaseEventFilter(QApplication* self, QObject* watched, QEvent* event);
void QApplication_TimerEvent(QApplication* self, QTimerEvent* event);
void QApplication_OnTimerEvent(QApplication* self, intptr_t slot);
void QApplication_QBaseTimerEvent(QApplication* self, QTimerEvent* event);
void QApplication_ChildEvent(QApplication* self, QChildEvent* event);
void QApplication_OnChildEvent(QApplication* self, intptr_t slot);
void QApplication_QBaseChildEvent(QApplication* self, QChildEvent* event);
void QApplication_CustomEvent(QApplication* self, QEvent* event);
void QApplication_OnCustomEvent(QApplication* self, intptr_t slot);
void QApplication_QBaseCustomEvent(QApplication* self, QEvent* event);
void QApplication_ConnectNotify(QApplication* self, QMetaMethod* signal);
void QApplication_OnConnectNotify(QApplication* self, intptr_t slot);
void QApplication_QBaseConnectNotify(QApplication* self, QMetaMethod* signal);
void QApplication_DisconnectNotify(QApplication* self, QMetaMethod* signal);
void QApplication_OnDisconnectNotify(QApplication* self, intptr_t slot);
void QApplication_QBaseDisconnectNotify(QApplication* self, QMetaMethod* signal);
void* QApplication_ResolveInterface(const QApplication* self, const char* name, int revision);
void QApplication_OnResolveInterface(const QApplication* self, intptr_t slot);
void* QApplication_QBaseResolveInterface(const QApplication* self, const char* name, int revision);
QObject* QApplication_Sender(const QApplication* self);
void QApplication_OnSender(const QApplication* self, intptr_t slot);
QObject* QApplication_QBaseSender(const QApplication* self);
int QApplication_SenderSignalIndex(const QApplication* self);
void QApplication_OnSenderSignalIndex(const QApplication* self, intptr_t slot);
int QApplication_QBaseSenderSignalIndex(const QApplication* self);
int QApplication_Receivers(const QApplication* self, const char* signal);
void QApplication_OnReceivers(const QApplication* self, intptr_t slot);
int QApplication_QBaseReceivers(const QApplication* self, const char* signal);
bool QApplication_IsSignalConnected(const QApplication* self, QMetaMethod* signal);
void QApplication_OnIsSignalConnected(const QApplication* self, intptr_t slot);
bool QApplication_QBaseIsSignalConnected(const QApplication* self, QMetaMethod* signal);
void QApplication_Delete(QApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
