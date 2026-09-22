#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTENGINE_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVirtualKeyboardAbstractInputMethod QVirtualKeyboardAbstractInputMethod;
typedef struct QVirtualKeyboardInputContext QVirtualKeyboardInputContext;
typedef struct QVirtualKeyboardInputEngine QVirtualKeyboardInputEngine;
typedef struct QVirtualKeyboardSelectionListModel QVirtualKeyboardSelectionListModel;
typedef struct QVirtualKeyboardTrace QVirtualKeyboardTrace;
#endif

QMetaObject* QVirtualKeyboardInputEngine_MetaObject(const QVirtualKeyboardInputEngine* self);
void* QVirtualKeyboardInputEngine_Metacast(QVirtualKeyboardInputEngine* self, const char* param1);
int QVirtualKeyboardInputEngine_Metacall(QVirtualKeyboardInputEngine* self, int param1, int param2, void** param3);
libqt_string QVirtualKeyboardInputEngine_Tr(const char* s);
bool QVirtualKeyboardInputEngine_VirtualKeyPress(QVirtualKeyboardInputEngine* self, int key, const libqt_string text, int modifiers, bool repeat);
void QVirtualKeyboardInputEngine_VirtualKeyCancel(QVirtualKeyboardInputEngine* self);
bool QVirtualKeyboardInputEngine_VirtualKeyRelease(QVirtualKeyboardInputEngine* self, int key, const libqt_string text, int modifiers);
bool QVirtualKeyboardInputEngine_VirtualKeyClick(QVirtualKeyboardInputEngine* self, int key, const libqt_string text, int modifiers);
QVirtualKeyboardInputContext* QVirtualKeyboardInputEngine_InputContext(const QVirtualKeyboardInputEngine* self);
int QVirtualKeyboardInputEngine_ActiveKey(const QVirtualKeyboardInputEngine* self);
int QVirtualKeyboardInputEngine_PreviousKey(const QVirtualKeyboardInputEngine* self);
QVirtualKeyboardAbstractInputMethod* QVirtualKeyboardInputEngine_InputMethod(const QVirtualKeyboardInputEngine* self);
void QVirtualKeyboardInputEngine_SetInputMethod(QVirtualKeyboardInputEngine* self, QVirtualKeyboardAbstractInputMethod* inputMethod);
libqt_list /* of int */ QVirtualKeyboardInputEngine_InputModes(const QVirtualKeyboardInputEngine* self);
int QVirtualKeyboardInputEngine_InputMode(const QVirtualKeyboardInputEngine* self);
void QVirtualKeyboardInputEngine_SetInputMode(QVirtualKeyboardInputEngine* self, int inputMode);
QVirtualKeyboardSelectionListModel* QVirtualKeyboardInputEngine_WordCandidateListModel(const QVirtualKeyboardInputEngine* self);
bool QVirtualKeyboardInputEngine_WordCandidateListVisibleHint(const QVirtualKeyboardInputEngine* self);
libqt_list /* of int */ QVirtualKeyboardInputEngine_PatternRecognitionModes(const QVirtualKeyboardInputEngine* self);
QVirtualKeyboardTrace* QVirtualKeyboardInputEngine_TraceBegin(QVirtualKeyboardInputEngine* self, int traceId, int patternRecognitionMode, const libqt_map /* of libqt_string to QVariant* */ traceCaptureDeviceInfo, const libqt_map /* of libqt_string to QVariant* */ traceScreenInfo);
bool QVirtualKeyboardInputEngine_TraceEnd(QVirtualKeyboardInputEngine* self, QVirtualKeyboardTrace* trace);
bool QVirtualKeyboardInputEngine_Reselect(QVirtualKeyboardInputEngine* self, int cursorPosition, const int* reselectFlags);
bool QVirtualKeyboardInputEngine_ClickPreeditText(QVirtualKeyboardInputEngine* self, int cursorPosition);
void QVirtualKeyboardInputEngine_VirtualKeyClicked(QVirtualKeyboardInputEngine* self, int key, const libqt_string text, int modifiers, bool isAutoRepeat);
void QVirtualKeyboardInputEngine_Connect_VirtualKeyClicked(QVirtualKeyboardInputEngine* self, intptr_t slot);
void QVirtualKeyboardInputEngine_ActiveKeyChanged(QVirtualKeyboardInputEngine* self, int key);
void QVirtualKeyboardInputEngine_Connect_ActiveKeyChanged(QVirtualKeyboardInputEngine* self, intptr_t slot);
void QVirtualKeyboardInputEngine_PreviousKeyChanged(QVirtualKeyboardInputEngine* self, int key);
void QVirtualKeyboardInputEngine_Connect_PreviousKeyChanged(QVirtualKeyboardInputEngine* self, intptr_t slot);
void QVirtualKeyboardInputEngine_InputMethodChanged(QVirtualKeyboardInputEngine* self);
void QVirtualKeyboardInputEngine_Connect_InputMethodChanged(QVirtualKeyboardInputEngine* self, intptr_t slot);
void QVirtualKeyboardInputEngine_InputMethodReset(QVirtualKeyboardInputEngine* self);
void QVirtualKeyboardInputEngine_Connect_InputMethodReset(QVirtualKeyboardInputEngine* self, intptr_t slot);
void QVirtualKeyboardInputEngine_InputMethodUpdate(QVirtualKeyboardInputEngine* self);
void QVirtualKeyboardInputEngine_Connect_InputMethodUpdate(QVirtualKeyboardInputEngine* self, intptr_t slot);
void QVirtualKeyboardInputEngine_InputModesChanged(QVirtualKeyboardInputEngine* self);
void QVirtualKeyboardInputEngine_Connect_InputModesChanged(QVirtualKeyboardInputEngine* self, intptr_t slot);
void QVirtualKeyboardInputEngine_InputModeChanged(QVirtualKeyboardInputEngine* self);
void QVirtualKeyboardInputEngine_Connect_InputModeChanged(QVirtualKeyboardInputEngine* self, intptr_t slot);
void QVirtualKeyboardInputEngine_PatternRecognitionModesChanged(QVirtualKeyboardInputEngine* self);
void QVirtualKeyboardInputEngine_Connect_PatternRecognitionModesChanged(QVirtualKeyboardInputEngine* self, intptr_t slot);
void QVirtualKeyboardInputEngine_WordCandidateListModelChanged(QVirtualKeyboardInputEngine* self);
void QVirtualKeyboardInputEngine_Connect_WordCandidateListModelChanged(QVirtualKeyboardInputEngine* self, intptr_t slot);
void QVirtualKeyboardInputEngine_WordCandidateListVisibleHintChanged(QVirtualKeyboardInputEngine* self);
void QVirtualKeyboardInputEngine_Connect_WordCandidateListVisibleHintChanged(QVirtualKeyboardInputEngine* self, intptr_t slot);
libqt_string QVirtualKeyboardInputEngine_Tr2(const char* s, const char* c);
libqt_string QVirtualKeyboardInputEngine_Tr3(const char* s, const char* c, int n);
void QVirtualKeyboardInputEngine_Delete(QVirtualKeyboardInputEngine* self);

unsigned int qvirtualkeyboardinputengine_h_QHash(int key, unsigned int seed);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
