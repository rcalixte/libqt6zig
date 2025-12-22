#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACESEARCHRESULT_H
#define SRC_LOCATIONC_LIBQPLACESEARCHRESULT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceIcon QPlaceIcon;
typedef struct QPlaceSearchResult QPlaceSearchResult;
#endif

QPlaceSearchResult* QPlaceSearchResult_new();
QPlaceSearchResult* QPlaceSearchResult_new2(const QPlaceSearchResult* other);
void QPlaceSearchResult_OperatorAssign(QPlaceSearchResult* self, const QPlaceSearchResult* other);
bool QPlaceSearchResult_OperatorEqual(const QPlaceSearchResult* self, const QPlaceSearchResult* other);
bool QPlaceSearchResult_OperatorNotEqual(const QPlaceSearchResult* self, const QPlaceSearchResult* other);
int QPlaceSearchResult_Type(const QPlaceSearchResult* self);
libqt_string QPlaceSearchResult_Title(const QPlaceSearchResult* self);
void QPlaceSearchResult_SetTitle(QPlaceSearchResult* self, const libqt_string title);
QPlaceIcon* QPlaceSearchResult_Icon(const QPlaceSearchResult* self);
void QPlaceSearchResult_SetIcon(QPlaceSearchResult* self, const QPlaceIcon* icon);
void QPlaceSearchResult_Delete(QPlaceSearchResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
