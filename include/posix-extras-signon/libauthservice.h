#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNONC_LIBAUTHSERVICE_H
#define SRC_POSIX_EXTRAS_SIGNONC_LIBAUTHSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__AuthService)
typedef SignOn::AuthService SignOn__AuthService;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__AuthService__IdentityRegExp)
typedef SignOn::AuthService::IdentityRegExp SignOn__AuthService__IdentityRegExp;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__Error)
typedef SignOn::Error SignOn__Error;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__IdentityInfo)
typedef SignOn::IdentityInfo SignOn__IdentityInfo;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct SignOn__AuthService SignOn__AuthService;
typedef struct SignOn__AuthService__IdentityRegExp SignOn__AuthService__IdentityRegExp;
typedef struct SignOn__Error SignOn__Error;
typedef struct SignOn__IdentityInfo SignOn__IdentityInfo;
#endif

SignOn__AuthService* SignOn__AuthService_new();
SignOn__AuthService* SignOn__AuthService_new2(QObject* parent);
QMetaObject* SignOn__AuthService_MetaObject(const SignOn__AuthService* self);
void* SignOn__AuthService_Metacast(SignOn__AuthService* self, const char* param1);
int SignOn__AuthService_Metacall(SignOn__AuthService* self, int param1, int param2, void** param3);
void SignOn__AuthService_QueryMethods(SignOn__AuthService* self);
void SignOn__AuthService_QueryMechanisms(SignOn__AuthService* self, const libqt_string method);
void SignOn__AuthService_QueryIdentities(SignOn__AuthService* self);
void SignOn__AuthService_Clear(SignOn__AuthService* self);
void SignOn__AuthService_Error(SignOn__AuthService* self, const SignOn__Error* err);
void SignOn__AuthService_Connect_Error(SignOn__AuthService* self, intptr_t slot);
void SignOn__AuthService_MethodsAvailable(SignOn__AuthService* self, const libqt_list /* of libqt_string */ methods);
void SignOn__AuthService_Connect_MethodsAvailable(SignOn__AuthService* self, intptr_t slot);
void SignOn__AuthService_MechanismsAvailable(SignOn__AuthService* self, const libqt_string method, const libqt_list /* of libqt_string */ mechanisms);
void SignOn__AuthService_Connect_MechanismsAvailable(SignOn__AuthService* self, intptr_t slot);
void SignOn__AuthService_Identities(SignOn__AuthService* self, const libqt_list /* of SignOn__IdentityInfo* */ identityList);
void SignOn__AuthService_Connect_Identities(SignOn__AuthService* self, intptr_t slot);
void SignOn__AuthService_Cleared(SignOn__AuthService* self);
void SignOn__AuthService_Connect_Cleared(SignOn__AuthService* self, intptr_t slot);
void SignOn__AuthService_OnMetacall(SignOn__AuthService* self, intptr_t slot);
int SignOn__AuthService_QBaseMetacall(SignOn__AuthService* self, int param1, int param2, void** param3);
bool SignOn__AuthService_Event(SignOn__AuthService* self, QEvent* event);
void SignOn__AuthService_OnEvent(SignOn__AuthService* self, intptr_t slot);
bool SignOn__AuthService_QBaseEvent(SignOn__AuthService* self, QEvent* event);
bool SignOn__AuthService_EventFilter(SignOn__AuthService* self, QObject* watched, QEvent* event);
void SignOn__AuthService_OnEventFilter(SignOn__AuthService* self, intptr_t slot);
bool SignOn__AuthService_QBaseEventFilter(SignOn__AuthService* self, QObject* watched, QEvent* event);
void SignOn__AuthService_TimerEvent(SignOn__AuthService* self, QTimerEvent* event);
void SignOn__AuthService_OnTimerEvent(SignOn__AuthService* self, intptr_t slot);
void SignOn__AuthService_QBaseTimerEvent(SignOn__AuthService* self, QTimerEvent* event);
void SignOn__AuthService_ChildEvent(SignOn__AuthService* self, QChildEvent* event);
void SignOn__AuthService_OnChildEvent(SignOn__AuthService* self, intptr_t slot);
void SignOn__AuthService_QBaseChildEvent(SignOn__AuthService* self, QChildEvent* event);
void SignOn__AuthService_CustomEvent(SignOn__AuthService* self, QEvent* event);
void SignOn__AuthService_OnCustomEvent(SignOn__AuthService* self, intptr_t slot);
void SignOn__AuthService_QBaseCustomEvent(SignOn__AuthService* self, QEvent* event);
void SignOn__AuthService_ConnectNotify(SignOn__AuthService* self, const QMetaMethod* signal);
void SignOn__AuthService_OnConnectNotify(SignOn__AuthService* self, intptr_t slot);
void SignOn__AuthService_QBaseConnectNotify(SignOn__AuthService* self, const QMetaMethod* signal);
void SignOn__AuthService_DisconnectNotify(SignOn__AuthService* self, const QMetaMethod* signal);
void SignOn__AuthService_OnDisconnectNotify(SignOn__AuthService* self, intptr_t slot);
void SignOn__AuthService_QBaseDisconnectNotify(SignOn__AuthService* self, const QMetaMethod* signal);
QObject* SignOn__AuthService_Sender(const SignOn__AuthService* self);
void SignOn__AuthService_OnSender(const SignOn__AuthService* self, intptr_t slot);
QObject* SignOn__AuthService_QBaseSender(const SignOn__AuthService* self);
int SignOn__AuthService_SenderSignalIndex(const SignOn__AuthService* self);
void SignOn__AuthService_OnSenderSignalIndex(const SignOn__AuthService* self, intptr_t slot);
int SignOn__AuthService_QBaseSenderSignalIndex(const SignOn__AuthService* self);
int SignOn__AuthService_Receivers(const SignOn__AuthService* self, const char* signal);
void SignOn__AuthService_OnReceivers(const SignOn__AuthService* self, intptr_t slot);
int SignOn__AuthService_QBaseReceivers(const SignOn__AuthService* self, const char* signal);
bool SignOn__AuthService_IsSignalConnected(const SignOn__AuthService* self, const QMetaMethod* signal);
void SignOn__AuthService_OnIsSignalConnected(const SignOn__AuthService* self, intptr_t slot);
bool SignOn__AuthService_QBaseIsSignalConnected(const SignOn__AuthService* self, const QMetaMethod* signal);
void SignOn__AuthService_Delete(SignOn__AuthService* self);

SignOn__AuthService__IdentityRegExp* SignOn__AuthService__IdentityRegExp_new(const libqt_string pattern);
SignOn__AuthService__IdentityRegExp* SignOn__AuthService__IdentityRegExp_new2(const SignOn__AuthService__IdentityRegExp* src);
bool SignOn__AuthService__IdentityRegExp_IsValid(const SignOn__AuthService__IdentityRegExp* self);
libqt_string SignOn__AuthService__IdentityRegExp_Pattern(const SignOn__AuthService__IdentityRegExp* self);
void SignOn__AuthService__IdentityRegExp_Delete(SignOn__AuthService__IdentityRegExp* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
