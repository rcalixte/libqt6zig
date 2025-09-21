#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBENGINEBASE_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBENGINEBASE_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__CategoryMetadata)
typedef KNSCore::CategoryMetadata KNSCore__CategoryMetadata;
#endif
typedef KNSCore::EngineBase KNSCore__EngineBase;
typedef KNSCore::Entry KNSCore__Entry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__CategoryMetadata)
typedef KNSCore::Provider::CategoryMetadata KNSCore__Provider__CategoryMetadata;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__SearchPreset)
typedef KNSCore::Provider::SearchPreset KNSCore__Provider__SearchPreset;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__SearchRequest)
typedef KNSCore::Provider::SearchRequest KNSCore__Provider__SearchRequest;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ProviderCore)
typedef KNSCore::ProviderCore KNSCore__ProviderCore;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ResultsStream)
typedef KNSCore::ResultsStream KNSCore__ResultsStream;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__SearchPreset)
typedef KNSCore::SearchPreset KNSCore__SearchPreset;
#endif
typedef KNSCore::SearchRequest KNSCore__SearchRequest;
#else
typedef struct Attica__Provider Attica__Provider;
typedef struct KNSCore__CategoryMetadata KNSCore__CategoryMetadata;
typedef struct KNSCore__EngineBase KNSCore__EngineBase;
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSCore__ProviderCore KNSCore__ProviderCore;
typedef struct KNSCore__Provider__CategoryMetadata KNSCore__Provider__CategoryMetadata;
typedef struct KNSCore__Provider__SearchPreset KNSCore__Provider__SearchPreset;
typedef struct KNSCore__Provider__SearchRequest KNSCore__Provider__SearchRequest;
typedef struct KNSCore__ResultsStream KNSCore__ResultsStream;
typedef struct KNSCore__SearchPreset KNSCore__SearchPreset;
typedef struct KNSCore__SearchRequest KNSCore__SearchRequest;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

KNSCore__EngineBase* KNSCore__EngineBase_new();
KNSCore__EngineBase* KNSCore__EngineBase_new2(QObject* parent);
QMetaObject* KNSCore__EngineBase_MetaObject(const KNSCore__EngineBase* self);
void* KNSCore__EngineBase_Metacast(KNSCore__EngineBase* self, const char* param1);
int KNSCore__EngineBase_Metacall(KNSCore__EngineBase* self, int param1, int param2, void** param3);
libqt_string KNSCore__EngineBase_Tr(const char* s);
libqt_list /* of libqt_string */ KNSCore__EngineBase_AvailableConfigFiles();
bool KNSCore__EngineBase_Init(KNSCore__EngineBase* self, const libqt_string configfile);
libqt_string KNSCore__EngineBase_Name(const KNSCore__EngineBase* self);
libqt_string KNSCore__EngineBase_UseLabel(const KNSCore__EngineBase* self);
void KNSCore__EngineBase_UseLabelChanged(KNSCore__EngineBase* self);
bool KNSCore__EngineBase_UploadEnabled(const KNSCore__EngineBase* self);
void KNSCore__EngineBase_UploadEnabledChanged(KNSCore__EngineBase* self);
libqt_list /* of libqt_string */ KNSCore__EngineBase_Categories(const KNSCore__EngineBase* self);
libqt_list /* of KNSCore__Provider__CategoryMetadata* */ KNSCore__EngineBase_CategoriesMetadata(KNSCore__EngineBase* self);
libqt_list /* of KNSCore__CategoryMetadata* */ KNSCore__EngineBase_CategoriesMetadata2(KNSCore__EngineBase* self);
libqt_list /* of KNSCore__Provider__SearchPreset* */ KNSCore__EngineBase_SearchPresets(KNSCore__EngineBase* self);
libqt_list /* of KNSCore__SearchPreset* */ KNSCore__EngineBase_SearchPresets2(KNSCore__EngineBase* self);
libqt_list /* of Attica__Provider* */ KNSCore__EngineBase_AtticaProviders(const KNSCore__EngineBase* self);
void KNSCore__EngineBase_SetTagFilter(KNSCore__EngineBase* self, const libqt_list /* of libqt_string */ filter);
libqt_list /* of libqt_string */ KNSCore__EngineBase_TagFilter(const KNSCore__EngineBase* self);
void KNSCore__EngineBase_AddTagFilter(KNSCore__EngineBase* self, const libqt_string filter);
void KNSCore__EngineBase_SetDownloadTagFilter(KNSCore__EngineBase* self, const libqt_list /* of libqt_string */ filter);
libqt_list /* of libqt_string */ KNSCore__EngineBase_DownloadTagFilter(const KNSCore__EngineBase* self);
void KNSCore__EngineBase_AddDownloadTagFilter(KNSCore__EngineBase* self, const libqt_string filter);
bool KNSCore__EngineBase_UserCanVote(KNSCore__EngineBase* self, const KNSCore__Entry* entry);
void KNSCore__EngineBase_Vote(KNSCore__EngineBase* self, const KNSCore__Entry* entry, unsigned int rating);
bool KNSCore__EngineBase_UserCanBecomeFan(KNSCore__EngineBase* self, const KNSCore__Entry* entry);
void KNSCore__EngineBase_BecomeFan(KNSCore__EngineBase* self, const KNSCore__Entry* entry);
libqt_list /* of libqt_string */ KNSCore__EngineBase_ProviderIDs(const KNSCore__EngineBase* self);
bool KNSCore__EngineBase_HasAdoptionCommand(const KNSCore__EngineBase* self);
KNSCore__ResultsStream* KNSCore__EngineBase_Search(KNSCore__EngineBase* self, const KNSCore__Provider__SearchRequest* request);
KNSCore__ResultsStream* KNSCore__EngineBase_Search2(KNSCore__EngineBase* self, const KNSCore__SearchRequest* request);
int KNSCore__EngineBase_ContentWarningType(const KNSCore__EngineBase* self);
void KNSCore__EngineBase_ContentWarningTypeChanged(KNSCore__EngineBase* self);
void KNSCore__EngineBase_SignalMessage(KNSCore__EngineBase* self, const libqt_string message);
void KNSCore__EngineBase_SignalProvidersLoaded(KNSCore__EngineBase* self);
void KNSCore__EngineBase_SignalErrorCode(KNSCore__EngineBase* self, int errorCode, const libqt_string message, const QVariant* metadata);
void KNSCore__EngineBase_SignalCategoriesMetadataLoded(KNSCore__EngineBase* self, const libqt_list /* of KNSCore__Provider__CategoryMetadata* */ categories);
void KNSCore__EngineBase_SignalCategoriesMetadataLoaded(KNSCore__EngineBase* self, const libqt_list /* of KNSCore__CategoryMetadata* */ categories);
void KNSCore__EngineBase_SignalSearchPresetsLoaded(KNSCore__EngineBase* self, const libqt_list /* of KNSCore__Provider__SearchPreset* */ presets);
void KNSCore__EngineBase_SignalSearchPresetsLoaded2(KNSCore__EngineBase* self, const libqt_list /* of KNSCore__SearchPreset* */ presets);
void KNSCore__EngineBase_ProvidersChanged(KNSCore__EngineBase* self);
void KNSCore__EngineBase_LoadingProvider(KNSCore__EngineBase* self);
void KNSCore__EngineBase_ProviderAdded(KNSCore__EngineBase* self, KNSCore__ProviderCore* provider);
void KNSCore__EngineBase_UpdateStatus(KNSCore__EngineBase* self);
libqt_string KNSCore__EngineBase_Tr2(const char* s, const char* c);
libqt_string KNSCore__EngineBase_Tr3(const char* s, const char* c, int n);
void KNSCore__EngineBase_OnMetacall(KNSCore__EngineBase* self, intptr_t slot);
int KNSCore__EngineBase_QBaseMetacall(KNSCore__EngineBase* self, int param1, int param2, void** param3);
void KNSCore__EngineBase_OnInit(KNSCore__EngineBase* self, intptr_t slot);
bool KNSCore__EngineBase_QBaseInit(KNSCore__EngineBase* self, const libqt_string configfile);
void KNSCore__EngineBase_OnUpdateStatus(KNSCore__EngineBase* self, intptr_t slot);
void KNSCore__EngineBase_QBaseUpdateStatus(KNSCore__EngineBase* self);
bool KNSCore__EngineBase_Event(KNSCore__EngineBase* self, QEvent* event);
void KNSCore__EngineBase_OnEvent(KNSCore__EngineBase* self, intptr_t slot);
bool KNSCore__EngineBase_QBaseEvent(KNSCore__EngineBase* self, QEvent* event);
bool KNSCore__EngineBase_EventFilter(KNSCore__EngineBase* self, QObject* watched, QEvent* event);
void KNSCore__EngineBase_OnEventFilter(KNSCore__EngineBase* self, intptr_t slot);
bool KNSCore__EngineBase_QBaseEventFilter(KNSCore__EngineBase* self, QObject* watched, QEvent* event);
void KNSCore__EngineBase_TimerEvent(KNSCore__EngineBase* self, QTimerEvent* event);
void KNSCore__EngineBase_OnTimerEvent(KNSCore__EngineBase* self, intptr_t slot);
void KNSCore__EngineBase_QBaseTimerEvent(KNSCore__EngineBase* self, QTimerEvent* event);
void KNSCore__EngineBase_ChildEvent(KNSCore__EngineBase* self, QChildEvent* event);
void KNSCore__EngineBase_OnChildEvent(KNSCore__EngineBase* self, intptr_t slot);
void KNSCore__EngineBase_QBaseChildEvent(KNSCore__EngineBase* self, QChildEvent* event);
void KNSCore__EngineBase_CustomEvent(KNSCore__EngineBase* self, QEvent* event);
void KNSCore__EngineBase_OnCustomEvent(KNSCore__EngineBase* self, intptr_t slot);
void KNSCore__EngineBase_QBaseCustomEvent(KNSCore__EngineBase* self, QEvent* event);
void KNSCore__EngineBase_ConnectNotify(KNSCore__EngineBase* self, const QMetaMethod* signal);
void KNSCore__EngineBase_OnConnectNotify(KNSCore__EngineBase* self, intptr_t slot);
void KNSCore__EngineBase_QBaseConnectNotify(KNSCore__EngineBase* self, const QMetaMethod* signal);
void KNSCore__EngineBase_DisconnectNotify(KNSCore__EngineBase* self, const QMetaMethod* signal);
void KNSCore__EngineBase_OnDisconnectNotify(KNSCore__EngineBase* self, intptr_t slot);
void KNSCore__EngineBase_QBaseDisconnectNotify(KNSCore__EngineBase* self, const QMetaMethod* signal);
QObject* KNSCore__EngineBase_Sender(const KNSCore__EngineBase* self);
void KNSCore__EngineBase_OnSender(const KNSCore__EngineBase* self, intptr_t slot);
QObject* KNSCore__EngineBase_QBaseSender(const KNSCore__EngineBase* self);
int KNSCore__EngineBase_SenderSignalIndex(const KNSCore__EngineBase* self);
void KNSCore__EngineBase_OnSenderSignalIndex(const KNSCore__EngineBase* self, intptr_t slot);
int KNSCore__EngineBase_QBaseSenderSignalIndex(const KNSCore__EngineBase* self);
int KNSCore__EngineBase_Receivers(const KNSCore__EngineBase* self, const char* signal);
void KNSCore__EngineBase_OnReceivers(const KNSCore__EngineBase* self, intptr_t slot);
int KNSCore__EngineBase_QBaseReceivers(const KNSCore__EngineBase* self, const char* signal);
bool KNSCore__EngineBase_IsSignalConnected(const KNSCore__EngineBase* self, const QMetaMethod* signal);
void KNSCore__EngineBase_OnIsSignalConnected(const KNSCore__EngineBase* self, intptr_t slot);
bool KNSCore__EngineBase_QBaseIsSignalConnected(const KNSCore__EngineBase* self, const QMetaMethod* signal);
void KNSCore__EngineBase_Delete(KNSCore__EngineBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
