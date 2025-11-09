#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNONC_LIBIDENTITY_H
#define SRC_POSIX_EXTRAS_SIGNONC_LIBIDENTITY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__Error)
typedef SignOn::Error SignOn__Error;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__Identity)
typedef SignOn::Identity SignOn__Identity;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__IdentityInfo)
typedef SignOn::IdentityInfo SignOn__IdentityInfo;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct SignOn__Error SignOn__Error;
typedef struct SignOn__Identity SignOn__Identity;
typedef struct SignOn__IdentityInfo SignOn__IdentityInfo;
#endif

QMetaObject* SignOn__Identity_MetaObject(const SignOn__Identity* self);
void* SignOn__Identity_Metacast(SignOn__Identity* self, const char* param1);
int SignOn__Identity_Metacall(SignOn__Identity* self, int param1, int param2, void** param3);
libqt_string SignOn__Identity_Tr(const char* s);
SignOn__Identity* SignOn__Identity_NewIdentity();
SignOn__Identity* SignOn__Identity_ExistingIdentity(const unsigned int id);
unsigned int SignOn__Identity_Id(const SignOn__Identity* self);
void SignOn__Identity_QueryAvailableMethods(SignOn__Identity* self);
void SignOn__Identity_RequestCredentialsUpdate(SignOn__Identity* self);
void SignOn__Identity_StoreCredentials(SignOn__Identity* self);
void SignOn__Identity_Remove(SignOn__Identity* self);
void SignOn__Identity_AddReference(SignOn__Identity* self);
void SignOn__Identity_RemoveReference(SignOn__Identity* self);
void SignOn__Identity_QueryInfo(SignOn__Identity* self);
void SignOn__Identity_VerifyUser(SignOn__Identity* self);
void SignOn__Identity_VerifyUser2(SignOn__Identity* self, const libqt_map /* of libqt_string to QVariant* */ params);
void SignOn__Identity_VerifySecret(SignOn__Identity* self, const libqt_string secret);
void SignOn__Identity_SignOut(SignOn__Identity* self);
void SignOn__Identity_Error(SignOn__Identity* self, const SignOn__Error* err);
void SignOn__Identity_Connect_Error(SignOn__Identity* self, intptr_t slot);
void SignOn__Identity_MethodsAvailable(SignOn__Identity* self, const libqt_list /* of libqt_string */ methods);
void SignOn__Identity_Connect_MethodsAvailable(SignOn__Identity* self, intptr_t slot);
void SignOn__Identity_CredentialsStored(SignOn__Identity* self, const unsigned int id);
void SignOn__Identity_Connect_CredentialsStored(SignOn__Identity* self, intptr_t slot);
void SignOn__Identity_ReferenceAdded(SignOn__Identity* self);
void SignOn__Identity_Connect_ReferenceAdded(SignOn__Identity* self, intptr_t slot);
void SignOn__Identity_ReferenceRemoved(SignOn__Identity* self);
void SignOn__Identity_Connect_ReferenceRemoved(SignOn__Identity* self, intptr_t slot);
void SignOn__Identity_Info(SignOn__Identity* self, const SignOn__IdentityInfo* info);
void SignOn__Identity_Connect_Info(SignOn__Identity* self, intptr_t slot);
void SignOn__Identity_UserVerified(SignOn__Identity* self, const bool valid);
void SignOn__Identity_Connect_UserVerified(SignOn__Identity* self, intptr_t slot);
void SignOn__Identity_SecretVerified(SignOn__Identity* self, const bool valid);
void SignOn__Identity_Connect_SecretVerified(SignOn__Identity* self, intptr_t slot);
void SignOn__Identity_SignedOut(SignOn__Identity* self);
void SignOn__Identity_Connect_SignedOut(SignOn__Identity* self, intptr_t slot);
void SignOn__Identity_Removed(SignOn__Identity* self);
void SignOn__Identity_Connect_Removed(SignOn__Identity* self, intptr_t slot);
libqt_string SignOn__Identity_Tr2(const char* s, const char* c);
libqt_string SignOn__Identity_Tr3(const char* s, const char* c, int n);
SignOn__Identity* SignOn__Identity_NewIdentity1(const SignOn__IdentityInfo* info);
SignOn__Identity* SignOn__Identity_NewIdentity2(const SignOn__IdentityInfo* info, QObject* parent);
SignOn__Identity* SignOn__Identity_ExistingIdentity2(const unsigned int id, QObject* parent);
void SignOn__Identity_RequestCredentialsUpdate1(SignOn__Identity* self, const libqt_string message);
void SignOn__Identity_StoreCredentials1(SignOn__Identity* self, const SignOn__IdentityInfo* info);
void SignOn__Identity_AddReference1(SignOn__Identity* self, const libqt_string reference);
void SignOn__Identity_RemoveReference1(SignOn__Identity* self, const libqt_string reference);
void SignOn__Identity_VerifyUser1(SignOn__Identity* self, const libqt_string message);
void SignOn__Identity_Delete(SignOn__Identity* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
