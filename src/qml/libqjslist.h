#pragma once
#ifndef QML_LIBQJSLIST_H
#define QML_LIBQJSLIST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QJSListForInIterator QJSListForInIterator;
typedef struct QJSListForOfIterator QJSListForOfIterator;
typedef struct QJSListIndexClamp QJSListIndexClamp;
#endif

QJSListIndexClamp* QJSListIndexClamp_new(const QJSListIndexClamp* other);
QJSListIndexClamp* QJSListIndexClamp_new2(QJSListIndexClamp* other);
QJSListIndexClamp* QJSListIndexClamp_new3(const QJSListIndexClamp* param1);
QJSListIndexClamp* QJSListIndexClamp_new4();
void QJSListIndexClamp_CopyAssign(QJSListIndexClamp* self, QJSListIndexClamp* other);
void QJSListIndexClamp_MoveAssign(QJSListIndexClamp* self, QJSListIndexClamp* other);
ptrdiff_t QJSListIndexClamp_Clamp(ptrdiff_t start, ptrdiff_t max);
void QJSListIndexClamp_OperatorAssign(QJSListIndexClamp* self, const QJSListIndexClamp* param1);
ptrdiff_t QJSListIndexClamp_Clamp3(ptrdiff_t start, ptrdiff_t max, ptrdiff_t min);
void QJSListIndexClamp_Delete(QJSListIndexClamp* self);

bool QJSListForInIterator_HasNext(const QJSListForInIterator* self);
ptrdiff_t QJSListForInIterator_Next(QJSListForInIterator* self);
void QJSListForInIterator_Delete(QJSListForInIterator* self);

void QJSListForOfIterator_Init(QJSListForOfIterator* self);
void QJSListForOfIterator_Delete(QJSListForOfIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
