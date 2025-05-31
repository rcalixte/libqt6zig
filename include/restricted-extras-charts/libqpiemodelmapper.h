#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQPIEMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPieModelMapper QPieModelMapper;
typedef struct QPieSeries QPieSeries;
#endif

QMetaObject* QPieModelMapper_MetaObject(const QPieModelMapper* self);
void* QPieModelMapper_Metacast(QPieModelMapper* self, const char* param1);
int QPieModelMapper_Metacall(QPieModelMapper* self, int param1, int param2, void** param3);
libqt_string QPieModelMapper_Tr(const char* s);
libqt_string QPieModelMapper_Tr2(const char* s, const char* c);
libqt_string QPieModelMapper_Tr3(const char* s, const char* c, int n);
void QPieModelMapper_Delete(QPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
