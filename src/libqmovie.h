#pragma once
#ifndef SRCC_LIBQMOVIE_H
#define SRCC_LIBQMOVIE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMovie QMovie;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

QMovie* QMovie_new();
QMovie* QMovie_new2(QIODevice* device);
QMovie* QMovie_new3(const libqt_string fileName);
QMovie* QMovie_new4(QObject* parent);
QMovie* QMovie_new5(QIODevice* device, const libqt_string format);
QMovie* QMovie_new6(QIODevice* device, const libqt_string format, QObject* parent);
QMovie* QMovie_new7(const libqt_string fileName, const libqt_string format);
QMovie* QMovie_new8(const libqt_string fileName, const libqt_string format, QObject* parent);
QMetaObject* QMovie_MetaObject(const QMovie* self);
void* QMovie_Metacast(QMovie* self, const char* param1);
int QMovie_Metacall(QMovie* self, int param1, int param2, void** param3);
void QMovie_OnMetacall(QMovie* self, intptr_t slot);
int QMovie_QBaseMetacall(QMovie* self, int param1, int param2, void** param3);
libqt_string QMovie_Tr(const char* s);
libqt_list /* of libqt_string */ QMovie_SupportedFormats();
void QMovie_SetDevice(QMovie* self, QIODevice* device);
QIODevice* QMovie_Device(const QMovie* self);
void QMovie_SetFileName(QMovie* self, const libqt_string fileName);
libqt_string QMovie_FileName(const QMovie* self);
void QMovie_SetFormat(QMovie* self, const libqt_string format);
libqt_string QMovie_Format(const QMovie* self);
void QMovie_SetBackgroundColor(QMovie* self, const QColor* color);
QColor* QMovie_BackgroundColor(const QMovie* self);
int QMovie_State(const QMovie* self);
QRect* QMovie_FrameRect(const QMovie* self);
QImage* QMovie_CurrentImage(const QMovie* self);
QPixmap* QMovie_CurrentPixmap(const QMovie* self);
bool QMovie_IsValid(const QMovie* self);
int QMovie_LastError(const QMovie* self);
libqt_string QMovie_LastErrorString(const QMovie* self);
bool QMovie_JumpToFrame(QMovie* self, int frameNumber);
int QMovie_LoopCount(const QMovie* self);
int QMovie_FrameCount(const QMovie* self);
int QMovie_NextFrameDelay(const QMovie* self);
int QMovie_CurrentFrameNumber(const QMovie* self);
int QMovie_Speed(const QMovie* self);
QSize* QMovie_ScaledSize(QMovie* self);
void QMovie_SetScaledSize(QMovie* self, const QSize* size);
int QMovie_CacheMode(const QMovie* self);
void QMovie_SetCacheMode(QMovie* self, int mode);
void QMovie_Started(QMovie* self);
void QMovie_Connect_Started(QMovie* self, intptr_t slot);
void QMovie_Resized(QMovie* self, const QSize* size);
void QMovie_Connect_Resized(QMovie* self, intptr_t slot);
void QMovie_Updated(QMovie* self, const QRect* rect);
void QMovie_Connect_Updated(QMovie* self, intptr_t slot);
void QMovie_StateChanged(QMovie* self, int state);
void QMovie_Connect_StateChanged(QMovie* self, intptr_t slot);
void QMovie_Error(QMovie* self, int errorVal);
void QMovie_Connect_Error(QMovie* self, intptr_t slot);
void QMovie_Finished(QMovie* self);
void QMovie_Connect_Finished(QMovie* self, intptr_t slot);
void QMovie_FrameChanged(QMovie* self, int frameNumber);
void QMovie_Connect_FrameChanged(QMovie* self, intptr_t slot);
void QMovie_Start(QMovie* self);
bool QMovie_JumpToNextFrame(QMovie* self);
void QMovie_SetPaused(QMovie* self, bool paused);
void QMovie_Stop(QMovie* self);
void QMovie_SetSpeed(QMovie* self, int percentSpeed);
libqt_string QMovie_Tr2(const char* s, const char* c);
libqt_string QMovie_Tr3(const char* s, const char* c, int n);
bool QMovie_Event(QMovie* self, QEvent* event);
void QMovie_OnEvent(QMovie* self, intptr_t slot);
bool QMovie_QBaseEvent(QMovie* self, QEvent* event);
bool QMovie_EventFilter(QMovie* self, QObject* watched, QEvent* event);
void QMovie_OnEventFilter(QMovie* self, intptr_t slot);
bool QMovie_QBaseEventFilter(QMovie* self, QObject* watched, QEvent* event);
void QMovie_TimerEvent(QMovie* self, QTimerEvent* event);
void QMovie_OnTimerEvent(QMovie* self, intptr_t slot);
void QMovie_QBaseTimerEvent(QMovie* self, QTimerEvent* event);
void QMovie_ChildEvent(QMovie* self, QChildEvent* event);
void QMovie_OnChildEvent(QMovie* self, intptr_t slot);
void QMovie_QBaseChildEvent(QMovie* self, QChildEvent* event);
void QMovie_CustomEvent(QMovie* self, QEvent* event);
void QMovie_OnCustomEvent(QMovie* self, intptr_t slot);
void QMovie_QBaseCustomEvent(QMovie* self, QEvent* event);
void QMovie_ConnectNotify(QMovie* self, const QMetaMethod* signal);
void QMovie_OnConnectNotify(QMovie* self, intptr_t slot);
void QMovie_QBaseConnectNotify(QMovie* self, const QMetaMethod* signal);
void QMovie_DisconnectNotify(QMovie* self, const QMetaMethod* signal);
void QMovie_OnDisconnectNotify(QMovie* self, intptr_t slot);
void QMovie_QBaseDisconnectNotify(QMovie* self, const QMetaMethod* signal);
QObject* QMovie_Sender(const QMovie* self);
void QMovie_OnSender(const QMovie* self, intptr_t slot);
QObject* QMovie_QBaseSender(const QMovie* self);
int QMovie_SenderSignalIndex(const QMovie* self);
void QMovie_OnSenderSignalIndex(const QMovie* self, intptr_t slot);
int QMovie_QBaseSenderSignalIndex(const QMovie* self);
int QMovie_Receivers(const QMovie* self, const char* signal);
void QMovie_OnReceivers(const QMovie* self, intptr_t slot);
int QMovie_QBaseReceivers(const QMovie* self, const char* signal);
bool QMovie_IsSignalConnected(const QMovie* self, const QMetaMethod* signal);
void QMovie_OnIsSignalConnected(const QMovie* self, intptr_t slot);
bool QMovie_QBaseIsSignalConnected(const QMovie* self, const QMetaMethod* signal);
void QMovie_Delete(QMovie* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
