#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACESEARCHREQUEST_H
#define SRC_LOCATIONC_LIBQPLACESEARCHREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGeoShape QGeoShape;
typedef struct QPlaceCategory QPlaceCategory;
typedef struct QPlaceSearchRequest QPlaceSearchRequest;
typedef struct QVariant QVariant;
#endif

QPlaceSearchRequest* QPlaceSearchRequest_new();
QPlaceSearchRequest* QPlaceSearchRequest_new2(const QPlaceSearchRequest* other);
void QPlaceSearchRequest_OperatorAssign(QPlaceSearchRequest* self, const QPlaceSearchRequest* other);
void QPlaceSearchRequest_Swap(QPlaceSearchRequest* self, QPlaceSearchRequest* other);
libqt_string QPlaceSearchRequest_SearchTerm(const QPlaceSearchRequest* self);
void QPlaceSearchRequest_SetSearchTerm(QPlaceSearchRequest* self, const libqt_string term);
libqt_list /* of QPlaceCategory* */ QPlaceSearchRequest_Categories(const QPlaceSearchRequest* self);
void QPlaceSearchRequest_SetCategory(QPlaceSearchRequest* self, const QPlaceCategory* category);
void QPlaceSearchRequest_SetCategories(QPlaceSearchRequest* self, const libqt_list /* of QPlaceCategory* */ categories);
QGeoShape* QPlaceSearchRequest_SearchArea(const QPlaceSearchRequest* self);
void QPlaceSearchRequest_SetSearchArea(QPlaceSearchRequest* self, const QGeoShape* area);
libqt_string QPlaceSearchRequest_RecommendationId(const QPlaceSearchRequest* self);
void QPlaceSearchRequest_SetRecommendationId(QPlaceSearchRequest* self, const libqt_string recommendationId);
QVariant* QPlaceSearchRequest_SearchContext(const QPlaceSearchRequest* self);
void QPlaceSearchRequest_SetSearchContext(QPlaceSearchRequest* self, const QVariant* context);
int QPlaceSearchRequest_VisibilityScope(const QPlaceSearchRequest* self);
void QPlaceSearchRequest_SetVisibilityScope(QPlaceSearchRequest* self, int visibilityScopes);
int QPlaceSearchRequest_RelevanceHint(const QPlaceSearchRequest* self);
void QPlaceSearchRequest_SetRelevanceHint(QPlaceSearchRequest* self, int hint);
int QPlaceSearchRequest_Limit(const QPlaceSearchRequest* self);
void QPlaceSearchRequest_SetLimit(QPlaceSearchRequest* self, int limit);
void QPlaceSearchRequest_Clear(QPlaceSearchRequest* self);
void QPlaceSearchRequest_Delete(QPlaceSearchRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
