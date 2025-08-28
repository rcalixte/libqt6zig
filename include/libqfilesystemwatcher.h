#pragma once
#ifndef SRCC_LIBQFILESYSTEMWATCHER_H
#define SRCC_LIBQFILESYSTEMWATCHER_H

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
typedef struct QFileSystemWatcher QFileSystemWatcher;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QFileSystemWatcher* QFileSystemWatcher_new();
QFileSystemWatcher* QFileSystemWatcher_new2(const libqt_list /* of libqt_string */ paths);
QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent);
QFileSystemWatcher* QFileSystemWatcher_new4(const libqt_list /* of libqt_string */ paths, QObject* parent);
QMetaObject* QFileSystemWatcher_MetaObject(const QFileSystemWatcher* self);
void* QFileSystemWatcher_Metacast(QFileSystemWatcher* self, const char* param1);
int QFileSystemWatcher_Metacall(QFileSystemWatcher* self, int param1, int param2, void** param3);
libqt_string QFileSystemWatcher_Tr(const char* s);
bool QFileSystemWatcher_AddPath(QFileSystemWatcher* self, const libqt_string file);
libqt_list /* of libqt_string */ QFileSystemWatcher_AddPaths(QFileSystemWatcher* self, const libqt_list /* of libqt_string */ files);
bool QFileSystemWatcher_RemovePath(QFileSystemWatcher* self, const libqt_string file);
libqt_list /* of libqt_string */ QFileSystemWatcher_RemovePaths(QFileSystemWatcher* self, const libqt_list /* of libqt_string */ files);
libqt_list /* of libqt_string */ QFileSystemWatcher_Files(const QFileSystemWatcher* self);
libqt_list /* of libqt_string */ QFileSystemWatcher_Directories(const QFileSystemWatcher* self);
libqt_string QFileSystemWatcher_Tr2(const char* s, const char* c);
libqt_string QFileSystemWatcher_Tr3(const char* s, const char* c, int n);
void QFileSystemWatcher_OnMetacall(QFileSystemWatcher* self, intptr_t slot);
int QFileSystemWatcher_QBaseMetacall(QFileSystemWatcher* self, int param1, int param2, void** param3);
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
void QFileSystemWatcher_ConnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
void QFileSystemWatcher_OnConnectNotify(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_QBaseConnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
void QFileSystemWatcher_DisconnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
void QFileSystemWatcher_OnDisconnectNotify(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_QBaseDisconnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
QObject* QFileSystemWatcher_Sender(const QFileSystemWatcher* self);
void QFileSystemWatcher_OnSender(const QFileSystemWatcher* self, intptr_t slot);
QObject* QFileSystemWatcher_QBaseSender(const QFileSystemWatcher* self);
int QFileSystemWatcher_SenderSignalIndex(const QFileSystemWatcher* self);
void QFileSystemWatcher_OnSenderSignalIndex(const QFileSystemWatcher* self, intptr_t slot);
int QFileSystemWatcher_QBaseSenderSignalIndex(const QFileSystemWatcher* self);
int QFileSystemWatcher_Receivers(const QFileSystemWatcher* self, const char* signal);
void QFileSystemWatcher_OnReceivers(const QFileSystemWatcher* self, intptr_t slot);
int QFileSystemWatcher_QBaseReceivers(const QFileSystemWatcher* self, const char* signal);
bool QFileSystemWatcher_IsSignalConnected(const QFileSystemWatcher* self, const QMetaMethod* signal);
void QFileSystemWatcher_OnIsSignalConnected(const QFileSystemWatcher* self, intptr_t slot);
bool QFileSystemWatcher_QBaseIsSignalConnected(const QFileSystemWatcher* self, const QMetaMethod* signal);
void QFileSystemWatcher_Connect_FileChanged(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_Connect_DirectoryChanged(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_Delete(QFileSystemWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
