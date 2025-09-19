#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBCONFIG_H
#define SRC_EXTRAS_ATTICAC_LIBCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Config)
typedef Attica::Config Attica__Config;
#endif
#else
typedef struct Attica__Config Attica__Config;
#endif

Attica__Config* Attica__Config_new();
Attica__Config* Attica__Config_new2(const Attica__Config* other);
void Attica__Config_OperatorAssign(Attica__Config* self, const Attica__Config* other);
libqt_string Attica__Config_Contact(const Attica__Config* self);
libqt_string Attica__Config_Host(const Attica__Config* self);
libqt_string Attica__Config_Version(const Attica__Config* self);
bool Attica__Config_Ssl(const Attica__Config* self);
libqt_string Attica__Config_Website(const Attica__Config* self);
void Attica__Config_SetContact(Attica__Config* self, const libqt_string contact);
void Attica__Config_SetHost(Attica__Config* self, const libqt_string host);
void Attica__Config_SetSsl(Attica__Config* self, bool ssl);
void Attica__Config_SetVersion(Attica__Config* self, const libqt_string version);
void Attica__Config_SetWebsite(Attica__Config* self, const libqt_string website);
bool Attica__Config_IsValid(const Attica__Config* self);
void Attica__Config_Delete(Attica__Config* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
