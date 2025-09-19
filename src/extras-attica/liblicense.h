#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBLICENSE_H
#define SRC_EXTRAS_ATTICAC_LIBLICENSE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__License)
typedef Attica::License Attica__License;
#endif
#else
typedef struct Attica__License Attica__License;
typedef struct QUrl QUrl;
#endif

Attica__License* Attica__License_new();
Attica__License* Attica__License_new2(const Attica__License* other);
void Attica__License_OperatorAssign(Attica__License* self, const Attica__License* other);
unsigned int Attica__License_Id(const Attica__License* self);
void Attica__License_SetId(Attica__License* self, unsigned int id);
libqt_string Attica__License_Name(const Attica__License* self);
void Attica__License_SetName(Attica__License* self, const libqt_string name);
QUrl* Attica__License_Url(const Attica__License* self);
void Attica__License_SetUrl(Attica__License* self, const QUrl* url);
void Attica__License_Delete(Attica__License* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
