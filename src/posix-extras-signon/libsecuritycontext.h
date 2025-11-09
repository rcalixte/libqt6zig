#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNONC_LIBSECURITYCONTEXT_H
#define SRC_POSIX_EXTRAS_SIGNONC_LIBSECURITYCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_SignOn__SecurityContext)
typedef SignOn::SecurityContext SignOn__SecurityContext;
#endif
#else
typedef struct SignOn__SecurityContext SignOn__SecurityContext;
#endif

SignOn__SecurityContext* SignOn__SecurityContext_new();
SignOn__SecurityContext* SignOn__SecurityContext_new2(const libqt_string systemContext, const libqt_string applicationContext);
SignOn__SecurityContext* SignOn__SecurityContext_new3(const SignOn__SecurityContext* param1);
void SignOn__SecurityContext_SetSystemContext(SignOn__SecurityContext* self, const libqt_string systemContext);
libqt_string SignOn__SecurityContext_SystemContext(const SignOn__SecurityContext* self);
void SignOn__SecurityContext_SetApplicationContext(SignOn__SecurityContext* self, const libqt_string applicationContext);
libqt_string SignOn__SecurityContext_ApplicationContext(const SignOn__SecurityContext* self);
void SignOn__SecurityContext_Delete(SignOn__SecurityContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
