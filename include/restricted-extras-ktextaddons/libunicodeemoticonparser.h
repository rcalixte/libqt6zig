#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBUNICODEEMOTICONPARSER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBUNICODEEMOTICONPARSER_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticonParser)
typedef TextEmoticonsCore::UnicodeEmoticonParser TextEmoticonsCore__UnicodeEmoticonParser;
#endif
#else
typedef struct QJsonObject QJsonObject;
typedef struct TextEmoticonsCore__UnicodeEmoticon TextEmoticonsCore__UnicodeEmoticon;
typedef struct TextEmoticonsCore__UnicodeEmoticonParser TextEmoticonsCore__UnicodeEmoticonParser;
#endif

TextEmoticonsCore__UnicodeEmoticonParser* TextEmoticonsCore__UnicodeEmoticonParser_new();
libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ TextEmoticonsCore__UnicodeEmoticonParser_Parse(const TextEmoticonsCore__UnicodeEmoticonParser* self, const QJsonObject* o);
int TextEmoticonsCore__UnicodeEmoticonParser_ChangeOrder(const libqt_string name);
void TextEmoticonsCore__UnicodeEmoticonParser_Delete(TextEmoticonsCore__UnicodeEmoticonParser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
