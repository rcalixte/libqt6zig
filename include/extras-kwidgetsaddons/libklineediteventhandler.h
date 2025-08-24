#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKLINEEDITEVENTHANDLER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKLINEEDITEVENTHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLineEditEventHandler KLineEditEventHandler;
typedef struct QObject QObject;
#endif

void KLineEditEventHandler_CatchReturnKey(QObject* param1);
void KLineEditEventHandler_HandleUrlDrops(QObject* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
