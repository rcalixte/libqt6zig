#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBKUITSETUP_H
#define SRC_EXTRAS_KI18NC_LIBKUITSETUP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLocalizedString KLocalizedString;
typedef struct Kuit Kuit;
typedef struct KuitSetup KuitSetup;
#endif

KuitSetup* Kuit_SetupForDomain(const libqt_string param1);

void KuitSetup_SetTagPattern(KuitSetup* self, const libqt_string tagName, const libqt_list /* of libqt_string */ attribNames, int format, const KLocalizedString* pattern);
void KuitSetup_SetTagClass(KuitSetup* self, const libqt_string tagName, int aClass);
void KuitSetup_SetFormatForMarker(KuitSetup* self, const libqt_string marker, int format);
void KuitSetup_Delete(KuitSetup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
