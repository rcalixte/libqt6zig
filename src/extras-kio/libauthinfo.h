#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBAUTHINFO_H
#define SRC_EXTRAS_KIOC_LIBAUTHINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__AuthInfo)
typedef KIO::AuthInfo KIO__AuthInfo;
#endif
#else
typedef struct KIO__AuthInfo KIO__AuthInfo;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

KIO__AuthInfo* KIO__AuthInfo_new();
KIO__AuthInfo* KIO__AuthInfo_new2(const KIO__AuthInfo* info);
void KIO__AuthInfo_OperatorAssign(KIO__AuthInfo* self, const KIO__AuthInfo* info);
bool KIO__AuthInfo_IsModified(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetModified(KIO__AuthInfo* self, bool flag);
QUrl* KIO__AuthInfo_Url(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetUrl(KIO__AuthInfo* self, QUrl* url);
libqt_string KIO__AuthInfo_Username(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetUsername(KIO__AuthInfo* self, libqt_string username);
libqt_string KIO__AuthInfo_Password(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetPassword(KIO__AuthInfo* self, libqt_string password);
libqt_string KIO__AuthInfo_Prompt(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetPrompt(KIO__AuthInfo* self, libqt_string prompt);
libqt_string KIO__AuthInfo_Caption(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetCaption(KIO__AuthInfo* self, libqt_string caption);
libqt_string KIO__AuthInfo_Comment(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetComment(KIO__AuthInfo* self, libqt_string comment);
libqt_string KIO__AuthInfo_CommentLabel(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetCommentLabel(KIO__AuthInfo* self, libqt_string commentLabel);
libqt_string KIO__AuthInfo_RealmValue(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetRealmValue(KIO__AuthInfo* self, libqt_string realmValue);
libqt_string KIO__AuthInfo_DigestInfo(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetDigestInfo(KIO__AuthInfo* self, libqt_string digestInfo);
bool KIO__AuthInfo_VerifyPath(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetVerifyPath(KIO__AuthInfo* self, bool verifyPath);
bool KIO__AuthInfo_ReadOnly(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetReadOnly(KIO__AuthInfo* self, bool readOnly);
bool KIO__AuthInfo_KeepPassword(const KIO__AuthInfo* self);
void KIO__AuthInfo_SetKeepPassword(KIO__AuthInfo* self, bool keepPassword);
void KIO__AuthInfo_SetExtraField(KIO__AuthInfo* self, const libqt_string fieldName, const QVariant* value);
void KIO__AuthInfo_SetExtraFieldFlags(KIO__AuthInfo* self, const libqt_string fieldName, const int flags);
QVariant* KIO__AuthInfo_GetExtraField(const KIO__AuthInfo* self, const libqt_string fieldName);
int KIO__AuthInfo_GetExtraFieldFlags(const KIO__AuthInfo* self, const libqt_string fieldName);
void KIO__AuthInfo_RegisterMetaTypes();
void KIO__AuthInfo_Delete(KIO__AuthInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
