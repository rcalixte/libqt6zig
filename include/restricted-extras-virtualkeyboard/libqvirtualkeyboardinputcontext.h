#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTCONTEXT_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute)
typedef QInputMethodEvent::Attribute QInputMethodEvent__Attribute;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QInputMethodEvent__Attribute QInputMethodEvent__Attribute;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVirtualKeyboardInputContext QVirtualKeyboardInputContext;
typedef struct QVirtualKeyboardInputEngine QVirtualKeyboardInputEngine;
typedef struct QVirtualKeyboardObserver QVirtualKeyboardObserver;
#endif

QVirtualKeyboardInputContext* QVirtualKeyboardInputContext_new();
QVirtualKeyboardInputContext* QVirtualKeyboardInputContext_new2(QObject* parent);
QMetaObject* QVirtualKeyboardInputContext_MetaObject(const QVirtualKeyboardInputContext* self);
void* QVirtualKeyboardInputContext_Metacast(QVirtualKeyboardInputContext* self, const char* param1);
int QVirtualKeyboardInputContext_Metacall(QVirtualKeyboardInputContext* self, int param1, int param2, void** param3);
libqt_string QVirtualKeyboardInputContext_Tr(const char* s);
bool QVirtualKeyboardInputContext_IsShiftActive(const QVirtualKeyboardInputContext* self);
bool QVirtualKeyboardInputContext_IsCapsLockActive(const QVirtualKeyboardInputContext* self);
bool QVirtualKeyboardInputContext_IsUppercase(const QVirtualKeyboardInputContext* self);
int QVirtualKeyboardInputContext_AnchorPosition(const QVirtualKeyboardInputContext* self);
int QVirtualKeyboardInputContext_CursorPosition(const QVirtualKeyboardInputContext* self);
int QVirtualKeyboardInputContext_InputMethodHints(const QVirtualKeyboardInputContext* self);
libqt_string QVirtualKeyboardInputContext_PreeditText(const QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_SetPreeditText(QVirtualKeyboardInputContext* self, const libqt_string text);
libqt_list /* of QInputMethodEvent__Attribute* */ QVirtualKeyboardInputContext_PreeditTextAttributes(const QVirtualKeyboardInputContext* self);
libqt_string QVirtualKeyboardInputContext_SurroundingText(const QVirtualKeyboardInputContext* self);
libqt_string QVirtualKeyboardInputContext_SelectedText(const QVirtualKeyboardInputContext* self);
QRectF* QVirtualKeyboardInputContext_AnchorRectangle(const QVirtualKeyboardInputContext* self);
QRectF* QVirtualKeyboardInputContext_CursorRectangle(const QVirtualKeyboardInputContext* self);
bool QVirtualKeyboardInputContext_IsAnimating(const QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_SetAnimating(QVirtualKeyboardInputContext* self, bool isAnimating);
libqt_string QVirtualKeyboardInputContext_Locale(const QVirtualKeyboardInputContext* self);
QObject* QVirtualKeyboardInputContext_InputItem(const QVirtualKeyboardInputContext* self);
QVirtualKeyboardInputEngine* QVirtualKeyboardInputContext_InputEngine(const QVirtualKeyboardInputContext* self);
bool QVirtualKeyboardInputContext_IsSelectionControlVisible(const QVirtualKeyboardInputContext* self);
bool QVirtualKeyboardInputContext_AnchorRectIntersectsClipRect(const QVirtualKeyboardInputContext* self);
bool QVirtualKeyboardInputContext_CursorRectIntersectsClipRect(const QVirtualKeyboardInputContext* self);
QVirtualKeyboardObserver* QVirtualKeyboardInputContext_KeyboardObserver(const QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_SendKeyClick(QVirtualKeyboardInputContext* self, int key, const libqt_string text);
void QVirtualKeyboardInputContext_Commit(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Commit2(QVirtualKeyboardInputContext* self, const libqt_string text);
void QVirtualKeyboardInputContext_Clear(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_SetSelectionOnFocusObject(QVirtualKeyboardInputContext* self, const QPointF* anchorPos, const QPointF* cursorPos);
void QVirtualKeyboardInputContext_PreeditTextChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_PreeditTextChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_InputMethodHintsChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_InputMethodHintsChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_SurroundingTextChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_SurroundingTextChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_SelectedTextChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_SelectedTextChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_AnchorPositionChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_AnchorPositionChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_CursorPositionChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_CursorPositionChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_AnchorRectangleChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_AnchorRectangleChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_CursorRectangleChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_CursorRectangleChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_ShiftActiveChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_ShiftActiveChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_CapsLockActiveChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_CapsLockActiveChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_UppercaseChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_UppercaseChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_AnimatingChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_AnimatingChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_LocaleChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_LocaleChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_InputItemChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_InputItemChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_SelectionControlVisibleChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_SelectionControlVisibleChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_AnchorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_AnchorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_CursorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_Connect_CursorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self, intptr_t slot);
libqt_string QVirtualKeyboardInputContext_Tr2(const char* s, const char* c);
libqt_string QVirtualKeyboardInputContext_Tr3(const char* s, const char* c, int n);
void QVirtualKeyboardInputContext_SetPreeditText2(QVirtualKeyboardInputContext* self, const libqt_string text, libqt_list /* of QInputMethodEvent__Attribute* */ attributes);
void QVirtualKeyboardInputContext_SetPreeditText3(QVirtualKeyboardInputContext* self, const libqt_string text, libqt_list /* of QInputMethodEvent__Attribute* */ attributes, int replaceFrom);
void QVirtualKeyboardInputContext_SetPreeditText4(QVirtualKeyboardInputContext* self, const libqt_string text, libqt_list /* of QInputMethodEvent__Attribute* */ attributes, int replaceFrom, int replaceLength);
void QVirtualKeyboardInputContext_SendKeyClick3(QVirtualKeyboardInputContext* self, int key, const libqt_string text, int modifiers);
void QVirtualKeyboardInputContext_Commit22(QVirtualKeyboardInputContext* self, const libqt_string text, int replaceFrom);
void QVirtualKeyboardInputContext_Commit3(QVirtualKeyboardInputContext* self, const libqt_string text, int replaceFrom, int replaceLength);
void QVirtualKeyboardInputContext_OnMetaObject(const QVirtualKeyboardInputContext* self, intptr_t slot);
QMetaObject* QVirtualKeyboardInputContext_SuperMetaObject(const QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_OnMetacast(QVirtualKeyboardInputContext* self, intptr_t slot);
void* QVirtualKeyboardInputContext_SuperMetacast(QVirtualKeyboardInputContext* self, const char* param1);
void QVirtualKeyboardInputContext_OnMetacall(QVirtualKeyboardInputContext* self, intptr_t slot);
int QVirtualKeyboardInputContext_SuperMetacall(QVirtualKeyboardInputContext* self, int param1, int param2, void** param3);
bool QVirtualKeyboardInputContext_Event(QVirtualKeyboardInputContext* self, QEvent* event);
void QVirtualKeyboardInputContext_OnEvent(QVirtualKeyboardInputContext* self, intptr_t slot);
bool QVirtualKeyboardInputContext_SuperEvent(QVirtualKeyboardInputContext* self, QEvent* event);
bool QVirtualKeyboardInputContext_EventFilter(QVirtualKeyboardInputContext* self, QObject* watched, QEvent* event);
void QVirtualKeyboardInputContext_OnEventFilter(QVirtualKeyboardInputContext* self, intptr_t slot);
bool QVirtualKeyboardInputContext_SuperEventFilter(QVirtualKeyboardInputContext* self, QObject* watched, QEvent* event);
void QVirtualKeyboardInputContext_TimerEvent(QVirtualKeyboardInputContext* self, QTimerEvent* event);
void QVirtualKeyboardInputContext_OnTimerEvent(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_SuperTimerEvent(QVirtualKeyboardInputContext* self, QTimerEvent* event);
void QVirtualKeyboardInputContext_ChildEvent(QVirtualKeyboardInputContext* self, QChildEvent* event);
void QVirtualKeyboardInputContext_OnChildEvent(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_SuperChildEvent(QVirtualKeyboardInputContext* self, QChildEvent* event);
void QVirtualKeyboardInputContext_CustomEvent(QVirtualKeyboardInputContext* self, QEvent* event);
void QVirtualKeyboardInputContext_OnCustomEvent(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_SuperCustomEvent(QVirtualKeyboardInputContext* self, QEvent* event);
void QVirtualKeyboardInputContext_ConnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
void QVirtualKeyboardInputContext_OnConnectNotify(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_SuperConnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
void QVirtualKeyboardInputContext_DisconnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
void QVirtualKeyboardInputContext_OnDisconnectNotify(QVirtualKeyboardInputContext* self, intptr_t slot);
void QVirtualKeyboardInputContext_SuperDisconnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
QObject* QVirtualKeyboardInputContext_Sender(const QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_OnSender(const QVirtualKeyboardInputContext* self, intptr_t slot);
QObject* QVirtualKeyboardInputContext_SuperSender(const QVirtualKeyboardInputContext* self);
int QVirtualKeyboardInputContext_SenderSignalIndex(const QVirtualKeyboardInputContext* self);
void QVirtualKeyboardInputContext_OnSenderSignalIndex(const QVirtualKeyboardInputContext* self, intptr_t slot);
int QVirtualKeyboardInputContext_SuperSenderSignalIndex(const QVirtualKeyboardInputContext* self);
int QVirtualKeyboardInputContext_Receivers(const QVirtualKeyboardInputContext* self, const char* signal);
void QVirtualKeyboardInputContext_OnReceivers(const QVirtualKeyboardInputContext* self, intptr_t slot);
int QVirtualKeyboardInputContext_SuperReceivers(const QVirtualKeyboardInputContext* self, const char* signal);
bool QVirtualKeyboardInputContext_IsSignalConnected(const QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
void QVirtualKeyboardInputContext_OnIsSignalConnected(const QVirtualKeyboardInputContext* self, intptr_t slot);
bool QVirtualKeyboardInputContext_SuperIsSignalConnected(const QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
void QVirtualKeyboardInputContext_Delete(QVirtualKeyboardInputContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
