#pragma once
#ifndef SRCC_LIBQPLUGINLOADER_H
#define SRCC_LIBQPLUGINLOADER_H

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
typedef struct QJsonObject QJsonObject;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPluginLoader QPluginLoader;
typedef struct QStaticPlugin QStaticPlugin;
typedef struct QTimerEvent QTimerEvent;
#endif

QPluginLoader* QPluginLoader_new();
QPluginLoader* QPluginLoader_new2(const libqt_string fileName);
QPluginLoader* QPluginLoader_new3(QObject* parent);
QPluginLoader* QPluginLoader_new4(const libqt_string fileName, QObject* parent);
QMetaObject* QPluginLoader_MetaObject(const QPluginLoader* self);
void* QPluginLoader_Metacast(QPluginLoader* self, const char* param1);
int QPluginLoader_Metacall(QPluginLoader* self, int param1, int param2, void** param3);
libqt_string QPluginLoader_Tr(const char* s);
QObject* QPluginLoader_Instance(QPluginLoader* self);
QJsonObject* QPluginLoader_MetaData(const QPluginLoader* self);
libqt_list /* of QObject* */ QPluginLoader_StaticInstances();
libqt_list /* of QStaticPlugin* */ QPluginLoader_StaticPlugins();
bool QPluginLoader_Load(QPluginLoader* self);
bool QPluginLoader_Unload(QPluginLoader* self);
bool QPluginLoader_IsLoaded(const QPluginLoader* self);
void QPluginLoader_SetFileName(QPluginLoader* self, const libqt_string fileName);
libqt_string QPluginLoader_FileName(const QPluginLoader* self);
libqt_string QPluginLoader_ErrorString(const QPluginLoader* self);
void QPluginLoader_SetLoadHints(QPluginLoader* self, int loadHints);
int QPluginLoader_LoadHints(const QPluginLoader* self);
libqt_string QPluginLoader_Tr2(const char* s, const char* c);
libqt_string QPluginLoader_Tr3(const char* s, const char* c, int n);
void QPluginLoader_OnMetacall(QPluginLoader* self, intptr_t slot);
int QPluginLoader_QBaseMetacall(QPluginLoader* self, int param1, int param2, void** param3);
bool QPluginLoader_Event(QPluginLoader* self, QEvent* event);
void QPluginLoader_OnEvent(QPluginLoader* self, intptr_t slot);
bool QPluginLoader_QBaseEvent(QPluginLoader* self, QEvent* event);
bool QPluginLoader_EventFilter(QPluginLoader* self, QObject* watched, QEvent* event);
void QPluginLoader_OnEventFilter(QPluginLoader* self, intptr_t slot);
bool QPluginLoader_QBaseEventFilter(QPluginLoader* self, QObject* watched, QEvent* event);
void QPluginLoader_TimerEvent(QPluginLoader* self, QTimerEvent* event);
void QPluginLoader_OnTimerEvent(QPluginLoader* self, intptr_t slot);
void QPluginLoader_QBaseTimerEvent(QPluginLoader* self, QTimerEvent* event);
void QPluginLoader_ChildEvent(QPluginLoader* self, QChildEvent* event);
void QPluginLoader_OnChildEvent(QPluginLoader* self, intptr_t slot);
void QPluginLoader_QBaseChildEvent(QPluginLoader* self, QChildEvent* event);
void QPluginLoader_CustomEvent(QPluginLoader* self, QEvent* event);
void QPluginLoader_OnCustomEvent(QPluginLoader* self, intptr_t slot);
void QPluginLoader_QBaseCustomEvent(QPluginLoader* self, QEvent* event);
void QPluginLoader_ConnectNotify(QPluginLoader* self, const QMetaMethod* signal);
void QPluginLoader_OnConnectNotify(QPluginLoader* self, intptr_t slot);
void QPluginLoader_QBaseConnectNotify(QPluginLoader* self, const QMetaMethod* signal);
void QPluginLoader_DisconnectNotify(QPluginLoader* self, const QMetaMethod* signal);
void QPluginLoader_OnDisconnectNotify(QPluginLoader* self, intptr_t slot);
void QPluginLoader_QBaseDisconnectNotify(QPluginLoader* self, const QMetaMethod* signal);
QObject* QPluginLoader_Sender(const QPluginLoader* self);
void QPluginLoader_OnSender(const QPluginLoader* self, intptr_t slot);
QObject* QPluginLoader_QBaseSender(const QPluginLoader* self);
int QPluginLoader_SenderSignalIndex(const QPluginLoader* self);
void QPluginLoader_OnSenderSignalIndex(const QPluginLoader* self, intptr_t slot);
int QPluginLoader_QBaseSenderSignalIndex(const QPluginLoader* self);
int QPluginLoader_Receivers(const QPluginLoader* self, const char* signal);
void QPluginLoader_OnReceivers(const QPluginLoader* self, intptr_t slot);
int QPluginLoader_QBaseReceivers(const QPluginLoader* self, const char* signal);
bool QPluginLoader_IsSignalConnected(const QPluginLoader* self, const QMetaMethod* signal);
void QPluginLoader_OnIsSignalConnected(const QPluginLoader* self, intptr_t slot);
bool QPluginLoader_QBaseIsSignalConnected(const QPluginLoader* self, const QMetaMethod* signal);
void QPluginLoader_Delete(QPluginLoader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
