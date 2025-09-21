#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBSEARCHREQUEST_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBSEARCHREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KNSCore::SearchRequest KNSCore__SearchRequest;
#else
typedef struct KNSCore KNSCore;
typedef struct KNSCore__SearchRequest KNSCore__SearchRequest;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* KNSCore_GetEnumMetaObject(int param1);
const char* KNSCore_GetEnumName(int param1);
QMetaObject* KNSCore_GetEnumMetaObject2(int param1);
const char* KNSCore_GetEnumName2(int param1);

KNSCore__SearchRequest* KNSCore__SearchRequest_new();
KNSCore__SearchRequest* KNSCore__SearchRequest_new2(const KNSCore__SearchRequest* param1);
KNSCore__SearchRequest* KNSCore__SearchRequest_new3(int sortMode_);
KNSCore__SearchRequest* KNSCore__SearchRequest_new4(int sortMode_, int filter_);
KNSCore__SearchRequest* KNSCore__SearchRequest_new5(int sortMode_, int filter_, const libqt_string searchTerm_);
KNSCore__SearchRequest* KNSCore__SearchRequest_new6(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_);
KNSCore__SearchRequest* KNSCore__SearchRequest_new7(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_, int page_);
KNSCore__SearchRequest* KNSCore__SearchRequest_new8(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_, int page_, int pageSize_);
int KNSCore__SearchRequest_SortMode(const KNSCore__SearchRequest* self);
int KNSCore__SearchRequest_Filter(const KNSCore__SearchRequest* self);
libqt_string KNSCore__SearchRequest_SearchTerm(const KNSCore__SearchRequest* self);
libqt_list /* of libqt_string */ KNSCore__SearchRequest_Categories(const KNSCore__SearchRequest* self);
int KNSCore__SearchRequest_Page(const KNSCore__SearchRequest* self);
int KNSCore__SearchRequest_PageSize(const KNSCore__SearchRequest* self);
KNSCore__SearchRequest* KNSCore__SearchRequest_NextPage(const KNSCore__SearchRequest* self);
void KNSCore__SearchRequest_Delete(KNSCore__SearchRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
