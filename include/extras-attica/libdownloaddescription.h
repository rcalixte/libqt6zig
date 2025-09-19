#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBDOWNLOADDESCRIPTION_H
#define SRC_EXTRAS_ATTICAC_LIBDOWNLOADDESCRIPTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__DownloadDescription)
typedef Attica::DownloadDescription Attica__DownloadDescription;
#endif
#else
typedef struct Attica__DownloadDescription Attica__DownloadDescription;
#endif

Attica__DownloadDescription* Attica__DownloadDescription_new();
Attica__DownloadDescription* Attica__DownloadDescription_new2(const Attica__DownloadDescription* other);
void Attica__DownloadDescription_OperatorAssign(Attica__DownloadDescription* self, const Attica__DownloadDescription* other);
int Attica__DownloadDescription_Id(const Attica__DownloadDescription* self);
int Attica__DownloadDescription_Type(const Attica__DownloadDescription* self);
bool Attica__DownloadDescription_HasPrice(const Attica__DownloadDescription* self);
libqt_string Attica__DownloadDescription_Category(const Attica__DownloadDescription* self);
libqt_string Attica__DownloadDescription_Name(const Attica__DownloadDescription* self);
libqt_string Attica__DownloadDescription_Link(const Attica__DownloadDescription* self);
libqt_string Attica__DownloadDescription_DistributionType(const Attica__DownloadDescription* self);
libqt_string Attica__DownloadDescription_PriceReason(const Attica__DownloadDescription* self);
libqt_string Attica__DownloadDescription_PriceAmount(const Attica__DownloadDescription* self);
unsigned int Attica__DownloadDescription_Size(const Attica__DownloadDescription* self);
libqt_string Attica__DownloadDescription_GpgFingerprint(const Attica__DownloadDescription* self);
libqt_string Attica__DownloadDescription_GpgSignature(const Attica__DownloadDescription* self);
libqt_string Attica__DownloadDescription_PackageName(const Attica__DownloadDescription* self);
libqt_string Attica__DownloadDescription_Repository(const Attica__DownloadDescription* self);
libqt_list /* of libqt_string */ Attica__DownloadDescription_Tags(const Attica__DownloadDescription* self);
void Attica__DownloadDescription_SetId(Attica__DownloadDescription* self, int id);
void Attica__DownloadDescription_SetType(Attica__DownloadDescription* self, int typeVal);
void Attica__DownloadDescription_SetHasPrice(Attica__DownloadDescription* self, bool hasPrice);
void Attica__DownloadDescription_SetCategory(Attica__DownloadDescription* self, const libqt_string category);
void Attica__DownloadDescription_SetName(Attica__DownloadDescription* self, const libqt_string name);
void Attica__DownloadDescription_SetLink(Attica__DownloadDescription* self, const libqt_string link);
void Attica__DownloadDescription_SetDistributionType(Attica__DownloadDescription* self, const libqt_string distributionType);
void Attica__DownloadDescription_SetPriceReason(Attica__DownloadDescription* self, const libqt_string priceReason);
void Attica__DownloadDescription_SetPriceAmount(Attica__DownloadDescription* self, const libqt_string priceAmount);
void Attica__DownloadDescription_SetSize(Attica__DownloadDescription* self, unsigned int size);
void Attica__DownloadDescription_SetGpgFingerprint(Attica__DownloadDescription* self, const libqt_string fingerprint);
void Attica__DownloadDescription_SetGpgSignature(Attica__DownloadDescription* self, const libqt_string signature);
void Attica__DownloadDescription_SetPackageName(Attica__DownloadDescription* self, const libqt_string packageName);
void Attica__DownloadDescription_SetRepository(Attica__DownloadDescription* self, const libqt_string repository);
void Attica__DownloadDescription_SetTags(Attica__DownloadDescription* self, const libqt_list /* of libqt_string */ tags);
libqt_string Attica__DownloadDescription_Version(const Attica__DownloadDescription* self);
void Attica__DownloadDescription_SetVersion(Attica__DownloadDescription* self, const libqt_string version);
void Attica__DownloadDescription_Delete(Attica__DownloadDescription* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
