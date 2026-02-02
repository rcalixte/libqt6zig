#pragma once
#ifndef SRC_WEBSOCKETSC_LIBQMASKGENERATOR_H
#define SRC_WEBSOCKETSC_LIBQMASKGENERATOR_H

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
typedef struct QMaskGenerator QMaskGenerator;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QMaskGenerator* QMaskGenerator_new();
QMaskGenerator* QMaskGenerator_new2(QObject* parent);
bool QMaskGenerator_Seed(QMaskGenerator* self);
unsigned int QMaskGenerator_NextMask(QMaskGenerator* self);
void QMaskGenerator_OnSeed(QMaskGenerator* self, intptr_t slot);
bool QMaskGenerator_QBaseSeed(QMaskGenerator* self);
void QMaskGenerator_OnNextMask(QMaskGenerator* self, intptr_t slot);
unsigned int QMaskGenerator_QBaseNextMask(QMaskGenerator* self);
QMetaObject* QMaskGenerator_MetaObject(const QMaskGenerator* self);
void QMaskGenerator_OnMetaObject(const QMaskGenerator* self, intptr_t slot);
QMetaObject* QMaskGenerator_QBaseMetaObject(const QMaskGenerator* self);
void* QMaskGenerator_Metacast(QMaskGenerator* self, const char* param1);
void QMaskGenerator_OnMetacast(QMaskGenerator* self, intptr_t slot);
void* QMaskGenerator_QBaseMetacast(QMaskGenerator* self, const char* param1);
int QMaskGenerator_Metacall(QMaskGenerator* self, int param1, int param2, void** param3);
void QMaskGenerator_OnMetacall(QMaskGenerator* self, intptr_t slot);
int QMaskGenerator_QBaseMetacall(QMaskGenerator* self, int param1, int param2, void** param3);
bool QMaskGenerator_Event(QMaskGenerator* self, QEvent* event);
void QMaskGenerator_OnEvent(QMaskGenerator* self, intptr_t slot);
bool QMaskGenerator_QBaseEvent(QMaskGenerator* self, QEvent* event);
bool QMaskGenerator_EventFilter(QMaskGenerator* self, QObject* watched, QEvent* event);
void QMaskGenerator_OnEventFilter(QMaskGenerator* self, intptr_t slot);
bool QMaskGenerator_QBaseEventFilter(QMaskGenerator* self, QObject* watched, QEvent* event);
void QMaskGenerator_TimerEvent(QMaskGenerator* self, QTimerEvent* event);
void QMaskGenerator_OnTimerEvent(QMaskGenerator* self, intptr_t slot);
void QMaskGenerator_QBaseTimerEvent(QMaskGenerator* self, QTimerEvent* event);
void QMaskGenerator_ChildEvent(QMaskGenerator* self, QChildEvent* event);
void QMaskGenerator_OnChildEvent(QMaskGenerator* self, intptr_t slot);
void QMaskGenerator_QBaseChildEvent(QMaskGenerator* self, QChildEvent* event);
void QMaskGenerator_CustomEvent(QMaskGenerator* self, QEvent* event);
void QMaskGenerator_OnCustomEvent(QMaskGenerator* self, intptr_t slot);
void QMaskGenerator_QBaseCustomEvent(QMaskGenerator* self, QEvent* event);
void QMaskGenerator_ConnectNotify(QMaskGenerator* self, const QMetaMethod* signal);
void QMaskGenerator_OnConnectNotify(QMaskGenerator* self, intptr_t slot);
void QMaskGenerator_QBaseConnectNotify(QMaskGenerator* self, const QMetaMethod* signal);
void QMaskGenerator_DisconnectNotify(QMaskGenerator* self, const QMetaMethod* signal);
void QMaskGenerator_OnDisconnectNotify(QMaskGenerator* self, intptr_t slot);
void QMaskGenerator_QBaseDisconnectNotify(QMaskGenerator* self, const QMetaMethod* signal);
QObject* QMaskGenerator_Sender(const QMaskGenerator* self);
void QMaskGenerator_OnSender(const QMaskGenerator* self, intptr_t slot);
QObject* QMaskGenerator_QBaseSender(const QMaskGenerator* self);
int QMaskGenerator_SenderSignalIndex(const QMaskGenerator* self);
void QMaskGenerator_OnSenderSignalIndex(const QMaskGenerator* self, intptr_t slot);
int QMaskGenerator_QBaseSenderSignalIndex(const QMaskGenerator* self);
int QMaskGenerator_Receivers(const QMaskGenerator* self, const char* signal);
void QMaskGenerator_OnReceivers(const QMaskGenerator* self, intptr_t slot);
int QMaskGenerator_QBaseReceivers(const QMaskGenerator* self, const char* signal);
bool QMaskGenerator_IsSignalConnected(const QMaskGenerator* self, const QMetaMethod* signal);
void QMaskGenerator_OnIsSignalConnected(const QMaskGenerator* self, intptr_t slot);
bool QMaskGenerator_QBaseIsSignalConnected(const QMaskGenerator* self, const QMetaMethod* signal);
void QMaskGenerator_Delete(QMaskGenerator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
