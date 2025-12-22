#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEMATCHREQUEST_H
#define SRC_LOCATIONC_LIBQPLACEMATCHREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlace QPlace;
typedef struct QPlaceMatchRequest QPlaceMatchRequest;
typedef struct QPlaceSearchResult QPlaceSearchResult;
typedef struct QVariant QVariant;
#endif

QPlaceMatchRequest* QPlaceMatchRequest_new();
QPlaceMatchRequest* QPlaceMatchRequest_new2(const QPlaceMatchRequest* other);
void QPlaceMatchRequest_OperatorAssign(QPlaceMatchRequest* self, const QPlaceMatchRequest* other);
void QPlaceMatchRequest_Swap(QPlaceMatchRequest* self, QPlaceMatchRequest* other);
libqt_list /* of QPlace* */ QPlaceMatchRequest_Places(const QPlaceMatchRequest* self);
void QPlaceMatchRequest_SetPlaces(QPlaceMatchRequest* self, const libqt_list /* of QPlace* */ places);
void QPlaceMatchRequest_SetResults(QPlaceMatchRequest* self, const libqt_list /* of QPlaceSearchResult* */ results);
libqt_map /* of libqt_string to QVariant* */ QPlaceMatchRequest_Parameters(const QPlaceMatchRequest* self);
void QPlaceMatchRequest_SetParameters(QPlaceMatchRequest* self, const libqt_map /* of libqt_string to QVariant* */ parameters);
void QPlaceMatchRequest_Clear(QPlaceMatchRequest* self);
void QPlaceMatchRequest_Delete(QPlaceMatchRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
