#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBSERVICE_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Service)
typedef Accounts::Service Accounts__Service;
#endif
#else
typedef struct Accounts__Service Accounts__Service;
typedef struct QDomDocument QDomDocument;
#endif

Accounts__Service* Accounts__Service_new();
Accounts__Service* Accounts__Service_new2(const Accounts__Service* other);
void Accounts__Service_OperatorAssign(Accounts__Service* self, const Accounts__Service* other);
bool Accounts__Service_IsValid(const Accounts__Service* self);
libqt_string Accounts__Service_Name(const Accounts__Service* self);
libqt_string Accounts__Service_Description(const Accounts__Service* self);
libqt_string Accounts__Service_DisplayName(const Accounts__Service* self);
libqt_string Accounts__Service_TrCatalog(const Accounts__Service* self);
libqt_string Accounts__Service_ServiceType(const Accounts__Service* self);
libqt_string Accounts__Service_Provider(const Accounts__Service* self);
libqt_string Accounts__Service_IconName(const Accounts__Service* self);
bool Accounts__Service_HasTag(const Accounts__Service* self, const libqt_string tag);
libqt_list /* set of libqt_string */ Accounts__Service_Tags(const Accounts__Service* self);
QDomDocument* Accounts__Service_DomDocument(const Accounts__Service* self);
void Accounts__Service_Delete(Accounts__Service* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
