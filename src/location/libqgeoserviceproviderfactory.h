#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOSERVICEPROVIDERFACTORY_H
#define SRC_LOCATIONC_LIBQGEOSERVICEPROVIDERFACTORY_H

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
#endif

void QGeoServiceProviderFactory_OperatorAssign(QGeoServiceProviderFactory* self, const QGeoServiceProviderFactory* param1);
void QGeoServiceProviderFactory_Delete(QGeoServiceProviderFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
