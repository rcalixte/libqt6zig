#pragma once
#ifndef SRCC_LIBQGUIAPPLICATION_H
#define SRCC_LIBQGUIAPPLICATION_H

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
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QClipboard QClipboard;
typedef struct QCoreApplication QCoreApplication;
typedef struct QCursor QCursor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
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
typedef struct QStyleHints QStyleHints;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTranslator QTranslator;
typedef struct QVariant QVariant;
typedef struct QWindow QWindow;
#endif

QGuiApplication* QGuiApplication_new(int* argc, char** argv);
QGuiApplication* QGuiApplication_new2(int* argc, char** argv, int param3);
QMetaObject* QGuiApplication_MetaObject(const QGuiApplication* self);
void* QGuiApplication_Metacast(QGuiApplication* self, const char* param1);
int QGuiApplication_Metacall(QGuiApplication* self, int param1, int param2, void** param3);
void QGuiApplication_OnMetacall(QGuiApplication* self, intptr_t slot);
int QGuiApplication_QBaseMetacall(QGuiApplication* self, int param1, int param2, void** param3);
libqt_string QGuiApplication_Tr(const char* s);
void QGuiApplication_SetApplicationDisplayName(libqt_string name);
libqt_string QGuiApplication_ApplicationDisplayName();
void QGuiApplication_SetDesktopFileName(libqt_string name);
libqt_string QGuiApplication_DesktopFileName();
libqt_list /* of QWindow* */ QGuiApplication_AllWindows();
libqt_list /* of QWindow* */ QGuiApplication_TopLevelWindows();
QWindow* QGuiApplication_TopLevelAt(QPoint* pos);
void QGuiApplication_SetWindowIcon(QIcon* icon);
QIcon* QGuiApplication_WindowIcon();
libqt_string QGuiApplication_PlatformName();
QWindow* QGuiApplication_ModalWindow();
QWindow* QGuiApplication_FocusWindow();
QObject* QGuiApplication_FocusObject();
QScreen* QGuiApplication_PrimaryScreen();
libqt_list /* of QScreen* */ QGuiApplication_Screens();
QScreen* QGuiApplication_ScreenAt(QPoint* point);
double QGuiApplication_DevicePixelRatio(const QGuiApplication* self);
QCursor* QGuiApplication_OverrideCursor();
void QGuiApplication_SetOverrideCursor(QCursor* overrideCursor);
void QGuiApplication_ChangeOverrideCursor(QCursor* param1);
void QGuiApplication_RestoreOverrideCursor();
QFont* QGuiApplication_Font();
void QGuiApplication_SetFont(QFont* font);
QClipboard* QGuiApplication_Clipboard();
QPalette* QGuiApplication_Palette();
void QGuiApplication_SetPalette(QPalette* pal);
int QGuiApplication_KeyboardModifiers();
int QGuiApplication_QueryKeyboardModifiers();
int QGuiApplication_MouseButtons();
void QGuiApplication_SetLayoutDirection(int direction);
int QGuiApplication_LayoutDirection();
bool QGuiApplication_IsRightToLeft();
bool QGuiApplication_IsLeftToRight();
QStyleHints* QGuiApplication_StyleHints();
void QGuiApplication_SetDesktopSettingsAware(bool on);
bool QGuiApplication_DesktopSettingsAware();
QInputMethod* QGuiApplication_InputMethod();
void QGuiApplication_SetQuitOnLastWindowClosed(bool quit);
bool QGuiApplication_QuitOnLastWindowClosed();
int QGuiApplication_ApplicationState();
void QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(int policy);
int QGuiApplication_HighDpiScaleFactorRoundingPolicy();
int QGuiApplication_Exec();
bool QGuiApplication_Notify(QGuiApplication* self, QObject* param1, QEvent* param2);
void QGuiApplication_OnNotify(QGuiApplication* self, intptr_t slot);
bool QGuiApplication_QBaseNotify(QGuiApplication* self, QObject* param1, QEvent* param2);
bool QGuiApplication_IsSessionRestored(const QGuiApplication* self);
libqt_string QGuiApplication_SessionId(const QGuiApplication* self);
libqt_string QGuiApplication_SessionKey(const QGuiApplication* self);
bool QGuiApplication_IsSavingSession(const QGuiApplication* self);
void QGuiApplication_Sync();
void QGuiApplication_FontDatabaseChanged(QGuiApplication* self);
void QGuiApplication_Connect_FontDatabaseChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ScreenAdded(QGuiApplication* self, QScreen* screen);
void QGuiApplication_Connect_ScreenAdded(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ScreenRemoved(QGuiApplication* self, QScreen* screen);
void QGuiApplication_Connect_ScreenRemoved(QGuiApplication* self, intptr_t slot);
void QGuiApplication_PrimaryScreenChanged(QGuiApplication* self, QScreen* screen);
void QGuiApplication_Connect_PrimaryScreenChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_LastWindowClosed(QGuiApplication* self);
void QGuiApplication_Connect_LastWindowClosed(QGuiApplication* self, intptr_t slot);
void QGuiApplication_FocusObjectChanged(QGuiApplication* self, QObject* focusObject);
void QGuiApplication_Connect_FocusObjectChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_FocusWindowChanged(QGuiApplication* self, QWindow* focusWindow);
void QGuiApplication_Connect_FocusWindowChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ApplicationStateChanged(QGuiApplication* self, int state);
void QGuiApplication_Connect_ApplicationStateChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_LayoutDirectionChanged(QGuiApplication* self, int direction);
void QGuiApplication_Connect_LayoutDirectionChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_CommitDataRequest(QGuiApplication* self, QSessionManager* sessionManager);
void QGuiApplication_Connect_CommitDataRequest(QGuiApplication* self, intptr_t slot);
void QGuiApplication_SaveStateRequest(QGuiApplication* self, QSessionManager* sessionManager);
void QGuiApplication_Connect_SaveStateRequest(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ApplicationDisplayNameChanged(QGuiApplication* self);
void QGuiApplication_Connect_ApplicationDisplayNameChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_PaletteChanged(QGuiApplication* self, QPalette* pal);
void QGuiApplication_Connect_PaletteChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_FontChanged(QGuiApplication* self, QFont* font);
void QGuiApplication_Connect_FontChanged(QGuiApplication* self, intptr_t slot);
bool QGuiApplication_Event(QGuiApplication* self, QEvent* param1);
void QGuiApplication_OnEvent(QGuiApplication* self, intptr_t slot);
bool QGuiApplication_QBaseEvent(QGuiApplication* self, QEvent* param1);
libqt_string QGuiApplication_Tr2(const char* s, const char* c);
libqt_string QGuiApplication_Tr3(const char* s, const char* c, int n);
bool QGuiApplication_EventFilter(QGuiApplication* self, QObject* watched, QEvent* event);
void QGuiApplication_OnEventFilter(QGuiApplication* self, intptr_t slot);
bool QGuiApplication_QBaseEventFilter(QGuiApplication* self, QObject* watched, QEvent* event);
void QGuiApplication_TimerEvent(QGuiApplication* self, QTimerEvent* event);
void QGuiApplication_OnTimerEvent(QGuiApplication* self, intptr_t slot);
void QGuiApplication_QBaseTimerEvent(QGuiApplication* self, QTimerEvent* event);
void QGuiApplication_ChildEvent(QGuiApplication* self, QChildEvent* event);
void QGuiApplication_OnChildEvent(QGuiApplication* self, intptr_t slot);
void QGuiApplication_QBaseChildEvent(QGuiApplication* self, QChildEvent* event);
void QGuiApplication_CustomEvent(QGuiApplication* self, QEvent* event);
void QGuiApplication_OnCustomEvent(QGuiApplication* self, intptr_t slot);
void QGuiApplication_QBaseCustomEvent(QGuiApplication* self, QEvent* event);
void QGuiApplication_ConnectNotify(QGuiApplication* self, QMetaMethod* signal);
void QGuiApplication_OnConnectNotify(QGuiApplication* self, intptr_t slot);
void QGuiApplication_QBaseConnectNotify(QGuiApplication* self, QMetaMethod* signal);
void QGuiApplication_DisconnectNotify(QGuiApplication* self, QMetaMethod* signal);
void QGuiApplication_OnDisconnectNotify(QGuiApplication* self, intptr_t slot);
void QGuiApplication_QBaseDisconnectNotify(QGuiApplication* self, QMetaMethod* signal);
void* QGuiApplication_ResolveInterface(const QGuiApplication* self, const char* name, int revision);
void QGuiApplication_OnResolveInterface(const QGuiApplication* self, intptr_t slot);
void* QGuiApplication_QBaseResolveInterface(const QGuiApplication* self, const char* name, int revision);
QObject* QGuiApplication_Sender(const QGuiApplication* self);
void QGuiApplication_OnSender(const QGuiApplication* self, intptr_t slot);
QObject* QGuiApplication_QBaseSender(const QGuiApplication* self);
int QGuiApplication_SenderSignalIndex(const QGuiApplication* self);
void QGuiApplication_OnSenderSignalIndex(const QGuiApplication* self, intptr_t slot);
int QGuiApplication_QBaseSenderSignalIndex(const QGuiApplication* self);
int QGuiApplication_Receivers(const QGuiApplication* self, const char* signal);
void QGuiApplication_OnReceivers(const QGuiApplication* self, intptr_t slot);
int QGuiApplication_QBaseReceivers(const QGuiApplication* self, const char* signal);
bool QGuiApplication_IsSignalConnected(const QGuiApplication* self, QMetaMethod* signal);
void QGuiApplication_OnIsSignalConnected(const QGuiApplication* self, intptr_t slot);
bool QGuiApplication_QBaseIsSignalConnected(const QGuiApplication* self, QMetaMethod* signal);
void QGuiApplication_Delete(QGuiApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
