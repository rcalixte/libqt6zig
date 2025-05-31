#pragma once
#ifndef SRCC_LIBQTIMELINE_H
#define SRCC_LIBQTIMELINE_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEasingCurve QEasingCurve;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimeLine QTimeLine;
typedef struct QTimerEvent QTimerEvent;
#endif

#ifdef __cplusplus
typedef QTimeLine::Direction Direction; // C++ enum
typedef QTimeLine::State State;         // C++ enum
#else
typedef int Direction; // C ABI enum
typedef int State;     // C ABI enum
#endif

QTimeLine* QTimeLine_new();
QTimeLine* QTimeLine_new2(int duration);
QTimeLine* QTimeLine_new3(int duration, QObject* parent);
QMetaObject* QTimeLine_MetaObject(const QTimeLine* self);
void* QTimeLine_Metacast(QTimeLine* self, const char* param1);
int QTimeLine_Metacall(QTimeLine* self, int param1, int param2, void** param3);
void QTimeLine_OnMetacall(QTimeLine* self, intptr_t slot);
int QTimeLine_QBaseMetacall(QTimeLine* self, int param1, int param2, void** param3);
libqt_string QTimeLine_Tr(const char* s);
int QTimeLine_State(const QTimeLine* self);
int QTimeLine_LoopCount(const QTimeLine* self);
void QTimeLine_SetLoopCount(QTimeLine* self, int count);
int QTimeLine_Direction(const QTimeLine* self);
void QTimeLine_SetDirection(QTimeLine* self, int direction);
int QTimeLine_Duration(const QTimeLine* self);
void QTimeLine_SetDuration(QTimeLine* self, int duration);
int QTimeLine_StartFrame(const QTimeLine* self);
void QTimeLine_SetStartFrame(QTimeLine* self, int frame);
int QTimeLine_EndFrame(const QTimeLine* self);
void QTimeLine_SetEndFrame(QTimeLine* self, int frame);
void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame);
int QTimeLine_UpdateInterval(const QTimeLine* self);
void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval);
QEasingCurve* QTimeLine_EasingCurve(const QTimeLine* self);
void QTimeLine_SetEasingCurve(QTimeLine* self, const QEasingCurve* curve);
int QTimeLine_CurrentTime(const QTimeLine* self);
int QTimeLine_CurrentFrame(const QTimeLine* self);
double QTimeLine_CurrentValue(const QTimeLine* self);
int QTimeLine_FrameForTime(const QTimeLine* self, int msec);
double QTimeLine_ValueForTime(const QTimeLine* self, int msec);
void QTimeLine_OnValueForTime(const QTimeLine* self, intptr_t slot);
double QTimeLine_QBaseValueForTime(const QTimeLine* self, int msec);
void QTimeLine_Start(QTimeLine* self);
void QTimeLine_Resume(QTimeLine* self);
void QTimeLine_Stop(QTimeLine* self);
void QTimeLine_SetPaused(QTimeLine* self, bool paused);
void QTimeLine_SetCurrentTime(QTimeLine* self, int msec);
void QTimeLine_ToggleDirection(QTimeLine* self);
void QTimeLine_TimerEvent(QTimeLine* self, QTimerEvent* event);
void QTimeLine_OnTimerEvent(QTimeLine* self, intptr_t slot);
void QTimeLine_QBaseTimerEvent(QTimeLine* self, QTimerEvent* event);
libqt_string QTimeLine_Tr2(const char* s, const char* c);
libqt_string QTimeLine_Tr3(const char* s, const char* c, int n);
bool QTimeLine_Event(QTimeLine* self, QEvent* event);
void QTimeLine_OnEvent(QTimeLine* self, intptr_t slot);
bool QTimeLine_QBaseEvent(QTimeLine* self, QEvent* event);
bool QTimeLine_EventFilter(QTimeLine* self, QObject* watched, QEvent* event);
void QTimeLine_OnEventFilter(QTimeLine* self, intptr_t slot);
bool QTimeLine_QBaseEventFilter(QTimeLine* self, QObject* watched, QEvent* event);
void QTimeLine_ChildEvent(QTimeLine* self, QChildEvent* event);
void QTimeLine_OnChildEvent(QTimeLine* self, intptr_t slot);
void QTimeLine_QBaseChildEvent(QTimeLine* self, QChildEvent* event);
void QTimeLine_CustomEvent(QTimeLine* self, QEvent* event);
void QTimeLine_OnCustomEvent(QTimeLine* self, intptr_t slot);
void QTimeLine_QBaseCustomEvent(QTimeLine* self, QEvent* event);
void QTimeLine_ConnectNotify(QTimeLine* self, const QMetaMethod* signal);
void QTimeLine_OnConnectNotify(QTimeLine* self, intptr_t slot);
void QTimeLine_QBaseConnectNotify(QTimeLine* self, const QMetaMethod* signal);
void QTimeLine_DisconnectNotify(QTimeLine* self, const QMetaMethod* signal);
void QTimeLine_OnDisconnectNotify(QTimeLine* self, intptr_t slot);
void QTimeLine_QBaseDisconnectNotify(QTimeLine* self, const QMetaMethod* signal);
QObject* QTimeLine_Sender(const QTimeLine* self);
void QTimeLine_OnSender(const QTimeLine* self, intptr_t slot);
QObject* QTimeLine_QBaseSender(const QTimeLine* self);
int QTimeLine_SenderSignalIndex(const QTimeLine* self);
void QTimeLine_OnSenderSignalIndex(const QTimeLine* self, intptr_t slot);
int QTimeLine_QBaseSenderSignalIndex(const QTimeLine* self);
int QTimeLine_Receivers(const QTimeLine* self, const char* signal);
void QTimeLine_OnReceivers(const QTimeLine* self, intptr_t slot);
int QTimeLine_QBaseReceivers(const QTimeLine* self, const char* signal);
bool QTimeLine_IsSignalConnected(const QTimeLine* self, const QMetaMethod* signal);
void QTimeLine_OnIsSignalConnected(const QTimeLine* self, intptr_t slot);
bool QTimeLine_QBaseIsSignalConnected(const QTimeLine* self, const QMetaMethod* signal);
void QTimeLine_Connect_ValueChanged(QTimeLine* self, intptr_t slot);
void QTimeLine_Connect_FrameChanged(QTimeLine* self, intptr_t slot);
void QTimeLine_Connect_StateChanged(QTimeLine* self, intptr_t slot);
void QTimeLine_Connect_Finished(QTimeLine* self, intptr_t slot);
void QTimeLine_Delete(QTimeLine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
