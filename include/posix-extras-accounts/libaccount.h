#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBACCOUNT_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBACCOUNT_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Watch)
typedef Accounts::Watch Accounts__Watch;
#endif
#else
typedef struct Accounts__Account Accounts__Account;
typedef struct Accounts__Error Accounts__Error;
typedef struct Accounts__Manager Accounts__Manager;
typedef struct Accounts__Provider Accounts__Provider;
typedef struct Accounts__Service Accounts__Service;
typedef struct Accounts__Watch Accounts__Watch;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

Accounts__Watch* Accounts__Watch_new();
Accounts__Watch* Accounts__Watch_new2(QObject* parent);
QMetaObject* Accounts__Watch_MetaObject(const Accounts__Watch* self);
void* Accounts__Watch_Metacast(Accounts__Watch* self, const char* param1);
int Accounts__Watch_Metacall(Accounts__Watch* self, int param1, int param2, void** param3);
void Accounts__Watch_Notify(Accounts__Watch* self, const char* key);
void Accounts__Watch_Connect_Notify(Accounts__Watch* self, intptr_t slot);
void Accounts__Watch_OnMetaObject(const Accounts__Watch* self, intptr_t slot);
QMetaObject* Accounts__Watch_SuperMetaObject(const Accounts__Watch* self);
void Accounts__Watch_OnMetacast(Accounts__Watch* self, intptr_t slot);
void* Accounts__Watch_SuperMetacast(Accounts__Watch* self, const char* param1);
void Accounts__Watch_OnMetacall(Accounts__Watch* self, intptr_t slot);
int Accounts__Watch_SuperMetacall(Accounts__Watch* self, int param1, int param2, void** param3);
bool Accounts__Watch_Event(Accounts__Watch* self, QEvent* event);
void Accounts__Watch_OnEvent(Accounts__Watch* self, intptr_t slot);
bool Accounts__Watch_SuperEvent(Accounts__Watch* self, QEvent* event);
bool Accounts__Watch_EventFilter(Accounts__Watch* self, QObject* watched, QEvent* event);
void Accounts__Watch_OnEventFilter(Accounts__Watch* self, intptr_t slot);
bool Accounts__Watch_SuperEventFilter(Accounts__Watch* self, QObject* watched, QEvent* event);
void Accounts__Watch_TimerEvent(Accounts__Watch* self, QTimerEvent* event);
void Accounts__Watch_OnTimerEvent(Accounts__Watch* self, intptr_t slot);
void Accounts__Watch_SuperTimerEvent(Accounts__Watch* self, QTimerEvent* event);
void Accounts__Watch_ChildEvent(Accounts__Watch* self, QChildEvent* event);
void Accounts__Watch_OnChildEvent(Accounts__Watch* self, intptr_t slot);
void Accounts__Watch_SuperChildEvent(Accounts__Watch* self, QChildEvent* event);
void Accounts__Watch_CustomEvent(Accounts__Watch* self, QEvent* event);
void Accounts__Watch_OnCustomEvent(Accounts__Watch* self, intptr_t slot);
void Accounts__Watch_SuperCustomEvent(Accounts__Watch* self, QEvent* event);
void Accounts__Watch_ConnectNotify(Accounts__Watch* self, const QMetaMethod* signal);
void Accounts__Watch_OnConnectNotify(Accounts__Watch* self, intptr_t slot);
void Accounts__Watch_SuperConnectNotify(Accounts__Watch* self, const QMetaMethod* signal);
void Accounts__Watch_DisconnectNotify(Accounts__Watch* self, const QMetaMethod* signal);
void Accounts__Watch_OnDisconnectNotify(Accounts__Watch* self, intptr_t slot);
void Accounts__Watch_SuperDisconnectNotify(Accounts__Watch* self, const QMetaMethod* signal);
QObject* Accounts__Watch_Sender(const Accounts__Watch* self);
void Accounts__Watch_OnSender(const Accounts__Watch* self, intptr_t slot);
QObject* Accounts__Watch_SuperSender(const Accounts__Watch* self);
int Accounts__Watch_SenderSignalIndex(const Accounts__Watch* self);
void Accounts__Watch_OnSenderSignalIndex(const Accounts__Watch* self, intptr_t slot);
int Accounts__Watch_SuperSenderSignalIndex(const Accounts__Watch* self);
int Accounts__Watch_Receivers(const Accounts__Watch* self, const char* signal);
void Accounts__Watch_OnReceivers(const Accounts__Watch* self, intptr_t slot);
int Accounts__Watch_SuperReceivers(const Accounts__Watch* self, const char* signal);
bool Accounts__Watch_IsSignalConnected(const Accounts__Watch* self, const QMetaMethod* signal);
void Accounts__Watch_OnIsSignalConnected(const Accounts__Watch* self, intptr_t slot);
bool Accounts__Watch_SuperIsSignalConnected(const Accounts__Watch* self, const QMetaMethod* signal);
void Accounts__Watch_Delete(Accounts__Watch* self);

Accounts__Account* Accounts__Account_new(Accounts__Manager* manager, const libqt_string provider);
Accounts__Account* Accounts__Account_new2(Accounts__Manager* manager, const libqt_string provider, QObject* parent);
QMetaObject* Accounts__Account_MetaObject(const Accounts__Account* self);
void* Accounts__Account_Metacast(Accounts__Account* self, const char* param1);
int Accounts__Account_Metacall(Accounts__Account* self, int param1, int param2, void** param3);
Accounts__Account* Accounts__Account_FromId(Accounts__Manager* manager, unsigned int id);
unsigned int Accounts__Account_Id(const Accounts__Account* self);
Accounts__Manager* Accounts__Account_Manager(const Accounts__Account* self);
bool Accounts__Account_SupportsService(const Accounts__Account* self, const libqt_string serviceType);
libqt_list /* of Accounts__Service* */ Accounts__Account_Services(const Accounts__Account* self);
libqt_list /* of Accounts__Service* */ Accounts__Account_EnabledServices(const Accounts__Account* self);
bool Accounts__Account_Enabled(const Accounts__Account* self);
bool Accounts__Account_IsEnabled(const Accounts__Account* self);
void Accounts__Account_SetEnabled(Accounts__Account* self, bool enabled);
unsigned int Accounts__Account_CredentialsId(Accounts__Account* self);
void Accounts__Account_SetCredentialsId(Accounts__Account* self, const unsigned int id);
libqt_string Accounts__Account_DisplayName(const Accounts__Account* self);
void Accounts__Account_SetDisplayName(Accounts__Account* self, const libqt_string displayName);
libqt_string Accounts__Account_ProviderName(const Accounts__Account* self);
Accounts__Provider* Accounts__Account_Provider(const Accounts__Account* self);
void Accounts__Account_SelectService(Accounts__Account* self);
Accounts__Service* Accounts__Account_SelectedService(const Accounts__Account* self);
libqt_list /* of libqt_string */ Accounts__Account_AllKeys(const Accounts__Account* self);
void Accounts__Account_BeginGroup(Accounts__Account* self, const libqt_string prefix);
libqt_list /* of libqt_string */ Accounts__Account_ChildGroups(const Accounts__Account* self);
libqt_list /* of libqt_string */ Accounts__Account_ChildKeys(const Accounts__Account* self);
void Accounts__Account_Clear(Accounts__Account* self);
bool Accounts__Account_Contains(const Accounts__Account* self, const libqt_string key);
void Accounts__Account_EndGroup(Accounts__Account* self);
libqt_string Accounts__Account_Group(const Accounts__Account* self);
bool Accounts__Account_IsWritable(const Accounts__Account* self);
void Accounts__Account_Remove(Accounts__Account* self, const libqt_string key);
void Accounts__Account_SetValue(Accounts__Account* self, const libqt_string key, const QVariant* value);
QVariant* Accounts__Account_Value(const Accounts__Account* self, const libqt_string key);
int Accounts__Account_Value2(const Accounts__Account* self, const libqt_string key, QVariant* value);
libqt_string Accounts__Account_ValueAsString(const Accounts__Account* self, const libqt_string key);
int Accounts__Account_ValueAsInt(const Accounts__Account* self, const libqt_string key);
unsigned long long Accounts__Account_ValueAsUInt64(const Accounts__Account* self, const libqt_string key);
bool Accounts__Account_ValueAsBool(const Accounts__Account* self, const libqt_string key);
Accounts__Watch* Accounts__Account_WatchKey(Accounts__Account* self);
void Accounts__Account_Sync(Accounts__Account* self);
bool Accounts__Account_SyncAndBlock(Accounts__Account* self);
void Accounts__Account_Remove2(Accounts__Account* self);
void Accounts__Account_Sign(Accounts__Account* self, const libqt_string key, const char* token);
bool Accounts__Account_Verify(Accounts__Account* self, const libqt_string key, const char** token);
bool Accounts__Account_VerifyWithTokens(Accounts__Account* self, const libqt_string key, libqt_list /* of const char* */ tokens);
void Accounts__Account_DisplayNameChanged(Accounts__Account* self, const libqt_string displayName);
void Accounts__Account_Connect_DisplayNameChanged(Accounts__Account* self, intptr_t slot);
void Accounts__Account_EnabledChanged(Accounts__Account* self, const libqt_string serviceName, bool enabled);
void Accounts__Account_Connect_EnabledChanged(Accounts__Account* self, intptr_t slot);
void Accounts__Account_Error(Accounts__Account* self, Accounts__Error* errorVal);
void Accounts__Account_Connect_Error(Accounts__Account* self, intptr_t slot);
void Accounts__Account_Synced(Accounts__Account* self);
void Accounts__Account_Connect_Synced(Accounts__Account* self, intptr_t slot);
void Accounts__Account_Removed(Accounts__Account* self);
void Accounts__Account_Connect_Removed(Accounts__Account* self, intptr_t slot);
Accounts__Account* Accounts__Account_FromId3(Accounts__Manager* manager, unsigned int id, QObject* parent);
libqt_list /* of Accounts__Service* */ Accounts__Account_Services1(const Accounts__Account* self, const libqt_string serviceType);
void Accounts__Account_SelectService1(Accounts__Account* self, const Accounts__Service* service);
QVariant* Accounts__Account_Value22(const Accounts__Account* self, const libqt_string key, const QVariant* defaultValue);
QVariant* Accounts__Account_Value3(const Accounts__Account* self, const libqt_string key, const QVariant* defaultValue, int* source);
libqt_string Accounts__Account_ValueAsString2(const Accounts__Account* self, const libqt_string key, libqt_string default_value);
libqt_string Accounts__Account_ValueAsString3(const Accounts__Account* self, const libqt_string key, libqt_string default_value, int* source);
int Accounts__Account_ValueAsInt2(const Accounts__Account* self, const libqt_string key, int default_value);
int Accounts__Account_ValueAsInt3(const Accounts__Account* self, const libqt_string key, int default_value, int* source);
unsigned long long Accounts__Account_ValueAsUInt642(const Accounts__Account* self, const libqt_string key, unsigned long long default_value);
unsigned long long Accounts__Account_ValueAsUInt643(const Accounts__Account* self, const libqt_string key, unsigned long long default_value, int* source);
bool Accounts__Account_ValueAsBool2(const Accounts__Account* self, const libqt_string key, bool default_value);
bool Accounts__Account_ValueAsBool3(const Accounts__Account* self, const libqt_string key, bool default_value, int* source);
Accounts__Watch* Accounts__Account_WatchKey1(Accounts__Account* self, const libqt_string key);
void Accounts__Account_OnMetaObject(const Accounts__Account* self, intptr_t slot);
QMetaObject* Accounts__Account_SuperMetaObject(const Accounts__Account* self);
void Accounts__Account_OnMetacast(Accounts__Account* self, intptr_t slot);
void* Accounts__Account_SuperMetacast(Accounts__Account* self, const char* param1);
void Accounts__Account_OnMetacall(Accounts__Account* self, intptr_t slot);
int Accounts__Account_SuperMetacall(Accounts__Account* self, int param1, int param2, void** param3);
bool Accounts__Account_Event(Accounts__Account* self, QEvent* event);
void Accounts__Account_OnEvent(Accounts__Account* self, intptr_t slot);
bool Accounts__Account_SuperEvent(Accounts__Account* self, QEvent* event);
bool Accounts__Account_EventFilter(Accounts__Account* self, QObject* watched, QEvent* event);
void Accounts__Account_OnEventFilter(Accounts__Account* self, intptr_t slot);
bool Accounts__Account_SuperEventFilter(Accounts__Account* self, QObject* watched, QEvent* event);
void Accounts__Account_TimerEvent(Accounts__Account* self, QTimerEvent* event);
void Accounts__Account_OnTimerEvent(Accounts__Account* self, intptr_t slot);
void Accounts__Account_SuperTimerEvent(Accounts__Account* self, QTimerEvent* event);
void Accounts__Account_ChildEvent(Accounts__Account* self, QChildEvent* event);
void Accounts__Account_OnChildEvent(Accounts__Account* self, intptr_t slot);
void Accounts__Account_SuperChildEvent(Accounts__Account* self, QChildEvent* event);
void Accounts__Account_CustomEvent(Accounts__Account* self, QEvent* event);
void Accounts__Account_OnCustomEvent(Accounts__Account* self, intptr_t slot);
void Accounts__Account_SuperCustomEvent(Accounts__Account* self, QEvent* event);
void Accounts__Account_ConnectNotify(Accounts__Account* self, const QMetaMethod* signal);
void Accounts__Account_OnConnectNotify(Accounts__Account* self, intptr_t slot);
void Accounts__Account_SuperConnectNotify(Accounts__Account* self, const QMetaMethod* signal);
void Accounts__Account_DisconnectNotify(Accounts__Account* self, const QMetaMethod* signal);
void Accounts__Account_OnDisconnectNotify(Accounts__Account* self, intptr_t slot);
void Accounts__Account_SuperDisconnectNotify(Accounts__Account* self, const QMetaMethod* signal);
QObject* Accounts__Account_Sender(const Accounts__Account* self);
void Accounts__Account_OnSender(const Accounts__Account* self, intptr_t slot);
QObject* Accounts__Account_SuperSender(const Accounts__Account* self);
int Accounts__Account_SenderSignalIndex(const Accounts__Account* self);
void Accounts__Account_OnSenderSignalIndex(const Accounts__Account* self, intptr_t slot);
int Accounts__Account_SuperSenderSignalIndex(const Accounts__Account* self);
int Accounts__Account_Receivers(const Accounts__Account* self, const char* signal);
void Accounts__Account_OnReceivers(const Accounts__Account* self, intptr_t slot);
int Accounts__Account_SuperReceivers(const Accounts__Account* self, const char* signal);
bool Accounts__Account_IsSignalConnected(const Accounts__Account* self, const QMetaMethod* signal);
void Accounts__Account_OnIsSignalConnected(const Accounts__Account* self, intptr_t slot);
bool Accounts__Account_SuperIsSignalConnected(const Accounts__Account* self, const QMetaMethod* signal);
void Accounts__Account_Delete(Accounts__Account* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
