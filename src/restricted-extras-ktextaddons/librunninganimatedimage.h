#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBRUNNINGANIMATEDIMAGE_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBRUNNINGANIMATEDIMAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__RunningAnimatedImage)
typedef TextEmoticonsCore::RunningAnimatedImage TextEmoticonsCore__RunningAnimatedImage;
#endif
#else
typedef struct QModelIndex QModelIndex;
typedef struct QMovie QMovie;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct TextEmoticonsCore__RunningAnimatedImage TextEmoticonsCore__RunningAnimatedImage;
#endif

TextEmoticonsCore__RunningAnimatedImage* TextEmoticonsCore__RunningAnimatedImage_new(const QModelIndex* idx);
QPersistentModelIndex* TextEmoticonsCore__RunningAnimatedImage_Index(const TextEmoticonsCore__RunningAnimatedImage* self);
void TextEmoticonsCore__RunningAnimatedImage_SetIndex(TextEmoticonsCore__RunningAnimatedImage* self, QPersistentModelIndex* index);
QMovie* TextEmoticonsCore__RunningAnimatedImage_Movie(const TextEmoticonsCore__RunningAnimatedImage* self);
void TextEmoticonsCore__RunningAnimatedImage_SetMovie(TextEmoticonsCore__RunningAnimatedImage* self, QMovie* movie);
void TextEmoticonsCore__RunningAnimatedImage_Delete(TextEmoticonsCore__RunningAnimatedImage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
