#pragma once
#ifndef SRCC_LIBQSHAREDMEMORY_H
#define SRCC_LIBQSHAREDMEMORY_H

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
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNativeIpcKey QNativeIpcKey;
typedef struct QObject QObject;
typedef struct QSharedMemory QSharedMemory;
typedef struct QTimerEvent QTimerEvent;
#endif

QSharedMemory* QSharedMemory_new();
QSharedMemory* QSharedMemory_new2(const QNativeIpcKey* key);
QSharedMemory* QSharedMemory_new3(const libqt_string key);
QSharedMemory* QSharedMemory_new4(QObject* parent);
QSharedMemory* QSharedMemory_new5(const QNativeIpcKey* key, QObject* parent);
QSharedMemory* QSharedMemory_new6(const libqt_string key, QObject* parent);
QMetaObject* QSharedMemory_MetaObject(const QSharedMemory* self);
void* QSharedMemory_Metacast(QSharedMemory* self, const char* param1);
int QSharedMemory_Metacall(QSharedMemory* self, int param1, int param2, void** param3);
void QSharedMemory_OnMetacall(QSharedMemory* self, intptr_t slot);
int QSharedMemory_QBaseMetacall(QSharedMemory* self, int param1, int param2, void** param3);
libqt_string QSharedMemory_Tr(const char* s);
void QSharedMemory_SetKey(QSharedMemory* self, const libqt_string key);
libqt_string QSharedMemory_Key(const QSharedMemory* self);
void QSharedMemory_SetNativeKey(QSharedMemory* self, const QNativeIpcKey* key);
void QSharedMemory_SetNativeKeyWithKey(QSharedMemory* self, const libqt_string key);
libqt_string QSharedMemory_NativeKey(const QSharedMemory* self);
QNativeIpcKey* QSharedMemory_NativeIpcKey(const QSharedMemory* self);
bool QSharedMemory_Create(QSharedMemory* self, ptrdiff_t size);
ptrdiff_t QSharedMemory_Size(const QSharedMemory* self);
bool QSharedMemory_Attach(QSharedMemory* self);
bool QSharedMemory_IsAttached(const QSharedMemory* self);
bool QSharedMemory_Detach(QSharedMemory* self);
void* QSharedMemory_Data(QSharedMemory* self);
const void* QSharedMemory_ConstData(const QSharedMemory* self);
const void* QSharedMemory_Data2(const QSharedMemory* self);
bool QSharedMemory_Lock(QSharedMemory* self);
bool QSharedMemory_Unlock(QSharedMemory* self);
int QSharedMemory_Error(const QSharedMemory* self);
libqt_string QSharedMemory_ErrorString(const QSharedMemory* self);
bool QSharedMemory_IsKeyTypeSupported(uint16_t typeVal);
QNativeIpcKey* QSharedMemory_PlatformSafeKey(const libqt_string key);
QNativeIpcKey* QSharedMemory_LegacyNativeKey(const libqt_string key);
libqt_string QSharedMemory_Tr2(const char* s, const char* c);
libqt_string QSharedMemory_Tr3(const char* s, const char* c, int n);
void QSharedMemory_SetNativeKey2(QSharedMemory* self, const libqt_string key, uint16_t typeVal);
bool QSharedMemory_Create2(QSharedMemory* self, ptrdiff_t size, int mode);
bool QSharedMemory_Attach1(QSharedMemory* self, int mode);
QNativeIpcKey* QSharedMemory_PlatformSafeKey2(const libqt_string key, uint16_t typeVal);
QNativeIpcKey* QSharedMemory_LegacyNativeKey2(const libqt_string key, uint16_t typeVal);
bool QSharedMemory_Event(QSharedMemory* self, QEvent* event);
void QSharedMemory_OnEvent(QSharedMemory* self, intptr_t slot);
bool QSharedMemory_QBaseEvent(QSharedMemory* self, QEvent* event);
bool QSharedMemory_EventFilter(QSharedMemory* self, QObject* watched, QEvent* event);
void QSharedMemory_OnEventFilter(QSharedMemory* self, intptr_t slot);
bool QSharedMemory_QBaseEventFilter(QSharedMemory* self, QObject* watched, QEvent* event);
void QSharedMemory_TimerEvent(QSharedMemory* self, QTimerEvent* event);
void QSharedMemory_OnTimerEvent(QSharedMemory* self, intptr_t slot);
void QSharedMemory_QBaseTimerEvent(QSharedMemory* self, QTimerEvent* event);
void QSharedMemory_ChildEvent(QSharedMemory* self, QChildEvent* event);
void QSharedMemory_OnChildEvent(QSharedMemory* self, intptr_t slot);
void QSharedMemory_QBaseChildEvent(QSharedMemory* self, QChildEvent* event);
void QSharedMemory_CustomEvent(QSharedMemory* self, QEvent* event);
void QSharedMemory_OnCustomEvent(QSharedMemory* self, intptr_t slot);
void QSharedMemory_QBaseCustomEvent(QSharedMemory* self, QEvent* event);
void QSharedMemory_ConnectNotify(QSharedMemory* self, const QMetaMethod* signal);
void QSharedMemory_OnConnectNotify(QSharedMemory* self, intptr_t slot);
void QSharedMemory_QBaseConnectNotify(QSharedMemory* self, const QMetaMethod* signal);
void QSharedMemory_DisconnectNotify(QSharedMemory* self, const QMetaMethod* signal);
void QSharedMemory_OnDisconnectNotify(QSharedMemory* self, intptr_t slot);
void QSharedMemory_QBaseDisconnectNotify(QSharedMemory* self, const QMetaMethod* signal);
QObject* QSharedMemory_Sender(const QSharedMemory* self);
void QSharedMemory_OnSender(const QSharedMemory* self, intptr_t slot);
QObject* QSharedMemory_QBaseSender(const QSharedMemory* self);
int QSharedMemory_SenderSignalIndex(const QSharedMemory* self);
void QSharedMemory_OnSenderSignalIndex(const QSharedMemory* self, intptr_t slot);
int QSharedMemory_QBaseSenderSignalIndex(const QSharedMemory* self);
int QSharedMemory_Receivers(const QSharedMemory* self, const char* signal);
void QSharedMemory_OnReceivers(const QSharedMemory* self, intptr_t slot);
int QSharedMemory_QBaseReceivers(const QSharedMemory* self, const char* signal);
bool QSharedMemory_IsSignalConnected(const QSharedMemory* self, const QMetaMethod* signal);
void QSharedMemory_OnIsSignalConnected(const QSharedMemory* self, intptr_t slot);
bool QSharedMemory_QBaseIsSignalConnected(const QSharedMemory* self, const QMetaMethod* signal);
void QSharedMemory_Delete(QSharedMemory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
