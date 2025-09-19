#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBACCOUNTBALANCE_H
#define SRC_EXTRAS_ATTICAC_LIBACCOUNTBALANCE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__AccountBalance)
typedef Attica::AccountBalance Attica__AccountBalance;
#endif
#else
typedef struct Attica__AccountBalance Attica__AccountBalance;
#endif

Attica__AccountBalance* Attica__AccountBalance_new();
Attica__AccountBalance* Attica__AccountBalance_new2(const Attica__AccountBalance* other);
void Attica__AccountBalance_OperatorAssign(Attica__AccountBalance* self, const Attica__AccountBalance* other);
void Attica__AccountBalance_SetCurrency(Attica__AccountBalance* self, const libqt_string currency);
libqt_string Attica__AccountBalance_Currency(const Attica__AccountBalance* self);
void Attica__AccountBalance_SetBalance(Attica__AccountBalance* self, const libqt_string name);
libqt_string Attica__AccountBalance_Balance(const Attica__AccountBalance* self);
void Attica__AccountBalance_Delete(Attica__AccountBalance* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
