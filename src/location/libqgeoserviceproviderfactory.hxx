#pragma once
#ifndef LOCATION_LIBQGEOSERVICEPROVIDERFACTORY_HXX
#define LOCATION_LIBQGEOSERVICEPROVIDERFACTORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoServiceProviderFactory so that we can call protected methods
class VirtualQGeoServiceProviderFactory final : public QGeoServiceProviderFactory {

  public:
    // Virtual class boolean flag
    bool isVirtualQGeoServiceProviderFactory = true;

    // Virtual class public types (including callbacks)
    using QGeoServiceProviderFactory_SetQmlEngine_Callback = void (*)(QGeoServiceProviderFactory*, QQmlEngine*);

  protected:
    // Instance callback storage
    QGeoServiceProviderFactory_SetQmlEngine_Callback qgeoserviceproviderfactory_setqmlengine_callback = nullptr;

    // Instance base flags
    mutable bool qgeoserviceproviderfactory_setqmlengine_isbase = false;

  public:
    VirtualQGeoServiceProviderFactory() : QGeoServiceProviderFactory() {};

    // Callback setters
    inline void setQGeoServiceProviderFactory_SetQmlEngine_Callback(QGeoServiceProviderFactory_SetQmlEngine_Callback cb) { qgeoserviceproviderfactory_setqmlengine_callback = cb; }

    // Base flag setters
    inline void setQGeoServiceProviderFactory_SetQmlEngine_IsBase(bool value) const { qgeoserviceproviderfactory_setqmlengine_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setQmlEngine(QQmlEngine* engine) override {
        if (qgeoserviceproviderfactory_setqmlengine_isbase) {
            qgeoserviceproviderfactory_setqmlengine_isbase = false;
            QGeoServiceProviderFactory::setQmlEngine(engine);
            return;
        }
        auto setqmlengine_cb = qgeoserviceproviderfactory_setqmlengine_callback;
        if (setqmlengine_cb) {
            QQmlEngine* cbval1 = engine;
            setqmlengine_cb(this, cbval1);
            return;
        }
        QGeoServiceProviderFactory::setQmlEngine(engine);
    }
};

#endif
