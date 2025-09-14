#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKFILEITEM_H
#define SRC_EXTRAS_KIOC_LIBKFILEITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileItem__MostLocalUrlResult)
typedef KFileItem::MostLocalUrlResult KFileItem__MostLocalUrlResult;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__UDSEntry)
typedef KIO::UDSEntry KIO__UDSEntry;
#endif
#else
typedef struct KACL KACL;
typedef struct KFileItem KFileItem;
typedef struct KFileItemList KFileItemList;
typedef struct KFileItem__MostLocalUrlResult KFileItem__MostLocalUrlResult;
typedef struct KIO__UDSEntry KIO__UDSEntry;
typedef struct QDateTime QDateTime;
typedef struct QMimeType QMimeType;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

KFileItem* KFileItem_new();
KFileItem* KFileItem_new2(const KIO__UDSEntry* entry, const QUrl* itemOrDirUrl);
KFileItem* KFileItem_new3(const QUrl* url);
KFileItem* KFileItem_new4(const QUrl* url, int mimeTypeDetermination);
KFileItem* KFileItem_new5(const KFileItem* param1);
KFileItem* KFileItem_new6(const KIO__UDSEntry* entry, const QUrl* itemOrDirUrl, bool delayedMimeTypes);
KFileItem* KFileItem_new7(const KIO__UDSEntry* entry, const QUrl* itemOrDirUrl, bool delayedMimeTypes, bool urlIsDirectory);
KFileItem* KFileItem_new8(const QUrl* url, const libqt_string mimeType);
KFileItem* KFileItem_new9(const QUrl* url, const libqt_string mimeType, mode_t mode);
void KFileItem_OperatorAssign(KFileItem* self, const KFileItem* param1);
void KFileItem_Refresh(KFileItem* self);
void KFileItem_RefreshMimeType(KFileItem* self);
void KFileItem_SetDelayedMimeTypes(KFileItem* self, bool b);
QUrl* KFileItem_Url(const KFileItem* self);
void KFileItem_SetUrl(KFileItem* self, const QUrl* url);
void KFileItem_SetLocalPath(KFileItem* self, const libqt_string path);
void KFileItem_SetName(KFileItem* self, const libqt_string name);
mode_t KFileItem_Permissions(const KFileItem* self);
libqt_string KFileItem_PermissionsString(const KFileItem* self);
bool KFileItem_HasExtendedACL(const KFileItem* self);
KACL* KFileItem_ACL(const KFileItem* self);
KACL* KFileItem_DefaultACL(const KFileItem* self);
mode_t KFileItem_Mode(const KFileItem* self);
int KFileItem_UserId(const KFileItem* self);
int KFileItem_GroupId(const KFileItem* self);
libqt_string KFileItem_User(const KFileItem* self);
libqt_string KFileItem_Group(const KFileItem* self);
bool KFileItem_IsLink(const KFileItem* self);
bool KFileItem_IsDir(const KFileItem* self);
bool KFileItem_IsFile(const KFileItem* self);
bool KFileItem_IsReadable(const KFileItem* self);
bool KFileItem_IsWritable(const KFileItem* self);
bool KFileItem_IsHidden(const KFileItem* self);
bool KFileItem_IsSlow(const KFileItem* self);
bool KFileItem_IsDesktopFile(const KFileItem* self);
libqt_string KFileItem_LinkDest(const KFileItem* self);
QUrl* KFileItem_TargetUrl(const KFileItem* self);
libqt_string KFileItem_LocalPath(const KFileItem* self);
unsigned long long KFileItem_Size(const KFileItem* self);
unsigned long long KFileItem_RecursiveSize(const KFileItem* self);
QDateTime* KFileItem_Time(const KFileItem* self, int which);
libqt_string KFileItem_TimeString(const KFileItem* self);
bool KFileItem_IsLocalFile(const KFileItem* self);
libqt_string KFileItem_Text(const KFileItem* self);
libqt_string KFileItem_Name(const KFileItem* self);
libqt_string KFileItem_Mimetype(const KFileItem* self);
QMimeType* KFileItem_DetermineMimeType(const KFileItem* self);
QMimeType* KFileItem_CurrentMimeType(const KFileItem* self);
bool KFileItem_IsFinalIconKnown(const KFileItem* self);
bool KFileItem_IsMimeTypeKnown(const KFileItem* self);
libqt_string KFileItem_MimeComment(const KFileItem* self);
libqt_string KFileItem_IconName(const KFileItem* self);
libqt_list /* of libqt_string */ KFileItem_Overlays(const KFileItem* self);
libqt_string KFileItem_Comment(const KFileItem* self);
libqt_string KFileItem_GetStatusBarInfo(const KFileItem* self);
KIO__UDSEntry* KFileItem_Entry(const KFileItem* self);
bool KFileItem_IsRegularFile(const KFileItem* self);
libqt_string KFileItem_Suffix(const KFileItem* self);
bool KFileItem_Cmp(const KFileItem* self, const KFileItem* item);
bool KFileItem_OperatorEqual(const KFileItem* self, const KFileItem* other);
bool KFileItem_OperatorNotEqual(const KFileItem* self, const KFileItem* other);
bool KFileItem_OperatorLesser(const KFileItem* self, const KFileItem* other);
bool KFileItem_OperatorLesser2(const KFileItem* self, const QUrl* other);
QVariant* KFileItem_ToQVariant(const KFileItem* self);
QUrl* KFileItem_MostLocalUrl(const KFileItem* self);
KFileItem__MostLocalUrlResult* KFileItem_IsMostLocalUrl(const KFileItem* self);
bool KFileItem_IsNull(const KFileItem* self);
bool KFileItem_Exists(const KFileItem* self);
bool KFileItem_IsExecutable(const KFileItem* self);
libqt_string KFileItem_TimeString1(const KFileItem* self, int which);
libqt_string KFileItem_Name1(const KFileItem* self, bool lowerCase);
QUrl* KFileItem_MostLocalUrl1(const KFileItem* self, bool* local);
void KFileItem_Delete(KFileItem* self);

KFileItemList* KFileItemList_new();
KFileItemList* KFileItemList_new2(const libqt_list /* of KFileItem* */ items);
KFileItem* KFileItemList_FindByName(const KFileItemList* self, const libqt_string fileName);
KFileItem* KFileItemList_FindByUrl(const KFileItemList* self, const QUrl* url);
libqt_list /* of QUrl* */ KFileItemList_UrlList(const KFileItemList* self);
libqt_list /* of QUrl* */ KFileItemList_TargetUrlList(const KFileItemList* self);
void KFileItemList_Delete(KFileItemList* self);

KFileItem__MostLocalUrlResult* KFileItem__MostLocalUrlResult_new(const KFileItem__MostLocalUrlResult* param1);
QUrl* KFileItem__MostLocalUrlResult_Url(const KFileItem__MostLocalUrlResult* self);
void KFileItem__MostLocalUrlResult_SetUrl(KFileItem__MostLocalUrlResult* self, QUrl* url);
bool KFileItem__MostLocalUrlResult_Local(const KFileItem__MostLocalUrlResult* self);
void KFileItem__MostLocalUrlResult_SetLocal(KFileItem__MostLocalUrlResult* self, bool local);
void KFileItem__MostLocalUrlResult_OperatorAssign(KFileItem__MostLocalUrlResult* self, const KFileItem__MostLocalUrlResult* param1);
void KFileItem__MostLocalUrlResult_Delete(KFileItem__MostLocalUrlResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
