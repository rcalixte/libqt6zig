#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEMANAGERENGINE_H
#define SRC_LOCATIONC_LIBQPLACEMANAGERENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPlace QPlace;
typedef struct QPlaceCategory QPlaceCategory;
typedef struct QPlaceContentReply QPlaceContentReply;
typedef struct QPlaceContentRequest QPlaceContentRequest;
typedef struct QPlaceDetailsReply QPlaceDetailsReply;
typedef struct QPlaceIcon QPlaceIcon;
typedef struct QPlaceIdReply QPlaceIdReply;
typedef struct QPlaceManager QPlaceManager;
typedef struct QPlaceManagerEngine QPlaceManagerEngine;
typedef struct QPlaceMatchReply QPlaceMatchReply;
typedef struct QPlaceMatchRequest QPlaceMatchRequest;
typedef struct QPlaceReply QPlaceReply;
typedef struct QPlaceSearchReply QPlaceSearchReply;
typedef struct QPlaceSearchRequest QPlaceSearchRequest;
typedef struct QPlaceSearchSuggestionReply QPlaceSearchSuggestionReply;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QPlaceManagerEngine* QPlaceManagerEngine_new(const libqt_map /* of libqt_string to QVariant* */ parameters);
QPlaceManagerEngine* QPlaceManagerEngine_new2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent);
QMetaObject* QPlaceManagerEngine_MetaObject(const QPlaceManagerEngine* self);
void* QPlaceManagerEngine_Metacast(QPlaceManagerEngine* self, const char* param1);
int QPlaceManagerEngine_Metacall(QPlaceManagerEngine* self, int param1, int param2, void** param3);
libqt_string QPlaceManagerEngine_ManagerName(const QPlaceManagerEngine* self);
int QPlaceManagerEngine_ManagerVersion(const QPlaceManagerEngine* self);
QPlaceDetailsReply* QPlaceManagerEngine_GetPlaceDetails(QPlaceManagerEngine* self, const libqt_string placeId);
QPlaceContentReply* QPlaceManagerEngine_GetPlaceContent(QPlaceManagerEngine* self, const QPlaceContentRequest* request);
QPlaceSearchReply* QPlaceManagerEngine_Search(QPlaceManagerEngine* self, const QPlaceSearchRequest* request);
QPlaceSearchSuggestionReply* QPlaceManagerEngine_SearchSuggestions(QPlaceManagerEngine* self, const QPlaceSearchRequest* request);
QPlaceIdReply* QPlaceManagerEngine_SavePlace(QPlaceManagerEngine* self, const QPlace* place);
QPlaceIdReply* QPlaceManagerEngine_RemovePlace(QPlaceManagerEngine* self, const libqt_string placeId);
QPlaceIdReply* QPlaceManagerEngine_SaveCategory(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentId);
QPlaceIdReply* QPlaceManagerEngine_RemoveCategory(QPlaceManagerEngine* self, const libqt_string categoryId);
QPlaceReply* QPlaceManagerEngine_InitializeCategories(QPlaceManagerEngine* self);
libqt_string QPlaceManagerEngine_ParentCategoryId(const QPlaceManagerEngine* self, const libqt_string categoryId);
libqt_list /* of libqt_string */ QPlaceManagerEngine_ChildCategoryIds(const QPlaceManagerEngine* self, const libqt_string categoryId);
QPlaceCategory* QPlaceManagerEngine_Category(const QPlaceManagerEngine* self, const libqt_string categoryId);
libqt_list /* of QPlaceCategory* */ QPlaceManagerEngine_ChildCategories(const QPlaceManagerEngine* self, const libqt_string parentId);
libqt_list /* of QLocale* */ QPlaceManagerEngine_Locales(const QPlaceManagerEngine* self);
void QPlaceManagerEngine_SetLocales(QPlaceManagerEngine* self, const libqt_list /* of QLocale* */ locales);
QUrl* QPlaceManagerEngine_ConstructIconUrl(const QPlaceManagerEngine* self, const QPlaceIcon* icon, const QSize* size);
QPlace* QPlaceManagerEngine_CompatiblePlace(const QPlaceManagerEngine* self, const QPlace* original);
QPlaceMatchReply* QPlaceManagerEngine_MatchingPlaces(QPlaceManagerEngine* self, const QPlaceMatchRequest* request);
void QPlaceManagerEngine_Finished(QPlaceManagerEngine* self, QPlaceReply* reply);
void QPlaceManagerEngine_Connect_Finished(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_ErrorOccurred(QPlaceManagerEngine* self, QPlaceReply* param1, int errorVal);
void QPlaceManagerEngine_Connect_ErrorOccurred(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_PlaceAdded(QPlaceManagerEngine* self, const libqt_string placeId);
void QPlaceManagerEngine_Connect_PlaceAdded(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_PlaceUpdated(QPlaceManagerEngine* self, const libqt_string placeId);
void QPlaceManagerEngine_Connect_PlaceUpdated(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_PlaceRemoved(QPlaceManagerEngine* self, const libqt_string placeId);
void QPlaceManagerEngine_Connect_PlaceRemoved(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_CategoryAdded(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentCategoryId);
void QPlaceManagerEngine_Connect_CategoryAdded(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_CategoryUpdated(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentCategoryId);
void QPlaceManagerEngine_Connect_CategoryUpdated(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_CategoryRemoved(QPlaceManagerEngine* self, const libqt_string categoryId, const libqt_string parentCategoryId);
void QPlaceManagerEngine_Connect_CategoryRemoved(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_DataChanged(QPlaceManagerEngine* self);
void QPlaceManagerEngine_Connect_DataChanged(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_ErrorOccurred3(QPlaceManagerEngine* self, QPlaceReply* param1, int errorVal, const libqt_string errorString);
void QPlaceManagerEngine_Connect_ErrorOccurred3(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_OnMetaObject(const QPlaceManagerEngine* self, intptr_t slot);
QMetaObject* QPlaceManagerEngine_QBaseMetaObject(const QPlaceManagerEngine* self);
void QPlaceManagerEngine_OnMetacast(QPlaceManagerEngine* self, intptr_t slot);
void* QPlaceManagerEngine_QBaseMetacast(QPlaceManagerEngine* self, const char* param1);
void QPlaceManagerEngine_OnMetacall(QPlaceManagerEngine* self, intptr_t slot);
int QPlaceManagerEngine_QBaseMetacall(QPlaceManagerEngine* self, int param1, int param2, void** param3);
void QPlaceManagerEngine_OnGetPlaceDetails(QPlaceManagerEngine* self, intptr_t slot);
QPlaceDetailsReply* QPlaceManagerEngine_QBaseGetPlaceDetails(QPlaceManagerEngine* self, const libqt_string placeId);
void QPlaceManagerEngine_OnGetPlaceContent(QPlaceManagerEngine* self, intptr_t slot);
QPlaceContentReply* QPlaceManagerEngine_QBaseGetPlaceContent(QPlaceManagerEngine* self, const QPlaceContentRequest* request);
void QPlaceManagerEngine_OnSearch(QPlaceManagerEngine* self, intptr_t slot);
QPlaceSearchReply* QPlaceManagerEngine_QBaseSearch(QPlaceManagerEngine* self, const QPlaceSearchRequest* request);
void QPlaceManagerEngine_OnSearchSuggestions(QPlaceManagerEngine* self, intptr_t slot);
QPlaceSearchSuggestionReply* QPlaceManagerEngine_QBaseSearchSuggestions(QPlaceManagerEngine* self, const QPlaceSearchRequest* request);
void QPlaceManagerEngine_OnSavePlace(QPlaceManagerEngine* self, intptr_t slot);
QPlaceIdReply* QPlaceManagerEngine_QBaseSavePlace(QPlaceManagerEngine* self, const QPlace* place);
void QPlaceManagerEngine_OnRemovePlace(QPlaceManagerEngine* self, intptr_t slot);
QPlaceIdReply* QPlaceManagerEngine_QBaseRemovePlace(QPlaceManagerEngine* self, const libqt_string placeId);
void QPlaceManagerEngine_OnSaveCategory(QPlaceManagerEngine* self, intptr_t slot);
QPlaceIdReply* QPlaceManagerEngine_QBaseSaveCategory(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentId);
void QPlaceManagerEngine_OnRemoveCategory(QPlaceManagerEngine* self, intptr_t slot);
QPlaceIdReply* QPlaceManagerEngine_QBaseRemoveCategory(QPlaceManagerEngine* self, const libqt_string categoryId);
void QPlaceManagerEngine_OnInitializeCategories(QPlaceManagerEngine* self, intptr_t slot);
QPlaceReply* QPlaceManagerEngine_QBaseInitializeCategories(QPlaceManagerEngine* self);
void QPlaceManagerEngine_OnParentCategoryId(const QPlaceManagerEngine* self, intptr_t slot);
libqt_string QPlaceManagerEngine_QBaseParentCategoryId(const QPlaceManagerEngine* self, const libqt_string categoryId);
void QPlaceManagerEngine_OnChildCategoryIds(const QPlaceManagerEngine* self, intptr_t slot);
libqt_list /* of libqt_string */ QPlaceManagerEngine_QBaseChildCategoryIds(const QPlaceManagerEngine* self, const libqt_string categoryId);
void QPlaceManagerEngine_OnCategory(const QPlaceManagerEngine* self, intptr_t slot);
QPlaceCategory* QPlaceManagerEngine_QBaseCategory(const QPlaceManagerEngine* self, const libqt_string categoryId);
void QPlaceManagerEngine_OnChildCategories(const QPlaceManagerEngine* self, intptr_t slot);
libqt_list /* of QPlaceCategory* */ QPlaceManagerEngine_QBaseChildCategories(const QPlaceManagerEngine* self, const libqt_string parentId);
void QPlaceManagerEngine_OnLocales(const QPlaceManagerEngine* self, intptr_t slot);
libqt_list /* of QLocale* */ QPlaceManagerEngine_QBaseLocales(const QPlaceManagerEngine* self);
void QPlaceManagerEngine_OnSetLocales(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_QBaseSetLocales(QPlaceManagerEngine* self, const libqt_list /* of QLocale* */ locales);
void QPlaceManagerEngine_OnConstructIconUrl(const QPlaceManagerEngine* self, intptr_t slot);
QUrl* QPlaceManagerEngine_QBaseConstructIconUrl(const QPlaceManagerEngine* self, const QPlaceIcon* icon, const QSize* size);
void QPlaceManagerEngine_OnCompatiblePlace(const QPlaceManagerEngine* self, intptr_t slot);
QPlace* QPlaceManagerEngine_QBaseCompatiblePlace(const QPlaceManagerEngine* self, const QPlace* original);
void QPlaceManagerEngine_OnMatchingPlaces(QPlaceManagerEngine* self, intptr_t slot);
QPlaceMatchReply* QPlaceManagerEngine_QBaseMatchingPlaces(QPlaceManagerEngine* self, const QPlaceMatchRequest* request);
bool QPlaceManagerEngine_Event(QPlaceManagerEngine* self, QEvent* event);
void QPlaceManagerEngine_OnEvent(QPlaceManagerEngine* self, intptr_t slot);
bool QPlaceManagerEngine_QBaseEvent(QPlaceManagerEngine* self, QEvent* event);
bool QPlaceManagerEngine_EventFilter(QPlaceManagerEngine* self, QObject* watched, QEvent* event);
void QPlaceManagerEngine_OnEventFilter(QPlaceManagerEngine* self, intptr_t slot);
bool QPlaceManagerEngine_QBaseEventFilter(QPlaceManagerEngine* self, QObject* watched, QEvent* event);
void QPlaceManagerEngine_TimerEvent(QPlaceManagerEngine* self, QTimerEvent* event);
void QPlaceManagerEngine_OnTimerEvent(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_QBaseTimerEvent(QPlaceManagerEngine* self, QTimerEvent* event);
void QPlaceManagerEngine_ChildEvent(QPlaceManagerEngine* self, QChildEvent* event);
void QPlaceManagerEngine_OnChildEvent(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_QBaseChildEvent(QPlaceManagerEngine* self, QChildEvent* event);
void QPlaceManagerEngine_CustomEvent(QPlaceManagerEngine* self, QEvent* event);
void QPlaceManagerEngine_OnCustomEvent(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_QBaseCustomEvent(QPlaceManagerEngine* self, QEvent* event);
void QPlaceManagerEngine_ConnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal);
void QPlaceManagerEngine_OnConnectNotify(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_QBaseConnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal);
void QPlaceManagerEngine_DisconnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal);
void QPlaceManagerEngine_OnDisconnectNotify(QPlaceManagerEngine* self, intptr_t slot);
void QPlaceManagerEngine_QBaseDisconnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal);
QPlaceManager* QPlaceManagerEngine_Manager(const QPlaceManagerEngine* self);
void QPlaceManagerEngine_OnManager(const QPlaceManagerEngine* self, intptr_t slot);
QPlaceManager* QPlaceManagerEngine_QBaseManager(const QPlaceManagerEngine* self);
QObject* QPlaceManagerEngine_Sender(const QPlaceManagerEngine* self);
void QPlaceManagerEngine_OnSender(const QPlaceManagerEngine* self, intptr_t slot);
QObject* QPlaceManagerEngine_QBaseSender(const QPlaceManagerEngine* self);
int QPlaceManagerEngine_SenderSignalIndex(const QPlaceManagerEngine* self);
void QPlaceManagerEngine_OnSenderSignalIndex(const QPlaceManagerEngine* self, intptr_t slot);
int QPlaceManagerEngine_QBaseSenderSignalIndex(const QPlaceManagerEngine* self);
int QPlaceManagerEngine_Receivers(const QPlaceManagerEngine* self, const char* signal);
void QPlaceManagerEngine_OnReceivers(const QPlaceManagerEngine* self, intptr_t slot);
int QPlaceManagerEngine_QBaseReceivers(const QPlaceManagerEngine* self, const char* signal);
bool QPlaceManagerEngine_IsSignalConnected(const QPlaceManagerEngine* self, const QMetaMethod* signal);
void QPlaceManagerEngine_OnIsSignalConnected(const QPlaceManagerEngine* self, intptr_t slot);
bool QPlaceManagerEngine_QBaseIsSignalConnected(const QPlaceManagerEngine* self, const QMetaMethod* signal);
void QPlaceManagerEngine_Delete(QPlaceManagerEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
