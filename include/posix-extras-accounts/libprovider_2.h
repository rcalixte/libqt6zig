#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBPROVIDER_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef Accounts::Provider Accounts__Provider;
#else
typedef struct Accounts__Provider Accounts__Provider;
typedef struct QDomDocument QDomDocument;
#endif

Accounts__Provider* Accounts__Provider_new();
Accounts__Provider* Accounts__Provider_new2(const Accounts__Provider* other);
void Accounts__Provider_OperatorAssign(Accounts__Provider* self, const Accounts__Provider* other);
bool Accounts__Provider_IsValid(const Accounts__Provider* self);
libqt_string Accounts__Provider_Name(const Accounts__Provider* self);
libqt_string Accounts__Provider_DisplayName(const Accounts__Provider* self);
libqt_string Accounts__Provider_Description(const Accounts__Provider* self);
libqt_string Accounts__Provider_PluginName(const Accounts__Provider* self);
libqt_string Accounts__Provider_TrCatalog(const Accounts__Provider* self);
libqt_string Accounts__Provider_IconName(const Accounts__Provider* self);
libqt_string Accounts__Provider_DomainsRegExp(const Accounts__Provider* self);
bool Accounts__Provider_IsSingleAccount(const Accounts__Provider* self);
bool Accounts__Provider_HasTag(const Accounts__Provider* self, const libqt_string tag);
libqt_list /* set of libqt_string */ Accounts__Provider_Tags(const Accounts__Provider* self);
QDomDocument* Accounts__Provider_DomDocument(const Accounts__Provider* self);
void Accounts__Provider_Delete(Accounts__Provider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
