#pragma once
#ifndef SRCC_LIBQPLUGIN_H
#define SRCC_LIBQPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QJsonObject QJsonObject;
typedef struct QStaticPlugin QStaticPlugin;
#endif

QStaticPlugin* QStaticPlugin_new(const QStaticPlugin* other);
QStaticPlugin* QStaticPlugin_new2(QStaticPlugin* other);
QStaticPlugin* QStaticPlugin_new3(const QStaticPlugin* param1);
void QStaticPlugin_CopyAssign(QStaticPlugin* self, QStaticPlugin* other);
void QStaticPlugin_MoveAssign(QStaticPlugin* self, QStaticPlugin* other);
intptr_t QStaticPlugin_Instance(const QStaticPlugin* self);
void QStaticPlugin_SetInstance(QStaticPlugin* self, intptr_t instance);
QJsonObject* QStaticPlugin_MetaData(const QStaticPlugin* self);
void QStaticPlugin_Delete(QStaticPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
