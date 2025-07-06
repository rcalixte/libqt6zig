#pragma once
#ifndef SRC_NETWORKC_LIBQHTTP1CONFIGURATION_H
#define SRC_NETWORKC_LIBQHTTP1CONFIGURATION_H

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
typedef struct QHttp1Configuration QHttp1Configuration;
#endif

QHttp1Configuration* QHttp1Configuration_new();
QHttp1Configuration* QHttp1Configuration_new2(const QHttp1Configuration* other);
void QHttp1Configuration_OperatorAssign(QHttp1Configuration* self, const QHttp1Configuration* other);
void QHttp1Configuration_SetNumberOfConnectionsPerHost(QHttp1Configuration* self, ptrdiff_t amount);
ptrdiff_t QHttp1Configuration_NumberOfConnectionsPerHost(const QHttp1Configuration* self);
void QHttp1Configuration_Swap(QHttp1Configuration* self, QHttp1Configuration* other);
void QHttp1Configuration_Delete(QHttp1Configuration* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
