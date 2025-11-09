#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNONC_LIBSIGNONERROR_H
#define SRC_POSIX_EXTRAS_SIGNONC_LIBSIGNONERROR_H

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
#else
typedef struct SignOn__Error SignOn__Error;
#endif

SignOn__Error* SignOn__Error_new();
SignOn__Error* SignOn__Error_new2(const SignOn__Error* src);
SignOn__Error* SignOn__Error_new3(int typeVal);
SignOn__Error* SignOn__Error_new4(int typeVal, const libqt_string message);
void SignOn__Error_OperatorAssign(SignOn__Error* self, const SignOn__Error* src);
void SignOn__Error_SetType(SignOn__Error* self, int typeVal);
void SignOn__Error_SetMessage(SignOn__Error* self, const libqt_string message);
int SignOn__Error_Type(const SignOn__Error* self);
libqt_string SignOn__Error_Message(const SignOn__Error* self);
void SignOn__Error_Delete(SignOn__Error* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
