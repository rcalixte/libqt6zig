#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBAUTHOR_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBAUTHOR_H

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
#else
typedef struct KNSCore__Author KNSCore__Author;
typedef struct QUrl QUrl;
#endif

KNSCore__Author* KNSCore__Author_new();
KNSCore__Author* KNSCore__Author_new2(const KNSCore__Author* other);
void KNSCore__Author_OperatorAssign(KNSCore__Author* self, const KNSCore__Author* other);
void KNSCore__Author_SetId(KNSCore__Author* self, const libqt_string id);
libqt_string KNSCore__Author_Id(const KNSCore__Author* self);
void KNSCore__Author_SetName(KNSCore__Author* self, const libqt_string name);
libqt_string KNSCore__Author_Name(const KNSCore__Author* self);
void KNSCore__Author_SetEmail(KNSCore__Author* self, const libqt_string email);
libqt_string KNSCore__Author_Email(const KNSCore__Author* self);
void KNSCore__Author_SetJabber(KNSCore__Author* self, const libqt_string jabber);
libqt_string KNSCore__Author_Jabber(const KNSCore__Author* self);
void KNSCore__Author_SetHomepage(KNSCore__Author* self, const libqt_string homepage);
libqt_string KNSCore__Author_Homepage(const KNSCore__Author* self);
void KNSCore__Author_SetProfilepage(KNSCore__Author* self, const libqt_string profilepage);
libqt_string KNSCore__Author_Profilepage(const KNSCore__Author* self);
void KNSCore__Author_SetAvatarUrl(KNSCore__Author* self, const QUrl* avatarUrl);
QUrl* KNSCore__Author_AvatarUrl(const KNSCore__Author* self);
libqt_string KNSCore__Author_Description(const KNSCore__Author* self);
void KNSCore__Author_SetDescription(KNSCore__Author* self, const libqt_string description);
void KNSCore__Author_Delete(KNSCore__Author* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
