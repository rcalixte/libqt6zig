#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBERROR_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBERROR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Error)
typedef Accounts::Error Accounts__Error;
#endif
#else
typedef struct Accounts__Error Accounts__Error;
#endif

Accounts__Error* Accounts__Error_new();
Accounts__Error* Accounts__Error_new2(const Accounts__Error* src);
Accounts__Error* Accounts__Error_new3(int typeVal);
Accounts__Error* Accounts__Error_new4(int typeVal, const libqt_string message);
void Accounts__Error_OperatorAssign(Accounts__Error* self, const Accounts__Error* src);
int Accounts__Error_Type(const Accounts__Error* self);
libqt_string Accounts__Error_Message(const Accounts__Error* self);
void Accounts__Error_Delete(Accounts__Error* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
