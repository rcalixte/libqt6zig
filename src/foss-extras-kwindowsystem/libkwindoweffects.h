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

bool KWindowEffects_IsEffectAvailable(int param1);
void KWindowEffects_EnableBlurBehind(QWindow* param1, bool param2, const QRegion* param3);
void KWindowEffects_EnableBackgroundContrast(QWindow* param1, bool param2, double param3, double param4, double param5, const QRegion* param6);
void KWindowEffects_SlideWindow(QWindow* param1, int param2, int param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
