#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBSTYLESELECTOR_H
#define EXTRAS_KIRIGAMI_LIBSTYLESELECTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__StyleSelector)
typedef Kirigami::Platform::StyleSelector Kirigami__Platform__StyleSelector;
#endif
#else
typedef struct Kirigami__Platform__StyleSelector Kirigami__Platform__StyleSelector;
typedef struct QUrl QUrl;
#endif

Kirigami__Platform__StyleSelector* Kirigami__Platform__StyleSelector_new(const Kirigami__Platform__StyleSelector* other);
Kirigami__Platform__StyleSelector* Kirigami__Platform__StyleSelector_new2(Kirigami__Platform__StyleSelector* other);
void Kirigami__Platform__StyleSelector_CopyAssign(Kirigami__Platform__StyleSelector* self, Kirigami__Platform__StyleSelector* other);
void Kirigami__Platform__StyleSelector_MoveAssign(Kirigami__Platform__StyleSelector* self, Kirigami__Platform__StyleSelector* other);
libqt_string Kirigami__Platform__StyleSelector_Style();
libqt_list /* of libqt_string */ Kirigami__Platform__StyleSelector_StyleChain();
QUrl* Kirigami__Platform__StyleSelector_ComponentUrl(const libqt_string fileName);
void Kirigami__Platform__StyleSelector_SetBaseUrl(const QUrl* baseUrl);
libqt_string Kirigami__Platform__StyleSelector_ResolveFilePath(const libqt_string path);
libqt_string Kirigami__Platform__StyleSelector_ResolveFileUrl(const libqt_string path);
void Kirigami__Platform__StyleSelector_Delete(Kirigami__Platform__StyleSelector* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
