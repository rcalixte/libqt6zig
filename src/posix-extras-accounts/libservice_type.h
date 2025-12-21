#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBSERVICE_TYPE_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBSERVICE_TYPE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__ServiceType)
typedef Accounts::ServiceType Accounts__ServiceType;
#endif
#else
typedef struct Accounts__ServiceType Accounts__ServiceType;
typedef struct QDomDocument QDomDocument;
#endif

Accounts__ServiceType* Accounts__ServiceType_new();
Accounts__ServiceType* Accounts__ServiceType_new2(const Accounts__ServiceType* other);
void Accounts__ServiceType_OperatorAssign(Accounts__ServiceType* self, const Accounts__ServiceType* other);
bool Accounts__ServiceType_IsValid(const Accounts__ServiceType* self);
libqt_string Accounts__ServiceType_Name(const Accounts__ServiceType* self);
libqt_string Accounts__ServiceType_Description(const Accounts__ServiceType* self);
libqt_string Accounts__ServiceType_DisplayName(const Accounts__ServiceType* self);
libqt_string Accounts__ServiceType_TrCatalog(const Accounts__ServiceType* self);
libqt_string Accounts__ServiceType_IconName(const Accounts__ServiceType* self);
bool Accounts__ServiceType_HasTag(const Accounts__ServiceType* self, const libqt_string tag);
libqt_list /* set of libqt_string */ Accounts__ServiceType_Tags(const Accounts__ServiceType* self);
QDomDocument* Accounts__ServiceType_DomDocument(const Accounts__ServiceType* self);
void Accounts__ServiceType_Delete(Accounts__ServiceType* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
