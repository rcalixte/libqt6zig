#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACECONTENTREQUEST_H
#define SRC_LOCATIONC_LIBQPLACECONTENTREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceContentRequest QPlaceContentRequest;
typedef struct QVariant QVariant;
#endif

QPlaceContentRequest* QPlaceContentRequest_new();
QPlaceContentRequest* QPlaceContentRequest_new2(const QPlaceContentRequest* other);
void QPlaceContentRequest_OperatorAssign(QPlaceContentRequest* self, const QPlaceContentRequest* other);
void QPlaceContentRequest_Swap(QPlaceContentRequest* self, QPlaceContentRequest* other);
int QPlaceContentRequest_ContentType(const QPlaceContentRequest* self);
void QPlaceContentRequest_SetContentType(QPlaceContentRequest* self, int typeVal);
libqt_string QPlaceContentRequest_PlaceId(const QPlaceContentRequest* self);
void QPlaceContentRequest_SetPlaceId(QPlaceContentRequest* self, const libqt_string identifier);
QVariant* QPlaceContentRequest_ContentContext(const QPlaceContentRequest* self);
void QPlaceContentRequest_SetContentContext(QPlaceContentRequest* self, const QVariant* context);
int QPlaceContentRequest_Limit(const QPlaceContentRequest* self);
void QPlaceContentRequest_SetLimit(QPlaceContentRequest* self, int limit);
void QPlaceContentRequest_Clear(QPlaceContentRequest* self);
void QPlaceContentRequest_Delete(QPlaceContentRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
