#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBKCOMPRESSIONDEVICE_H
#define SRC_EXTRAS_KARCHIVEC_LIBKCOMPRESSIONDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCompressionDevice KCompressionDevice;
typedef struct KFilterBase KFilterBase;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KCompressionDevice* KCompressionDevice_new(QIODevice* inputDevice, bool autoDeleteInputDevice, int typeVal);
KCompressionDevice* KCompressionDevice_new2(const libqt_string fileName, int typeVal);
KCompressionDevice* KCompressionDevice_new3(const libqt_string fileName);
QMetaObject* KCompressionDevice_MetaObject(const KCompressionDevice* self);
void* KCompressionDevice_Metacast(KCompressionDevice* self, const char* param1);
int KCompressionDevice_Metacall(KCompressionDevice* self, int param1, int param2, void** param3);
int KCompressionDevice_CompressionType(const KCompressionDevice* self);
bool KCompressionDevice_Open(KCompressionDevice* self, int mode);
void KCompressionDevice_Close(KCompressionDevice* self);
void KCompressionDevice_SetOrigFileName(KCompressionDevice* self, const libqt_string fileName);
void KCompressionDevice_SetSkipHeaders(KCompressionDevice* self);
bool KCompressionDevice_Seek(KCompressionDevice* self, long long param1);
bool KCompressionDevice_AtEnd(const KCompressionDevice* self);
KFilterBase* KCompressionDevice_FilterForCompressionType(int typeVal);
int KCompressionDevice_CompressionTypeForMimeType(const libqt_string mimetype);
int KCompressionDevice_Error(const KCompressionDevice* self);
long long KCompressionDevice_ReadData(KCompressionDevice* self, char* data, long long maxlen);
long long KCompressionDevice_WriteData(KCompressionDevice* self, const char* data, long long lenVal);
void KCompressionDevice_OnMetaObject(const KCompressionDevice* self, intptr_t slot);
QMetaObject* KCompressionDevice_QBaseMetaObject(const KCompressionDevice* self);
void KCompressionDevice_OnMetacast(KCompressionDevice* self, intptr_t slot);
void* KCompressionDevice_QBaseMetacast(KCompressionDevice* self, const char* param1);
void KCompressionDevice_OnMetacall(KCompressionDevice* self, intptr_t slot);
int KCompressionDevice_QBaseMetacall(KCompressionDevice* self, int param1, int param2, void** param3);
void KCompressionDevice_OnOpen(KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseOpen(KCompressionDevice* self, int mode);
void KCompressionDevice_OnClose(KCompressionDevice* self, intptr_t slot);
void KCompressionDevice_QBaseClose(KCompressionDevice* self);
void KCompressionDevice_OnSeek(KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseSeek(KCompressionDevice* self, long long param1);
void KCompressionDevice_OnAtEnd(const KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseAtEnd(const KCompressionDevice* self);
void KCompressionDevice_OnReadData(KCompressionDevice* self, intptr_t slot);
long long KCompressionDevice_QBaseReadData(KCompressionDevice* self, char* data, long long maxlen);
void KCompressionDevice_OnWriteData(KCompressionDevice* self, intptr_t slot);
long long KCompressionDevice_QBaseWriteData(KCompressionDevice* self, const char* data, long long lenVal);
bool KCompressionDevice_IsSequential(const KCompressionDevice* self);
void KCompressionDevice_OnIsSequential(const KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseIsSequential(const KCompressionDevice* self);
long long KCompressionDevice_Pos(const KCompressionDevice* self);
void KCompressionDevice_OnPos(const KCompressionDevice* self, intptr_t slot);
long long KCompressionDevice_QBasePos(const KCompressionDevice* self);
long long KCompressionDevice_Size(const KCompressionDevice* self);
void KCompressionDevice_OnSize(const KCompressionDevice* self, intptr_t slot);
long long KCompressionDevice_QBaseSize(const KCompressionDevice* self);
bool KCompressionDevice_Reset(KCompressionDevice* self);
void KCompressionDevice_OnReset(KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseReset(KCompressionDevice* self);
long long KCompressionDevice_BytesAvailable(const KCompressionDevice* self);
void KCompressionDevice_OnBytesAvailable(const KCompressionDevice* self, intptr_t slot);
long long KCompressionDevice_QBaseBytesAvailable(const KCompressionDevice* self);
long long KCompressionDevice_BytesToWrite(const KCompressionDevice* self);
void KCompressionDevice_OnBytesToWrite(const KCompressionDevice* self, intptr_t slot);
long long KCompressionDevice_QBaseBytesToWrite(const KCompressionDevice* self);
bool KCompressionDevice_CanReadLine(const KCompressionDevice* self);
void KCompressionDevice_OnCanReadLine(const KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseCanReadLine(const KCompressionDevice* self);
bool KCompressionDevice_WaitForReadyRead(KCompressionDevice* self, int msecs);
void KCompressionDevice_OnWaitForReadyRead(KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseWaitForReadyRead(KCompressionDevice* self, int msecs);
bool KCompressionDevice_WaitForBytesWritten(KCompressionDevice* self, int msecs);
void KCompressionDevice_OnWaitForBytesWritten(KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseWaitForBytesWritten(KCompressionDevice* self, int msecs);
long long KCompressionDevice_ReadLineData(KCompressionDevice* self, char* data, long long maxlen);
void KCompressionDevice_OnReadLineData(KCompressionDevice* self, intptr_t slot);
long long KCompressionDevice_QBaseReadLineData(KCompressionDevice* self, char* data, long long maxlen);
long long KCompressionDevice_SkipData(KCompressionDevice* self, long long maxSize);
void KCompressionDevice_OnSkipData(KCompressionDevice* self, intptr_t slot);
long long KCompressionDevice_QBaseSkipData(KCompressionDevice* self, long long maxSize);
bool KCompressionDevice_Event(KCompressionDevice* self, QEvent* event);
void KCompressionDevice_OnEvent(KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseEvent(KCompressionDevice* self, QEvent* event);
bool KCompressionDevice_EventFilter(KCompressionDevice* self, QObject* watched, QEvent* event);
void KCompressionDevice_OnEventFilter(KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseEventFilter(KCompressionDevice* self, QObject* watched, QEvent* event);
void KCompressionDevice_TimerEvent(KCompressionDevice* self, QTimerEvent* event);
void KCompressionDevice_OnTimerEvent(KCompressionDevice* self, intptr_t slot);
void KCompressionDevice_QBaseTimerEvent(KCompressionDevice* self, QTimerEvent* event);
void KCompressionDevice_ChildEvent(KCompressionDevice* self, QChildEvent* event);
void KCompressionDevice_OnChildEvent(KCompressionDevice* self, intptr_t slot);
void KCompressionDevice_QBaseChildEvent(KCompressionDevice* self, QChildEvent* event);
void KCompressionDevice_CustomEvent(KCompressionDevice* self, QEvent* event);
void KCompressionDevice_OnCustomEvent(KCompressionDevice* self, intptr_t slot);
void KCompressionDevice_QBaseCustomEvent(KCompressionDevice* self, QEvent* event);
void KCompressionDevice_ConnectNotify(KCompressionDevice* self, const QMetaMethod* signal);
void KCompressionDevice_OnConnectNotify(KCompressionDevice* self, intptr_t slot);
void KCompressionDevice_QBaseConnectNotify(KCompressionDevice* self, const QMetaMethod* signal);
void KCompressionDevice_DisconnectNotify(KCompressionDevice* self, const QMetaMethod* signal);
void KCompressionDevice_OnDisconnectNotify(KCompressionDevice* self, intptr_t slot);
void KCompressionDevice_QBaseDisconnectNotify(KCompressionDevice* self, const QMetaMethod* signal);
KFilterBase* KCompressionDevice_FilterBase(KCompressionDevice* self);
void KCompressionDevice_OnFilterBase(KCompressionDevice* self, intptr_t slot);
KFilterBase* KCompressionDevice_QBaseFilterBase(KCompressionDevice* self);
void KCompressionDevice_SetOpenMode(KCompressionDevice* self, int openMode);
void KCompressionDevice_OnSetOpenMode(KCompressionDevice* self, intptr_t slot);
void KCompressionDevice_QBaseSetOpenMode(KCompressionDevice* self, int openMode);
void KCompressionDevice_SetErrorString(KCompressionDevice* self, const libqt_string errorString);
void KCompressionDevice_OnSetErrorString(KCompressionDevice* self, intptr_t slot);
void KCompressionDevice_QBaseSetErrorString(KCompressionDevice* self, const libqt_string errorString);
QObject* KCompressionDevice_Sender(const KCompressionDevice* self);
void KCompressionDevice_OnSender(const KCompressionDevice* self, intptr_t slot);
QObject* KCompressionDevice_QBaseSender(const KCompressionDevice* self);
int KCompressionDevice_SenderSignalIndex(const KCompressionDevice* self);
void KCompressionDevice_OnSenderSignalIndex(const KCompressionDevice* self, intptr_t slot);
int KCompressionDevice_QBaseSenderSignalIndex(const KCompressionDevice* self);
int KCompressionDevice_Receivers(const KCompressionDevice* self, const char* signal);
void KCompressionDevice_OnReceivers(const KCompressionDevice* self, intptr_t slot);
int KCompressionDevice_QBaseReceivers(const KCompressionDevice* self, const char* signal);
bool KCompressionDevice_IsSignalConnected(const KCompressionDevice* self, const QMetaMethod* signal);
void KCompressionDevice_OnIsSignalConnected(const KCompressionDevice* self, intptr_t slot);
bool KCompressionDevice_QBaseIsSignalConnected(const KCompressionDevice* self, const QMetaMethod* signal);
void KCompressionDevice_Delete(KCompressionDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
