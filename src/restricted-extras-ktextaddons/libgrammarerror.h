#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBGRAMMARERROR_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBGRAMMARERROR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarError)
typedef TextGrammarCheck::GrammarError TextGrammarCheck__GrammarError;
#endif
#else
typedef struct QColor QColor;
typedef struct QJsonObject QJsonObject;
typedef struct TextGrammarCheck__GrammarError TextGrammarCheck__GrammarError;
#endif

TextGrammarCheck__GrammarError* TextGrammarCheck__GrammarError_new();
TextGrammarCheck__GrammarError* TextGrammarCheck__GrammarError_new2(const TextGrammarCheck__GrammarError* param1);
QColor* TextGrammarCheck__GrammarError_Color(const TextGrammarCheck__GrammarError* self);
void TextGrammarCheck__GrammarError_SetColor(TextGrammarCheck__GrammarError* self, const QColor* color);
libqt_string TextGrammarCheck__GrammarError_Error(const TextGrammarCheck__GrammarError* self);
void TextGrammarCheck__GrammarError_SetError(TextGrammarCheck__GrammarError* self, const libqt_string errorVal);
int TextGrammarCheck__GrammarError_BlockId(const TextGrammarCheck__GrammarError* self);
void TextGrammarCheck__GrammarError_SetBlockId(TextGrammarCheck__GrammarError* self, int blockId);
int TextGrammarCheck__GrammarError_Start(const TextGrammarCheck__GrammarError* self);
void TextGrammarCheck__GrammarError_SetStart(TextGrammarCheck__GrammarError* self, int start);
int TextGrammarCheck__GrammarError_Length(const TextGrammarCheck__GrammarError* self);
void TextGrammarCheck__GrammarError_SetLength(TextGrammarCheck__GrammarError* self, int length);
libqt_list /* of libqt_string */ TextGrammarCheck__GrammarError_Suggestions(const TextGrammarCheck__GrammarError* self);
void TextGrammarCheck__GrammarError_SetSuggestions(TextGrammarCheck__GrammarError* self, const libqt_list /* of libqt_string */ suggestions);
bool TextGrammarCheck__GrammarError_IsValid(const TextGrammarCheck__GrammarError* self);
void TextGrammarCheck__GrammarError_Parse(TextGrammarCheck__GrammarError* self, const QJsonObject* obj, int blockindex);
bool TextGrammarCheck__GrammarError_OperatorEqual(const TextGrammarCheck__GrammarError* self, const TextGrammarCheck__GrammarError* other);
libqt_string TextGrammarCheck__GrammarError_Option(const TextGrammarCheck__GrammarError* self);
void TextGrammarCheck__GrammarError_SetOption(TextGrammarCheck__GrammarError* self, const libqt_string option);
libqt_string TextGrammarCheck__GrammarError_Rule(const TextGrammarCheck__GrammarError* self);
void TextGrammarCheck__GrammarError_SetRule(TextGrammarCheck__GrammarError* self, const libqt_string rule);
libqt_string TextGrammarCheck__GrammarError_Url(const TextGrammarCheck__GrammarError* self);
void TextGrammarCheck__GrammarError_SetUrl(TextGrammarCheck__GrammarError* self, const libqt_string url);
void TextGrammarCheck__GrammarError_OnParse(TextGrammarCheck__GrammarError* self, intptr_t slot);
void TextGrammarCheck__GrammarError_SuperParse(TextGrammarCheck__GrammarError* self, const QJsonObject* obj, int blockindex);
void TextGrammarCheck__GrammarError_OperatorAssign(TextGrammarCheck__GrammarError* self, const TextGrammarCheck__GrammarError* param1);
void TextGrammarCheck__GrammarError_OnOperatorAssign(TextGrammarCheck__GrammarError* self, intptr_t slot);
void TextGrammarCheck__GrammarError_SuperOperatorAssign(TextGrammarCheck__GrammarError* self, const TextGrammarCheck__GrammarError* param1);
void TextGrammarCheck__GrammarError_Delete(TextGrammarCheck__GrammarError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
