#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKPIXMAPSEQUENCE_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKPIXMAPSEQUENCE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPixmapSequence KPixmapSequence;
typedef struct QPixmap QPixmap;
typedef struct QSize QSize;
#endif

KPixmapSequence* KPixmapSequence_new();
KPixmapSequence* KPixmapSequence_new2(const KPixmapSequence* other);
KPixmapSequence* KPixmapSequence_new3(const QPixmap* pixmap);
KPixmapSequence* KPixmapSequence_new4(const libqt_string fullPath, int size);
KPixmapSequence* KPixmapSequence_new5(const QPixmap* pixmap, const QSize* frameSize);
void KPixmapSequence_OperatorAssign(KPixmapSequence* self, const KPixmapSequence* other);
bool KPixmapSequence_IsValid(const KPixmapSequence* self);
bool KPixmapSequence_IsEmpty(const KPixmapSequence* self);
QSize* KPixmapSequence_FrameSize(const KPixmapSequence* self);
int KPixmapSequence_FrameCount(const KPixmapSequence* self);
QPixmap* KPixmapSequence_FrameAt(const KPixmapSequence* self, int index);
void KPixmapSequence_Delete(KPixmapSequence* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
