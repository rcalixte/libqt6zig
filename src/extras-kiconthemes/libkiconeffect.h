#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESC_LIBKICONEFFECT_H
#define SRC_EXTRAS_KICONTHEMESC_LIBKICONEFFECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KIconEffect KIconEffect;
typedef struct QColor QColor;
typedef struct QImage QImage;
typedef struct QPixmap QPixmap;
#endif

KIconEffect* KIconEffect_new();
void KIconEffect_Init(KIconEffect* self);
bool KIconEffect_HasEffect(const KIconEffect* self, int group, int state);
libqt_string KIconEffect_Fingerprint(const KIconEffect* self, int group, int state);
QImage* KIconEffect_Apply(const KIconEffect* self, const QImage* src, int group, int state);
QImage* KIconEffect_Apply2(const KIconEffect* self, const QImage* src, int effect, float value, const QColor* rgb, bool trans);
QImage* KIconEffect_Apply3(const KIconEffect* self, const QImage* src, int effect, float value, const QColor* rgb, const QColor* rgb2, bool trans);
QPixmap* KIconEffect_Apply4(const KIconEffect* self, const QPixmap* src, int group, int state);
QPixmap* KIconEffect_Apply5(const KIconEffect* self, const QPixmap* src, int effect, float value, const QColor* rgb, bool trans);
QPixmap* KIconEffect_Apply6(const KIconEffect* self, const QPixmap* src, int effect, float value, const QColor* rgb, const QColor* rgb2, bool trans);
QImage* KIconEffect_DoublePixels(const KIconEffect* self, const QImage* src);
void KIconEffect_ToGray(QImage* image, float value);
void KIconEffect_Colorize(QImage* image, const QColor* col, float value);
void KIconEffect_ToMonochrome(QImage* image, const QColor* black, const QColor* white, float value);
void KIconEffect_DeSaturate(QImage* image, float value);
void KIconEffect_ToGamma(QImage* image, float value);
void KIconEffect_SemiTransparent(QImage* image);
void KIconEffect_SemiTransparent2(QPixmap* pixmap);
void KIconEffect_Overlay(QImage* src, QImage* overlay);
void KIconEffect_ToDisabled(QImage* image);
void KIconEffect_ToDisabled2(QPixmap* pixmap);
void KIconEffect_ToActive(QImage* image);
void KIconEffect_ToActive2(QPixmap* pixmap);
void KIconEffect_Delete(KIconEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
