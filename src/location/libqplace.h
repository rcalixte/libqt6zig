#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACE_H
#define SRC_LOCATIONC_LIBQPLACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGeoLocation QGeoLocation;
typedef struct QPlace QPlace;
typedef struct QPlaceAttribute QPlaceAttribute;
typedef struct QPlaceCategory QPlaceCategory;
typedef struct QPlaceContactDetail QPlaceContactDetail;
typedef struct QPlaceContent QPlaceContent;
typedef struct QPlaceIcon QPlaceIcon;
typedef struct QPlaceRatings QPlaceRatings;
typedef struct QPlaceSupplier QPlaceSupplier;
typedef struct QUrl QUrl;
#endif

QPlace* QPlace_new();
QPlace* QPlace_new2(const QPlace* other);
void QPlace_OperatorAssign(QPlace* self, const QPlace* other);
void QPlace_Swap(QPlace* self, QPlace* other);
libqt_list /* of QPlaceCategory* */ QPlace_Categories(const QPlace* self);
void QPlace_SetCategory(QPlace* self, const QPlaceCategory* category);
void QPlace_SetCategories(QPlace* self, const libqt_list /* of QPlaceCategory* */ categories);
QGeoLocation* QPlace_Location(const QPlace* self);
void QPlace_SetLocation(QPlace* self, const QGeoLocation* location);
QPlaceRatings* QPlace_Ratings(const QPlace* self);
void QPlace_SetRatings(QPlace* self, const QPlaceRatings* ratings);
QPlaceSupplier* QPlace_Supplier(const QPlace* self);
void QPlace_SetSupplier(QPlace* self, const QPlaceSupplier* supplier);
libqt_string QPlace_Attribution(const QPlace* self);
void QPlace_SetAttribution(QPlace* self, const libqt_string attribution);
QPlaceIcon* QPlace_Icon(const QPlace* self);
void QPlace_SetIcon(QPlace* self, const QPlaceIcon* icon);
libqt_map /* of int to QPlaceContent* */ QPlace_Content(const QPlace* self, int typeVal);
void QPlace_SetContent(QPlace* self, int typeVal, const libqt_map /* of int to QPlaceContent* */ content);
void QPlace_InsertContent(QPlace* self, int typeVal, const libqt_map /* of int to QPlaceContent* */ content);
int QPlace_TotalContentCount(const QPlace* self, int typeVal);
void QPlace_SetTotalContentCount(QPlace* self, int typeVal, int total);
libqt_string QPlace_Name(const QPlace* self);
void QPlace_SetName(QPlace* self, const libqt_string name);
libqt_string QPlace_PlaceId(const QPlace* self);
void QPlace_SetPlaceId(QPlace* self, const libqt_string identifier);
libqt_string QPlace_PrimaryPhone(const QPlace* self);
libqt_string QPlace_PrimaryFax(const QPlace* self);
libqt_string QPlace_PrimaryEmail(const QPlace* self);
QUrl* QPlace_PrimaryWebsite(const QPlace* self);
bool QPlace_DetailsFetched(const QPlace* self);
void QPlace_SetDetailsFetched(QPlace* self, bool fetched);
libqt_list /* of libqt_string */ QPlace_ExtendedAttributeTypes(const QPlace* self);
QPlaceAttribute* QPlace_ExtendedAttribute(const QPlace* self, const libqt_string attributeType);
void QPlace_SetExtendedAttribute(QPlace* self, const libqt_string attributeType, const QPlaceAttribute* attribute);
void QPlace_RemoveExtendedAttribute(QPlace* self, const libqt_string attributeType);
libqt_list /* of libqt_string */ QPlace_ContactTypes(const QPlace* self);
libqt_list /* of QPlaceContactDetail* */ QPlace_ContactDetails(const QPlace* self, const libqt_string contactType);
void QPlace_SetContactDetails(QPlace* self, const libqt_string contactType, libqt_list /* of QPlaceContactDetail* */ details);
void QPlace_AppendContactDetail(QPlace* self, const libqt_string contactType, const QPlaceContactDetail* detail);
void QPlace_RemoveContactDetails(QPlace* self, const libqt_string contactType);
int QPlace_Visibility(const QPlace* self);
void QPlace_SetVisibility(QPlace* self, int visibility);
bool QPlace_IsEmpty(const QPlace* self);
void QPlace_Delete(QPlace* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
