#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQVIDEOSINK_H
#define SRC_MULTIMEDIAC_LIBQVIDEOSINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoSink QVideoSink;
#endif

QVideoSink* QVideoSink_new();
QVideoSink* QVideoSink_new2(QObject* parent);
QMetaObject* QVideoSink_MetaObject(const QVideoSink* self);
void* QVideoSink_Metacast(QVideoSink* self, const char* param1);
int QVideoSink_Metacall(QVideoSink* self, int param1, int param2, void** param3);
void QVideoSink_OnMetacall(QVideoSink* self, intptr_t slot);
int QVideoSink_QBaseMetacall(QVideoSink* self, int param1, int param2, void** param3);
libqt_string QVideoSink_Tr(const char* s);
QSize* QVideoSink_VideoSize(const QVideoSink* self);
libqt_string QVideoSink_SubtitleText(const QVideoSink* self);
void QVideoSink_SetSubtitleText(QVideoSink* self, libqt_string subtitle);
void QVideoSink_SetVideoFrame(QVideoSink* self, QVideoFrame* frame);
QVideoFrame* QVideoSink_VideoFrame(const QVideoSink* self);
void QVideoSink_VideoFrameChanged(const QVideoSink* self, QVideoFrame* frame);
void QVideoSink_Connect_VideoFrameChanged(QVideoSink* self, intptr_t slot);
void QVideoSink_SubtitleTextChanged(const QVideoSink* self, libqt_string subtitleText);
void QVideoSink_Connect_SubtitleTextChanged(QVideoSink* self, intptr_t slot);
void QVideoSink_VideoSizeChanged(QVideoSink* self);
void QVideoSink_Connect_VideoSizeChanged(QVideoSink* self, intptr_t slot);
libqt_string QVideoSink_Tr2(const char* s, const char* c);
libqt_string QVideoSink_Tr3(const char* s, const char* c, int n);
bool QVideoSink_Event(QVideoSink* self, QEvent* event);
void QVideoSink_OnEvent(QVideoSink* self, intptr_t slot);
bool QVideoSink_QBaseEvent(QVideoSink* self, QEvent* event);
bool QVideoSink_EventFilter(QVideoSink* self, QObject* watched, QEvent* event);
void QVideoSink_OnEventFilter(QVideoSink* self, intptr_t slot);
bool QVideoSink_QBaseEventFilter(QVideoSink* self, QObject* watched, QEvent* event);
void QVideoSink_TimerEvent(QVideoSink* self, QTimerEvent* event);
void QVideoSink_OnTimerEvent(QVideoSink* self, intptr_t slot);
void QVideoSink_QBaseTimerEvent(QVideoSink* self, QTimerEvent* event);
void QVideoSink_ChildEvent(QVideoSink* self, QChildEvent* event);
void QVideoSink_OnChildEvent(QVideoSink* self, intptr_t slot);
void QVideoSink_QBaseChildEvent(QVideoSink* self, QChildEvent* event);
void QVideoSink_CustomEvent(QVideoSink* self, QEvent* event);
void QVideoSink_OnCustomEvent(QVideoSink* self, intptr_t slot);
void QVideoSink_QBaseCustomEvent(QVideoSink* self, QEvent* event);
void QVideoSink_ConnectNotify(QVideoSink* self, QMetaMethod* signal);
void QVideoSink_OnConnectNotify(QVideoSink* self, intptr_t slot);
void QVideoSink_QBaseConnectNotify(QVideoSink* self, QMetaMethod* signal);
void QVideoSink_DisconnectNotify(QVideoSink* self, QMetaMethod* signal);
void QVideoSink_OnDisconnectNotify(QVideoSink* self, intptr_t slot);
void QVideoSink_QBaseDisconnectNotify(QVideoSink* self, QMetaMethod* signal);
QObject* QVideoSink_Sender(const QVideoSink* self);
void QVideoSink_OnSender(const QVideoSink* self, intptr_t slot);
QObject* QVideoSink_QBaseSender(const QVideoSink* self);
int QVideoSink_SenderSignalIndex(const QVideoSink* self);
void QVideoSink_OnSenderSignalIndex(const QVideoSink* self, intptr_t slot);
int QVideoSink_QBaseSenderSignalIndex(const QVideoSink* self);
int QVideoSink_Receivers(const QVideoSink* self, const char* signal);
void QVideoSink_OnReceivers(const QVideoSink* self, intptr_t slot);
int QVideoSink_QBaseReceivers(const QVideoSink* self, const char* signal);
bool QVideoSink_IsSignalConnected(const QVideoSink* self, QMetaMethod* signal);
void QVideoSink_OnIsSignalConnected(const QVideoSink* self, intptr_t slot);
bool QVideoSink_QBaseIsSignalConnected(const QVideoSink* self, QMetaMethod* signal);
void QVideoSink_Delete(QVideoSink* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
