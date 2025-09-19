#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPROVIDERMANAGER_H
#define SRC_EXTRAS_ATTICAC_LIBPROVIDERMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Provider)
typedef Attica::Provider Attica__Provider;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__ProviderManager)
typedef Attica::ProviderManager Attica__ProviderManager;
#endif
#else
typedef struct Attica__Provider Attica__Provider;
typedef struct Attica__ProviderManager Attica__ProviderManager;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

Attica__ProviderManager* Attica__ProviderManager_new();
Attica__ProviderManager* Attica__ProviderManager_new2(const int* flags);
QMetaObject* Attica__ProviderManager_MetaObject(const Attica__ProviderManager* self);
void* Attica__ProviderManager_Metacast(Attica__ProviderManager* self, const char* param1);
int Attica__ProviderManager_Metacall(Attica__ProviderManager* self, int param1, int param2, void** param3);
libqt_string Attica__ProviderManager_Tr(const char* s);
void Attica__ProviderManager_LoadDefaultProviders(Attica__ProviderManager* self);
libqt_list /* of QUrl* */ Attica__ProviderManager_DefaultProviderFiles(Attica__ProviderManager* self);
void Attica__ProviderManager_AddProviderFileToDefaultProviders(Attica__ProviderManager* self, const QUrl* url);
void Attica__ProviderManager_RemoveProviderFileFromDefaultProviders(Attica__ProviderManager* self, const QUrl* url);
void Attica__ProviderManager_SetAuthenticationSuppressed(Attica__ProviderManager* self, bool suppressed);
void Attica__ProviderManager_Clear(Attica__ProviderManager* self);
void Attica__ProviderManager_AddProviderFromXml(Attica__ProviderManager* self, const libqt_string providerXml);
void Attica__ProviderManager_AddProviderFile(Attica__ProviderManager* self, const QUrl* file);
libqt_list /* of QUrl* */ Attica__ProviderManager_ProviderFiles(const Attica__ProviderManager* self);
libqt_list /* of Attica__Provider* */ Attica__ProviderManager_Providers(const Attica__ProviderManager* self);
bool Attica__ProviderManager_Contains(const Attica__ProviderManager* self, const QUrl* provider);
Attica__Provider* Attica__ProviderManager_ProviderByUrl(const Attica__ProviderManager* self, const QUrl* url);
Attica__Provider* Attica__ProviderManager_ProviderFor(const Attica__ProviderManager* self, const QUrl* url);
void Attica__ProviderManager_ProviderAdded(Attica__ProviderManager* self, const Attica__Provider* provider);
void Attica__ProviderManager_Connect_ProviderAdded(Attica__ProviderManager* self, intptr_t slot);
void Attica__ProviderManager_DefaultProvidersLoaded(Attica__ProviderManager* self);
void Attica__ProviderManager_Connect_DefaultProvidersLoaded(Attica__ProviderManager* self, intptr_t slot);
void Attica__ProviderManager_AuthenticationCredentialsMissing(Attica__ProviderManager* self, const Attica__Provider* provider);
void Attica__ProviderManager_Connect_AuthenticationCredentialsMissing(Attica__ProviderManager* self, intptr_t slot);
void Attica__ProviderManager_FailedToLoad(Attica__ProviderManager* self, const QUrl* provider, int errorVal);
void Attica__ProviderManager_Connect_FailedToLoad(Attica__ProviderManager* self, intptr_t slot);
libqt_string Attica__ProviderManager_Tr2(const char* s, const char* c);
libqt_string Attica__ProviderManager_Tr3(const char* s, const char* c, int n);
void Attica__ProviderManager_OnMetacall(Attica__ProviderManager* self, intptr_t slot);
int Attica__ProviderManager_QBaseMetacall(Attica__ProviderManager* self, int param1, int param2, void** param3);
bool Attica__ProviderManager_Event(Attica__ProviderManager* self, QEvent* event);
void Attica__ProviderManager_OnEvent(Attica__ProviderManager* self, intptr_t slot);
bool Attica__ProviderManager_QBaseEvent(Attica__ProviderManager* self, QEvent* event);
bool Attica__ProviderManager_EventFilter(Attica__ProviderManager* self, QObject* watched, QEvent* event);
void Attica__ProviderManager_OnEventFilter(Attica__ProviderManager* self, intptr_t slot);
bool Attica__ProviderManager_QBaseEventFilter(Attica__ProviderManager* self, QObject* watched, QEvent* event);
void Attica__ProviderManager_TimerEvent(Attica__ProviderManager* self, QTimerEvent* event);
void Attica__ProviderManager_OnTimerEvent(Attica__ProviderManager* self, intptr_t slot);
void Attica__ProviderManager_QBaseTimerEvent(Attica__ProviderManager* self, QTimerEvent* event);
void Attica__ProviderManager_ChildEvent(Attica__ProviderManager* self, QChildEvent* event);
void Attica__ProviderManager_OnChildEvent(Attica__ProviderManager* self, intptr_t slot);
void Attica__ProviderManager_QBaseChildEvent(Attica__ProviderManager* self, QChildEvent* event);
void Attica__ProviderManager_CustomEvent(Attica__ProviderManager* self, QEvent* event);
void Attica__ProviderManager_OnCustomEvent(Attica__ProviderManager* self, intptr_t slot);
void Attica__ProviderManager_QBaseCustomEvent(Attica__ProviderManager* self, QEvent* event);
void Attica__ProviderManager_ConnectNotify(Attica__ProviderManager* self, const QMetaMethod* signal);
void Attica__ProviderManager_OnConnectNotify(Attica__ProviderManager* self, intptr_t slot);
void Attica__ProviderManager_QBaseConnectNotify(Attica__ProviderManager* self, const QMetaMethod* signal);
void Attica__ProviderManager_DisconnectNotify(Attica__ProviderManager* self, const QMetaMethod* signal);
void Attica__ProviderManager_OnDisconnectNotify(Attica__ProviderManager* self, intptr_t slot);
void Attica__ProviderManager_QBaseDisconnectNotify(Attica__ProviderManager* self, const QMetaMethod* signal);
QObject* Attica__ProviderManager_Sender(const Attica__ProviderManager* self);
void Attica__ProviderManager_OnSender(const Attica__ProviderManager* self, intptr_t slot);
QObject* Attica__ProviderManager_QBaseSender(const Attica__ProviderManager* self);
int Attica__ProviderManager_SenderSignalIndex(const Attica__ProviderManager* self);
void Attica__ProviderManager_OnSenderSignalIndex(const Attica__ProviderManager* self, intptr_t slot);
int Attica__ProviderManager_QBaseSenderSignalIndex(const Attica__ProviderManager* self);
int Attica__ProviderManager_Receivers(const Attica__ProviderManager* self, const char* signal);
void Attica__ProviderManager_OnReceivers(const Attica__ProviderManager* self, intptr_t slot);
int Attica__ProviderManager_QBaseReceivers(const Attica__ProviderManager* self, const char* signal);
bool Attica__ProviderManager_IsSignalConnected(const Attica__ProviderManager* self, const QMetaMethod* signal);
void Attica__ProviderManager_OnIsSignalConnected(const Attica__ProviderManager* self, intptr_t slot);
bool Attica__ProviderManager_QBaseIsSignalConnected(const Attica__ProviderManager* self, const QMetaMethod* signal);
void Attica__ProviderManager_Delete(Attica__ProviderManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
