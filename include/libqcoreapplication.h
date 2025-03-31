#pragma once
#ifndef SRCC_LIBQCOREAPPLICATION_H
#define SRCC_LIBQCOREAPPLICATION_H

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
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QCoreApplication QCoreApplication;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTranslator QTranslator;
typedef struct QVariant QVariant;
#endif

QCoreApplication* QCoreApplication_new(int* argc, char** argv);
QCoreApplication* QCoreApplication_new2(int* argc, char** argv, int param3);
QMetaObject* QCoreApplication_MetaObject(const QCoreApplication* self);
void* QCoreApplication_Metacast(QCoreApplication* self, const char* param1);
int QCoreApplication_Metacall(QCoreApplication* self, int param1, int param2, void** param3);
void QCoreApplication_OnMetacall(QCoreApplication* self, intptr_t slot);
int QCoreApplication_QBaseMetacall(QCoreApplication* self, int param1, int param2, void** param3);
libqt_string QCoreApplication_Tr(const char* s);
libqt_list /* of libqt_string */ QCoreApplication_Arguments();
void QCoreApplication_SetAttribute(int attribute);
bool QCoreApplication_TestAttribute(int attribute);
void QCoreApplication_SetOrganizationDomain(libqt_string orgDomain);
libqt_string QCoreApplication_OrganizationDomain();
void QCoreApplication_SetOrganizationName(libqt_string orgName);
libqt_string QCoreApplication_OrganizationName();
void QCoreApplication_SetApplicationName(libqt_string application);
libqt_string QCoreApplication_ApplicationName();
void QCoreApplication_SetApplicationVersion(libqt_string version);
libqt_string QCoreApplication_ApplicationVersion();
void QCoreApplication_SetSetuidAllowed(bool allow);
bool QCoreApplication_IsSetuidAllowed();
QCoreApplication* QCoreApplication_Instance();
int QCoreApplication_Exec();
void QCoreApplication_ProcessEvents();
void QCoreApplication_ProcessEvents2(int flags, int maxtime);
bool QCoreApplication_SendEvent(QObject* receiver, QEvent* event);
void QCoreApplication_PostEvent(QObject* receiver, QEvent* event);
void QCoreApplication_SendPostedEvents();
void QCoreApplication_RemovePostedEvents(QObject* receiver);
QAbstractEventDispatcher* QCoreApplication_EventDispatcher();
void QCoreApplication_SetEventDispatcher(QAbstractEventDispatcher* eventDispatcher);
bool QCoreApplication_Notify(QCoreApplication* self, QObject* param1, QEvent* param2);
void QCoreApplication_OnNotify(QCoreApplication* self, intptr_t slot);
bool QCoreApplication_QBaseNotify(QCoreApplication* self, QObject* param1, QEvent* param2);
bool QCoreApplication_StartingUp();
bool QCoreApplication_ClosingDown();
libqt_string QCoreApplication_ApplicationDirPath();
libqt_string QCoreApplication_ApplicationFilePath();
long long QCoreApplication_ApplicationPid();
void QCoreApplication_SetLibraryPaths(libqt_list /* of libqt_string */ libraryPaths);
libqt_list /* of libqt_string */ QCoreApplication_LibraryPaths();
void QCoreApplication_AddLibraryPath(libqt_string param1);
void QCoreApplication_RemoveLibraryPath(libqt_string param1);
bool QCoreApplication_InstallTranslator(QTranslator* messageFile);
bool QCoreApplication_RemoveTranslator(QTranslator* messageFile);
libqt_string QCoreApplication_Translate(const char* context, const char* key);
void QCoreApplication_InstallNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj);
void QCoreApplication_Connect_InstallNativeEventFilter(QCoreApplication* self, intptr_t slot);
void QCoreApplication_RemoveNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj);
void QCoreApplication_Connect_RemoveNativeEventFilter(QCoreApplication* self, intptr_t slot);
bool QCoreApplication_IsQuitLockEnabled();
void QCoreApplication_SetQuitLockEnabled(bool enabled);
void QCoreApplication_Quit();
void QCoreApplication_Exit();
void QCoreApplication_OrganizationNameChanged(QCoreApplication* self);
void QCoreApplication_Connect_OrganizationNameChanged(QCoreApplication* self, intptr_t slot);
void QCoreApplication_OrganizationDomainChanged(QCoreApplication* self);
void QCoreApplication_Connect_OrganizationDomainChanged(QCoreApplication* self, intptr_t slot);
void QCoreApplication_ApplicationNameChanged(QCoreApplication* self);
void QCoreApplication_Connect_ApplicationNameChanged(QCoreApplication* self, intptr_t slot);
void QCoreApplication_ApplicationVersionChanged(QCoreApplication* self);
void QCoreApplication_Connect_ApplicationVersionChanged(QCoreApplication* self, intptr_t slot);
bool QCoreApplication_Event(QCoreApplication* self, QEvent* param1);
void QCoreApplication_OnEvent(QCoreApplication* self, intptr_t slot);
bool QCoreApplication_QBaseEvent(QCoreApplication* self, QEvent* param1);
libqt_string QCoreApplication_Tr2(const char* s, const char* c);
libqt_string QCoreApplication_Tr3(const char* s, const char* c, int n);
void QCoreApplication_SetAttribute2(int attribute, bool on);
void QCoreApplication_ProcessEvents1(int flags);
void QCoreApplication_PostEvent3(QObject* receiver, QEvent* event, int priority);
void QCoreApplication_SendPostedEvents1(QObject* receiver);
void QCoreApplication_SendPostedEvents2(QObject* receiver, int event_type);
void QCoreApplication_RemovePostedEvents2(QObject* receiver, int eventType);
libqt_string QCoreApplication_Translate3(const char* context, const char* key, const char* disambiguation);
libqt_string QCoreApplication_Translate4(const char* context, const char* key, const char* disambiguation, int n);
void QCoreApplication_Exit1(int retcode);
bool QCoreApplication_EventFilter(QCoreApplication* self, QObject* watched, QEvent* event);
void QCoreApplication_OnEventFilter(QCoreApplication* self, intptr_t slot);
bool QCoreApplication_QBaseEventFilter(QCoreApplication* self, QObject* watched, QEvent* event);
void QCoreApplication_TimerEvent(QCoreApplication* self, QTimerEvent* event);
void QCoreApplication_OnTimerEvent(QCoreApplication* self, intptr_t slot);
void QCoreApplication_QBaseTimerEvent(QCoreApplication* self, QTimerEvent* event);
void QCoreApplication_ChildEvent(QCoreApplication* self, QChildEvent* event);
void QCoreApplication_OnChildEvent(QCoreApplication* self, intptr_t slot);
void QCoreApplication_QBaseChildEvent(QCoreApplication* self, QChildEvent* event);
void QCoreApplication_CustomEvent(QCoreApplication* self, QEvent* event);
void QCoreApplication_OnCustomEvent(QCoreApplication* self, intptr_t slot);
void QCoreApplication_QBaseCustomEvent(QCoreApplication* self, QEvent* event);
void QCoreApplication_ConnectNotify(QCoreApplication* self, QMetaMethod* signal);
void QCoreApplication_OnConnectNotify(QCoreApplication* self, intptr_t slot);
void QCoreApplication_QBaseConnectNotify(QCoreApplication* self, QMetaMethod* signal);
void QCoreApplication_DisconnectNotify(QCoreApplication* self, QMetaMethod* signal);
void QCoreApplication_OnDisconnectNotify(QCoreApplication* self, intptr_t slot);
void QCoreApplication_QBaseDisconnectNotify(QCoreApplication* self, QMetaMethod* signal);
void* QCoreApplication_ResolveInterface(const QCoreApplication* self, const char* name, int revision);
void QCoreApplication_OnResolveInterface(const QCoreApplication* self, intptr_t slot);
void* QCoreApplication_QBaseResolveInterface(const QCoreApplication* self, const char* name, int revision);
QObject* QCoreApplication_Sender(const QCoreApplication* self);
void QCoreApplication_OnSender(const QCoreApplication* self, intptr_t slot);
QObject* QCoreApplication_QBaseSender(const QCoreApplication* self);
int QCoreApplication_SenderSignalIndex(const QCoreApplication* self);
void QCoreApplication_OnSenderSignalIndex(const QCoreApplication* self, intptr_t slot);
int QCoreApplication_QBaseSenderSignalIndex(const QCoreApplication* self);
int QCoreApplication_Receivers(const QCoreApplication* self, const char* signal);
void QCoreApplication_OnReceivers(const QCoreApplication* self, intptr_t slot);
int QCoreApplication_QBaseReceivers(const QCoreApplication* self, const char* signal);
bool QCoreApplication_IsSignalConnected(const QCoreApplication* self, QMetaMethod* signal);
void QCoreApplication_OnIsSignalConnected(const QCoreApplication* self, intptr_t slot);
bool QCoreApplication_QBaseIsSignalConnected(const QCoreApplication* self, QMetaMethod* signal);
void QCoreApplication_Delete(QCoreApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
