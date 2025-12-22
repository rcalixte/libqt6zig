#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEPROPOSEDSEARCHRESULT_H
#define SRC_LOCATIONC_LIBQPLACEPROPOSEDSEARCHRESULT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceProposedSearchResult QPlaceProposedSearchResult;
typedef struct QPlaceSearchRequest QPlaceSearchRequest;
typedef struct QPlaceSearchResult QPlaceSearchResult;
#endif

QPlaceProposedSearchResult* QPlaceProposedSearchResult_new();
QPlaceProposedSearchResult* QPlaceProposedSearchResult_new2(const QPlaceSearchResult* other);
QPlaceProposedSearchResult* QPlaceProposedSearchResult_new3(const QPlaceProposedSearchResult* param1);
QPlaceSearchRequest* QPlaceProposedSearchResult_SearchRequest(const QPlaceProposedSearchResult* self);
void QPlaceProposedSearchResult_SetSearchRequest(QPlaceProposedSearchResult* self, const QPlaceSearchRequest* request);
void QPlaceProposedSearchResult_Delete(QPlaceProposedSearchResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
