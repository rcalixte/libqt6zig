#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNONC_LIBSESSIONDATA_H
#define SRC_POSIX_EXTRAS_SIGNONC_LIBSESSIONDATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__SessionData)
typedef SignOn::SessionData SignOn__SessionData;
#endif
#else
typedef struct QVariant QVariant;
typedef struct SignOn__SessionData SignOn__SessionData;
#endif

SignOn__SessionData* SignOn__SessionData_new();
SignOn__SessionData* SignOn__SessionData_new2(const SignOn__SessionData* other);
SignOn__SessionData* SignOn__SessionData_new3(const libqt_map /* of libqt_string to QVariant* */ data);
void SignOn__SessionData_OperatorAssign(SignOn__SessionData* self, const SignOn__SessionData* other);
SignOn__SessionData* SignOn__SessionData_OperatorPlusAssign(SignOn__SessionData* self, const SignOn__SessionData* other);
libqt_list /* of libqt_string */ SignOn__SessionData_PropertyNames(const SignOn__SessionData* self);
QVariant* SignOn__SessionData_GetProperty(const SignOn__SessionData* self, const libqt_string propertyName);
libqt_list /* of libqt_string */ SignOn__SessionData_GetAccessControlTokens(const SignOn__SessionData* self);
libqt_map /* of libqt_string to QVariant* */ SignOn__SessionData_ToMap(const SignOn__SessionData* self);
void SignOn__SessionData_SetSecret(SignOn__SessionData* self, const libqt_string value);
libqt_string SignOn__SessionData_Secret(const SignOn__SessionData* self);
void SignOn__SessionData_SetUserName(SignOn__SessionData* self, const libqt_string value);
libqt_string SignOn__SessionData_UserName(const SignOn__SessionData* self);
void SignOn__SessionData_SetRealm(SignOn__SessionData* self, const libqt_string value);
libqt_string SignOn__SessionData_Realm(const SignOn__SessionData* self);
void SignOn__SessionData_SetNetworkProxy(SignOn__SessionData* self, const libqt_string value);
libqt_string SignOn__SessionData_NetworkProxy(const SignOn__SessionData* self);
void SignOn__SessionData_SetUiPolicy(SignOn__SessionData* self, const int* value);
int SignOn__SessionData_UiPolicy(const SignOn__SessionData* self);
void SignOn__SessionData_SetCaption(SignOn__SessionData* self, const libqt_string value);
libqt_string SignOn__SessionData_Caption(const SignOn__SessionData* self);
void SignOn__SessionData_SetNetworkTimeout(SignOn__SessionData* self, const unsigned int* value);
unsigned int SignOn__SessionData_NetworkTimeout(const SignOn__SessionData* self);
void SignOn__SessionData_SetWindowId(SignOn__SessionData* self, const unsigned int* value);
unsigned int SignOn__SessionData_WindowId(const SignOn__SessionData* self);
void SignOn__SessionData_SetRenewToken(SignOn__SessionData* self, const bool* value);
bool SignOn__SessionData_RenewToken(const SignOn__SessionData* self);
void SignOn__SessionData_Delete(SignOn__SessionData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
