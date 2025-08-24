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

void KWindowConfig_SaveWindowSize(const QWindow* param1, KConfigGroup* param2, int param3);
bool KWindowConfig_HasSavedWindowSize(KConfigGroup* param1);
void KWindowConfig_RestoreWindowSize(QWindow* param1, const KConfigGroup* param2);
void KWindowConfig_SaveWindowPosition(const QWindow* param1, KConfigGroup* param2, int param3);
bool KWindowConfig_HasSavedWindowPosition(KConfigGroup* param1);
void KWindowConfig_RestoreWindowPosition(QWindow* param1, const KConfigGroup* param2);
void KWindowConfig_RestoreWindowScreenPosition(QWindow* param1, const QScreen* param2, const KConfigGroup* param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
