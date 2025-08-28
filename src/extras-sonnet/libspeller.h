#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBSPELLER_H
#define SRC_EXTRAS_SONNETC_LIBSPELLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Speller)
typedef Sonnet::Speller Sonnet__Speller;
#endif
#else
typedef struct Sonnet__Speller Sonnet__Speller;
#endif

Sonnet__Speller* Sonnet__Speller_new();
Sonnet__Speller* Sonnet__Speller_new2(const Sonnet__Speller* speller);
Sonnet__Speller* Sonnet__Speller_new3(const libqt_string lang);
void Sonnet__Speller_OperatorAssign(Sonnet__Speller* self, const Sonnet__Speller* speller);
bool Sonnet__Speller_IsValid(const Sonnet__Speller* self);
void Sonnet__Speller_SetLanguage(Sonnet__Speller* self, const libqt_string lang);
libqt_string Sonnet__Speller_Language(const Sonnet__Speller* self);
bool Sonnet__Speller_IsCorrect(const Sonnet__Speller* self, const libqt_string word);
bool Sonnet__Speller_IsMisspelled(const Sonnet__Speller* self, const libqt_string word);
libqt_list /* of libqt_string */ Sonnet__Speller_Suggest(const Sonnet__Speller* self, const libqt_string word);
bool Sonnet__Speller_CheckAndSuggest(const Sonnet__Speller* self, const libqt_string word, libqt_list /* of libqt_string */ suggestions);
bool Sonnet__Speller_StoreReplacement(Sonnet__Speller* self, const libqt_string bad, const libqt_string good);
bool Sonnet__Speller_AddToPersonal(Sonnet__Speller* self, const libqt_string word);
bool Sonnet__Speller_AddToSession(Sonnet__Speller* self, const libqt_string word);
void Sonnet__Speller_Save(Sonnet__Speller* self);
void Sonnet__Speller_Restore(Sonnet__Speller* self);
libqt_list /* of libqt_string */ Sonnet__Speller_AvailableBackends(const Sonnet__Speller* self);
libqt_list /* of libqt_string */ Sonnet__Speller_AvailableLanguages(const Sonnet__Speller* self);
libqt_list /* of libqt_string */ Sonnet__Speller_AvailableLanguageNames(const Sonnet__Speller* self);
libqt_map /* of libqt_string to libqt_string */ Sonnet__Speller_AvailableDictionaries(const Sonnet__Speller* self);
libqt_map /* of libqt_string to libqt_string */ Sonnet__Speller_PreferredDictionaries(const Sonnet__Speller* self);
void Sonnet__Speller_SetDefaultLanguage(Sonnet__Speller* self, const libqt_string lang);
libqt_string Sonnet__Speller_DefaultLanguage(const Sonnet__Speller* self);
void Sonnet__Speller_SetDefaultClient(Sonnet__Speller* self, const libqt_string client);
libqt_string Sonnet__Speller_DefaultClient(const Sonnet__Speller* self);
void Sonnet__Speller_SetAttribute(Sonnet__Speller* self, int attr);
bool Sonnet__Speller_TestAttribute(const Sonnet__Speller* self, int attr);
void Sonnet__Speller_SetAttribute2(Sonnet__Speller* self, int attr, bool b);
void Sonnet__Speller_Delete(Sonnet__Speller* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
