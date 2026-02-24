#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQWAVEDECODER_H
#define SRC_MULTIMEDIAC_LIBQWAVEDECODER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioFormat QAudioFormat;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWaveDecoder QWaveDecoder;
#endif

QWaveDecoder* QWaveDecoder_new(QIODevice* device);
QWaveDecoder* QWaveDecoder_new2(QIODevice* device, const QAudioFormat* format);
QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent);
QWaveDecoder* QWaveDecoder_new4(QIODevice* device, const QAudioFormat* format, QObject* parent);
QMetaObject* QWaveDecoder_MetaObject(const QWaveDecoder* self);
void* QWaveDecoder_Metacast(QWaveDecoder* self, const char* param1);
int QWaveDecoder_Metacall(QWaveDecoder* self, int param1, int param2, void** param3);
QAudioFormat* QWaveDecoder_AudioFormat(const QWaveDecoder* self);
QIODevice* QWaveDecoder_GetDevice(QWaveDecoder* self);
int QWaveDecoder_Duration(const QWaveDecoder* self);
long long QWaveDecoder_HeaderLength();
bool QWaveDecoder_Open(QWaveDecoder* self, int mode);
void QWaveDecoder_Close(QWaveDecoder* self);
bool QWaveDecoder_Seek(QWaveDecoder* self, long long pos);
long long QWaveDecoder_Pos(const QWaveDecoder* self);
void QWaveDecoder_SetIODevice(QWaveDecoder* self, QIODevice* device);
long long QWaveDecoder_Size(const QWaveDecoder* self);
bool QWaveDecoder_IsSequential(const QWaveDecoder* self);
long long QWaveDecoder_BytesAvailable(const QWaveDecoder* self);
void QWaveDecoder_FormatKnown(QWaveDecoder* self);
void QWaveDecoder_Connect_FormatKnown(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_ParsingError(QWaveDecoder* self);
void QWaveDecoder_Connect_ParsingError(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_OnMetaObject(const QWaveDecoder* self, intptr_t slot);
QMetaObject* QWaveDecoder_SuperMetaObject(const QWaveDecoder* self);
void QWaveDecoder_OnMetacast(QWaveDecoder* self, intptr_t slot);
void* QWaveDecoder_SuperMetacast(QWaveDecoder* self, const char* param1);
void QWaveDecoder_OnMetacall(QWaveDecoder* self, intptr_t slot);
int QWaveDecoder_SuperMetacall(QWaveDecoder* self, int param1, int param2, void** param3);
void QWaveDecoder_OnOpen(QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperOpen(QWaveDecoder* self, int mode);
void QWaveDecoder_OnClose(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_SuperClose(QWaveDecoder* self);
void QWaveDecoder_OnSeek(QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperSeek(QWaveDecoder* self, long long pos);
void QWaveDecoder_OnPos(const QWaveDecoder* self, intptr_t slot);
long long QWaveDecoder_SuperPos(const QWaveDecoder* self);
void QWaveDecoder_OnSize(const QWaveDecoder* self, intptr_t slot);
long long QWaveDecoder_SuperSize(const QWaveDecoder* self);
void QWaveDecoder_OnIsSequential(const QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperIsSequential(const QWaveDecoder* self);
void QWaveDecoder_OnBytesAvailable(const QWaveDecoder* self, intptr_t slot);
long long QWaveDecoder_SuperBytesAvailable(const QWaveDecoder* self);
bool QWaveDecoder_AtEnd(const QWaveDecoder* self);
void QWaveDecoder_OnAtEnd(const QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperAtEnd(const QWaveDecoder* self);
bool QWaveDecoder_Reset(QWaveDecoder* self);
void QWaveDecoder_OnReset(QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperReset(QWaveDecoder* self);
long long QWaveDecoder_BytesToWrite(const QWaveDecoder* self);
void QWaveDecoder_OnBytesToWrite(const QWaveDecoder* self, intptr_t slot);
long long QWaveDecoder_SuperBytesToWrite(const QWaveDecoder* self);
bool QWaveDecoder_CanReadLine(const QWaveDecoder* self);
void QWaveDecoder_OnCanReadLine(const QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperCanReadLine(const QWaveDecoder* self);
bool QWaveDecoder_WaitForReadyRead(QWaveDecoder* self, int msecs);
void QWaveDecoder_OnWaitForReadyRead(QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperWaitForReadyRead(QWaveDecoder* self, int msecs);
bool QWaveDecoder_WaitForBytesWritten(QWaveDecoder* self, int msecs);
void QWaveDecoder_OnWaitForBytesWritten(QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperWaitForBytesWritten(QWaveDecoder* self, int msecs);
long long QWaveDecoder_ReadLineData(QWaveDecoder* self, char* data, long long maxlen);
void QWaveDecoder_OnReadLineData(QWaveDecoder* self, intptr_t slot);
long long QWaveDecoder_SuperReadLineData(QWaveDecoder* self, char* data, long long maxlen);
long long QWaveDecoder_SkipData(QWaveDecoder* self, long long maxSize);
void QWaveDecoder_OnSkipData(QWaveDecoder* self, intptr_t slot);
long long QWaveDecoder_SuperSkipData(QWaveDecoder* self, long long maxSize);
bool QWaveDecoder_Event(QWaveDecoder* self, QEvent* event);
void QWaveDecoder_OnEvent(QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperEvent(QWaveDecoder* self, QEvent* event);
bool QWaveDecoder_EventFilter(QWaveDecoder* self, QObject* watched, QEvent* event);
void QWaveDecoder_OnEventFilter(QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperEventFilter(QWaveDecoder* self, QObject* watched, QEvent* event);
void QWaveDecoder_TimerEvent(QWaveDecoder* self, QTimerEvent* event);
void QWaveDecoder_OnTimerEvent(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_SuperTimerEvent(QWaveDecoder* self, QTimerEvent* event);
void QWaveDecoder_ChildEvent(QWaveDecoder* self, QChildEvent* event);
void QWaveDecoder_OnChildEvent(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_SuperChildEvent(QWaveDecoder* self, QChildEvent* event);
void QWaveDecoder_CustomEvent(QWaveDecoder* self, QEvent* event);
void QWaveDecoder_OnCustomEvent(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_SuperCustomEvent(QWaveDecoder* self, QEvent* event);
void QWaveDecoder_ConnectNotify(QWaveDecoder* self, const QMetaMethod* signal);
void QWaveDecoder_OnConnectNotify(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_SuperConnectNotify(QWaveDecoder* self, const QMetaMethod* signal);
void QWaveDecoder_DisconnectNotify(QWaveDecoder* self, const QMetaMethod* signal);
void QWaveDecoder_OnDisconnectNotify(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_SuperDisconnectNotify(QWaveDecoder* self, const QMetaMethod* signal);
void QWaveDecoder_SetOpenMode(QWaveDecoder* self, int openMode);
void QWaveDecoder_OnSetOpenMode(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_SuperSetOpenMode(QWaveDecoder* self, int openMode);
void QWaveDecoder_SetErrorString(QWaveDecoder* self, const libqt_string errorString);
void QWaveDecoder_OnSetErrorString(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_SuperSetErrorString(QWaveDecoder* self, const libqt_string errorString);
QObject* QWaveDecoder_Sender(const QWaveDecoder* self);
void QWaveDecoder_OnSender(const QWaveDecoder* self, intptr_t slot);
QObject* QWaveDecoder_SuperSender(const QWaveDecoder* self);
int QWaveDecoder_SenderSignalIndex(const QWaveDecoder* self);
void QWaveDecoder_OnSenderSignalIndex(const QWaveDecoder* self, intptr_t slot);
int QWaveDecoder_SuperSenderSignalIndex(const QWaveDecoder* self);
int QWaveDecoder_Receivers(const QWaveDecoder* self, const char* signal);
void QWaveDecoder_OnReceivers(const QWaveDecoder* self, intptr_t slot);
int QWaveDecoder_SuperReceivers(const QWaveDecoder* self, const char* signal);
bool QWaveDecoder_IsSignalConnected(const QWaveDecoder* self, const QMetaMethod* signal);
void QWaveDecoder_OnIsSignalConnected(const QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_SuperIsSignalConnected(const QWaveDecoder* self, const QMetaMethod* signal);
void QWaveDecoder_Delete(QWaveDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
