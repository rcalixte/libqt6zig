#pragma once
#ifndef SRCC_LIBQLIBRARY_H
#define SRCC_LIBQLIBRARY_H

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
typedef struct QLibrary QLibrary;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QLibrary::LoadHint LoadHint;   // C++ enum
typedef QLibrary::LoadHints LoadHints; // C++ QFlags
#else
typedef int LoadHint;  // C ABI enum
typedef int LoadHints; // C ABI QFlags
#endif

QLibrary* QLibrary_new();
QLibrary* QLibrary_new2(libqt_string fileName);
QLibrary* QLibrary_new3(libqt_string fileName, int verNum);
QLibrary* QLibrary_new4(libqt_string fileName, libqt_string version);
QLibrary* QLibrary_new5(QObject* parent);
QLibrary* QLibrary_new6(libqt_string fileName, QObject* parent);
QLibrary* QLibrary_new7(libqt_string fileName, int verNum, QObject* parent);
QLibrary* QLibrary_new8(libqt_string fileName, libqt_string version, QObject* parent);
QMetaObject* QLibrary_MetaObject(const QLibrary* self);
void* QLibrary_Metacast(QLibrary* self, const char* param1);
int QLibrary_Metacall(QLibrary* self, int param1, int param2, void** param3);
void QLibrary_OnMetacall(QLibrary* self, intptr_t slot);
int QLibrary_QBaseMetacall(QLibrary* self, int param1, int param2, void** param3);
libqt_string QLibrary_Tr(const char* s);
bool QLibrary_Load(QLibrary* self);
bool QLibrary_Unload(QLibrary* self);
bool QLibrary_IsLoaded(const QLibrary* self);
bool QLibrary_IsLibrary(libqt_string fileName);
void QLibrary_SetFileName(QLibrary* self, libqt_string fileName);
libqt_string QLibrary_FileName(const QLibrary* self);
void QLibrary_SetFileNameAndVersion(QLibrary* self, libqt_string fileName, int verNum);
void QLibrary_SetFileNameAndVersion2(QLibrary* self, libqt_string fileName, libqt_string version);
libqt_string QLibrary_ErrorString(const QLibrary* self);
void QLibrary_SetLoadHints(QLibrary* self, int hints);
int QLibrary_LoadHints(const QLibrary* self);
libqt_string QLibrary_Tr2(const char* s, const char* c);
libqt_string QLibrary_Tr3(const char* s, const char* c, int n);
bool QLibrary_Event(QLibrary* self, QEvent* event);
void QLibrary_OnEvent(QLibrary* self, intptr_t slot);
bool QLibrary_QBaseEvent(QLibrary* self, QEvent* event);
bool QLibrary_EventFilter(QLibrary* self, QObject* watched, QEvent* event);
void QLibrary_OnEventFilter(QLibrary* self, intptr_t slot);
bool QLibrary_QBaseEventFilter(QLibrary* self, QObject* watched, QEvent* event);
void QLibrary_TimerEvent(QLibrary* self, QTimerEvent* event);
void QLibrary_OnTimerEvent(QLibrary* self, intptr_t slot);
void QLibrary_QBaseTimerEvent(QLibrary* self, QTimerEvent* event);
void QLibrary_ChildEvent(QLibrary* self, QChildEvent* event);
void QLibrary_OnChildEvent(QLibrary* self, intptr_t slot);
void QLibrary_QBaseChildEvent(QLibrary* self, QChildEvent* event);
void QLibrary_CustomEvent(QLibrary* self, QEvent* event);
void QLibrary_OnCustomEvent(QLibrary* self, intptr_t slot);
void QLibrary_QBaseCustomEvent(QLibrary* self, QEvent* event);
void QLibrary_ConnectNotify(QLibrary* self, QMetaMethod* signal);
void QLibrary_OnConnectNotify(QLibrary* self, intptr_t slot);
void QLibrary_QBaseConnectNotify(QLibrary* self, QMetaMethod* signal);
void QLibrary_DisconnectNotify(QLibrary* self, QMetaMethod* signal);
void QLibrary_OnDisconnectNotify(QLibrary* self, intptr_t slot);
void QLibrary_QBaseDisconnectNotify(QLibrary* self, QMetaMethod* signal);
QObject* QLibrary_Sender(const QLibrary* self);
void QLibrary_OnSender(const QLibrary* self, intptr_t slot);
QObject* QLibrary_QBaseSender(const QLibrary* self);
int QLibrary_SenderSignalIndex(const QLibrary* self);
void QLibrary_OnSenderSignalIndex(const QLibrary* self, intptr_t slot);
int QLibrary_QBaseSenderSignalIndex(const QLibrary* self);
int QLibrary_Receivers(const QLibrary* self, const char* signal);
void QLibrary_OnReceivers(const QLibrary* self, intptr_t slot);
int QLibrary_QBaseReceivers(const QLibrary* self, const char* signal);
bool QLibrary_IsSignalConnected(const QLibrary* self, QMetaMethod* signal);
void QLibrary_OnIsSignalConnected(const QLibrary* self, intptr_t slot);
bool QLibrary_QBaseIsSignalConnected(const QLibrary* self, QMetaMethod* signal);
void QLibrary_Delete(QLibrary* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
