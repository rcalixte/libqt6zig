#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKURIFILTER_H
#define SRC_EXTRAS_KIOC_LIBKURIFILTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KUriFilter KUriFilter;
typedef struct KUriFilterData KUriFilterData;
typedef struct KUriFilterSearchProvider KUriFilterSearchProvider;
typedef struct QChar QChar;
typedef struct QUrl QUrl;
#endif

KUriFilterSearchProvider* KUriFilterSearchProvider_new();
KUriFilterSearchProvider* KUriFilterSearchProvider_new2(const KUriFilterSearchProvider* param1);
libqt_string KUriFilterSearchProvider_DesktopEntryName(const KUriFilterSearchProvider* self);
libqt_string KUriFilterSearchProvider_Name(const KUriFilterSearchProvider* self);
libqt_string KUriFilterSearchProvider_IconName(const KUriFilterSearchProvider* self);
libqt_list /* of libqt_string */ KUriFilterSearchProvider_Keys(const KUriFilterSearchProvider* self);
libqt_string KUriFilterSearchProvider_DefaultKey(const KUriFilterSearchProvider* self);
void KUriFilterSearchProvider_OperatorAssign(KUriFilterSearchProvider* self, const KUriFilterSearchProvider* param1);
void KUriFilterSearchProvider_OnIconName(const KUriFilterSearchProvider* self, intptr_t slot);
libqt_string KUriFilterSearchProvider_QBaseIconName(const KUriFilterSearchProvider* self);
void KUriFilterSearchProvider_SetDesktopEntryName(KUriFilterSearchProvider* self, const libqt_string desktopEntryName);
void KUriFilterSearchProvider_OnSetDesktopEntryName(KUriFilterSearchProvider* self, intptr_t slot);
void KUriFilterSearchProvider_QBaseSetDesktopEntryName(KUriFilterSearchProvider* self, const libqt_string desktopEntryName);
void KUriFilterSearchProvider_SetIconName(KUriFilterSearchProvider* self, const libqt_string iconName);
void KUriFilterSearchProvider_OnSetIconName(KUriFilterSearchProvider* self, intptr_t slot);
void KUriFilterSearchProvider_QBaseSetIconName(KUriFilterSearchProvider* self, const libqt_string iconName);
void KUriFilterSearchProvider_SetKeys(KUriFilterSearchProvider* self, const libqt_list /* of libqt_string */ keys);
void KUriFilterSearchProvider_OnSetKeys(KUriFilterSearchProvider* self, intptr_t slot);
void KUriFilterSearchProvider_QBaseSetKeys(KUriFilterSearchProvider* self, const libqt_list /* of libqt_string */ keys);
void KUriFilterSearchProvider_SetName(KUriFilterSearchProvider* self, const libqt_string name);
void KUriFilterSearchProvider_OnSetName(KUriFilterSearchProvider* self, intptr_t slot);
void KUriFilterSearchProvider_QBaseSetName(KUriFilterSearchProvider* self, const libqt_string name);
void KUriFilterSearchProvider_Delete(KUriFilterSearchProvider* self);

KUriFilterData* KUriFilterData_new();
KUriFilterData* KUriFilterData_new2(const QUrl* url);
KUriFilterData* KUriFilterData_new3(const libqt_string url);
KUriFilterData* KUriFilterData_new4(const KUriFilterData* other);
QUrl* KUriFilterData_Uri(const KUriFilterData* self);
libqt_string KUriFilterData_ErrorMsg(const KUriFilterData* self);
int KUriFilterData_UriType(const KUriFilterData* self);
libqt_string KUriFilterData_AbsolutePath(const KUriFilterData* self);
bool KUriFilterData_HasAbsolutePath(const KUriFilterData* self);
libqt_string KUriFilterData_ArgsAndOptions(const KUriFilterData* self);
bool KUriFilterData_HasArgsAndOptions(const KUriFilterData* self);
bool KUriFilterData_CheckForExecutables(const KUriFilterData* self);
libqt_string KUriFilterData_TypedString(const KUriFilterData* self);
libqt_string KUriFilterData_SearchTerm(const KUriFilterData* self);
QChar* KUriFilterData_SearchTermSeparator(const KUriFilterData* self);
libqt_string KUriFilterData_SearchProvider(const KUriFilterData* self);
libqt_list /* of libqt_string */ KUriFilterData_PreferredSearchProviders(const KUriFilterData* self);
KUriFilterSearchProvider* KUriFilterData_QueryForSearchProvider(const KUriFilterData* self, const libqt_string provider);
libqt_string KUriFilterData_QueryForPreferredSearchProvider(const KUriFilterData* self, const libqt_string provider);
libqt_list /* of libqt_string */ KUriFilterData_AllQueriesForSearchProvider(const KUriFilterData* self, const libqt_string provider);
libqt_string KUriFilterData_IconNameForPreferredSearchProvider(const KUriFilterData* self, const libqt_string provider);
libqt_list /* of libqt_string */ KUriFilterData_AlternateSearchProviders(const KUriFilterData* self);
libqt_string KUriFilterData_AlternateDefaultSearchProvider(const KUriFilterData* self);
libqt_string KUriFilterData_DefaultUrlScheme(const KUriFilterData* self);
int KUriFilterData_SearchFilteringOptions(const KUriFilterData* self);
libqt_string KUriFilterData_IconName(KUriFilterData* self);
void KUriFilterData_SetCheckForExecutables(KUriFilterData* self, bool check);
void KUriFilterData_SetData(KUriFilterData* self, const QUrl* url);
void KUriFilterData_SetData2(KUriFilterData* self, const libqt_string url);
bool KUriFilterData_SetAbsolutePath(KUriFilterData* self, const libqt_string abs_path);
void KUriFilterData_SetAlternateSearchProviders(KUriFilterData* self, const libqt_list /* of libqt_string */ providers);
void KUriFilterData_SetAlternateDefaultSearchProvider(KUriFilterData* self, const libqt_string provider);
void KUriFilterData_SetDefaultUrlScheme(KUriFilterData* self, const libqt_string defaultUrlScheme);
void KUriFilterData_SetSearchFilteringOptions(KUriFilterData* self, int options);
void KUriFilterData_OperatorAssign(KUriFilterData* self, const QUrl* url);
void KUriFilterData_OperatorAssign2(KUriFilterData* self, const libqt_string url);
void KUriFilterData_Delete(KUriFilterData* self);

KUriFilter* KUriFilter_Self();
bool KUriFilter_FilterUri(KUriFilter* self, KUriFilterData* data);
bool KUriFilter_FilterUri2(KUriFilter* self, QUrl* uri);
bool KUriFilter_FilterUri3(KUriFilter* self, libqt_string uri);
QUrl* KUriFilter_FilteredUri(KUriFilter* self, const QUrl* uri);
libqt_string KUriFilter_FilteredUri2(KUriFilter* self, const libqt_string uri);
bool KUriFilter_FilterSearchUri(KUriFilter* self, KUriFilterData* data, int types);
libqt_list /* of libqt_string */ KUriFilter_PluginNames(const KUriFilter* self);
bool KUriFilter_FilterUri22(KUriFilter* self, KUriFilterData* data, const libqt_list /* of libqt_string */ filters);
bool KUriFilter_FilterUri23(KUriFilter* self, QUrl* uri, const libqt_list /* of libqt_string */ filters);
bool KUriFilter_FilterUri24(KUriFilter* self, libqt_string uri, const libqt_list /* of libqt_string */ filters);
QUrl* KUriFilter_FilteredUri22(KUriFilter* self, const QUrl* uri, const libqt_list /* of libqt_string */ filters);
libqt_string KUriFilter_FilteredUri23(KUriFilter* self, const libqt_string uri, const libqt_list /* of libqt_string */ filters);
void KUriFilter_Delete(KUriFilter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
