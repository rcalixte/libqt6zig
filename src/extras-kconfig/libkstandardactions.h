#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKSTANDARDACTIONS_H
#define SRC_EXTRAS_KCONFIGC_LIBKSTANDARDACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KStandardActions KStandardActions;
typedef struct QAction QAction;
typedef struct QObject QObject;
#endif

QAction* KStandardActions_KguiCreateInternal(int param1, QObject* param2);
libqt_string KStandardActions_Name(int param1);
libqt_list /* of int */ KStandardActions_ActionIds();
int KStandardActions_ShortcutForActionId(int param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
