#pragma once
#ifndef QML_LIBQQMLPROPERTYVALUESOURCE_H
#define QML_LIBQQMLPROPERTYVALUESOURCE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQmlProperty QQmlProperty;
typedef struct QQmlPropertyValueSource QQmlPropertyValueSource;
#endif

QQmlPropertyValueSource* QQmlPropertyValueSource_new();
void QQmlPropertyValueSource_SetTarget(QQmlPropertyValueSource* self, const QQmlProperty* target);
void QQmlPropertyValueSource_OperatorAssign(QQmlPropertyValueSource* self, const QQmlPropertyValueSource* param1);
void QQmlPropertyValueSource_OnSetTarget(QQmlPropertyValueSource* self, intptr_t slot);
void QQmlPropertyValueSource_SuperSetTarget(QQmlPropertyValueSource* self, const QQmlProperty* target);
void QQmlPropertyValueSource_Delete(QQmlPropertyValueSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
