#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBAUTH_DATA_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBAUTH_DATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__AuthData)
typedef Accounts::AuthData Accounts__AuthData;
#endif
#else
typedef struct Accounts__AuthData Accounts__AuthData;
typedef struct QVariant QVariant;
#endif

Accounts__AuthData* Accounts__AuthData_new(const Accounts__AuthData* other);
unsigned int Accounts__AuthData_CredentialsId(const Accounts__AuthData* self);
libqt_string Accounts__AuthData_Method(const Accounts__AuthData* self);
libqt_string Accounts__AuthData_Mechanism(const Accounts__AuthData* self);
libqt_map /* of libqt_string to QVariant* */ Accounts__AuthData_Parameters(const Accounts__AuthData* self);
void Accounts__AuthData_Delete(Accounts__AuthData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
