#pragma once
#ifndef SRCC_LIBQSHAREDDATA_H
#define SRCC_LIBQSHAREDDATA_H

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
typedef struct QAdoptSharedDataTag QAdoptSharedDataTag;
typedef struct QSharedData QSharedData;
#endif

QSharedData* QSharedData_new();
QSharedData* QSharedData_new2(const QSharedData* param1);
void QSharedData_Delete(QSharedData* self);

QAdoptSharedDataTag* QAdoptSharedDataTag_new(const QAdoptSharedDataTag* other);
QAdoptSharedDataTag* QAdoptSharedDataTag_new2(QAdoptSharedDataTag* other);
QAdoptSharedDataTag* QAdoptSharedDataTag_new3();
void QAdoptSharedDataTag_CopyAssign(QAdoptSharedDataTag* self, QAdoptSharedDataTag* other);
void QAdoptSharedDataTag_MoveAssign(QAdoptSharedDataTag* self, QAdoptSharedDataTag* other);
void QAdoptSharedDataTag_Delete(QAdoptSharedDataTag* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
