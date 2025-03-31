#pragma once
#ifndef SRCC_LIBQFILESYSTEMWATCHER_H
#define SRCC_LIBQFILESYSTEMWATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

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
typedef struct QFileSystemWatcher QFileSystemWatcher;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QFileSystemWatcher* QFileSystemWatcher_new();
QFileSystemWatcher* QFileSystemWatcher_new2(libqt_list /* of libqt_string */ paths);
QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent);
QFileSystemWatcher* QFileSystemWatcher_new4(libqt_list /* of libqt_string */ paths, QObject* parent);
QMetaObject* QFileSystemWatcher_MetaObject(const QFileSystemWatcher* self);
void* QFileSystemWatcher_Metacast(QFileSystemWatcher* self, const char* param1);
int QFileSystemWatcher_Metacall(QFileSystemWatcher* self, int param1, int param2, void** param3);
void QFileSystemWatcher_OnMetacall(QFileSystemWatcher* self, intptr_t slot);
int QFileSystemWatcher_QBaseMetacall(QFileSystemWatcher* self, int param1, int param2, void** param3);
libqt_string QFileSystemWatcher_Tr(const char* s);
bool QFileSystemWatcher_AddPath(QFileSystemWatcher* self, libqt_string file);
libqt_list /* of libqt_string */ QFileSystemWatcher_AddPaths(QFileSystemWatcher* self, libqt_list /* of libqt_string */ files);
bool QFileSystemWatcher_RemovePath(QFileSystemWatcher* self, libqt_string file);
libqt_list /* of libqt_string */ QFileSystemWatcher_RemovePaths(QFileSystemWatcher* self, libqt_list /* of libqt_string */ files);
libqt_list /* of libqt_string */ QFileSystemWatcher_Files(const QFileSystemWatcher* self);
libqt_list /* of libqt_string */ QFileSystemWatcher_Directories(const QFileSystemWatcher* self);
libqt_string QFileSystemWatcher_Tr2(const char* s, const char* c);
libqt_string QFileSystemWatcher_Tr3(const char* s, const char* c, int n);
bool QFileSystemWatcher_Event(QFileSystemWatcher* self, QEvent* event);
void QFileSystemWatcher_OnEvent(QFileSystemWatcher* self, intptr_t slot);
bool QFileSystemWatcher_QBaseEvent(QFileSystemWatcher* self, QEvent* event);
bool QFileSystemWatcher_EventFilter(QFileSystemWatcher* self, QObject* watched, QEvent* event);
void QFileSystemWatcher_OnEventFilter(QFileSystemWatcher* self, intptr_t slot);
bool QFileSystemWatcher_QBaseEventFilter(QFileSystemWatcher* self, QObject* watched, QEvent* event);
void QFileSystemWatcher_TimerEvent(QFileSystemWatcher* self, QTimerEvent* event);
void QFileSystemWatcher_OnTimerEvent(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_QBaseTimerEvent(QFileSystemWatcher* self, QTimerEvent* event);
void QFileSystemWatcher_ChildEvent(QFileSystemWatcher* self, QChildEvent* event);
void QFileSystemWatcher_OnChildEvent(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_QBaseChildEvent(QFileSystemWatcher* self, QChildEvent* event);
void QFileSystemWatcher_CustomEvent(QFileSystemWatcher* self, QEvent* event);
void QFileSystemWatcher_OnCustomEvent(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_QBaseCustomEvent(QFileSystemWatcher* self, QEvent* event);
void QFileSystemWatcher_ConnectNotify(QFileSystemWatcher* self, QMetaMethod* signal);
void QFileSystemWatcher_OnConnectNotify(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_QBaseConnectNotify(QFileSystemWatcher* self, QMetaMethod* signal);
void QFileSystemWatcher_DisconnectNotify(QFileSystemWatcher* self, QMetaMethod* signal);
void QFileSystemWatcher_OnDisconnectNotify(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_QBaseDisconnectNotify(QFileSystemWatcher* self, QMetaMethod* signal);
QObject* QFileSystemWatcher_Sender(const QFileSystemWatcher* self);
void QFileSystemWatcher_OnSender(const QFileSystemWatcher* self, intptr_t slot);
QObject* QFileSystemWatcher_QBaseSender(const QFileSystemWatcher* self);
int QFileSystemWatcher_SenderSignalIndex(const QFileSystemWatcher* self);
void QFileSystemWatcher_OnSenderSignalIndex(const QFileSystemWatcher* self, intptr_t slot);
int QFileSystemWatcher_QBaseSenderSignalIndex(const QFileSystemWatcher* self);
int QFileSystemWatcher_Receivers(const QFileSystemWatcher* self, const char* signal);
void QFileSystemWatcher_OnReceivers(const QFileSystemWatcher* self, intptr_t slot);
int QFileSystemWatcher_QBaseReceivers(const QFileSystemWatcher* self, const char* signal);
bool QFileSystemWatcher_IsSignalConnected(const QFileSystemWatcher* self, QMetaMethod* signal);
void QFileSystemWatcher_OnIsSignalConnected(const QFileSystemWatcher* self, intptr_t slot);
bool QFileSystemWatcher_QBaseIsSignalConnected(const QFileSystemWatcher* self, QMetaMethod* signal);
void QFileSystemWatcher_Delete(QFileSystemWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
