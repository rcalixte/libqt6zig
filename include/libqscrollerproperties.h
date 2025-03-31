#pragma once
#ifndef SRCC_LIBQSCROLLERPROPERTIES_H
#define SRCC_LIBQSCROLLERPROPERTIES_H

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
typedef struct QScrollerProperties QScrollerProperties;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QScrollerProperties::FrameRates FrameRates;           // C++ enum
typedef QScrollerProperties::OvershootPolicy OvershootPolicy; // C++ enum
typedef QScrollerProperties::ScrollMetric ScrollMetric;       // C++ enum
#else
typedef int FrameRates;      // C ABI enum
typedef int OvershootPolicy; // C ABI enum
typedef int ScrollMetric;    // C ABI enum
#endif

QScrollerProperties* QScrollerProperties_new();
QScrollerProperties* QScrollerProperties_new2(QScrollerProperties* sp);
void QScrollerProperties_OperatorAssign(QScrollerProperties* self, QScrollerProperties* sp);
bool QScrollerProperties_OperatorEqual(const QScrollerProperties* self, QScrollerProperties* sp);
bool QScrollerProperties_OperatorNotEqual(const QScrollerProperties* self, QScrollerProperties* sp);
void QScrollerProperties_SetDefaultScrollerProperties(QScrollerProperties* sp);
void QScrollerProperties_UnsetDefaultScrollerProperties();
QVariant* QScrollerProperties_ScrollMetric(const QScrollerProperties* self, int metric);
void QScrollerProperties_SetScrollMetric(QScrollerProperties* self, int metric, QVariant* value);
void QScrollerProperties_Delete(QScrollerProperties* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
