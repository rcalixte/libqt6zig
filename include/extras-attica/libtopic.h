#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBTOPIC_H
#define SRC_EXTRAS_ATTICAC_LIBTOPIC_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Topic)
typedef Attica::Topic Attica__Topic;
#endif
#else
typedef struct Attica__Topic Attica__Topic;
typedef struct QDateTime QDateTime;
#endif

Attica__Topic* Attica__Topic_new();
Attica__Topic* Attica__Topic_new2(const Attica__Topic* other);
void Attica__Topic_OperatorAssign(Attica__Topic* self, const Attica__Topic* other);
void Attica__Topic_SetId(Attica__Topic* self, const libqt_string id);
libqt_string Attica__Topic_Id(const Attica__Topic* self);
void Attica__Topic_SetForumId(Attica__Topic* self, const libqt_string forumId);
libqt_string Attica__Topic_ForumId(const Attica__Topic* self);
void Attica__Topic_SetUser(Attica__Topic* self, const libqt_string user);
libqt_string Attica__Topic_User(const Attica__Topic* self);
void Attica__Topic_SetDate(Attica__Topic* self, const QDateTime* date);
QDateTime* Attica__Topic_Date(const Attica__Topic* self);
void Attica__Topic_SetSubject(Attica__Topic* self, const libqt_string subject);
libqt_string Attica__Topic_Subject(const Attica__Topic* self);
void Attica__Topic_SetContent(Attica__Topic* self, const libqt_string content);
libqt_string Attica__Topic_Content(const Attica__Topic* self);
void Attica__Topic_SetComments(Attica__Topic* self, const int comments);
int Attica__Topic_Comments(const Attica__Topic* self);
bool Attica__Topic_IsValid(const Attica__Topic* self);
void Attica__Topic_Delete(Attica__Topic* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
