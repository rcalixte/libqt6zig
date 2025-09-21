#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBENTRY_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBENTRY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Author)
typedef KNSCore::Author KNSCore__Author;
#endif
typedef KNSCore::Entry KNSCore__Entry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Entry__DownloadLinkInformation)
typedef KNSCore::Entry::DownloadLinkInformation KNSCore__Entry__DownloadLinkInformation;
#endif
#else
typedef struct KNSCore KNSCore;
typedef struct KNSCore__Author KNSCore__Author;
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSCore__Entry__DownloadLinkInformation KNSCore__Entry__DownloadLinkInformation;
typedef struct QDate QDate;
typedef struct QImage QImage;
typedef struct QUrl QUrl;
typedef struct QXmlStreamReader QXmlStreamReader;
#endif

libqt_string KNSCore_ReplaceBBCode(const libqt_string param1);
size_t KNSCore_QHash(const KNSCore__Entry* param1, size_t param2);

KNSCore__Entry* KNSCore__Entry_new();
KNSCore__Entry* KNSCore__Entry_new2(const KNSCore__Entry* other);
void KNSCore__Entry_OperatorAssign(KNSCore__Entry* self, const KNSCore__Entry* other);
bool KNSCore__Entry_OperatorEqual(const KNSCore__Entry* self, const KNSCore__Entry* other);
bool KNSCore__Entry_OperatorLesser(const KNSCore__Entry* self, const KNSCore__Entry* other);
bool KNSCore__Entry_IsValid(const KNSCore__Entry* self);
void KNSCore__Entry_SetName(KNSCore__Entry* self, const libqt_string name);
libqt_string KNSCore__Entry_Name(const KNSCore__Entry* self);
void KNSCore__Entry_SetUniqueId(KNSCore__Entry* self, const libqt_string id);
libqt_string KNSCore__Entry_UniqueId(const KNSCore__Entry* self);
void KNSCore__Entry_SetCategory(KNSCore__Entry* self, const libqt_string category);
libqt_string KNSCore__Entry_Category(const KNSCore__Entry* self);
void KNSCore__Entry_SetHomepage(KNSCore__Entry* self, const QUrl* page);
QUrl* KNSCore__Entry_Homepage(const KNSCore__Entry* self);
void KNSCore__Entry_SetAuthor(KNSCore__Entry* self, const KNSCore__Author* author);
KNSCore__Author* KNSCore__Entry_Author(const KNSCore__Entry* self);
void KNSCore__Entry_SetLicense(KNSCore__Entry* self, const libqt_string license);
libqt_string KNSCore__Entry_License(const KNSCore__Entry* self);
void KNSCore__Entry_SetSummary(KNSCore__Entry* self, const libqt_string summary);
libqt_string KNSCore__Entry_ShortSummary(const KNSCore__Entry* self);
void KNSCore__Entry_SetShortSummary(KNSCore__Entry* self, const libqt_string summary);
libqt_string KNSCore__Entry_Summary(const KNSCore__Entry* self);
void KNSCore__Entry_SetChangelog(KNSCore__Entry* self, const libqt_string changelog);
libqt_string KNSCore__Entry_Changelog(const KNSCore__Entry* self);
void KNSCore__Entry_SetVersion(KNSCore__Entry* self, const libqt_string version);
libqt_string KNSCore__Entry_Version(const KNSCore__Entry* self);
void KNSCore__Entry_SetReleaseDate(KNSCore__Entry* self, const QDate* releasedate);
QDate* KNSCore__Entry_ReleaseDate(const KNSCore__Entry* self);
void KNSCore__Entry_SetUpdateVersion(KNSCore__Entry* self, const libqt_string version);
libqt_string KNSCore__Entry_UpdateVersion(const KNSCore__Entry* self);
void KNSCore__Entry_SetUpdateReleaseDate(KNSCore__Entry* self, const QDate* releasedate);
QDate* KNSCore__Entry_UpdateReleaseDate(const KNSCore__Entry* self);
void KNSCore__Entry_SetPayload(KNSCore__Entry* self, const libqt_string url);
libqt_string KNSCore__Entry_Payload(const KNSCore__Entry* self);
void KNSCore__Entry_SetPreviewUrl(KNSCore__Entry* self, const libqt_string url);
libqt_string KNSCore__Entry_PreviewUrl(const KNSCore__Entry* self);
QImage* KNSCore__Entry_PreviewImage(const KNSCore__Entry* self);
void KNSCore__Entry_SetPreviewImage(KNSCore__Entry* self, const QImage* image);
void KNSCore__Entry_SetInstalledFiles(KNSCore__Entry* self, const libqt_list /* of libqt_string */ files);
libqt_list /* of libqt_string */ KNSCore__Entry_InstalledFiles(const KNSCore__Entry* self);
libqt_list /* of libqt_string */ KNSCore__Entry_UninstalledFiles(const KNSCore__Entry* self);
void KNSCore__Entry_SetRating(KNSCore__Entry* self, int rating);
int KNSCore__Entry_Rating(const KNSCore__Entry* self);
void KNSCore__Entry_SetNumberOfComments(KNSCore__Entry* self, int comments);
int KNSCore__Entry_NumberOfComments(const KNSCore__Entry* self);
void KNSCore__Entry_SetDownloadCount(KNSCore__Entry* self, int downloads);
int KNSCore__Entry_DownloadCount(const KNSCore__Entry* self);
int KNSCore__Entry_NumberFans(const KNSCore__Entry* self);
void KNSCore__Entry_SetNumberFans(KNSCore__Entry* self, int fans);
int KNSCore__Entry_NumberKnowledgebaseEntries(const KNSCore__Entry* self);
void KNSCore__Entry_SetNumberKnowledgebaseEntries(KNSCore__Entry* self, int num);
libqt_string KNSCore__Entry_KnowledgebaseLink(const KNSCore__Entry* self);
void KNSCore__Entry_SetKnowledgebaseLink(KNSCore__Entry* self, const libqt_string link);
int KNSCore__Entry_DownloadLinkCount(const KNSCore__Entry* self);
libqt_list /* of KNSCore__Entry__DownloadLinkInformation* */ KNSCore__Entry_DownloadLinkInformationList(const KNSCore__Entry* self);
void KNSCore__Entry_AppendDownloadLinkInformation(KNSCore__Entry* self, const KNSCore__Entry__DownloadLinkInformation* info);
void KNSCore__Entry_ClearDownloadLinkInformation(KNSCore__Entry* self);
libqt_string KNSCore__Entry_DonationLink(const KNSCore__Entry* self);
void KNSCore__Entry_SetDonationLink(KNSCore__Entry* self, const libqt_string link);
libqt_list /* of libqt_string */ KNSCore__Entry_Tags(const KNSCore__Entry* self);
void KNSCore__Entry_SetTags(KNSCore__Entry* self, const libqt_list /* of libqt_string */ tags);
libqt_string KNSCore__Entry_ProviderId(const KNSCore__Entry* self);
void KNSCore__Entry_SetProviderId(KNSCore__Entry* self, const libqt_string id);
void KNSCore__Entry_SetSource(KNSCore__Entry* self, int source);
int KNSCore__Entry_Source(const KNSCore__Entry* self);
void KNSCore__Entry_SetEntryType(KNSCore__Entry* self, int typeVal);
int KNSCore__Entry_EntryType(const KNSCore__Entry* self);
bool KNSCore__Entry_SetEntryXML(KNSCore__Entry* self, QXmlStreamReader* reader);
void KNSCore__Entry_SetStatus(KNSCore__Entry* self, int status);
int KNSCore__Entry_Status(const KNSCore__Entry* self);
void KNSCore__Entry_SetEntryDeleted(KNSCore__Entry* self);
void KNSCore__Entry_SetPreviewUrl2(KNSCore__Entry* self, const libqt_string url, int typeVal);
libqt_string KNSCore__Entry_PreviewUrl1(const KNSCore__Entry* self, int typeVal);
QImage* KNSCore__Entry_PreviewImage1(const KNSCore__Entry* self, int typeVal);
void KNSCore__Entry_SetPreviewImage2(KNSCore__Entry* self, const QImage* image, int typeVal);
void KNSCore__Entry_Delete(KNSCore__Entry* self);

KNSCore__Entry__DownloadLinkInformation* KNSCore__Entry__DownloadLinkInformation_new(const KNSCore__Entry__DownloadLinkInformation* param1);
libqt_string KNSCore__Entry__DownloadLinkInformation_Name(const KNSCore__Entry__DownloadLinkInformation* self);
void KNSCore__Entry__DownloadLinkInformation_SetName(KNSCore__Entry__DownloadLinkInformation* self, libqt_string name);
libqt_string KNSCore__Entry__DownloadLinkInformation_PriceAmount(const KNSCore__Entry__DownloadLinkInformation* self);
void KNSCore__Entry__DownloadLinkInformation_SetPriceAmount(KNSCore__Entry__DownloadLinkInformation* self, libqt_string priceAmount);
libqt_string KNSCore__Entry__DownloadLinkInformation_DistributionType(const KNSCore__Entry__DownloadLinkInformation* self);
void KNSCore__Entry__DownloadLinkInformation_SetDistributionType(KNSCore__Entry__DownloadLinkInformation* self, libqt_string distributionType);
libqt_string KNSCore__Entry__DownloadLinkInformation_DescriptionLink(const KNSCore__Entry__DownloadLinkInformation* self);
void KNSCore__Entry__DownloadLinkInformation_SetDescriptionLink(KNSCore__Entry__DownloadLinkInformation* self, libqt_string descriptionLink);
int KNSCore__Entry__DownloadLinkInformation_Id(const KNSCore__Entry__DownloadLinkInformation* self);
void KNSCore__Entry__DownloadLinkInformation_SetId(KNSCore__Entry__DownloadLinkInformation* self, int id);
bool KNSCore__Entry__DownloadLinkInformation_IsDownloadtypeLink(const KNSCore__Entry__DownloadLinkInformation* self);
void KNSCore__Entry__DownloadLinkInformation_SetIsDownloadtypeLink(KNSCore__Entry__DownloadLinkInformation* self, bool isDownloadtypeLink);
unsigned long long KNSCore__Entry__DownloadLinkInformation_Size(const KNSCore__Entry__DownloadLinkInformation* self);
void KNSCore__Entry__DownloadLinkInformation_SetSize(KNSCore__Entry__DownloadLinkInformation* self, unsigned long long size);
libqt_list /* of libqt_string */ KNSCore__Entry__DownloadLinkInformation_Tags(const KNSCore__Entry__DownloadLinkInformation* self);
void KNSCore__Entry__DownloadLinkInformation_SetTags(KNSCore__Entry__DownloadLinkInformation* self, libqt_list /* of libqt_string */ tags);
void KNSCore__Entry__DownloadLinkInformation_OperatorAssign(KNSCore__Entry__DownloadLinkInformation* self, const KNSCore__Entry__DownloadLinkInformation* param1);
void KNSCore__Entry__DownloadLinkInformation_Delete(KNSCore__Entry__DownloadLinkInformation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
