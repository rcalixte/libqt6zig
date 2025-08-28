#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBEMULATION_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBEMULATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Emulation)
typedef Konsole::Emulation Konsole__Emulation;
#endif
#else
typedef struct Konsole__Emulation Konsole__Emulation;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

Konsole__Emulation* Konsole__Emulation_new();
QMetaObject* Konsole__Emulation_MetaObject(const Konsole__Emulation* self);
void* Konsole__Emulation_Metacast(Konsole__Emulation* self, const char* param1);
int Konsole__Emulation_Metacall(Konsole__Emulation* self, int param1, int param2, void** param3);
libqt_string Konsole__Emulation_Tr(const char* s);
QSize* Konsole__Emulation_ImageSize(const Konsole__Emulation* self);
int Konsole__Emulation_LineCount(const Konsole__Emulation* self);
void Konsole__Emulation_ClearHistory(Konsole__Emulation* self);
char Konsole__Emulation_EraseChar(const Konsole__Emulation* self);
void Konsole__Emulation_SetKeyBindings(Konsole__Emulation* self, const libqt_string name);
libqt_string Konsole__Emulation_KeyBindings(const Konsole__Emulation* self);
void Konsole__Emulation_ClearEntireScreen(Konsole__Emulation* self);
void Konsole__Emulation_Reset(Konsole__Emulation* self);
bool Konsole__Emulation_ProgramUsesMouse(const Konsole__Emulation* self);
bool Konsole__Emulation_ProgramBracketedPasteMode(const Konsole__Emulation* self);
void Konsole__Emulation_SetImageSize(Konsole__Emulation* self, int lines, int columns);
void Konsole__Emulation_SendText(Konsole__Emulation* self, const libqt_string text);
void Konsole__Emulation_SendKeyEvent(Konsole__Emulation* self, QKeyEvent* param1, bool fromPaste);
void Konsole__Emulation_SendMouseEvent(Konsole__Emulation* self, int buttons, int column, int line, int eventType);
void Konsole__Emulation_SendString(Konsole__Emulation* self, const char* stringVal, int length);
void Konsole__Emulation_ReceiveData(Konsole__Emulation* self, const char* buffer, int lenVal);
void Konsole__Emulation_SendData(Konsole__Emulation* self, const char* data, int lenVal);
void Konsole__Emulation_Connect_SendData(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_LockPtyRequest(Konsole__Emulation* self, bool suspendVal);
void Konsole__Emulation_Connect_LockPtyRequest(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_UseUtf8Request(Konsole__Emulation* self, bool param1);
void Konsole__Emulation_Connect_UseUtf8Request(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_StateSet(Konsole__Emulation* self, int state);
void Konsole__Emulation_Connect_StateSet(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_ZmodemDetected(Konsole__Emulation* self);
void Konsole__Emulation_Connect_ZmodemDetected(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_ChangeTabTextColorRequest(Konsole__Emulation* self, int color);
void Konsole__Emulation_Connect_ChangeTabTextColorRequest(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_ProgramUsesMouseChanged(Konsole__Emulation* self, bool usesMouse);
void Konsole__Emulation_Connect_ProgramUsesMouseChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_ProgramBracketedPasteModeChanged(Konsole__Emulation* self, bool bracketedPasteMode);
void Konsole__Emulation_Connect_ProgramBracketedPasteModeChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_OutputChanged(Konsole__Emulation* self);
void Konsole__Emulation_Connect_OutputChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_TitleChanged(Konsole__Emulation* self, int title, const libqt_string newTitle);
void Konsole__Emulation_Connect_TitleChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_ImageSizeChanged(Konsole__Emulation* self, int lineCount, int columnCount);
void Konsole__Emulation_Connect_ImageSizeChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_ImageSizeInitialized(Konsole__Emulation* self);
void Konsole__Emulation_Connect_ImageSizeInitialized(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_ImageResizeRequest(Konsole__Emulation* self, const QSize* sizz);
void Konsole__Emulation_Connect_ImageResizeRequest(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_ProfileChangeCommandReceived(Konsole__Emulation* self, const libqt_string text);
void Konsole__Emulation_Connect_ProfileChangeCommandReceived(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_FlowControlKeyPressed(Konsole__Emulation* self, bool suspendKeyPressed);
void Konsole__Emulation_Connect_FlowControlKeyPressed(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_CursorChanged(Konsole__Emulation* self, int cursorShape, bool blinkingCursorEnabled);
void Konsole__Emulation_Connect_CursorChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_HandleCommandFromKeyboard(Konsole__Emulation* self, int command);
void Konsole__Emulation_Connect_HandleCommandFromKeyboard(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_OutputFromKeypressEvent(Konsole__Emulation* self);
void Konsole__Emulation_Connect_OutputFromKeypressEvent(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_SetMode(Konsole__Emulation* self, int mode);
void Konsole__Emulation_ResetMode(Konsole__Emulation* self, int mode);
libqt_string Konsole__Emulation_Tr2(const char* s, const char* c);
libqt_string Konsole__Emulation_Tr3(const char* s, const char* c, int n);
void Konsole__Emulation_OnMetacall(Konsole__Emulation* self, intptr_t slot);
int Konsole__Emulation_QBaseMetacall(Konsole__Emulation* self, int param1, int param2, void** param3);
void Konsole__Emulation_OnEraseChar(const Konsole__Emulation* self, intptr_t slot);
char Konsole__Emulation_QBaseEraseChar(const Konsole__Emulation* self);
void Konsole__Emulation_OnClearEntireScreen(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseClearEntireScreen(Konsole__Emulation* self);
void Konsole__Emulation_OnReset(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseReset(Konsole__Emulation* self);
void Konsole__Emulation_OnSetImageSize(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseSetImageSize(Konsole__Emulation* self, int lines, int columns);
void Konsole__Emulation_OnSendText(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseSendText(Konsole__Emulation* self, const libqt_string text);
void Konsole__Emulation_OnSendKeyEvent(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseSendKeyEvent(Konsole__Emulation* self, QKeyEvent* param1, bool fromPaste);
void Konsole__Emulation_OnSendMouseEvent(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseSendMouseEvent(Konsole__Emulation* self, int buttons, int column, int line, int eventType);
void Konsole__Emulation_OnSendString(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseSendString(Konsole__Emulation* self, const char* stringVal, int length);
void Konsole__Emulation_OnSetMode(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseSetMode(Konsole__Emulation* self, int mode);
void Konsole__Emulation_OnResetMode(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseResetMode(Konsole__Emulation* self, int mode);
bool Konsole__Emulation_Event(Konsole__Emulation* self, QEvent* event);
void Konsole__Emulation_OnEvent(Konsole__Emulation* self, intptr_t slot);
bool Konsole__Emulation_QBaseEvent(Konsole__Emulation* self, QEvent* event);
bool Konsole__Emulation_EventFilter(Konsole__Emulation* self, QObject* watched, QEvent* event);
void Konsole__Emulation_OnEventFilter(Konsole__Emulation* self, intptr_t slot);
bool Konsole__Emulation_QBaseEventFilter(Konsole__Emulation* self, QObject* watched, QEvent* event);
void Konsole__Emulation_TimerEvent(Konsole__Emulation* self, QTimerEvent* event);
void Konsole__Emulation_OnTimerEvent(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseTimerEvent(Konsole__Emulation* self, QTimerEvent* event);
void Konsole__Emulation_ChildEvent(Konsole__Emulation* self, QChildEvent* event);
void Konsole__Emulation_OnChildEvent(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseChildEvent(Konsole__Emulation* self, QChildEvent* event);
void Konsole__Emulation_CustomEvent(Konsole__Emulation* self, QEvent* event);
void Konsole__Emulation_OnCustomEvent(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseCustomEvent(Konsole__Emulation* self, QEvent* event);
void Konsole__Emulation_ConnectNotify(Konsole__Emulation* self, const QMetaMethod* signal);
void Konsole__Emulation_OnConnectNotify(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseConnectNotify(Konsole__Emulation* self, const QMetaMethod* signal);
void Konsole__Emulation_DisconnectNotify(Konsole__Emulation* self, const QMetaMethod* signal);
void Konsole__Emulation_OnDisconnectNotify(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseDisconnectNotify(Konsole__Emulation* self, const QMetaMethod* signal);
void Konsole__Emulation_SetScreen(Konsole__Emulation* self, int index);
void Konsole__Emulation_OnSetScreen(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseSetScreen(Konsole__Emulation* self, int index);
void Konsole__Emulation_SetCodec(Konsole__Emulation* self, int codec);
void Konsole__Emulation_OnSetCodec(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseSetCodec(Konsole__Emulation* self, int codec);
void Konsole__Emulation_BufferedUpdate(Konsole__Emulation* self);
void Konsole__Emulation_OnBufferedUpdate(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_QBaseBufferedUpdate(Konsole__Emulation* self);
QObject* Konsole__Emulation_Sender(const Konsole__Emulation* self);
void Konsole__Emulation_OnSender(const Konsole__Emulation* self, intptr_t slot);
QObject* Konsole__Emulation_QBaseSender(const Konsole__Emulation* self);
int Konsole__Emulation_SenderSignalIndex(const Konsole__Emulation* self);
void Konsole__Emulation_OnSenderSignalIndex(const Konsole__Emulation* self, intptr_t slot);
int Konsole__Emulation_QBaseSenderSignalIndex(const Konsole__Emulation* self);
int Konsole__Emulation_Receivers(const Konsole__Emulation* self, const char* signal);
void Konsole__Emulation_OnReceivers(const Konsole__Emulation* self, intptr_t slot);
int Konsole__Emulation_QBaseReceivers(const Konsole__Emulation* self, const char* signal);
bool Konsole__Emulation_IsSignalConnected(const Konsole__Emulation* self, const QMetaMethod* signal);
void Konsole__Emulation_OnIsSignalConnected(const Konsole__Emulation* self, intptr_t slot);
bool Konsole__Emulation_QBaseIsSignalConnected(const Konsole__Emulation* self, const QMetaMethod* signal);
void Konsole__Emulation_Delete(Konsole__Emulation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
