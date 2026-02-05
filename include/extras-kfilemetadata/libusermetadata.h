#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBUSERMETADATA_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBUSERMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__UserMetaData)
typedef KFileMetaData::UserMetaData KFileMetaData__UserMetaData;
#endif
#else
typedef struct KFileMetaData__UserMetaData KFileMetaData__UserMetaData;
typedef struct QUrl QUrl;
#endif

KFileMetaData__UserMetaData* KFileMetaData__UserMetaData_new(const libqt_string filePath);
KFileMetaData__UserMetaData* KFileMetaData__UserMetaData_new2(const KFileMetaData__UserMetaData* rhs);
void KFileMetaData__UserMetaData_OperatorAssign(KFileMetaData__UserMetaData* self, const KFileMetaData__UserMetaData* rhs);
libqt_string KFileMetaData__UserMetaData_FilePath(const KFileMetaData__UserMetaData* self);
bool KFileMetaData__UserMetaData_IsSupported(const KFileMetaData__UserMetaData* self);
int KFileMetaData__UserMetaData_SetTags(KFileMetaData__UserMetaData* self, const libqt_list /* of libqt_string */ tags);
libqt_list /* of libqt_string */ KFileMetaData__UserMetaData_Tags(const KFileMetaData__UserMetaData* self);
int KFileMetaData__UserMetaData_Rating(const KFileMetaData__UserMetaData* self);
int KFileMetaData__UserMetaData_SetRating(KFileMetaData__UserMetaData* self, int rating);
libqt_string KFileMetaData__UserMetaData_UserComment(const KFileMetaData__UserMetaData* self);
int KFileMetaData__UserMetaData_SetUserComment(KFileMetaData__UserMetaData* self, const libqt_string userComment);
QUrl* KFileMetaData__UserMetaData_OriginUrl(const KFileMetaData__UserMetaData* self);
int KFileMetaData__UserMetaData_SetOriginUrl(KFileMetaData__UserMetaData* self, const QUrl* originUrl);
libqt_string KFileMetaData__UserMetaData_OriginEmailSubject(const KFileMetaData__UserMetaData* self);
int KFileMetaData__UserMetaData_SetOriginEmailSubject(KFileMetaData__UserMetaData* self, const libqt_string originEmailSubject);
libqt_string KFileMetaData__UserMetaData_OriginEmailSender(const KFileMetaData__UserMetaData* self);
int KFileMetaData__UserMetaData_SetOriginEmailSender(KFileMetaData__UserMetaData* self, const libqt_string originEmailSender);
libqt_string KFileMetaData__UserMetaData_OriginEmailMessageId(const KFileMetaData__UserMetaData* self);
int KFileMetaData__UserMetaData_SetOriginEmailMessageId(KFileMetaData__UserMetaData* self, const libqt_string originEmailMessageId);
libqt_string KFileMetaData__UserMetaData_Attribute(KFileMetaData__UserMetaData* self, const libqt_string name);
libqt_string KFileMetaData__UserMetaData_Attribute2(const KFileMetaData__UserMetaData* self, const libqt_string name);
int KFileMetaData__UserMetaData_SetAttribute(KFileMetaData__UserMetaData* self, const libqt_string name, const libqt_string value);
bool KFileMetaData__UserMetaData_HasAttribute(KFileMetaData__UserMetaData* self, const libqt_string name);
bool KFileMetaData__UserMetaData_HasAttribute2(const KFileMetaData__UserMetaData* self, const libqt_string name);
uint32_t KFileMetaData__UserMetaData_QueryAttributes(const KFileMetaData__UserMetaData* self);
uint32_t KFileMetaData__UserMetaData_QueryAttributes1(const KFileMetaData__UserMetaData* self, uint32_t attributes);
void KFileMetaData__UserMetaData_Delete(KFileMetaData__UserMetaData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
