#pragma once
#ifndef LOCATION_LIBQGEOSERVICEPROVIDERFACTORY_HXX
#define LOCATION_LIBQGEOSERVICEPROVIDERFACTORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoServiceProviderFactory
class VirtualQGeoServiceProviderFactory final : public QGeoServiceProviderFactory {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGeoServiceProviderFactory_SetQmlEngine_Callback = void (*)(QGeoServiceProviderFactory*, QQmlEngine*);

    // Instance callback storage
    QGeoServiceProviderFactory_SetQmlEngine_Callback qgeoserviceproviderfactory_setqmlengine_callback = nullptr;

    VirtualQGeoServiceProviderFactory() : QGeoServiceProviderFactory() {};

    // Virtual method for C ABI access and custom callback
    virtual void setQmlEngine(QQmlEngine* engine) override {
        if (qgeoserviceproviderfactory_setqmlengine_callback) {
            QQmlEngine* cbval1 = engine;
            qgeoserviceproviderfactory_setqmlengine_callback(this, cbval1);
            return;
        }
        QGeoServiceProviderFactory::setQmlEngine(engine);
    }
};

#endif
