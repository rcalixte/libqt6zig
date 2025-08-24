#pragma once
#ifndef SRCC_LIBQPROPERTYPRIVATE_H
#define SRCC_LIBQPROPERTYPRIVATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPropertyProxyBindingData QPropertyProxyBindingData;
typedef struct QUntypedPropertyData QUntypedPropertyData;
#endif

QUntypedPropertyData* QUntypedPropertyData_new(const QUntypedPropertyData* other);
QUntypedPropertyData* QUntypedPropertyData_new2(QUntypedPropertyData* other);
void QUntypedPropertyData_CopyAssign(QUntypedPropertyData* self, QUntypedPropertyData* other);
void QUntypedPropertyData_MoveAssign(QUntypedPropertyData* self, QUntypedPropertyData* other);
void QUntypedPropertyData_Delete(QUntypedPropertyData* self);

uintptr_t QPropertyProxyBindingData_DPtr(const QPropertyProxyBindingData* self);
void QPropertyProxyBindingData_SetDPtr(QPropertyProxyBindingData* self, uintptr_t d_ptr);
QUntypedPropertyData* QPropertyProxyBindingData_PropertyData(const QPropertyProxyBindingData* self);
void QPropertyProxyBindingData_SetPropertyData(QPropertyProxyBindingData* self, QUntypedPropertyData* propertyData);
void QPropertyProxyBindingData_Delete(QPropertyProxyBindingData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
