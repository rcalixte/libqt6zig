#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBGRAMMARACTION_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBGRAMMARACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarAction)
typedef TextGrammarCheck::GrammarAction TextGrammarCheck__GrammarAction;
#endif
#else
typedef struct TextGrammarCheck__GrammarAction TextGrammarCheck__GrammarAction;
#endif

TextGrammarCheck__GrammarAction* TextGrammarCheck__GrammarAction_new();
TextGrammarCheck__GrammarAction* TextGrammarCheck__GrammarAction_new2(const TextGrammarCheck__GrammarAction* param1);
libqt_string TextGrammarCheck__GrammarAction_Replacement(const TextGrammarCheck__GrammarAction* self);
void TextGrammarCheck__GrammarAction_SetReplacement(TextGrammarCheck__GrammarAction* self, const libqt_string replacement);
int TextGrammarCheck__GrammarAction_Start(const TextGrammarCheck__GrammarAction* self);
void TextGrammarCheck__GrammarAction_SetStart(TextGrammarCheck__GrammarAction* self, int start);
int TextGrammarCheck__GrammarAction_Length(const TextGrammarCheck__GrammarAction* self);
void TextGrammarCheck__GrammarAction_SetLength(TextGrammarCheck__GrammarAction* self, int length);
libqt_list /* of libqt_string */ TextGrammarCheck__GrammarAction_Suggestions(const TextGrammarCheck__GrammarAction* self);
void TextGrammarCheck__GrammarAction_SetSuggestions(TextGrammarCheck__GrammarAction* self, const libqt_list /* of libqt_string */ suggestions);
int TextGrammarCheck__GrammarAction_BlockId(const TextGrammarCheck__GrammarAction* self);
void TextGrammarCheck__GrammarAction_SetBlockId(TextGrammarCheck__GrammarAction* self, int blockId);
libqt_list /* of libqt_string */ TextGrammarCheck__GrammarAction_InfoUrls(const TextGrammarCheck__GrammarAction* self);
void TextGrammarCheck__GrammarAction_SetInfoUrls(TextGrammarCheck__GrammarAction* self, const libqt_list /* of libqt_string */ urls);
void TextGrammarCheck__GrammarAction_Delete(TextGrammarCheck__GrammarAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
