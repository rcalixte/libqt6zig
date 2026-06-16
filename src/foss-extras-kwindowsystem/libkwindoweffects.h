#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKWINDOWEFFECTS_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKWINDOWEFFECTS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KWindowEffects KWindowEffects;
typedef struct QRegion QRegion;
typedef struct QWindow QWindow;
#endif

bool KWindowEffects_IsEffectAvailable(int effect);
void KWindowEffects_EnableBlurBehind(QWindow* window, bool enable, const QRegion* region);
void KWindowEffects_EnableBackgroundContrast(QWindow* window, bool enable, double contrast, double intensity, double saturation, const QRegion* region);
void KWindowEffects_SlideWindow(QWindow* window, int location, int offset);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
