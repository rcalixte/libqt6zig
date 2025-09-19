#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBFORUM_H
#define SRC_EXTRAS_ATTICAC_LIBFORUM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Forum)
typedef Attica::Forum Attica__Forum;
#endif
#else
typedef struct Attica__Forum Attica__Forum;
typedef struct QDateTime QDateTime;
typedef struct QUrl QUrl;
#endif

Attica__Forum* Attica__Forum_new();
Attica__Forum* Attica__Forum_new2(const Attica__Forum* other);
void Attica__Forum_OperatorAssign(Attica__Forum* self, const Attica__Forum* other);
void Attica__Forum_SetId(Attica__Forum* self, const libqt_string id);
libqt_string Attica__Forum_Id(const Attica__Forum* self);
void Attica__Forum_SetName(Attica__Forum* self, const libqt_string name);
libqt_string Attica__Forum_Name(const Attica__Forum* self);
void Attica__Forum_SetDescription(Attica__Forum* self, const libqt_string description);
libqt_string Attica__Forum_Description(const Attica__Forum* self);
void Attica__Forum_SetDate(Attica__Forum* self, const QDateTime* date);
QDateTime* Attica__Forum_Date(const Attica__Forum* self);
void Attica__Forum_SetIcon(Attica__Forum* self, const QUrl* icon);
QUrl* Attica__Forum_Icon(const Attica__Forum* self);
void Attica__Forum_SetChildCount(Attica__Forum* self, const int childCount);
int Attica__Forum_ChildCount(const Attica__Forum* self);
void Attica__Forum_SetTopics(Attica__Forum* self, const int topics);
int Attica__Forum_Topics(const Attica__Forum* self);
void Attica__Forum_SetChildren(Attica__Forum* self, libqt_list /* of Attica__Forum* */ comments);
libqt_list /* of Attica__Forum* */ Attica__Forum_Children(const Attica__Forum* self);
bool Attica__Forum_IsValid(const Attica__Forum* self);
void Attica__Forum_Delete(Attica__Forum* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
