#pragma once
#ifndef SRCC_LIBQRUNNABLE_H
#define SRCC_LIBQRUNNABLE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QRunnable QRunnable;
#endif

QRunnable* QRunnable_new();
void QRunnable_Run(QRunnable* self);
void QRunnable_OnRun(QRunnable* self, intptr_t slot);
void QRunnable_QBaseRun(QRunnable* self);
bool QRunnable_AutoDelete(const QRunnable* self);
void QRunnable_SetAutoDelete(QRunnable* self, bool autoDelete);
void QRunnable_Delete(QRunnable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
