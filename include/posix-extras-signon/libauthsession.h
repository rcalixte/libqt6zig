#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNONC_LIBAUTHSESSION_H
#define SRC_POSIX_EXTRAS_SIGNONC_LIBAUTHSESSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__AuthSession)
typedef SignOn::AuthSession SignOn__AuthSession;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__Error)
typedef SignOn::Error SignOn__Error;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__SessionData)
typedef SignOn::SessionData SignOn__SessionData;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct SignOn__AuthSession SignOn__AuthSession;
typedef struct SignOn__Error SignOn__Error;
typedef struct SignOn__SessionData SignOn__SessionData;
#endif

QMetaObject* SignOn__AuthSession_MetaObject(const SignOn__AuthSession* self);
void* SignOn__AuthSession_Metacast(SignOn__AuthSession* self, const char* param1);
int SignOn__AuthSession_Metacall(SignOn__AuthSession* self, int param1, int param2, void** param3);
libqt_string SignOn__AuthSession_Tr(const char* s);
libqt_string SignOn__AuthSession_Name(const SignOn__AuthSession* self);
void SignOn__AuthSession_QueryAvailableMechanisms(SignOn__AuthSession* self);
void SignOn__AuthSession_Process(SignOn__AuthSession* self, const SignOn__SessionData* sessionData);
void SignOn__AuthSession_Challenge(SignOn__AuthSession* self, const SignOn__SessionData* sessionData);
void SignOn__AuthSession_Request(SignOn__AuthSession* self, const SignOn__SessionData* sessionData);
void SignOn__AuthSession_Cancel(SignOn__AuthSession* self);
void SignOn__AuthSession_SignMessage(SignOn__AuthSession* self, const SignOn__SessionData* params);
void SignOn__AuthSession_Error(SignOn__AuthSession* self, const SignOn__Error* err);
void SignOn__AuthSession_Connect_Error(SignOn__AuthSession* self, intptr_t slot);
void SignOn__AuthSession_MechanismsAvailable(SignOn__AuthSession* self, const libqt_list /* of libqt_string */ mechanisms);
void SignOn__AuthSession_Connect_MechanismsAvailable(SignOn__AuthSession* self, intptr_t slot);
void SignOn__AuthSession_Response(SignOn__AuthSession* self, const SignOn__SessionData* sessionData);
void SignOn__AuthSession_Connect_Response(SignOn__AuthSession* self, intptr_t slot);
void SignOn__AuthSession_StateChanged(SignOn__AuthSession* self, int state, const libqt_string message);
void SignOn__AuthSession_Connect_StateChanged(SignOn__AuthSession* self, intptr_t slot);
libqt_string SignOn__AuthSession_Tr2(const char* s, const char* c);
libqt_string SignOn__AuthSession_Tr3(const char* s, const char* c, int n);
void SignOn__AuthSession_QueryAvailableMechanisms1(SignOn__AuthSession* self, const libqt_list /* of libqt_string */ wantedMechanisms);
void SignOn__AuthSession_Process2(SignOn__AuthSession* self, const SignOn__SessionData* sessionData, const libqt_string mechanism);
void SignOn__AuthSession_Challenge2(SignOn__AuthSession* self, const SignOn__SessionData* sessionData, const libqt_string mechanism);
void SignOn__AuthSession_Request2(SignOn__AuthSession* self, const SignOn__SessionData* sessionData, const libqt_string mechanism);
void SignOn__AuthSession_SignMessage2(SignOn__AuthSession* self, const SignOn__SessionData* params, const libqt_string mechanism);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
