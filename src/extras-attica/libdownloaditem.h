#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBDOWNLOADITEM_H
#define SRC_EXTRAS_ATTICAC_LIBDOWNLOADITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__DownloadItem)
typedef Attica::DownloadItem Attica__DownloadItem;
#endif
#else
typedef struct Attica__DownloadItem Attica__DownloadItem;
typedef struct QUrl QUrl;
#endif

Attica__DownloadItem* Attica__DownloadItem_new();
Attica__DownloadItem* Attica__DownloadItem_new2(const Attica__DownloadItem* other);
void Attica__DownloadItem_OperatorAssign(Attica__DownloadItem* self, const Attica__DownloadItem* other);
void Attica__DownloadItem_SetUrl(Attica__DownloadItem* self, const QUrl* url);
QUrl* Attica__DownloadItem_Url(const Attica__DownloadItem* self);
void Attica__DownloadItem_SetMimeType(Attica__DownloadItem* self, const libqt_string mimeType);
libqt_string Attica__DownloadItem_MimeType(const Attica__DownloadItem* self);
void Attica__DownloadItem_SetPackageName(Attica__DownloadItem* self, const libqt_string packageName);
libqt_string Attica__DownloadItem_PackageName(const Attica__DownloadItem* self);
void Attica__DownloadItem_SetPackageRepository(Attica__DownloadItem* self, const libqt_string packageRepository);
libqt_string Attica__DownloadItem_PackageRepository(const Attica__DownloadItem* self);
void Attica__DownloadItem_SetGpgFingerprint(Attica__DownloadItem* self, const libqt_string gpgFingerprint);
libqt_string Attica__DownloadItem_GpgFingerprint(const Attica__DownloadItem* self);
void Attica__DownloadItem_SetGpgSignature(Attica__DownloadItem* self, const libqt_string gpgSignature);
libqt_string Attica__DownloadItem_GpgSignature(const Attica__DownloadItem* self);
void Attica__DownloadItem_SetType(Attica__DownloadItem* self, int typeVal);
int Attica__DownloadItem_Type(Attica__DownloadItem* self);
void Attica__DownloadItem_Delete(Attica__DownloadItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
