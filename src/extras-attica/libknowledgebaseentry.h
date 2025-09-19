#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBKNOWLEDGEBASEENTRY_H
#define SRC_EXTRAS_ATTICAC_LIBKNOWLEDGEBASEENTRY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__KnowledgeBaseEntry)
typedef Attica::KnowledgeBaseEntry Attica__KnowledgeBaseEntry;
#endif
#else
typedef struct Attica__KnowledgeBaseEntry Attica__KnowledgeBaseEntry;
typedef struct QDateTime QDateTime;
typedef struct QUrl QUrl;
#endif

Attica__KnowledgeBaseEntry* Attica__KnowledgeBaseEntry_new();
Attica__KnowledgeBaseEntry* Attica__KnowledgeBaseEntry_new2(const Attica__KnowledgeBaseEntry* other);
void Attica__KnowledgeBaseEntry_OperatorAssign(Attica__KnowledgeBaseEntry* self, const Attica__KnowledgeBaseEntry* other);
void Attica__KnowledgeBaseEntry_SetId(Attica__KnowledgeBaseEntry* self, libqt_string id);
libqt_string Attica__KnowledgeBaseEntry_Id(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_SetContentId(Attica__KnowledgeBaseEntry* self, int id);
int Attica__KnowledgeBaseEntry_ContentId(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_SetUser(Attica__KnowledgeBaseEntry* self, const libqt_string user);
libqt_string Attica__KnowledgeBaseEntry_User(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_SetStatus(Attica__KnowledgeBaseEntry* self, const libqt_string status);
libqt_string Attica__KnowledgeBaseEntry_Status(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_SetChanged(Attica__KnowledgeBaseEntry* self, const QDateTime* changed);
QDateTime* Attica__KnowledgeBaseEntry_Changed(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_SetName(Attica__KnowledgeBaseEntry* self, const libqt_string name);
libqt_string Attica__KnowledgeBaseEntry_Name(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_SetDescription(Attica__KnowledgeBaseEntry* self, const libqt_string description);
libqt_string Attica__KnowledgeBaseEntry_Description(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_SetAnswer(Attica__KnowledgeBaseEntry* self, const libqt_string answer);
libqt_string Attica__KnowledgeBaseEntry_Answer(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_SetComments(Attica__KnowledgeBaseEntry* self, int comments);
int Attica__KnowledgeBaseEntry_Comments(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_SetDetailPage(Attica__KnowledgeBaseEntry* self, const QUrl* detailPage);
QUrl* Attica__KnowledgeBaseEntry_DetailPage(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_AddExtendedAttribute(Attica__KnowledgeBaseEntry* self, const libqt_string key, const libqt_string value);
libqt_string Attica__KnowledgeBaseEntry_ExtendedAttribute(const Attica__KnowledgeBaseEntry* self, const libqt_string key);
libqt_map /* of libqt_string to libqt_string */ Attica__KnowledgeBaseEntry_ExtendedAttributes(const Attica__KnowledgeBaseEntry* self);
bool Attica__KnowledgeBaseEntry_IsValid(const Attica__KnowledgeBaseEntry* self);
void Attica__KnowledgeBaseEntry_Delete(Attica__KnowledgeBaseEntry* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
