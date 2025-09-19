#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBICON_H
#define SRC_EXTRAS_ATTICAC_LIBICON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Icon)
typedef Attica::Icon Attica__Icon;
#endif
#else
typedef struct Attica__Icon Attica__Icon;
typedef struct QUrl QUrl;
#endif

Attica__Icon* Attica__Icon_new();
Attica__Icon* Attica__Icon_new2(const Attica__Icon* other);
void Attica__Icon_OperatorAssign(Attica__Icon* self, const Attica__Icon* other);
QUrl* Attica__Icon_Url(const Attica__Icon* self);
void Attica__Icon_SetUrl(Attica__Icon* self, const QUrl* url);
unsigned int Attica__Icon_Width(const Attica__Icon* self);
void Attica__Icon_SetWidth(Attica__Icon* self, unsigned int width);
unsigned int Attica__Icon_Height(const Attica__Icon* self);
void Attica__Icon_SetHeight(Attica__Icon* self, unsigned int height);
void Attica__Icon_Delete(Attica__Icon* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
