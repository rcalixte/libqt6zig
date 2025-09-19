#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBCONTENT_H
#define SRC_EXTRAS_ATTICAC_LIBCONTENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Content)
typedef Attica::Content Attica__Content;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__DownloadDescription)
typedef Attica::DownloadDescription Attica__DownloadDescription;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__HomePageEntry)
typedef Attica::HomePageEntry Attica__HomePageEntry;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Icon)
typedef Attica::Icon Attica__Icon;
#endif
#else
typedef struct Attica__Content Attica__Content;
typedef struct Attica__DownloadDescription Attica__DownloadDescription;
typedef struct Attica__HomePageEntry Attica__HomePageEntry;
typedef struct Attica__Icon Attica__Icon;
typedef struct QDateTime QDateTime;
typedef struct QUrl QUrl;
#endif

Attica__Content* Attica__Content_new();
Attica__Content* Attica__Content_new2(const Attica__Content* other);
void Attica__Content_OperatorAssign(Attica__Content* self, const Attica__Content* other);
void Attica__Content_SetId(Attica__Content* self, const libqt_string id);
libqt_string Attica__Content_Id(const Attica__Content* self);
void Attica__Content_SetName(Attica__Content* self, const libqt_string name);
libqt_string Attica__Content_Name(const Attica__Content* self);
void Attica__Content_SetRating(Attica__Content* self, int rating);
int Attica__Content_Rating(const Attica__Content* self);
void Attica__Content_SetDownloads(Attica__Content* self, int downloads);
int Attica__Content_Downloads(const Attica__Content* self);
void Attica__Content_SetNumberOfComments(Attica__Content* self, int numComments);
int Attica__Content_NumberOfComments(const Attica__Content* self);
void Attica__Content_SetCreated(Attica__Content* self, const QDateTime* created);
QDateTime* Attica__Content_Created(const Attica__Content* self);
void Attica__Content_SetUpdated(Attica__Content* self, const QDateTime* updated);
QDateTime* Attica__Content_Updated(const Attica__Content* self);
libqt_string Attica__Content_Summary(const Attica__Content* self);
libqt_string Attica__Content_Description(const Attica__Content* self);
QUrl* Attica__Content_Detailpage(const Attica__Content* self);
libqt_string Attica__Content_Changelog(const Attica__Content* self);
libqt_string Attica__Content_Version(const Attica__Content* self);
libqt_string Attica__Content_Depend(const Attica__Content* self);
Attica__DownloadDescription* Attica__Content_DownloadUrlDescription(const Attica__Content* self, int number);
libqt_list /* of Attica__DownloadDescription* */ Attica__Content_DownloadUrlDescriptions(const Attica__Content* self);
Attica__HomePageEntry* Attica__Content_HomePageEntry(const Attica__Content* self, int number);
libqt_list /* of Attica__HomePageEntry* */ Attica__Content_HomePageEntries(Attica__Content* self);
libqt_string Attica__Content_PreviewPicture(const Attica__Content* self);
libqt_string Attica__Content_SmallPreviewPicture(const Attica__Content* self);
libqt_string Attica__Content_License(const Attica__Content* self);
libqt_string Attica__Content_LicenseName(const Attica__Content* self);
libqt_string Attica__Content_Author(const Attica__Content* self);
libqt_list /* of Attica__Icon* */ Attica__Content_Icons(Attica__Content* self);
libqt_list /* of Attica__Icon* */ Attica__Content_Icons2(const Attica__Content* self);
void Attica__Content_SetIcons(Attica__Content* self, libqt_list /* of Attica__Icon* */ icons);
libqt_list /* of QUrl* */ Attica__Content_Videos(Attica__Content* self);
void Attica__Content_SetVideos(Attica__Content* self, libqt_list /* of QUrl* */ videos);
libqt_list /* of libqt_string */ Attica__Content_Tags(const Attica__Content* self);
void Attica__Content_SetTags(Attica__Content* self, const libqt_list /* of libqt_string */ tags);
void Attica__Content_AddAttribute(Attica__Content* self, const libqt_string key, const libqt_string value);
libqt_string Attica__Content_Attribute(const Attica__Content* self, const libqt_string key);
libqt_map /* of libqt_string to libqt_string */ Attica__Content_Attributes(const Attica__Content* self);
bool Attica__Content_IsValid(const Attica__Content* self);
libqt_string Attica__Content_PreviewPicture1(const Attica__Content* self, const libqt_string number);
libqt_string Attica__Content_SmallPreviewPicture1(const Attica__Content* self, const libqt_string number);
void Attica__Content_Delete(Attica__Content* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
