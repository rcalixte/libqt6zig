#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNONC_LIBIDENTITYINFO_H
#define SRC_POSIX_EXTRAS_SIGNONC_LIBIDENTITYINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__IdentityInfo)
typedef SignOn::IdentityInfo SignOn__IdentityInfo;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__SecurityContext)
typedef SignOn::SecurityContext SignOn__SecurityContext;
#endif
#else
typedef struct SignOn__IdentityInfo SignOn__IdentityInfo;
typedef struct SignOn__SecurityContext SignOn__SecurityContext;
#endif

SignOn__IdentityInfo* SignOn__IdentityInfo_new();
SignOn__IdentityInfo* SignOn__IdentityInfo_new2(const SignOn__IdentityInfo* other);
SignOn__IdentityInfo* SignOn__IdentityInfo_new3(const libqt_string caption, const libqt_string userName, const libqt_map /* of libqt_string to SignOn::MechanismsList */ methods);
void SignOn__IdentityInfo_OperatorAssign(SignOn__IdentityInfo* self, const SignOn__IdentityInfo* other);
void SignOn__IdentityInfo_SetId(SignOn__IdentityInfo* self, const unsigned int id);
unsigned int SignOn__IdentityInfo_Id(const SignOn__IdentityInfo* self);
void SignOn__IdentityInfo_SetSecret(SignOn__IdentityInfo* self, const libqt_string secret);
libqt_string SignOn__IdentityInfo_Secret(const SignOn__IdentityInfo* self);
bool SignOn__IdentityInfo_IsStoringSecret(const SignOn__IdentityInfo* self);
void SignOn__IdentityInfo_SetStoreSecret(SignOn__IdentityInfo* self, const bool storeSecret);
void SignOn__IdentityInfo_SetUserName(SignOn__IdentityInfo* self, const libqt_string userName);
libqt_string SignOn__IdentityInfo_UserName(const SignOn__IdentityInfo* self);
void SignOn__IdentityInfo_SetCaption(SignOn__IdentityInfo* self, const libqt_string caption);
libqt_string SignOn__IdentityInfo_Caption(const SignOn__IdentityInfo* self);
void SignOn__IdentityInfo_SetRealms(SignOn__IdentityInfo* self, const libqt_list /* of libqt_string */ realms);
libqt_list /* of libqt_string */ SignOn__IdentityInfo_Realms(const SignOn__IdentityInfo* self);
void SignOn__IdentityInfo_SetOwner(SignOn__IdentityInfo* self, const libqt_string ownerToken);
libqt_string SignOn__IdentityInfo_Owner(const SignOn__IdentityInfo* self);
void SignOn__IdentityInfo_SetAccessControlList(SignOn__IdentityInfo* self, const libqt_list /* of libqt_string */ accessControlList);
void SignOn__IdentityInfo_SetAccessControlList2(SignOn__IdentityInfo* self, const libqt_list /* of SignOn__SecurityContext* */ accessControlList);
libqt_list /* of libqt_string */ SignOn__IdentityInfo_AccessControlList(const SignOn__IdentityInfo* self);
libqt_list /* of SignOn__SecurityContext* */ SignOn__IdentityInfo_AccessControlListFull(const SignOn__IdentityInfo* self);
void SignOn__IdentityInfo_SetMethod(SignOn__IdentityInfo* self, const libqt_string method, const libqt_list /* of libqt_string */ mechanismsList);
void SignOn__IdentityInfo_RemoveMethod(SignOn__IdentityInfo* self, const libqt_string method);
void SignOn__IdentityInfo_SetType(SignOn__IdentityInfo* self, int typeVal);
int SignOn__IdentityInfo_Type(const SignOn__IdentityInfo* self);
libqt_list /* of libqt_string */ SignOn__IdentityInfo_Methods(const SignOn__IdentityInfo* self);
libqt_list /* of libqt_string */ SignOn__IdentityInfo_Mechanisms(const SignOn__IdentityInfo* self, const libqt_string method);
void SignOn__IdentityInfo_SetRefCount(SignOn__IdentityInfo* self, int refCount);
int SignOn__IdentityInfo_RefCount(const SignOn__IdentityInfo* self);
void SignOn__IdentityInfo_SetSecret2(SignOn__IdentityInfo* self, const libqt_string secret, const bool storeSecret);
void SignOn__IdentityInfo_Delete(SignOn__IdentityInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
