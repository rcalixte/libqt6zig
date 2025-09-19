#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBMESSAGE_H
#define SRC_EXTRAS_ATTICAC_LIBMESSAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Message)
typedef Attica::Message Attica__Message;
#endif
#else
typedef struct Attica__Message Attica__Message;
typedef struct QDateTime QDateTime;
#endif

Attica__Message* Attica__Message_new();
Attica__Message* Attica__Message_new2(const Attica__Message* other);
void Attica__Message_OperatorAssign(Attica__Message* self, const Attica__Message* other);
void Attica__Message_SetId(Attica__Message* self, const libqt_string id);
libqt_string Attica__Message_Id(const Attica__Message* self);
void Attica__Message_SetFrom(Attica__Message* self, const libqt_string from);
libqt_string Attica__Message_From(const Attica__Message* self);
void Attica__Message_SetTo(Attica__Message* self, const libqt_string to);
libqt_string Attica__Message_To(const Attica__Message* self);
void Attica__Message_SetSent(Attica__Message* self, const QDateTime* sent);
QDateTime* Attica__Message_Sent(const Attica__Message* self);
void Attica__Message_SetStatus(Attica__Message* self, int status);
int Attica__Message_Status(const Attica__Message* self);
void Attica__Message_SetSubject(Attica__Message* self, const libqt_string subject);
libqt_string Attica__Message_Subject(const Attica__Message* self);
void Attica__Message_SetBody(Attica__Message* self, const libqt_string body);
libqt_string Attica__Message_Body(const Attica__Message* self);
bool Attica__Message_IsValid(const Attica__Message* self);
void Attica__Message_Delete(Attica__Message* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
