#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBREMOTEACCOUNT_H
#define SRC_EXTRAS_ATTICAC_LIBREMOTEACCOUNT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__RemoteAccount)
typedef Attica::RemoteAccount Attica__RemoteAccount;
#endif
#else
typedef struct Attica__RemoteAccount Attica__RemoteAccount;
#endif

Attica__RemoteAccount* Attica__RemoteAccount_new();
Attica__RemoteAccount* Attica__RemoteAccount_new2(const Attica__RemoteAccount* other);
void Attica__RemoteAccount_OperatorAssign(Attica__RemoteAccount* self, const Attica__RemoteAccount* other);
void Attica__RemoteAccount_SetId(Attica__RemoteAccount* self, const libqt_string id);
libqt_string Attica__RemoteAccount_Id(const Attica__RemoteAccount* self);
void Attica__RemoteAccount_SetType(Attica__RemoteAccount* self, const libqt_string typeVal);
libqt_string Attica__RemoteAccount_Type(const Attica__RemoteAccount* self);
void Attica__RemoteAccount_SetRemoteServiceId(Attica__RemoteAccount* self, const libqt_string remoteServiceId);
libqt_string Attica__RemoteAccount_RemoteServiceId(const Attica__RemoteAccount* self);
void Attica__RemoteAccount_SetData(Attica__RemoteAccount* self, const libqt_string data);
libqt_string Attica__RemoteAccount_Data(const Attica__RemoteAccount* self);
void Attica__RemoteAccount_SetLogin(Attica__RemoteAccount* self, const libqt_string login);
libqt_string Attica__RemoteAccount_Login(const Attica__RemoteAccount* self);
void Attica__RemoteAccount_SetPassword(Attica__RemoteAccount* self, const libqt_string password);
libqt_string Attica__RemoteAccount_Password(const Attica__RemoteAccount* self);
bool Attica__RemoteAccount_IsValid(const Attica__RemoteAccount* self);
void Attica__RemoteAccount_Delete(Attica__RemoteAccount* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
