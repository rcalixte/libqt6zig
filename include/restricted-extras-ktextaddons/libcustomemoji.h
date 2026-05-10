#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBCUSTOMEMOJI_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBCUSTOMEMOJI_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__CustomEmoji)
typedef TextEmoticonsCore::CustomEmoji TextEmoticonsCore__CustomEmoji;
#endif
#else
typedef struct TextEmoticonsCore__CustomEmoji TextEmoticonsCore__CustomEmoji;
#endif

TextEmoticonsCore__CustomEmoji* TextEmoticonsCore__CustomEmoji_new();
TextEmoticonsCore__CustomEmoji* TextEmoticonsCore__CustomEmoji_new2(const TextEmoticonsCore__CustomEmoji* param1);
libqt_string TextEmoticonsCore__CustomEmoji_Identifier(const TextEmoticonsCore__CustomEmoji* self);
void TextEmoticonsCore__CustomEmoji_SetIdentifier(TextEmoticonsCore__CustomEmoji* self, const libqt_string newIdentifier);
libqt_string TextEmoticonsCore__CustomEmoji_Category(const TextEmoticonsCore__CustomEmoji* self);
bool TextEmoticonsCore__CustomEmoji_IsAnimatedEmoji(const TextEmoticonsCore__CustomEmoji* self);
void TextEmoticonsCore__CustomEmoji_SetIsAnimatedEmoji(TextEmoticonsCore__CustomEmoji* self, bool newIsAnimatedEmoji);
void TextEmoticonsCore__CustomEmoji_Delete(TextEmoticonsCore__CustomEmoji* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
