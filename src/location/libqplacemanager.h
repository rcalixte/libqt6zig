#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEMANAGER_H
#define SRC_LOCATIONC_LIBQPLACEMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPlace QPlace;
typedef struct QPlaceCategory QPlaceCategory;
typedef struct QPlaceContentReply QPlaceContentReply;
typedef struct QPlaceContentRequest QPlaceContentRequest;
typedef struct QPlaceDetailsReply QPlaceDetailsReply;
typedef struct QPlaceIdReply QPlaceIdReply;
typedef struct QPlaceManager QPlaceManager;
typedef struct QPlaceMatchReply QPlaceMatchReply;
typedef struct QPlaceMatchRequest QPlaceMatchRequest;
typedef struct QPlaceReply QPlaceReply;
typedef struct QPlaceSearchReply QPlaceSearchReply;
typedef struct QPlaceSearchRequest QPlaceSearchRequest;
typedef struct QPlaceSearchSuggestionReply QPlaceSearchSuggestionReply;
#endif

QMetaObject* QPlaceManager_MetaObject(const QPlaceManager* self);
void* QPlaceManager_Metacast(QPlaceManager* self, const char* param1);
int QPlaceManager_Metacall(QPlaceManager* self, int param1, int param2, void** param3);
libqt_string QPlaceManager_ManagerName(const QPlaceManager* self);
int QPlaceManager_ManagerVersion(const QPlaceManager* self);
QPlaceDetailsReply* QPlaceManager_GetPlaceDetails(const QPlaceManager* self, const libqt_string placeId);
QPlaceContentReply* QPlaceManager_GetPlaceContent(const QPlaceManager* self, const QPlaceContentRequest* request);
QPlaceSearchReply* QPlaceManager_Search(const QPlaceManager* self, const QPlaceSearchRequest* query);
QPlaceSearchSuggestionReply* QPlaceManager_SearchSuggestions(const QPlaceManager* self, const QPlaceSearchRequest* request);
QPlaceIdReply* QPlaceManager_SavePlace(QPlaceManager* self, const QPlace* place);
QPlaceIdReply* QPlaceManager_RemovePlace(QPlaceManager* self, const libqt_string placeId);
QPlaceIdReply* QPlaceManager_SaveCategory(QPlaceManager* self, const QPlaceCategory* category);
QPlaceIdReply* QPlaceManager_RemoveCategory(QPlaceManager* self, const libqt_string categoryId);
QPlaceReply* QPlaceManager_InitializeCategories(QPlaceManager* self);
libqt_string QPlaceManager_ParentCategoryId(const QPlaceManager* self, const libqt_string categoryId);
libqt_list /* of libqt_string */ QPlaceManager_ChildCategoryIds(const QPlaceManager* self);
QPlaceCategory* QPlaceManager_Category(const QPlaceManager* self, const libqt_string categoryId);
libqt_list /* of QPlaceCategory* */ QPlaceManager_ChildCategories(const QPlaceManager* self);
libqt_list /* of QLocale* */ QPlaceManager_Locales(const QPlaceManager* self);
void QPlaceManager_SetLocale(QPlaceManager* self, const QLocale* locale);
void QPlaceManager_SetLocales(QPlaceManager* self, const libqt_list /* of QLocale* */ locale);
QPlace* QPlaceManager_CompatiblePlace(const QPlaceManager* self, const QPlace* place);
QPlaceMatchReply* QPlaceManager_MatchingPlaces(const QPlaceManager* self, const QPlaceMatchRequest* request);
void QPlaceManager_Finished(QPlaceManager* self, QPlaceReply* reply);
void QPlaceManager_Connect_Finished(QPlaceManager* self, intptr_t slot);
void QPlaceManager_ErrorOccurred(QPlaceManager* self, QPlaceReply* param1, int errorVal);
void QPlaceManager_Connect_ErrorOccurred(QPlaceManager* self, intptr_t slot);
void QPlaceManager_PlaceAdded(QPlaceManager* self, const libqt_string placeId);
void QPlaceManager_Connect_PlaceAdded(QPlaceManager* self, intptr_t slot);
void QPlaceManager_PlaceUpdated(QPlaceManager* self, const libqt_string placeId);
void QPlaceManager_Connect_PlaceUpdated(QPlaceManager* self, intptr_t slot);
void QPlaceManager_PlaceRemoved(QPlaceManager* self, const libqt_string placeId);
void QPlaceManager_Connect_PlaceRemoved(QPlaceManager* self, intptr_t slot);
void QPlaceManager_CategoryAdded(QPlaceManager* self, const QPlaceCategory* category, const libqt_string parentId);
void QPlaceManager_Connect_CategoryAdded(QPlaceManager* self, intptr_t slot);
void QPlaceManager_CategoryUpdated(QPlaceManager* self, const QPlaceCategory* category, const libqt_string parentId);
void QPlaceManager_Connect_CategoryUpdated(QPlaceManager* self, intptr_t slot);
void QPlaceManager_CategoryRemoved(QPlaceManager* self, const libqt_string categoryId, const libqt_string parentId);
void QPlaceManager_Connect_CategoryRemoved(QPlaceManager* self, intptr_t slot);
void QPlaceManager_DataChanged(QPlaceManager* self);
void QPlaceManager_Connect_DataChanged(QPlaceManager* self, intptr_t slot);
QPlaceIdReply* QPlaceManager_SaveCategory2(QPlaceManager* self, const QPlaceCategory* category, const libqt_string parentId);
libqt_list /* of libqt_string */ QPlaceManager_ChildCategoryIds1(const QPlaceManager* self, const libqt_string parentId);
libqt_list /* of QPlaceCategory* */ QPlaceManager_ChildCategories1(const QPlaceManager* self, const libqt_string parentId);
void QPlaceManager_ErrorOccurred3(QPlaceManager* self, QPlaceReply* param1, int errorVal, const libqt_string errorString);
void QPlaceManager_Connect_ErrorOccurred3(QPlaceManager* self, intptr_t slot);
void QPlaceManager_Delete(QPlaceManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
