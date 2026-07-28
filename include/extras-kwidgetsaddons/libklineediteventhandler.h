#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKLINEEDITEVENTHANDLER_H
#define EXTRAS_KWIDGETSADDONS_LIBKLINEEDITEVENTHANDLER_H

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

void KLineEditEventHandler_CatchReturnKey(QObject* lineEdit);
void KLineEditEventHandler_HandleUrlDrops(QObject* lineEdit);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
