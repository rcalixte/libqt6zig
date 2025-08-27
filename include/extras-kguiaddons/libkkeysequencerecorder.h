#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKKEYSEQUENCERECORDER_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKKEYSEQUENCERECORDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KKeySequenceRecorder KKeySequenceRecorder;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWindow QWindow;
#endif

KKeySequenceRecorder* KKeySequenceRecorder_new(QWindow* window);
KKeySequenceRecorder* KKeySequenceRecorder_new2(QWindow* window, QObject* parent);
QMetaObject* KKeySequenceRecorder_MetaObject(const KKeySequenceRecorder* self);
void* KKeySequenceRecorder_Metacast(KKeySequenceRecorder* self, const char* param1);
int KKeySequenceRecorder_Metacall(KKeySequenceRecorder* self, int param1, int param2, void** param3);
void KKeySequenceRecorder_OnMetacall(KKeySequenceRecorder* self, intptr_t slot);
int KKeySequenceRecorder_QBaseMetacall(KKeySequenceRecorder* self, int param1, int param2, void** param3);
libqt_string KKeySequenceRecorder_Tr(const char* s);
void KKeySequenceRecorder_StartRecording(KKeySequenceRecorder* self);
bool KKeySequenceRecorder_IsRecording(const KKeySequenceRecorder* self);
QKeySequence* KKeySequenceRecorder_CurrentKeySequence(const KKeySequenceRecorder* self);
void KKeySequenceRecorder_SetCurrentKeySequence(KKeySequenceRecorder* self, const QKeySequence* sequence);
QWindow* KKeySequenceRecorder_Window(const KKeySequenceRecorder* self);
void KKeySequenceRecorder_SetWindow(KKeySequenceRecorder* self, QWindow* window);
bool KKeySequenceRecorder_MultiKeyShortcutsAllowed(const KKeySequenceRecorder* self);
void KKeySequenceRecorder_SetMultiKeyShortcutsAllowed(KKeySequenceRecorder* self, bool allowed);
void KKeySequenceRecorder_SetModifierlessAllowed(KKeySequenceRecorder* self, bool allowed);
bool KKeySequenceRecorder_ModifierlessAllowed(const KKeySequenceRecorder* self);
void KKeySequenceRecorder_SetModifierOnlyAllowed(KKeySequenceRecorder* self, bool allowed);
bool KKeySequenceRecorder_ModifierOnlyAllowed(const KKeySequenceRecorder* self);
void KKeySequenceRecorder_SetPatterns(KKeySequenceRecorder* self, int patterns);
int KKeySequenceRecorder_Patterns(const KKeySequenceRecorder* self);
void KKeySequenceRecorder_CancelRecording(KKeySequenceRecorder* self);
void KKeySequenceRecorder_GotKeySequence(KKeySequenceRecorder* self, const QKeySequence* keySequence);
void KKeySequenceRecorder_Connect_GotKeySequence(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_RecordingChanged(KKeySequenceRecorder* self);
void KKeySequenceRecorder_Connect_RecordingChanged(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_WindowChanged(KKeySequenceRecorder* self);
void KKeySequenceRecorder_Connect_WindowChanged(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_CurrentKeySequenceChanged(KKeySequenceRecorder* self);
void KKeySequenceRecorder_Connect_CurrentKeySequenceChanged(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_MultiKeyShortcutsAllowedChanged(KKeySequenceRecorder* self);
void KKeySequenceRecorder_Connect_MultiKeyShortcutsAllowedChanged(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_ModifierlessAllowedChanged(KKeySequenceRecorder* self);
void KKeySequenceRecorder_Connect_ModifierlessAllowedChanged(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_ModifierOnlyAllowedChanged(KKeySequenceRecorder* self);
void KKeySequenceRecorder_Connect_ModifierOnlyAllowedChanged(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_PatternsChanged(KKeySequenceRecorder* self);
void KKeySequenceRecorder_Connect_PatternsChanged(KKeySequenceRecorder* self, intptr_t slot);
libqt_string KKeySequenceRecorder_Tr2(const char* s, const char* c);
libqt_string KKeySequenceRecorder_Tr3(const char* s, const char* c, int n);
bool KKeySequenceRecorder_Event(KKeySequenceRecorder* self, QEvent* event);
void KKeySequenceRecorder_OnEvent(KKeySequenceRecorder* self, intptr_t slot);
bool KKeySequenceRecorder_QBaseEvent(KKeySequenceRecorder* self, QEvent* event);
bool KKeySequenceRecorder_EventFilter(KKeySequenceRecorder* self, QObject* watched, QEvent* event);
void KKeySequenceRecorder_OnEventFilter(KKeySequenceRecorder* self, intptr_t slot);
bool KKeySequenceRecorder_QBaseEventFilter(KKeySequenceRecorder* self, QObject* watched, QEvent* event);
void KKeySequenceRecorder_TimerEvent(KKeySequenceRecorder* self, QTimerEvent* event);
void KKeySequenceRecorder_OnTimerEvent(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_QBaseTimerEvent(KKeySequenceRecorder* self, QTimerEvent* event);
void KKeySequenceRecorder_ChildEvent(KKeySequenceRecorder* self, QChildEvent* event);
void KKeySequenceRecorder_OnChildEvent(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_QBaseChildEvent(KKeySequenceRecorder* self, QChildEvent* event);
void KKeySequenceRecorder_CustomEvent(KKeySequenceRecorder* self, QEvent* event);
void KKeySequenceRecorder_OnCustomEvent(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_QBaseCustomEvent(KKeySequenceRecorder* self, QEvent* event);
void KKeySequenceRecorder_ConnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal);
void KKeySequenceRecorder_OnConnectNotify(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_QBaseConnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal);
void KKeySequenceRecorder_DisconnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal);
void KKeySequenceRecorder_OnDisconnectNotify(KKeySequenceRecorder* self, intptr_t slot);
void KKeySequenceRecorder_QBaseDisconnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal);
QObject* KKeySequenceRecorder_Sender(const KKeySequenceRecorder* self);
void KKeySequenceRecorder_OnSender(const KKeySequenceRecorder* self, intptr_t slot);
QObject* KKeySequenceRecorder_QBaseSender(const KKeySequenceRecorder* self);
int KKeySequenceRecorder_SenderSignalIndex(const KKeySequenceRecorder* self);
void KKeySequenceRecorder_OnSenderSignalIndex(const KKeySequenceRecorder* self, intptr_t slot);
int KKeySequenceRecorder_QBaseSenderSignalIndex(const KKeySequenceRecorder* self);
int KKeySequenceRecorder_Receivers(const KKeySequenceRecorder* self, const char* signal);
void KKeySequenceRecorder_OnReceivers(const KKeySequenceRecorder* self, intptr_t slot);
int KKeySequenceRecorder_QBaseReceivers(const KKeySequenceRecorder* self, const char* signal);
bool KKeySequenceRecorder_IsSignalConnected(const KKeySequenceRecorder* self, const QMetaMethod* signal);
void KKeySequenceRecorder_OnIsSignalConnected(const KKeySequenceRecorder* self, intptr_t slot);
bool KKeySequenceRecorder_QBaseIsSignalConnected(const KKeySequenceRecorder* self, const QMetaMethod* signal);
void KKeySequenceRecorder_Delete(KKeySequenceRecorder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
