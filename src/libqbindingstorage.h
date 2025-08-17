#pragma once
#ifndef SRCC_LIBQBINDINGSTORAGE_H
#define SRCC_LIBQBINDINGSTORAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBindingStatus QBindingStatus;
typedef struct QBindingStorage QBindingStorage;
typedef struct QUntypedPropertyData QUntypedPropertyData;
#endif

QBindingStatus* QBindingStatus_new(const QBindingStatus* other);
QBindingStatus* QBindingStatus_new2(QBindingStatus* other);
void QBindingStatus_CopyAssign(QBindingStatus* self, QBindingStatus* other);
void QBindingStatus_MoveAssign(QBindingStatus* self, QBindingStatus* other);
void QBindingStatus_Delete(QBindingStatus* self);

QBindingStorage* QBindingStorage_new();
bool QBindingStorage_IsEmpty(QBindingStorage* self);
bool QBindingStorage_IsValid(const QBindingStorage* self);
void QBindingStorage_RegisterDependency(const QBindingStorage* self, const QUntypedPropertyData* data);
void QBindingStorage_Delete(QBindingStorage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
