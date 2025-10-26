#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBAPPLICATION_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef Accounts::Application Accounts__Application;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Service)
typedef Accounts::Service Accounts__Service;
#endif
#else
typedef struct Accounts__Application Accounts__Application;
typedef struct Accounts__Service Accounts__Service;
#endif

Accounts__Application* Accounts__Application_new();
Accounts__Application* Accounts__Application_new2(const Accounts__Application* other);
void Accounts__Application_OperatorAssign(Accounts__Application* self, const Accounts__Application* other);
bool Accounts__Application_IsValid(const Accounts__Application* self);
libqt_string Accounts__Application_Name(const Accounts__Application* self);
libqt_string Accounts__Application_DisplayName(const Accounts__Application* self);
libqt_string Accounts__Application_Description(const Accounts__Application* self);
libqt_string Accounts__Application_IconName(const Accounts__Application* self);
libqt_string Accounts__Application_DesktopFilePath(const Accounts__Application* self);
libqt_string Accounts__Application_TrCatalog(const Accounts__Application* self);
bool Accounts__Application_SupportsService(const Accounts__Application* self, const Accounts__Service* service);
libqt_string Accounts__Application_ServiceUsage(const Accounts__Application* self, const Accounts__Service* service);
void Accounts__Application_Delete(Accounts__Application* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
