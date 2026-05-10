#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBUNICODEEMOTICON_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBUNICODEEMOTICON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticon)
typedef TextEmoticonsCore::UnicodeEmoticon TextEmoticonsCore__UnicodeEmoticon;
#endif
#else
typedef struct TextEmoticonsCore__UnicodeEmoticon TextEmoticonsCore__UnicodeEmoticon;
#endif

TextEmoticonsCore__UnicodeEmoticon* TextEmoticonsCore__UnicodeEmoticon_new();
TextEmoticonsCore__UnicodeEmoticon* TextEmoticonsCore__UnicodeEmoticon_new2(const TextEmoticonsCore__UnicodeEmoticon* param1);
libqt_string TextEmoticonsCore__UnicodeEmoticon_Identifier(const TextEmoticonsCore__UnicodeEmoticon* self);
void TextEmoticonsCore__UnicodeEmoticon_SetIdentifier(TextEmoticonsCore__UnicodeEmoticon* self, const libqt_string identifier);
libqt_string TextEmoticonsCore__UnicodeEmoticon_Unicode(const TextEmoticonsCore__UnicodeEmoticon* self);
libqt_string TextEmoticonsCore__UnicodeEmoticon_UnicodeDisplay(const TextEmoticonsCore__UnicodeEmoticon* self);
void TextEmoticonsCore__UnicodeEmoticon_SetUnicode(TextEmoticonsCore__UnicodeEmoticon* self, const libqt_string unicode);
libqt_string TextEmoticonsCore__UnicodeEmoticon_Category(const TextEmoticonsCore__UnicodeEmoticon* self);
void TextEmoticonsCore__UnicodeEmoticon_SetCategory(TextEmoticonsCore__UnicodeEmoticon* self, const libqt_string category);
libqt_list /* of libqt_string */ TextEmoticonsCore__UnicodeEmoticon_Aliases(const TextEmoticonsCore__UnicodeEmoticon* self);
void TextEmoticonsCore__UnicodeEmoticon_SetAliases(TextEmoticonsCore__UnicodeEmoticon* self, const libqt_list /* of libqt_string */ aliases);
bool TextEmoticonsCore__UnicodeEmoticon_HasEmoji(const TextEmoticonsCore__UnicodeEmoticon* self, const libqt_string identifier);
bool TextEmoticonsCore__UnicodeEmoticon_IsValid(const TextEmoticonsCore__UnicodeEmoticon* self);
int TextEmoticonsCore__UnicodeEmoticon_Order(const TextEmoticonsCore__UnicodeEmoticon* self);
void TextEmoticonsCore__UnicodeEmoticon_SetOrder(TextEmoticonsCore__UnicodeEmoticon* self, int order);
libqt_string TextEmoticonsCore__UnicodeEmoticon_Key(const TextEmoticonsCore__UnicodeEmoticon* self);
void TextEmoticonsCore__UnicodeEmoticon_SetKey(TextEmoticonsCore__UnicodeEmoticon* self, const libqt_string key);
bool TextEmoticonsCore__UnicodeEmoticon_OperatorEqual(const TextEmoticonsCore__UnicodeEmoticon* self, const TextEmoticonsCore__UnicodeEmoticon* other);
void TextEmoticonsCore__UnicodeEmoticon_Delete(TextEmoticonsCore__UnicodeEmoticon* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
