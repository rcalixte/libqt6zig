#pragma once
#ifndef SRCC_LIBQSTRINGBUILDER_H
#define SRCC_LIBQSTRINGBUILDER_H

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
typedef struct QAbstractConcatenable QAbstractConcatenable;
#endif

QAbstractConcatenable* QAbstractConcatenable_new(const QAbstractConcatenable* other);
QAbstractConcatenable* QAbstractConcatenable_new2(QAbstractConcatenable* other);
void QAbstractConcatenable_CopyAssign(QAbstractConcatenable* self, QAbstractConcatenable* other);
void QAbstractConcatenable_MoveAssign(QAbstractConcatenable* self, QAbstractConcatenable* other);
void QAbstractConcatenable_Delete(QAbstractConcatenable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
