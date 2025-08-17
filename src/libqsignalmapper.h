#pragma once
#ifndef SRCC_LIBQSIGNALMAPPER_H
#define SRCC_LIBQSIGNALMAPPER_H

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
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalMapper QSignalMapper;
typedef struct QTimerEvent QTimerEvent;
#endif

QSignalMapper* QSignalMapper_new();
QSignalMapper* QSignalMapper_new2(QObject* parent);
QMetaObject* QSignalMapper_MetaObject(const QSignalMapper* self);
void* QSignalMapper_Metacast(QSignalMapper* self, const char* param1);
int QSignalMapper_Metacall(QSignalMapper* self, int param1, int param2, void** param3);
void QSignalMapper_OnMetacall(QSignalMapper* self, intptr_t slot);
int QSignalMapper_QBaseMetacall(QSignalMapper* self, int param1, int param2, void** param3);
libqt_string QSignalMapper_Tr(const char* s);
void QSignalMapper_SetMapping(QSignalMapper* self, QObject* sender, int id);
void QSignalMapper_SetMapping2(QSignalMapper* self, QObject* sender, const libqt_string text);
void QSignalMapper_SetMapping3(QSignalMapper* self, QObject* sender, QObject* object);
void QSignalMapper_RemoveMappings(QSignalMapper* self, QObject* sender);
QObject* QSignalMapper_Mapping(const QSignalMapper* self, int id);
QObject* QSignalMapper_Mapping2(const QSignalMapper* self, const libqt_string text);
QObject* QSignalMapper_Mapping3(const QSignalMapper* self, QObject* object);
void QSignalMapper_MappedInt(QSignalMapper* self, int param1);
void QSignalMapper_Connect_MappedInt(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedString(QSignalMapper* self, const libqt_string param1);
void QSignalMapper_Connect_MappedString(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedObject(QSignalMapper* self, QObject* param1);
void QSignalMapper_Connect_MappedObject(QSignalMapper* self, intptr_t slot);
void QSignalMapper_Map(QSignalMapper* self);
void QSignalMapper_Map2(QSignalMapper* self, QObject* sender);
libqt_string QSignalMapper_Tr2(const char* s, const char* c);
libqt_string QSignalMapper_Tr3(const char* s, const char* c, int n);
bool QSignalMapper_Event(QSignalMapper* self, QEvent* event);
void QSignalMapper_OnEvent(QSignalMapper* self, intptr_t slot);
bool QSignalMapper_QBaseEvent(QSignalMapper* self, QEvent* event);
bool QSignalMapper_EventFilter(QSignalMapper* self, QObject* watched, QEvent* event);
void QSignalMapper_OnEventFilter(QSignalMapper* self, intptr_t slot);
bool QSignalMapper_QBaseEventFilter(QSignalMapper* self, QObject* watched, QEvent* event);
void QSignalMapper_TimerEvent(QSignalMapper* self, QTimerEvent* event);
void QSignalMapper_OnTimerEvent(QSignalMapper* self, intptr_t slot);
void QSignalMapper_QBaseTimerEvent(QSignalMapper* self, QTimerEvent* event);
void QSignalMapper_ChildEvent(QSignalMapper* self, QChildEvent* event);
void QSignalMapper_OnChildEvent(QSignalMapper* self, intptr_t slot);
void QSignalMapper_QBaseChildEvent(QSignalMapper* self, QChildEvent* event);
void QSignalMapper_CustomEvent(QSignalMapper* self, QEvent* event);
void QSignalMapper_OnCustomEvent(QSignalMapper* self, intptr_t slot);
void QSignalMapper_QBaseCustomEvent(QSignalMapper* self, QEvent* event);
void QSignalMapper_ConnectNotify(QSignalMapper* self, const QMetaMethod* signal);
void QSignalMapper_OnConnectNotify(QSignalMapper* self, intptr_t slot);
void QSignalMapper_QBaseConnectNotify(QSignalMapper* self, const QMetaMethod* signal);
void QSignalMapper_DisconnectNotify(QSignalMapper* self, const QMetaMethod* signal);
void QSignalMapper_OnDisconnectNotify(QSignalMapper* self, intptr_t slot);
void QSignalMapper_QBaseDisconnectNotify(QSignalMapper* self, const QMetaMethod* signal);
QObject* QSignalMapper_Sender(const QSignalMapper* self);
void QSignalMapper_OnSender(const QSignalMapper* self, intptr_t slot);
QObject* QSignalMapper_QBaseSender(const QSignalMapper* self);
int QSignalMapper_SenderSignalIndex(const QSignalMapper* self);
void QSignalMapper_OnSenderSignalIndex(const QSignalMapper* self, intptr_t slot);
int QSignalMapper_QBaseSenderSignalIndex(const QSignalMapper* self);
int QSignalMapper_Receivers(const QSignalMapper* self, const char* signal);
void QSignalMapper_OnReceivers(const QSignalMapper* self, intptr_t slot);
int QSignalMapper_QBaseReceivers(const QSignalMapper* self, const char* signal);
bool QSignalMapper_IsSignalConnected(const QSignalMapper* self, const QMetaMethod* signal);
void QSignalMapper_OnIsSignalConnected(const QSignalMapper* self, intptr_t slot);
bool QSignalMapper_QBaseIsSignalConnected(const QSignalMapper* self, const QMetaMethod* signal);
void QSignalMapper_Delete(QSignalMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
