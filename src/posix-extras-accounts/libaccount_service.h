#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBACCOUNT_SERVICE_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBACCOUNT_SERVICE_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__AccountService)
typedef Accounts::AccountService Accounts__AccountService;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__AuthData)
typedef Accounts::AuthData Accounts__AuthData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Service)
typedef Accounts::Service Accounts__Service;
#endif
#else
typedef struct Accounts__Account Accounts__Account;
typedef struct Accounts__AccountService Accounts__AccountService;
typedef struct Accounts__AuthData Accounts__AuthData;
typedef struct Accounts__Service Accounts__Service;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

Accounts__AccountService* Accounts__AccountService_new(Accounts__Account* account, const Accounts__Service* service);
Accounts__AccountService* Accounts__AccountService_new2(Accounts__Account* account, const Accounts__Service* service, QObject* parent);
QMetaObject* Accounts__AccountService_MetaObject(const Accounts__AccountService* self);
void* Accounts__AccountService_Metacast(Accounts__AccountService* self, const char* param1);
int Accounts__AccountService_Metacall(Accounts__AccountService* self, int param1, int param2, void** param3);
Accounts__Account* Accounts__AccountService_Account(const Accounts__AccountService* self);
Accounts__Service* Accounts__AccountService_Service(const Accounts__AccountService* self);
bool Accounts__AccountService_Enabled(const Accounts__AccountService* self);
bool Accounts__AccountService_IsEnabled(const Accounts__AccountService* self);
libqt_list /* of libqt_string */ Accounts__AccountService_AllKeys(const Accounts__AccountService* self);
void Accounts__AccountService_BeginGroup(Accounts__AccountService* self, const libqt_string prefix);
libqt_list /* of libqt_string */ Accounts__AccountService_ChildGroups(const Accounts__AccountService* self);
libqt_list /* of libqt_string */ Accounts__AccountService_ChildKeys(const Accounts__AccountService* self);
void Accounts__AccountService_Clear(Accounts__AccountService* self);
bool Accounts__AccountService_Contains(const Accounts__AccountService* self, const libqt_string key);
void Accounts__AccountService_EndGroup(Accounts__AccountService* self);
libqt_string Accounts__AccountService_Group(const Accounts__AccountService* self);
void Accounts__AccountService_Remove(Accounts__AccountService* self, const libqt_string key);
void Accounts__AccountService_SetValue(Accounts__AccountService* self, const char* key, const QVariant* value);
void Accounts__AccountService_SetValue2(Accounts__AccountService* self, const libqt_string key, const QVariant* value);
QVariant* Accounts__AccountService_Value(const Accounts__AccountService* self, const libqt_string key, const QVariant* defaultValue);
QVariant* Accounts__AccountService_Value2(const Accounts__AccountService* self, const libqt_string key);
QVariant* Accounts__AccountService_Value3(const Accounts__AccountService* self, const char* key);
libqt_list /* of libqt_string */ Accounts__AccountService_ChangedFields(const Accounts__AccountService* self);
Accounts__AuthData* Accounts__AccountService_AuthData(const Accounts__AccountService* self);
void Accounts__AccountService_Enabled2(Accounts__AccountService* self, bool isEnabled);
void Accounts__AccountService_Changed(Accounts__AccountService* self);
QVariant* Accounts__AccountService_Value32(const Accounts__AccountService* self, const libqt_string key, const QVariant* defaultValue, int* source);
QVariant* Accounts__AccountService_Value22(const Accounts__AccountService* self, const libqt_string key, int* source);
QVariant* Accounts__AccountService_Value23(const Accounts__AccountService* self, const char* key, int* source);
void Accounts__AccountService_OnMetaObject(const Accounts__AccountService* self, intptr_t slot);
QMetaObject* Accounts__AccountService_QBaseMetaObject(const Accounts__AccountService* self);
void Accounts__AccountService_OnMetacast(Accounts__AccountService* self, intptr_t slot);
void* Accounts__AccountService_QBaseMetacast(Accounts__AccountService* self, const char* param1);
void Accounts__AccountService_OnMetacall(Accounts__AccountService* self, intptr_t slot);
int Accounts__AccountService_QBaseMetacall(Accounts__AccountService* self, int param1, int param2, void** param3);
bool Accounts__AccountService_Event(Accounts__AccountService* self, QEvent* event);
void Accounts__AccountService_OnEvent(Accounts__AccountService* self, intptr_t slot);
bool Accounts__AccountService_QBaseEvent(Accounts__AccountService* self, QEvent* event);
bool Accounts__AccountService_EventFilter(Accounts__AccountService* self, QObject* watched, QEvent* event);
void Accounts__AccountService_OnEventFilter(Accounts__AccountService* self, intptr_t slot);
bool Accounts__AccountService_QBaseEventFilter(Accounts__AccountService* self, QObject* watched, QEvent* event);
void Accounts__AccountService_TimerEvent(Accounts__AccountService* self, QTimerEvent* event);
void Accounts__AccountService_OnTimerEvent(Accounts__AccountService* self, intptr_t slot);
void Accounts__AccountService_QBaseTimerEvent(Accounts__AccountService* self, QTimerEvent* event);
void Accounts__AccountService_ChildEvent(Accounts__AccountService* self, QChildEvent* event);
void Accounts__AccountService_OnChildEvent(Accounts__AccountService* self, intptr_t slot);
void Accounts__AccountService_QBaseChildEvent(Accounts__AccountService* self, QChildEvent* event);
void Accounts__AccountService_CustomEvent(Accounts__AccountService* self, QEvent* event);
void Accounts__AccountService_OnCustomEvent(Accounts__AccountService* self, intptr_t slot);
void Accounts__AccountService_QBaseCustomEvent(Accounts__AccountService* self, QEvent* event);
void Accounts__AccountService_ConnectNotify(Accounts__AccountService* self, const QMetaMethod* signal);
void Accounts__AccountService_OnConnectNotify(Accounts__AccountService* self, intptr_t slot);
void Accounts__AccountService_QBaseConnectNotify(Accounts__AccountService* self, const QMetaMethod* signal);
void Accounts__AccountService_DisconnectNotify(Accounts__AccountService* self, const QMetaMethod* signal);
void Accounts__AccountService_OnDisconnectNotify(Accounts__AccountService* self, intptr_t slot);
void Accounts__AccountService_QBaseDisconnectNotify(Accounts__AccountService* self, const QMetaMethod* signal);
QObject* Accounts__AccountService_Sender(const Accounts__AccountService* self);
void Accounts__AccountService_OnSender(const Accounts__AccountService* self, intptr_t slot);
QObject* Accounts__AccountService_QBaseSender(const Accounts__AccountService* self);
int Accounts__AccountService_SenderSignalIndex(const Accounts__AccountService* self);
void Accounts__AccountService_OnSenderSignalIndex(const Accounts__AccountService* self, intptr_t slot);
int Accounts__AccountService_QBaseSenderSignalIndex(const Accounts__AccountService* self);
int Accounts__AccountService_Receivers(const Accounts__AccountService* self, const char* signal);
void Accounts__AccountService_OnReceivers(const Accounts__AccountService* self, intptr_t slot);
int Accounts__AccountService_QBaseReceivers(const Accounts__AccountService* self, const char* signal);
bool Accounts__AccountService_IsSignalConnected(const Accounts__AccountService* self, const QMetaMethod* signal);
void Accounts__AccountService_OnIsSignalConnected(const Accounts__AccountService* self, intptr_t slot);
bool Accounts__AccountService_QBaseIsSignalConnected(const Accounts__AccountService* self, const QMetaMethod* signal);
void Accounts__AccountService_Delete(Accounts__AccountService* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
