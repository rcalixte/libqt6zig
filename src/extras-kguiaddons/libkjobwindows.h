#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKJOBWINDOWS_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKJOBWINDOWS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KJobWindows KJobWindows;
typedef struct QObject QObject;
typedef struct QWindow QWindow;
#endif

void KJobWindows_SetWindow(QObject* param1, QWindow* param2);
QWindow* KJobWindows_Window(QObject* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
