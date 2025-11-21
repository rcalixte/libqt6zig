#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBMANAGER_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Account)
typedef Accounts::Account Accounts__Account;
#endif
typedef Accounts::Application Accounts__Application;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Error)
typedef Accounts::Error Accounts__Error;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Manager)
typedef Accounts::Manager Accounts__Manager;
#endif
typedef Accounts::Provider Accounts__Provider;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Service)
typedef Accounts::Service Accounts__Service;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__ServiceType)
typedef Accounts::ServiceType Accounts__ServiceType;
#endif
#else
typedef struct Accounts__Account Accounts__Account;
typedef struct Accounts__Application Accounts__Application;
typedef struct Accounts__Error Accounts__Error;
typedef struct Accounts__Manager Accounts__Manager;
typedef struct Accounts__Provider Accounts__Provider;
typedef struct Accounts__Service Accounts__Service;
typedef struct Accounts__ServiceType Accounts__ServiceType;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

Accounts__Manager* Accounts__Manager_new();
Accounts__Manager* Accounts__Manager_new2(const libqt_string serviceType);
Accounts__Manager* Accounts__Manager_new3(int options);
Accounts__Manager* Accounts__Manager_new4(QObject* parent);
Accounts__Manager* Accounts__Manager_new5(const libqt_string serviceType, QObject* parent);
Accounts__Manager* Accounts__Manager_new6(int options, QObject* parent);
QMetaObject* Accounts__Manager_MetaObject(const Accounts__Manager* self);
void* Accounts__Manager_Metacast(Accounts__Manager* self, const char* param1);
int Accounts__Manager_Metacall(Accounts__Manager* self, int param1, int param2, void** param3);
Accounts__Account* Accounts__Manager_Account(const Accounts__Manager* self, const unsigned int* id);
libqt_list /* of unsigned int */ Accounts__Manager_AccountList(const Accounts__Manager* self);
libqt_list /* of unsigned int */ Accounts__Manager_AccountListEnabled(const Accounts__Manager* self);
Accounts__Account* Accounts__Manager_CreateAccount(Accounts__Manager* self, const libqt_string providerName);
Accounts__Service* Accounts__Manager_Service(const Accounts__Manager* self, const libqt_string serviceName);
libqt_list /* of Accounts__Service* */ Accounts__Manager_ServiceList(const Accounts__Manager* self);
libqt_list /* of Accounts__Service* */ Accounts__Manager_ServiceList2(const Accounts__Manager* self, const Accounts__Application* application);
Accounts__Provider* Accounts__Manager_Provider(const Accounts__Manager* self, const libqt_string providerName);
libqt_list /* of Accounts__Provider* */ Accounts__Manager_ProviderList(const Accounts__Manager* self);
Accounts__ServiceType* Accounts__Manager_ServiceType(const Accounts__Manager* self, const libqt_string name);
Accounts__Application* Accounts__Manager_Application(const Accounts__Manager* self, const libqt_string applicationName);
libqt_list /* of Accounts__Application* */ Accounts__Manager_ApplicationList(const Accounts__Manager* self, const Accounts__Service* service);
libqt_string Accounts__Manager_ServiceType2(const Accounts__Manager* self);
void Accounts__Manager_SetTimeout(Accounts__Manager* self, unsigned int timeout);
unsigned int Accounts__Manager_Timeout(Accounts__Manager* self);
void Accounts__Manager_SetAbortOnTimeout(Accounts__Manager* self, bool abort);
bool Accounts__Manager_AbortOnTimeout(const Accounts__Manager* self);
int Accounts__Manager_Options(const Accounts__Manager* self);
Accounts__Error* Accounts__Manager_LastError(const Accounts__Manager* self);
void Accounts__Manager_AccountCreated(Accounts__Manager* self, unsigned int id);
void Accounts__Manager_Connect_AccountCreated(Accounts__Manager* self, intptr_t slot);
void Accounts__Manager_AccountRemoved(Accounts__Manager* self, unsigned int id);
void Accounts__Manager_Connect_AccountRemoved(Accounts__Manager* self, intptr_t slot);
void Accounts__Manager_AccountUpdated(Accounts__Manager* self, unsigned int id);
void Accounts__Manager_Connect_AccountUpdated(Accounts__Manager* self, intptr_t slot);
void Accounts__Manager_EnabledEvent(Accounts__Manager* self, unsigned int id);
void Accounts__Manager_Connect_EnabledEvent(Accounts__Manager* self, intptr_t slot);
libqt_list /* of unsigned int */ Accounts__Manager_AccountList1(const Accounts__Manager* self, const libqt_string serviceType);
libqt_list /* of unsigned int */ Accounts__Manager_AccountListEnabled1(const Accounts__Manager* self, const libqt_string serviceType);
libqt_list /* of Accounts__Service* */ Accounts__Manager_ServiceList1(const Accounts__Manager* self, const libqt_string serviceType);
void Accounts__Manager_OnMetacall(Accounts__Manager* self, intptr_t slot);
int Accounts__Manager_QBaseMetacall(Accounts__Manager* self, int param1, int param2, void** param3);
bool Accounts__Manager_Event(Accounts__Manager* self, QEvent* event);
void Accounts__Manager_OnEvent(Accounts__Manager* self, intptr_t slot);
bool Accounts__Manager_QBaseEvent(Accounts__Manager* self, QEvent* event);
bool Accounts__Manager_EventFilter(Accounts__Manager* self, QObject* watched, QEvent* event);
void Accounts__Manager_OnEventFilter(Accounts__Manager* self, intptr_t slot);
bool Accounts__Manager_QBaseEventFilter(Accounts__Manager* self, QObject* watched, QEvent* event);
void Accounts__Manager_TimerEvent(Accounts__Manager* self, QTimerEvent* event);
void Accounts__Manager_OnTimerEvent(Accounts__Manager* self, intptr_t slot);
void Accounts__Manager_QBaseTimerEvent(Accounts__Manager* self, QTimerEvent* event);
void Accounts__Manager_ChildEvent(Accounts__Manager* self, QChildEvent* event);
void Accounts__Manager_OnChildEvent(Accounts__Manager* self, intptr_t slot);
void Accounts__Manager_QBaseChildEvent(Accounts__Manager* self, QChildEvent* event);
void Accounts__Manager_CustomEvent(Accounts__Manager* self, QEvent* event);
void Accounts__Manager_OnCustomEvent(Accounts__Manager* self, intptr_t slot);
void Accounts__Manager_QBaseCustomEvent(Accounts__Manager* self, QEvent* event);
void Accounts__Manager_ConnectNotify(Accounts__Manager* self, const QMetaMethod* signal);
void Accounts__Manager_OnConnectNotify(Accounts__Manager* self, intptr_t slot);
void Accounts__Manager_QBaseConnectNotify(Accounts__Manager* self, const QMetaMethod* signal);
void Accounts__Manager_DisconnectNotify(Accounts__Manager* self, const QMetaMethod* signal);
void Accounts__Manager_OnDisconnectNotify(Accounts__Manager* self, intptr_t slot);
void Accounts__Manager_QBaseDisconnectNotify(Accounts__Manager* self, const QMetaMethod* signal);
QObject* Accounts__Manager_Sender(const Accounts__Manager* self);
void Accounts__Manager_OnSender(const Accounts__Manager* self, intptr_t slot);
QObject* Accounts__Manager_QBaseSender(const Accounts__Manager* self);
int Accounts__Manager_SenderSignalIndex(const Accounts__Manager* self);
void Accounts__Manager_OnSenderSignalIndex(const Accounts__Manager* self, intptr_t slot);
int Accounts__Manager_QBaseSenderSignalIndex(const Accounts__Manager* self);
int Accounts__Manager_Receivers(const Accounts__Manager* self, const char* signal);
void Accounts__Manager_OnReceivers(const Accounts__Manager* self, intptr_t slot);
int Accounts__Manager_QBaseReceivers(const Accounts__Manager* self, const char* signal);
bool Accounts__Manager_IsSignalConnected(const Accounts__Manager* self, const QMetaMethod* signal);
void Accounts__Manager_OnIsSignalConnected(const Accounts__Manager* self, intptr_t slot);
bool Accounts__Manager_QBaseIsSignalConnected(const Accounts__Manager* self, const QMetaMethod* signal);
void Accounts__Manager_Delete(Accounts__Manager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
