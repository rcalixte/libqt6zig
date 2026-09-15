#pragma once
#ifndef QML_LIBQQMLEXTENSIONINTERFACE_H
#define QML_LIBQQMLEXTENSIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlEngineExtensionInterface QQmlEngineExtensionInterface;
typedef struct QQmlExtensionInterface QQmlExtensionInterface;
typedef struct QQmlTypesExtensionInterface QQmlTypesExtensionInterface;
#endif

QQmlTypesExtensionInterface* QQmlTypesExtensionInterface_new(const QQmlTypesExtensionInterface* param1);
void QQmlTypesExtensionInterface_RegisterTypes(QQmlTypesExtensionInterface* self, const char* uri);
void QQmlTypesExtensionInterface_OperatorAssign(QQmlTypesExtensionInterface* self, const QQmlTypesExtensionInterface* param1);
void QQmlTypesExtensionInterface_OnRegisterTypes(QQmlTypesExtensionInterface* self, intptr_t slot);
void QQmlTypesExtensionInterface_SuperRegisterTypes(QQmlTypesExtensionInterface* self, const char* uri);
void QQmlTypesExtensionInterface_Delete(QQmlTypesExtensionInterface* self);

QQmlExtensionInterface* QQmlExtensionInterface_new(const QQmlExtensionInterface* param1);
void QQmlExtensionInterface_InitializeEngine(QQmlExtensionInterface* self, QQmlEngine* engine, const char* uri);
void QQmlExtensionInterface_OperatorAssign(QQmlExtensionInterface* self, const QQmlExtensionInterface* param1);
void QQmlExtensionInterface_OnInitializeEngine(QQmlExtensionInterface* self, intptr_t slot);
void QQmlExtensionInterface_SuperInitializeEngine(QQmlExtensionInterface* self, QQmlEngine* engine, const char* uri);
void QQmlExtensionInterface_RegisterTypes(QQmlExtensionInterface* self, const char* uri);
void QQmlExtensionInterface_OnRegisterTypes(QQmlExtensionInterface* self, intptr_t slot);
void QQmlExtensionInterface_SuperRegisterTypes(QQmlExtensionInterface* self, const char* uri);
void QQmlExtensionInterface_Delete(QQmlExtensionInterface* self);

void QQmlEngineExtensionInterface_InitializeEngine(QQmlEngineExtensionInterface* self, QQmlEngine* engine, const char* uri);
void QQmlEngineExtensionInterface_OperatorAssign(QQmlEngineExtensionInterface* self, const QQmlEngineExtensionInterface* param1);
void QQmlEngineExtensionInterface_Delete(QQmlEngineExtensionInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
