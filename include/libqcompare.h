#pragma once
#ifndef SRCC_LIBQCOMPARE_H
#define SRCC_LIBQCOMPARE_H

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
typedef struct QPartialOrdering QPartialOrdering;
#endif

#ifdef __cplusplus
typedef QtPrivate::Ordering Ordering;         // C++ enum
typedef QtPrivate::Uncomparable Uncomparable; // C++ enum
#else
typedef signed char Ordering;     // C ABI enum
typedef signed char Uncomparable; // C ABI enum
#endif

QPartialOrdering* QPartialOrdering_new(QPartialOrdering* other);
QPartialOrdering* QPartialOrdering_new2(QPartialOrdering* other);
QPartialOrdering* QPartialOrdering_new3(QPartialOrdering* param1);
void QPartialOrdering_CopyAssign(QPartialOrdering* self, QPartialOrdering* other);
void QPartialOrdering_MoveAssign(QPartialOrdering* self, QPartialOrdering* other);
void QPartialOrdering_Delete(QPartialOrdering* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
