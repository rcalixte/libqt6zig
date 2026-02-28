#pragma once
#ifndef SRCC_LIBQLIBRARY_H
#define SRCC_LIBQLIBRARY_H

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
typedef struct QLibrary QLibrary;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QLibrary* QLibrary_new();
QLibrary* QLibrary_new2(const libqt_string fileName);
QLibrary* QLibrary_new3(const libqt_string fileName, int verNum);
QLibrary* QLibrary_new4(const libqt_string fileName, const libqt_string version);
QLibrary* QLibrary_new5(QObject* parent);
QLibrary* QLibrary_new6(const libqt_string fileName, QObject* parent);
QLibrary* QLibrary_new7(const libqt_string fileName, int verNum, QObject* parent);
QLibrary* QLibrary_new8(const libqt_string fileName, const libqt_string version, QObject* parent);
QMetaObject* QLibrary_MetaObject(const QLibrary* self);
void* QLibrary_Metacast(QLibrary* self, const char* param1);
int QLibrary_Metacall(QLibrary* self, int param1, int param2, void** param3);
intptr_t QLibrary_Resolve(QLibrary* self, const char* symbol);
intptr_t QLibrary_Resolve2(const libqt_string fileName, const char* symbol);
intptr_t QLibrary_Resolve3(const libqt_string fileName, int verNum, const char* symbol);
intptr_t QLibrary_Resolve4(const libqt_string fileName, const libqt_string version, const char* symbol);
bool QLibrary_Load(QLibrary* self);
bool QLibrary_Unload(QLibrary* self);
bool QLibrary_IsLoaded(const QLibrary* self);
bool QLibrary_IsLibrary(const libqt_string fileName);
void QLibrary_SetFileName(QLibrary* self, const libqt_string fileName);
libqt_string QLibrary_FileName(const QLibrary* self);
void QLibrary_SetFileNameAndVersion(QLibrary* self, const libqt_string fileName, int verNum);
void QLibrary_SetFileNameAndVersion2(QLibrary* self, const libqt_string fileName, const libqt_string version);
libqt_string QLibrary_ErrorString(const QLibrary* self);
void QLibrary_SetLoadHints(QLibrary* self, int hints);
int QLibrary_LoadHints(const QLibrary* self);
void QLibrary_OnMetaObject(const QLibrary* self, intptr_t slot);
QMetaObject* QLibrary_SuperMetaObject(const QLibrary* self);
void QLibrary_OnMetacast(QLibrary* self, intptr_t slot);
void* QLibrary_SuperMetacast(QLibrary* self, const char* param1);
void QLibrary_OnMetacall(QLibrary* self, intptr_t slot);
int QLibrary_SuperMetacall(QLibrary* self, int param1, int param2, void** param3);
bool QLibrary_Event(QLibrary* self, QEvent* event);
void QLibrary_OnEvent(QLibrary* self, intptr_t slot);
bool QLibrary_SuperEvent(QLibrary* self, QEvent* event);
bool QLibrary_EventFilter(QLibrary* self, QObject* watched, QEvent* event);
void QLibrary_OnEventFilter(QLibrary* self, intptr_t slot);
bool QLibrary_SuperEventFilter(QLibrary* self, QObject* watched, QEvent* event);
void QLibrary_TimerEvent(QLibrary* self, QTimerEvent* event);
void QLibrary_OnTimerEvent(QLibrary* self, intptr_t slot);
void QLibrary_SuperTimerEvent(QLibrary* self, QTimerEvent* event);
void QLibrary_ChildEvent(QLibrary* self, QChildEvent* event);
void QLibrary_OnChildEvent(QLibrary* self, intptr_t slot);
void QLibrary_SuperChildEvent(QLibrary* self, QChildEvent* event);
void QLibrary_CustomEvent(QLibrary* self, QEvent* event);
void QLibrary_OnCustomEvent(QLibrary* self, intptr_t slot);
void QLibrary_SuperCustomEvent(QLibrary* self, QEvent* event);
void QLibrary_ConnectNotify(QLibrary* self, const QMetaMethod* signal);
void QLibrary_OnConnectNotify(QLibrary* self, intptr_t slot);
void QLibrary_SuperConnectNotify(QLibrary* self, const QMetaMethod* signal);
void QLibrary_DisconnectNotify(QLibrary* self, const QMetaMethod* signal);
void QLibrary_OnDisconnectNotify(QLibrary* self, intptr_t slot);
void QLibrary_SuperDisconnectNotify(QLibrary* self, const QMetaMethod* signal);
QObject* QLibrary_Sender(const QLibrary* self);
void QLibrary_OnSender(const QLibrary* self, intptr_t slot);
QObject* QLibrary_SuperSender(const QLibrary* self);
int QLibrary_SenderSignalIndex(const QLibrary* self);
void QLibrary_OnSenderSignalIndex(const QLibrary* self, intptr_t slot);
int QLibrary_SuperSenderSignalIndex(const QLibrary* self);
int QLibrary_Receivers(const QLibrary* self, const char* signal);
void QLibrary_OnReceivers(const QLibrary* self, intptr_t slot);
int QLibrary_SuperReceivers(const QLibrary* self, const char* signal);
bool QLibrary_IsSignalConnected(const QLibrary* self, const QMetaMethod* signal);
void QLibrary_OnIsSignalConnected(const QLibrary* self, intptr_t slot);
bool QLibrary_SuperIsSignalConnected(const QLibrary* self, const QMetaMethod* signal);
void QLibrary_Delete(QLibrary* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
