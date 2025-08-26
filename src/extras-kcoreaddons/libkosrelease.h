#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKOSRELEASE_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKOSRELEASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KOSRelease KOSRelease;
#endif

KOSRelease* KOSRelease_new();
KOSRelease* KOSRelease_new2(const libqt_string filePath);
libqt_string KOSRelease_Name(const KOSRelease* self);
libqt_string KOSRelease_Version(const KOSRelease* self);
libqt_string KOSRelease_Id(const KOSRelease* self);
libqt_list /* of libqt_string */ KOSRelease_IdLike(const KOSRelease* self);
libqt_string KOSRelease_VersionCodename(const KOSRelease* self);
libqt_string KOSRelease_VersionId(const KOSRelease* self);
libqt_string KOSRelease_PrettyName(const KOSRelease* self);
libqt_string KOSRelease_AnsiColor(const KOSRelease* self);
libqt_string KOSRelease_CpeName(const KOSRelease* self);
libqt_string KOSRelease_HomeUrl(const KOSRelease* self);
libqt_string KOSRelease_DocumentationUrl(const KOSRelease* self);
libqt_string KOSRelease_SupportUrl(const KOSRelease* self);
libqt_string KOSRelease_BugReportUrl(const KOSRelease* self);
libqt_string KOSRelease_PrivacyPolicyUrl(const KOSRelease* self);
libqt_string KOSRelease_BuildId(const KOSRelease* self);
libqt_string KOSRelease_Variant(const KOSRelease* self);
libqt_string KOSRelease_VariantId(const KOSRelease* self);
libqt_string KOSRelease_Logo(const KOSRelease* self);
libqt_list /* of libqt_string */ KOSRelease_ExtraKeys(const KOSRelease* self);
libqt_string KOSRelease_ExtraValue(const KOSRelease* self, const libqt_string key);
void KOSRelease_Delete(KOSRelease* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
