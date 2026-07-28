#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKCOLORSCHEMEMENU_H
#define EXTRAS_KCONFIGWIDGETS_LIBKCOLORSCHEMEMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KActionMenu KActionMenu;
typedef struct KColorSchemeManager KColorSchemeManager;
typedef struct KColorSchemeMenu KColorSchemeMenu;
typedef struct QObject QObject;
#endif

KActionMenu* KColorSchemeMenu_CreateMenu(KColorSchemeManager* manager, QObject* parent);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
