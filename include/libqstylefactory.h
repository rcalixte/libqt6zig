#pragma once
#ifndef SRCC_LIBQSTYLEFACTORY_H
#define SRCC_LIBQSTYLEFACTORY_H

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
typedef struct QStyle QStyle;
typedef struct QStyleFactory QStyleFactory;
#endif

QStyleFactory* QStyleFactory_new(QStyleFactory* other);
QStyleFactory* QStyleFactory_new2(QStyleFactory* other);
void QStyleFactory_CopyAssign(QStyleFactory* self, QStyleFactory* other);
void QStyleFactory_MoveAssign(QStyleFactory* self, QStyleFactory* other);
libqt_list /* of libqt_string */ QStyleFactory_Keys();
QStyle* QStyleFactory_Create(libqt_string param1);
void QStyleFactory_Delete(QStyleFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
