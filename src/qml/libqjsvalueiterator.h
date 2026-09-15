#pragma once
#ifndef QML_LIBQJSVALUEITERATOR_H
#define QML_LIBQJSVALUEITERATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QJSValue QJSValue;
typedef struct QJSValueIterator QJSValueIterator;
#endif

QJSValueIterator* QJSValueIterator_new(const QJSValue* value);
bool QJSValueIterator_HasNext(const QJSValueIterator* self);
bool QJSValueIterator_Next(QJSValueIterator* self);
libqt_string QJSValueIterator_Name(const QJSValueIterator* self);
QJSValue* QJSValueIterator_Value(const QJSValueIterator* self);
void QJSValueIterator_OperatorAssign(QJSValueIterator* self, QJSValue* value);
void QJSValueIterator_Delete(QJSValueIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
