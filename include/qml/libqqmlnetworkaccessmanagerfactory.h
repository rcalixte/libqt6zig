#pragma once
#ifndef QML_LIBQQMLNETWORKACCESSMANAGERFACTORY_H
#define QML_LIBQQMLNETWORKACCESSMANAGERFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QObject QObject;
typedef struct QQmlNetworkAccessManagerFactory QQmlNetworkAccessManagerFactory;
#endif

QNetworkAccessManager* QQmlNetworkAccessManagerFactory_Create(QQmlNetworkAccessManagerFactory* self, QObject* parent);
void QQmlNetworkAccessManagerFactory_OperatorAssign(QQmlNetworkAccessManagerFactory* self, const QQmlNetworkAccessManagerFactory* param1);
void QQmlNetworkAccessManagerFactory_Delete(QQmlNetworkAccessManagerFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
