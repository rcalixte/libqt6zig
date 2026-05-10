#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBEMOTICONCATEGORY_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBEMOTICONCATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__EmoticonCategory)
typedef TextEmoticonsCore::EmoticonCategory TextEmoticonsCore__EmoticonCategory;
#endif
#else
typedef struct TextEmoticonsCore__EmoticonCategory TextEmoticonsCore__EmoticonCategory;
#endif

TextEmoticonsCore__EmoticonCategory* TextEmoticonsCore__EmoticonCategory_new();
TextEmoticonsCore__EmoticonCategory* TextEmoticonsCore__EmoticonCategory_new2(const TextEmoticonsCore__EmoticonCategory* param1);
libqt_string TextEmoticonsCore__EmoticonCategory_Name(const TextEmoticonsCore__EmoticonCategory* self);
void TextEmoticonsCore__EmoticonCategory_SetName(TextEmoticonsCore__EmoticonCategory* self, const libqt_string name);
libqt_string TextEmoticonsCore__EmoticonCategory_Category(const TextEmoticonsCore__EmoticonCategory* self);
void TextEmoticonsCore__EmoticonCategory_SetCategory(TextEmoticonsCore__EmoticonCategory* self, const libqt_string category);
libqt_string TextEmoticonsCore__EmoticonCategory_I18nName(const TextEmoticonsCore__EmoticonCategory* self);
void TextEmoticonsCore__EmoticonCategory_SetI18nName(TextEmoticonsCore__EmoticonCategory* self, const libqt_string newI18nName);
bool TextEmoticonsCore__EmoticonCategory_OperatorLesser(const TextEmoticonsCore__EmoticonCategory* self, const TextEmoticonsCore__EmoticonCategory* other);
int TextEmoticonsCore__EmoticonCategory_Order(const TextEmoticonsCore__EmoticonCategory* self);
void TextEmoticonsCore__EmoticonCategory_SetOrder(TextEmoticonsCore__EmoticonCategory* self, int newOrder);
void TextEmoticonsCore__EmoticonCategory_Delete(TextEmoticonsCore__EmoticonCategory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
