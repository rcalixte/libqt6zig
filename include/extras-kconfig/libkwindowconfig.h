#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKWINDOWCONFIG_H
#define SRC_EXTRAS_KCONFIGC_LIBKWINDOWCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfigGroup KConfigGroup;
typedef struct KWindowConfig KWindowConfig;
typedef struct QScreen QScreen;
typedef struct QWindow QWindow;
#endif

void KWindowConfig_SaveWindowSize(const QWindow* window, KConfigGroup* config, int options);
bool KWindowConfig_HasSavedWindowSize(KConfigGroup* config);
void KWindowConfig_RestoreWindowSize(QWindow* window, const KConfigGroup* config);
void KWindowConfig_SaveWindowPosition(const QWindow* window, KConfigGroup* config, int options);
bool KWindowConfig_HasSavedWindowPosition(KConfigGroup* config);
void KWindowConfig_RestoreWindowPosition(QWindow* window, const KConfigGroup* config);
void KWindowConfig_RestoreWindowScreenPosition(QWindow* window, const QScreen* screen, const KConfigGroup* config);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
