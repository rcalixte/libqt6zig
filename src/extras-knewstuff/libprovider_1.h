#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBPROVIDER_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KNSCore::Entry KNSCore__Entry;
typedef KNSCore::Provider KNSCore__Provider;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__CategoryMetadata)
typedef KNSCore::Provider::CategoryMetadata KNSCore__Provider__CategoryMetadata;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__SearchPreset)
typedef KNSCore::Provider::SearchPreset KNSCore__Provider__SearchPreset;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__SearchRequest)
typedef KNSCore::Provider::SearchRequest KNSCore__Provider__SearchRequest;
#endif
#else
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSCore__Provider KNSCore__Provider;
typedef struct KNSCore__Provider__CategoryMetadata KNSCore__Provider__CategoryMetadata;
typedef struct KNSCore__Provider__SearchPreset KNSCore__Provider__SearchPreset;
typedef struct KNSCore__Provider__SearchRequest KNSCore__Provider__SearchRequest;
typedef struct QChildEvent QChildEvent;
typedef struct QDomElement QDomElement;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

KNSCore__Provider* KNSCore__Provider_new();
QMetaObject* KNSCore__Provider_MetaObject(const KNSCore__Provider* self);
void* KNSCore__Provider_Metacast(KNSCore__Provider* self, const char* param1);
int KNSCore__Provider_Metacall(KNSCore__Provider* self, int param1, int param2, void** param3);
libqt_string KNSCore__Provider_Tr(const char* s);
libqt_string KNSCore__Provider_Id(const KNSCore__Provider* self);
bool KNSCore__Provider_SetProviderXML(KNSCore__Provider* self, const QDomElement* xmldata);
bool KNSCore__Provider_IsInitialized(const KNSCore__Provider* self);
void KNSCore__Provider_SetCachedEntries(KNSCore__Provider* self, const libqt_list /* of KNSCore__Entry* */ cachedEntries);
libqt_string KNSCore__Provider_Name(const KNSCore__Provider* self);
QUrl* KNSCore__Provider_Icon(const KNSCore__Provider* self);
void KNSCore__Provider_LoadEntries(KNSCore__Provider* self, const KNSCore__Provider__SearchRequest* request);
void KNSCore__Provider_LoadEntryDetails(KNSCore__Provider* self, const KNSCore__Entry* param1);
void KNSCore__Provider_LoadPayloadLink(KNSCore__Provider* self, const KNSCore__Entry* entry, int linkId);
void KNSCore__Provider_LoadComments(KNSCore__Provider* self, const KNSCore__Entry* param1, int param2, int param3);
void KNSCore__Provider_LoadPerson(KNSCore__Provider* self, const libqt_string param1);
void KNSCore__Provider_LoadBasics(KNSCore__Provider* self);
libqt_string KNSCore__Provider_Version(const KNSCore__Provider* self);
void KNSCore__Provider_SetVersion(KNSCore__Provider* self, const libqt_string version);
QUrl* KNSCore__Provider_Website(const KNSCore__Provider* self);
void KNSCore__Provider_SetWebsite(KNSCore__Provider* self, const QUrl* website);
QUrl* KNSCore__Provider_Host(const KNSCore__Provider* self);
void KNSCore__Provider_SetHost(KNSCore__Provider* self, const QUrl* host);
libqt_string KNSCore__Provider_ContactEmail(const KNSCore__Provider* self);
void KNSCore__Provider_SetContactEmail(KNSCore__Provider* self, const libqt_string contactEmail);
bool KNSCore__Provider_SupportsSsl(const KNSCore__Provider* self);
void KNSCore__Provider_SetSupportsSsl(KNSCore__Provider* self, bool supportsSsl);
bool KNSCore__Provider_UserCanVote(KNSCore__Provider* self);
void KNSCore__Provider_Vote(KNSCore__Provider* self, const KNSCore__Entry* param1, unsigned int param2);
bool KNSCore__Provider_UserCanBecomeFan(KNSCore__Provider* self);
void KNSCore__Provider_BecomeFan(KNSCore__Provider* self, const KNSCore__Entry* param1);
void KNSCore__Provider_SetTagFilter(KNSCore__Provider* self, const libqt_list /* of libqt_string */ tagFilter);
libqt_list /* of libqt_string */ KNSCore__Provider_TagFilter(const KNSCore__Provider* self);
void KNSCore__Provider_SetDownloadTagFilter(KNSCore__Provider* self, const libqt_list /* of libqt_string */ downloadTagFilter);
libqt_list /* of libqt_string */ KNSCore__Provider_DownloadTagFilter(const KNSCore__Provider* self);
void KNSCore__Provider_ProviderInitialized(KNSCore__Provider* self, KNSCore__Provider* param1);
void KNSCore__Provider_Connect_ProviderInitialized(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_LoadingFinished(KNSCore__Provider* self, const KNSCore__Provider__SearchRequest* param1, const libqt_list /* of KNSCore__Entry* */ param2);
void KNSCore__Provider_Connect_LoadingFinished(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_LoadingFailed(KNSCore__Provider* self, const KNSCore__Provider__SearchRequest* param1);
void KNSCore__Provider_Connect_LoadingFailed(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_EntryDetailsLoaded(KNSCore__Provider* self, const KNSCore__Entry* param1);
void KNSCore__Provider_Connect_EntryDetailsLoaded(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_PayloadLinkLoaded(KNSCore__Provider* self, const KNSCore__Entry* param1);
void KNSCore__Provider_Connect_PayloadLinkLoaded(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_BasicsLoaded(KNSCore__Provider* self);
void KNSCore__Provider_Connect_BasicsLoaded(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_SearchPresetsLoaded(KNSCore__Provider* self, const libqt_list /* of KNSCore__Provider__SearchPreset* */ presets);
void KNSCore__Provider_Connect_SearchPresetsLoaded(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_SignalInformation(KNSCore__Provider* self, const libqt_string param1);
void KNSCore__Provider_Connect_SignalInformation(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_SignalError(KNSCore__Provider* self, const libqt_string param1);
void KNSCore__Provider_Connect_SignalError(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_SignalErrorCode(KNSCore__Provider* self, int errorCode, const libqt_string message, const QVariant* metadata);
void KNSCore__Provider_Connect_SignalErrorCode(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_CategoriesMetadataLoded(KNSCore__Provider* self, const libqt_list /* of KNSCore__Provider__CategoryMetadata* */ categories);
void KNSCore__Provider_Connect_CategoriesMetadataLoded(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_TagFilterChanged(KNSCore__Provider* self);
void KNSCore__Provider_Connect_TagFilterChanged(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_DownloadTagFilterChanged(KNSCore__Provider* self);
void KNSCore__Provider_Connect_DownloadTagFilterChanged(KNSCore__Provider* self, intptr_t slot);
libqt_string KNSCore__Provider_Tr2(const char* s, const char* c);
libqt_string KNSCore__Provider_Tr3(const char* s, const char* c, int n);
void KNSCore__Provider_OnMetacall(KNSCore__Provider* self, intptr_t slot);
int KNSCore__Provider_QBaseMetacall(KNSCore__Provider* self, int param1, int param2, void** param3);
void KNSCore__Provider_OnId(const KNSCore__Provider* self, intptr_t slot);
libqt_string KNSCore__Provider_QBaseId(const KNSCore__Provider* self);
void KNSCore__Provider_OnSetProviderXML(KNSCore__Provider* self, intptr_t slot);
bool KNSCore__Provider_QBaseSetProviderXML(KNSCore__Provider* self, const QDomElement* xmldata);
void KNSCore__Provider_OnIsInitialized(const KNSCore__Provider* self, intptr_t slot);
bool KNSCore__Provider_QBaseIsInitialized(const KNSCore__Provider* self);
void KNSCore__Provider_OnSetCachedEntries(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseSetCachedEntries(KNSCore__Provider* self, const libqt_list /* of KNSCore__Entry* */ cachedEntries);
void KNSCore__Provider_OnName(const KNSCore__Provider* self, intptr_t slot);
libqt_string KNSCore__Provider_QBaseName(const KNSCore__Provider* self);
void KNSCore__Provider_OnIcon(const KNSCore__Provider* self, intptr_t slot);
QUrl* KNSCore__Provider_QBaseIcon(const KNSCore__Provider* self);
void KNSCore__Provider_OnLoadEntries(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseLoadEntries(KNSCore__Provider* self, const KNSCore__Provider__SearchRequest* request);
void KNSCore__Provider_OnLoadEntryDetails(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseLoadEntryDetails(KNSCore__Provider* self, const KNSCore__Entry* param1);
void KNSCore__Provider_OnLoadPayloadLink(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseLoadPayloadLink(KNSCore__Provider* self, const KNSCore__Entry* entry, int linkId);
void KNSCore__Provider_OnLoadComments(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseLoadComments(KNSCore__Provider* self, const KNSCore__Entry* param1, int param2, int param3);
void KNSCore__Provider_OnLoadPerson(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseLoadPerson(KNSCore__Provider* self, const libqt_string param1);
void KNSCore__Provider_OnLoadBasics(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseLoadBasics(KNSCore__Provider* self);
void KNSCore__Provider_OnUserCanVote(KNSCore__Provider* self, intptr_t slot);
bool KNSCore__Provider_QBaseUserCanVote(KNSCore__Provider* self);
void KNSCore__Provider_OnVote(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseVote(KNSCore__Provider* self, const KNSCore__Entry* param1, unsigned int param2);
void KNSCore__Provider_OnUserCanBecomeFan(KNSCore__Provider* self, intptr_t slot);
bool KNSCore__Provider_QBaseUserCanBecomeFan(KNSCore__Provider* self);
void KNSCore__Provider_OnBecomeFan(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseBecomeFan(KNSCore__Provider* self, const KNSCore__Entry* param1);
bool KNSCore__Provider_Event(KNSCore__Provider* self, QEvent* event);
void KNSCore__Provider_OnEvent(KNSCore__Provider* self, intptr_t slot);
bool KNSCore__Provider_QBaseEvent(KNSCore__Provider* self, QEvent* event);
bool KNSCore__Provider_EventFilter(KNSCore__Provider* self, QObject* watched, QEvent* event);
void KNSCore__Provider_OnEventFilter(KNSCore__Provider* self, intptr_t slot);
bool KNSCore__Provider_QBaseEventFilter(KNSCore__Provider* self, QObject* watched, QEvent* event);
void KNSCore__Provider_TimerEvent(KNSCore__Provider* self, QTimerEvent* event);
void KNSCore__Provider_OnTimerEvent(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseTimerEvent(KNSCore__Provider* self, QTimerEvent* event);
void KNSCore__Provider_ChildEvent(KNSCore__Provider* self, QChildEvent* event);
void KNSCore__Provider_OnChildEvent(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseChildEvent(KNSCore__Provider* self, QChildEvent* event);
void KNSCore__Provider_CustomEvent(KNSCore__Provider* self, QEvent* event);
void KNSCore__Provider_OnCustomEvent(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseCustomEvent(KNSCore__Provider* self, QEvent* event);
void KNSCore__Provider_ConnectNotify(KNSCore__Provider* self, const QMetaMethod* signal);
void KNSCore__Provider_OnConnectNotify(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseConnectNotify(KNSCore__Provider* self, const QMetaMethod* signal);
void KNSCore__Provider_DisconnectNotify(KNSCore__Provider* self, const QMetaMethod* signal);
void KNSCore__Provider_OnDisconnectNotify(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseDisconnectNotify(KNSCore__Provider* self, const QMetaMethod* signal);
void KNSCore__Provider_SetName(KNSCore__Provider* self, const libqt_string name);
void KNSCore__Provider_OnSetName(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseSetName(KNSCore__Provider* self, const libqt_string name);
void KNSCore__Provider_SetIcon(KNSCore__Provider* self, const QUrl* icon);
void KNSCore__Provider_OnSetIcon(KNSCore__Provider* self, intptr_t slot);
void KNSCore__Provider_QBaseSetIcon(KNSCore__Provider* self, const QUrl* icon);
QObject* KNSCore__Provider_Sender(const KNSCore__Provider* self);
void KNSCore__Provider_OnSender(const KNSCore__Provider* self, intptr_t slot);
QObject* KNSCore__Provider_QBaseSender(const KNSCore__Provider* self);
int KNSCore__Provider_SenderSignalIndex(const KNSCore__Provider* self);
void KNSCore__Provider_OnSenderSignalIndex(const KNSCore__Provider* self, intptr_t slot);
int KNSCore__Provider_QBaseSenderSignalIndex(const KNSCore__Provider* self);
int KNSCore__Provider_Receivers(const KNSCore__Provider* self, const char* signal);
void KNSCore__Provider_OnReceivers(const KNSCore__Provider* self, intptr_t slot);
int KNSCore__Provider_QBaseReceivers(const KNSCore__Provider* self, const char* signal);
bool KNSCore__Provider_IsSignalConnected(const KNSCore__Provider* self, const QMetaMethod* signal);
void KNSCore__Provider_OnIsSignalConnected(const KNSCore__Provider* self, intptr_t slot);
bool KNSCore__Provider_QBaseIsSignalConnected(const KNSCore__Provider* self, const QMetaMethod* signal);
void KNSCore__Provider_Delete(KNSCore__Provider* self);

KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new();
KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new2(const KNSCore__Provider__SearchRequest* param1);
KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new3(int sortMode_);
KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new4(int sortMode_, int filter_);
KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new5(int sortMode_, int filter_, const libqt_string searchTerm_);
KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new6(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_);
KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new7(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_, int page_);
KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new8(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_, int page_, int pageSize_);
int KNSCore__Provider__SearchRequest_SortMode(const KNSCore__Provider__SearchRequest* self);
void KNSCore__Provider__SearchRequest_SetSortMode(KNSCore__Provider__SearchRequest* self, int sortMode);
int KNSCore__Provider__SearchRequest_Filter(const KNSCore__Provider__SearchRequest* self);
void KNSCore__Provider__SearchRequest_SetFilter(KNSCore__Provider__SearchRequest* self, int filter);
libqt_string KNSCore__Provider__SearchRequest_SearchTerm(const KNSCore__Provider__SearchRequest* self);
void KNSCore__Provider__SearchRequest_SetSearchTerm(KNSCore__Provider__SearchRequest* self, libqt_string searchTerm);
libqt_list /* of libqt_string */ KNSCore__Provider__SearchRequest_Categories(const KNSCore__Provider__SearchRequest* self);
void KNSCore__Provider__SearchRequest_SetCategories(KNSCore__Provider__SearchRequest* self, libqt_list /* of libqt_string */ categories);
int KNSCore__Provider__SearchRequest_Page(const KNSCore__Provider__SearchRequest* self);
void KNSCore__Provider__SearchRequest_SetPage(KNSCore__Provider__SearchRequest* self, int page);
int KNSCore__Provider__SearchRequest_PageSize(const KNSCore__Provider__SearchRequest* self);
void KNSCore__Provider__SearchRequest_SetPageSize(KNSCore__Provider__SearchRequest* self, int pageSize);
libqt_string KNSCore__Provider__SearchRequest_HashForRequest(const KNSCore__Provider__SearchRequest* self);
bool KNSCore__Provider__SearchRequest_OperatorEqual(const KNSCore__Provider__SearchRequest* self, const KNSCore__Provider__SearchRequest* other);
void KNSCore__Provider__SearchRequest_OperatorAssign(KNSCore__Provider__SearchRequest* self, const KNSCore__Provider__SearchRequest* param1);
void KNSCore__Provider__SearchRequest_Delete(KNSCore__Provider__SearchRequest* self);

KNSCore__Provider__CategoryMetadata* KNSCore__Provider__CategoryMetadata_new(const KNSCore__Provider__CategoryMetadata* param1);
libqt_string KNSCore__Provider__CategoryMetadata_Id(const KNSCore__Provider__CategoryMetadata* self);
void KNSCore__Provider__CategoryMetadata_SetId(KNSCore__Provider__CategoryMetadata* self, libqt_string id);
libqt_string KNSCore__Provider__CategoryMetadata_Name(const KNSCore__Provider__CategoryMetadata* self);
void KNSCore__Provider__CategoryMetadata_SetName(KNSCore__Provider__CategoryMetadata* self, libqt_string name);
libqt_string KNSCore__Provider__CategoryMetadata_DisplayName(const KNSCore__Provider__CategoryMetadata* self);
void KNSCore__Provider__CategoryMetadata_SetDisplayName(KNSCore__Provider__CategoryMetadata* self, libqt_string displayName);
void KNSCore__Provider__CategoryMetadata_OperatorAssign(KNSCore__Provider__CategoryMetadata* self, const KNSCore__Provider__CategoryMetadata* param1);
void KNSCore__Provider__CategoryMetadata_Delete(KNSCore__Provider__CategoryMetadata* self);

KNSCore__Provider__SearchPreset* KNSCore__Provider__SearchPreset_new(const KNSCore__Provider__SearchPreset* param1);
KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchPreset_Request(const KNSCore__Provider__SearchPreset* self);
void KNSCore__Provider__SearchPreset_SetRequest(KNSCore__Provider__SearchPreset* self, KNSCore__Provider__SearchRequest* request);
libqt_string KNSCore__Provider__SearchPreset_DisplayName(const KNSCore__Provider__SearchPreset* self);
void KNSCore__Provider__SearchPreset_SetDisplayName(KNSCore__Provider__SearchPreset* self, libqt_string displayName);
libqt_string KNSCore__Provider__SearchPreset_IconName(const KNSCore__Provider__SearchPreset* self);
void KNSCore__Provider__SearchPreset_SetIconName(KNSCore__Provider__SearchPreset* self, libqt_string iconName);
int KNSCore__Provider__SearchPreset_Type(const KNSCore__Provider__SearchPreset* self);
void KNSCore__Provider__SearchPreset_SetType(KNSCore__Provider__SearchPreset* self, int type);
libqt_string KNSCore__Provider__SearchPreset_ProviderId(const KNSCore__Provider__SearchPreset* self);
void KNSCore__Provider__SearchPreset_SetProviderId(KNSCore__Provider__SearchPreset* self, libqt_string providerId);
void KNSCore__Provider__SearchPreset_OperatorAssign(KNSCore__Provider__SearchPreset* self, const KNSCore__Provider__SearchPreset* param1);
void KNSCore__Provider__SearchPreset_Delete(KNSCore__Provider__SearchPreset* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
