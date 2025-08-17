#pragma once
#ifndef SRCC_LIBQGENERICPLUGINFACTORY_H
#define SRCC_LIBQGENERICPLUGINFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGenericPluginFactory QGenericPluginFactory;
typedef struct QObject QObject;
#endif

QGenericPluginFactory* QGenericPluginFactory_new(const QGenericPluginFactory* other);
QGenericPluginFactory* QGenericPluginFactory_new2(QGenericPluginFactory* other);
void QGenericPluginFactory_CopyAssign(QGenericPluginFactory* self, QGenericPluginFactory* other);
void QGenericPluginFactory_MoveAssign(QGenericPluginFactory* self, QGenericPluginFactory* other);
libqt_list /* of libqt_string */ QGenericPluginFactory_Keys();
QObject* QGenericPluginFactory_Create(const libqt_string param1, const libqt_string param2);
void QGenericPluginFactory_Delete(QGenericPluginFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
