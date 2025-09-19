#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBCOMMENT_H
#define SRC_EXTRAS_ATTICAC_LIBCOMMENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Comment)
typedef Attica::Comment Attica__Comment;
#endif
#else
typedef struct Attica__Comment Attica__Comment;
typedef struct QDateTime QDateTime;
#endif

Attica__Comment* Attica__Comment_new();
Attica__Comment* Attica__Comment_new2(const Attica__Comment* other);
libqt_string Attica__Comment_CommentTypeToString(const int typeVal);
void Attica__Comment_OperatorAssign(Attica__Comment* self, const Attica__Comment* other);
void Attica__Comment_SetId(Attica__Comment* self, const libqt_string id);
libqt_string Attica__Comment_Id(const Attica__Comment* self);
void Attica__Comment_SetSubject(Attica__Comment* self, const libqt_string subject);
libqt_string Attica__Comment_Subject(const Attica__Comment* self);
void Attica__Comment_SetText(Attica__Comment* self, const libqt_string text);
libqt_string Attica__Comment_Text(const Attica__Comment* self);
void Attica__Comment_SetChildCount(Attica__Comment* self, const int childCount);
int Attica__Comment_ChildCount(const Attica__Comment* self);
void Attica__Comment_SetUser(Attica__Comment* self, const libqt_string user);
libqt_string Attica__Comment_User(const Attica__Comment* self);
void Attica__Comment_SetDate(Attica__Comment* self, const QDateTime* date);
QDateTime* Attica__Comment_Date(const Attica__Comment* self);
void Attica__Comment_SetScore(Attica__Comment* self, const int score);
int Attica__Comment_Score(const Attica__Comment* self);
void Attica__Comment_SetChildren(Attica__Comment* self, libqt_list /* of Attica__Comment* */ comments);
libqt_list /* of Attica__Comment* */ Attica__Comment_Children(const Attica__Comment* self);
bool Attica__Comment_IsValid(const Attica__Comment* self);
void Attica__Comment_Delete(Attica__Comment* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
