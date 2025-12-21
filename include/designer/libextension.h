#pragma once
#ifndef SRC_DESIGNERC_LIBEXTENSION_H
#define SRC_DESIGNERC_LIBEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractExtensionFactory QAbstractExtensionFactory;
typedef struct QAbstractExtensionManager QAbstractExtensionManager;
typedef struct QObject QObject;
#endif

QObject* QAbstractExtensionFactory_Extension(const QAbstractExtensionFactory* self, QObject* object, const libqt_string iid);
void QAbstractExtensionFactory_OperatorAssign(QAbstractExtensionFactory* self, const QAbstractExtensionFactory* param1);
void QAbstractExtensionFactory_Delete(QAbstractExtensionFactory* self);

void QAbstractExtensionManager_RegisterExtensions(QAbstractExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid);
void QAbstractExtensionManager_UnregisterExtensions(QAbstractExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid);
QObject* QAbstractExtensionManager_Extension(const QAbstractExtensionManager* self, QObject* object, const libqt_string iid);
void QAbstractExtensionManager_OperatorAssign(QAbstractExtensionManager* self, const QAbstractExtensionManager* param1);
void QAbstractExtensionManager_Delete(QAbstractExtensionManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
