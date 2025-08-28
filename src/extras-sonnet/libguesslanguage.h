#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBGUESSLANGUAGE_H
#define SRC_EXTRAS_SONNETC_LIBGUESSLANGUAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__GuessLanguage)
typedef Sonnet::GuessLanguage Sonnet__GuessLanguage;
#endif
#else
typedef struct Sonnet__GuessLanguage Sonnet__GuessLanguage;
#endif

Sonnet__GuessLanguage* Sonnet__GuessLanguage_new();
void Sonnet__GuessLanguage_SetLimits(Sonnet__GuessLanguage* self, int maxItems, double minConfidence);
libqt_string Sonnet__GuessLanguage_Identify(const Sonnet__GuessLanguage* self, const libqt_string text);
libqt_string Sonnet__GuessLanguage_Identify2(const Sonnet__GuessLanguage* self, const libqt_string text, const libqt_list /* of libqt_string */ suggestions);
void Sonnet__GuessLanguage_Delete(Sonnet__GuessLanguage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
