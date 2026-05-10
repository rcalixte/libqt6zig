#include <QModelIndex>
#include <QMovie>
#include <QPersistentModelIndex>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__RunningAnimatedImage
#include <runninganimatedimage.h>
#include "librunninganimatedimage.h"
#include "librunninganimatedimage.hxx"

TextEmoticonsCore__RunningAnimatedImage* TextEmoticonsCore__RunningAnimatedImage_new(const QModelIndex* idx) {
    return new TextEmoticonsCore::RunningAnimatedImage(*idx);
}

QPersistentModelIndex* TextEmoticonsCore__RunningAnimatedImage_Index(const TextEmoticonsCore__RunningAnimatedImage* self) {
    return new QPersistentModelIndex(self->index);
}

void TextEmoticonsCore__RunningAnimatedImage_SetIndex(TextEmoticonsCore__RunningAnimatedImage* self, QPersistentModelIndex* index) {
    self->index = *index;
}

QMovie* TextEmoticonsCore__RunningAnimatedImage_Movie(const TextEmoticonsCore__RunningAnimatedImage* self) {
    return self->movie;
}

void TextEmoticonsCore__RunningAnimatedImage_SetMovie(TextEmoticonsCore__RunningAnimatedImage* self, QMovie* movie) {
    self->movie = movie;
}

void TextEmoticonsCore__RunningAnimatedImage_Delete(TextEmoticonsCore__RunningAnimatedImage* self) {
    delete self;
}
