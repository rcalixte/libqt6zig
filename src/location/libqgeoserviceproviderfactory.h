#pragma once
#ifndef LOCATION_LIBQGEOSERVICEPROVIDERFACTORY_H
#define LOCATION_LIBQGEOSERVICEPROVIDERFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGeoServiceProviderFactory QGeoServiceProviderFactory;
typedef struct QQmlEngine QQmlEngine;
#endif

QGeoServiceProviderFactory* QGeoServiceProviderFactory_new();
void QGeoServiceProviderFactory_SetQmlEngine(QGeoServiceProviderFactory* self, QQmlEngine* engine);
void QGeoServiceProviderFactory_OperatorAssign(QGeoServiceProviderFactory* self, const QGeoServiceProviderFactory* param1);
void QGeoServiceProviderFactory_OnSetQmlEngine(QGeoServiceProviderFactory* self, intptr_t slot);
void QGeoServiceProviderFactory_SuperSetQmlEngine(QGeoServiceProviderFactory* self, QQmlEngine* engine);
void QGeoServiceProviderFactory_Delete(QGeoServiceProviderFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
