#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBACTIVITY_H
#define SRC_EXTRAS_ATTICAC_LIBACTIVITY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Activity)
typedef Attica::Activity Attica__Activity;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Person)
typedef Attica::Person Attica__Person;
#endif
#else
typedef struct Attica__Activity Attica__Activity;
typedef struct Attica__Person Attica__Person;
typedef struct QDateTime QDateTime;
typedef struct QUrl QUrl;
#endif

Attica__Activity* Attica__Activity_new();
Attica__Activity* Attica__Activity_new2(const Attica__Activity* other);
void Attica__Activity_OperatorAssign(Attica__Activity* self, const Attica__Activity* other);
void Attica__Activity_SetId(Attica__Activity* self, const libqt_string id);
libqt_string Attica__Activity_Id(const Attica__Activity* self);
void Attica__Activity_SetAssociatedPerson(Attica__Activity* self, const Attica__Person* associatedPerson);
Attica__Person* Attica__Activity_AssociatedPerson(const Attica__Activity* self);
void Attica__Activity_SetTimestamp(Attica__Activity* self, const QDateTime* timestamp);
QDateTime* Attica__Activity_Timestamp(const Attica__Activity* self);
void Attica__Activity_SetMessage(Attica__Activity* self, const libqt_string message);
libqt_string Attica__Activity_Message(const Attica__Activity* self);
void Attica__Activity_SetLink(Attica__Activity* self, const QUrl* link);
QUrl* Attica__Activity_Link(const Attica__Activity* self);
bool Attica__Activity_IsValid(const Attica__Activity* self);
void Attica__Activity_Delete(Attica__Activity* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
