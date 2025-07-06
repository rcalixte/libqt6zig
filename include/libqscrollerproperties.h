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

QScrollerProperties* QScrollerProperties_new();
QScrollerProperties* QScrollerProperties_new2(const QScrollerProperties* sp);
void QScrollerProperties_OperatorAssign(QScrollerProperties* self, const QScrollerProperties* sp);
bool QScrollerProperties_OperatorEqual(const QScrollerProperties* self, const QScrollerProperties* sp);
bool QScrollerProperties_OperatorNotEqual(const QScrollerProperties* self, const QScrollerProperties* sp);
void QScrollerProperties_SetDefaultScrollerProperties(const QScrollerProperties* sp);
void QScrollerProperties_UnsetDefaultScrollerProperties();
QVariant* QScrollerProperties_ScrollMetric(const QScrollerProperties* self, int metric);
void QScrollerProperties_SetScrollMetric(QScrollerProperties* self, int metric, const QVariant* value);
void QScrollerProperties_Delete(QScrollerProperties* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
