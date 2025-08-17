#pragma once
#ifndef SRCC_LIBQCOMPARE_H
#define SRCC_LIBQCOMPARE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_partial_ordering)
typedef Qt::partial_ordering partial_ordering;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_strong_ordering)
typedef Qt::strong_ordering strong_ordering;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_weak_ordering)
typedef Qt::weak_ordering weak_ordering;
#endif
#else
typedef struct QPartialOrdering QPartialOrdering;
typedef struct partial_ordering partial_ordering;
typedef struct strong_ordering strong_ordering;
typedef struct weak_ordering weak_ordering;
#endif

partial_ordering* partial_ordering_new(const partial_ordering* other);
partial_ordering* partial_ordering_new2(partial_ordering* other);
partial_ordering* partial_ordering_new3(const partial_ordering* param1);
void partial_ordering_CopyAssign(partial_ordering* self, partial_ordering* other);
void partial_ordering_MoveAssign(partial_ordering* self, partial_ordering* other);
void partial_ordering_Delete(partial_ordering* self);

weak_ordering* weak_ordering_new(const weak_ordering* other);
weak_ordering* weak_ordering_new2(weak_ordering* other);
weak_ordering* weak_ordering_new3(const weak_ordering* param1);
void weak_ordering_CopyAssign(weak_ordering* self, weak_ordering* other);
void weak_ordering_MoveAssign(weak_ordering* self, weak_ordering* other);
partial_ordering* weak_ordering_ToPartialOrdering(const weak_ordering* self);
void weak_ordering_Delete(weak_ordering* self);

strong_ordering* strong_ordering_new(const strong_ordering* other);
strong_ordering* strong_ordering_new2(strong_ordering* other);
strong_ordering* strong_ordering_new3(const strong_ordering* param1);
void strong_ordering_CopyAssign(strong_ordering* self, strong_ordering* other);
void strong_ordering_MoveAssign(strong_ordering* self, strong_ordering* other);
partial_ordering* strong_ordering_ToPartialOrdering(const strong_ordering* self);
weak_ordering* strong_ordering_ToWeakOrdering(const strong_ordering* self);
void strong_ordering_Delete(strong_ordering* self);

QPartialOrdering* QPartialOrdering_new(const QPartialOrdering* other);
QPartialOrdering* QPartialOrdering_new2(QPartialOrdering* other);
QPartialOrdering* QPartialOrdering_new3(partial_ordering* order);
QPartialOrdering* QPartialOrdering_new4(weak_ordering* stdorder);
QPartialOrdering* QPartialOrdering_new5(strong_ordering* stdorder);
QPartialOrdering* QPartialOrdering_new6(const QPartialOrdering* param1);
void QPartialOrdering_CopyAssign(QPartialOrdering* self, QPartialOrdering* other);
void QPartialOrdering_MoveAssign(QPartialOrdering* self, QPartialOrdering* other);
partial_ordering* QPartialOrdering_ToPartialOrdering(const QPartialOrdering* self);
void QPartialOrdering_Delete(QPartialOrdering* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
