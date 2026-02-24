#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQVIDEOSINK_H
#define SRC_MULTIMEDIAC_LIBQVIDEOSINK_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoSink QVideoSink;
#endif

QVideoSink* QVideoSink_new();
QVideoSink* QVideoSink_new2(QObject* parent);
QMetaObject* QVideoSink_MetaObject(const QVideoSink* self);
void* QVideoSink_Metacast(QVideoSink* self, const char* param1);
int QVideoSink_Metacall(QVideoSink* self, int param1, int param2, void** param3);
QSize* QVideoSink_VideoSize(const QVideoSink* self);
libqt_string QVideoSink_SubtitleText(const QVideoSink* self);
void QVideoSink_SetSubtitleText(QVideoSink* self, const libqt_string subtitle);
void QVideoSink_SetVideoFrame(QVideoSink* self, const QVideoFrame* frame);
QVideoFrame* QVideoSink_VideoFrame(const QVideoSink* self);
void QVideoSink_VideoFrameChanged(const QVideoSink* self, const QVideoFrame* frame);
void QVideoSink_Connect_VideoFrameChanged(const QVideoSink* self, intptr_t slot);
void QVideoSink_SubtitleTextChanged(const QVideoSink* self, const libqt_string subtitleText);
void QVideoSink_Connect_SubtitleTextChanged(const QVideoSink* self, intptr_t slot);
void QVideoSink_VideoSizeChanged(QVideoSink* self);
void QVideoSink_Connect_VideoSizeChanged(QVideoSink* self, intptr_t slot);
void QVideoSink_OnMetaObject(const QVideoSink* self, intptr_t slot);
QMetaObject* QVideoSink_SuperMetaObject(const QVideoSink* self);
void QVideoSink_OnMetacast(QVideoSink* self, intptr_t slot);
void* QVideoSink_SuperMetacast(QVideoSink* self, const char* param1);
void QVideoSink_OnMetacall(QVideoSink* self, intptr_t slot);
int QVideoSink_SuperMetacall(QVideoSink* self, int param1, int param2, void** param3);
bool QVideoSink_Event(QVideoSink* self, QEvent* event);
void QVideoSink_OnEvent(QVideoSink* self, intptr_t slot);
bool QVideoSink_SuperEvent(QVideoSink* self, QEvent* event);
bool QVideoSink_EventFilter(QVideoSink* self, QObject* watched, QEvent* event);
void QVideoSink_OnEventFilter(QVideoSink* self, intptr_t slot);
bool QVideoSink_SuperEventFilter(QVideoSink* self, QObject* watched, QEvent* event);
void QVideoSink_TimerEvent(QVideoSink* self, QTimerEvent* event);
void QVideoSink_OnTimerEvent(QVideoSink* self, intptr_t slot);
void QVideoSink_SuperTimerEvent(QVideoSink* self, QTimerEvent* event);
void QVideoSink_ChildEvent(QVideoSink* self, QChildEvent* event);
void QVideoSink_OnChildEvent(QVideoSink* self, intptr_t slot);
void QVideoSink_SuperChildEvent(QVideoSink* self, QChildEvent* event);
void QVideoSink_CustomEvent(QVideoSink* self, QEvent* event);
void QVideoSink_OnCustomEvent(QVideoSink* self, intptr_t slot);
void QVideoSink_SuperCustomEvent(QVideoSink* self, QEvent* event);
void QVideoSink_ConnectNotify(QVideoSink* self, const QMetaMethod* signal);
void QVideoSink_OnConnectNotify(QVideoSink* self, intptr_t slot);
void QVideoSink_SuperConnectNotify(QVideoSink* self, const QMetaMethod* signal);
void QVideoSink_DisconnectNotify(QVideoSink* self, const QMetaMethod* signal);
void QVideoSink_OnDisconnectNotify(QVideoSink* self, intptr_t slot);
void QVideoSink_SuperDisconnectNotify(QVideoSink* self, const QMetaMethod* signal);
QObject* QVideoSink_Sender(const QVideoSink* self);
void QVideoSink_OnSender(const QVideoSink* self, intptr_t slot);
QObject* QVideoSink_SuperSender(const QVideoSink* self);
int QVideoSink_SenderSignalIndex(const QVideoSink* self);
void QVideoSink_OnSenderSignalIndex(const QVideoSink* self, intptr_t slot);
int QVideoSink_SuperSenderSignalIndex(const QVideoSink* self);
int QVideoSink_Receivers(const QVideoSink* self, const char* signal);
void QVideoSink_OnReceivers(const QVideoSink* self, intptr_t slot);
int QVideoSink_SuperReceivers(const QVideoSink* self, const char* signal);
bool QVideoSink_IsSignalConnected(const QVideoSink* self, const QMetaMethod* signal);
void QVideoSink_OnIsSignalConnected(const QVideoSink* self, intptr_t slot);
bool QVideoSink_SuperIsSignalConnected(const QVideoSink* self, const QMetaMethod* signal);
void QVideoSink_Delete(QVideoSink* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
