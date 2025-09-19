#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBHOMEPAGEENTRY_H
#define SRC_EXTRAS_ATTICAC_LIBHOMEPAGEENTRY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__HomePageEntry)
typedef Attica::HomePageEntry Attica__HomePageEntry;
#endif
#else
typedef struct Attica__HomePageEntry Attica__HomePageEntry;
typedef struct QUrl QUrl;
#endif

Attica__HomePageEntry* Attica__HomePageEntry_new();
Attica__HomePageEntry* Attica__HomePageEntry_new2(const Attica__HomePageEntry* other);
void Attica__HomePageEntry_OperatorAssign(Attica__HomePageEntry* self, const Attica__HomePageEntry* other);
libqt_string Attica__HomePageEntry_Type(const Attica__HomePageEntry* self);
void Attica__HomePageEntry_SetType(Attica__HomePageEntry* self, const libqt_string typeVal);
QUrl* Attica__HomePageEntry_Url(const Attica__HomePageEntry* self);
void Attica__HomePageEntry_SetUrl(Attica__HomePageEntry* self, const QUrl* url);
void Attica__HomePageEntry_Delete(Attica__HomePageEntry* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
