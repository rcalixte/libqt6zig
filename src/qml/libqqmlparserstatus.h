#pragma once
#ifndef QML_LIBQQMLPARSERSTATUS_H
#define QML_LIBQQMLPARSERSTATUS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQmlParserStatus QQmlParserStatus;
#endif

QQmlParserStatus* QQmlParserStatus_new();
void QQmlParserStatus_ClassBegin(QQmlParserStatus* self);
void QQmlParserStatus_ComponentComplete(QQmlParserStatus* self);
void QQmlParserStatus_OperatorAssign(QQmlParserStatus* self, const QQmlParserStatus* param1);
void QQmlParserStatus_OnClassBegin(QQmlParserStatus* self, intptr_t slot);
void QQmlParserStatus_SuperClassBegin(QQmlParserStatus* self);
void QQmlParserStatus_OnComponentComplete(QQmlParserStatus* self, intptr_t slot);
void QQmlParserStatus_SuperComponentComplete(QQmlParserStatus* self);
void QQmlParserStatus_Delete(QQmlParserStatus* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
