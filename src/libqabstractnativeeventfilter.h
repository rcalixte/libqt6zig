#pragma once
#ifndef SRCC_LIBQABSTRACTNATIVEEVENTFILTER_H
#define SRCC_LIBQABSTRACTNATIVEEVENTFILTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
#endif

QAbstractNativeEventFilter* QAbstractNativeEventFilter_new();
bool QAbstractNativeEventFilter_NativeEventFilter(QAbstractNativeEventFilter* self, const libqt_string eventType, void* message, intptr_t* result);
void QAbstractNativeEventFilter_OnNativeEventFilter(QAbstractNativeEventFilter* self, intptr_t slot);
bool QAbstractNativeEventFilter_QBaseNativeEventFilter(QAbstractNativeEventFilter* self, const libqt_string eventType, void* message, intptr_t* result);
void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
