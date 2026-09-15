#include <QGeoServiceProviderFactory>
#include <QQmlEngine>
#include <qgeoserviceproviderfactory.h>
#include "libqgeoserviceproviderfactory.h"
#include "libqgeoserviceproviderfactory.hxx"

QGeoServiceProviderFactory* QGeoServiceProviderFactory_new() {
    return new VirtualQGeoServiceProviderFactory();
}

void QGeoServiceProviderFactory_SetQmlEngine(QGeoServiceProviderFactory* self, QQmlEngine* engine) {
    self->setQmlEngine(engine);
}

void QGeoServiceProviderFactory_OperatorAssign(QGeoServiceProviderFactory* self, const QGeoServiceProviderFactory* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
void QGeoServiceProviderFactory_SuperSetQmlEngine(QGeoServiceProviderFactory* self, QQmlEngine* engine) {
    auto* vqgeoserviceproviderfactory = dynamic_cast<VirtualQGeoServiceProviderFactory*>(self);
    if (vqgeoserviceproviderfactory && vqgeoserviceproviderfactory->isVirtualQGeoServiceProviderFactory) {
        vqgeoserviceproviderfactory->setQGeoServiceProviderFactory_SetQmlEngine_IsBase(true);
        vqgeoserviceproviderfactory->setQmlEngine(engine);
    } else {
        self->QGeoServiceProviderFactory::setQmlEngine(engine);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProviderFactory_OnSetQmlEngine(QGeoServiceProviderFactory* self, intptr_t slot) {
    auto* vqgeoserviceproviderfactory = dynamic_cast<VirtualQGeoServiceProviderFactory*>(self);
    if (vqgeoserviceproviderfactory && vqgeoserviceproviderfactory->isVirtualQGeoServiceProviderFactory)
        vqgeoserviceproviderfactory->setQGeoServiceProviderFactory_SetQmlEngine_Callback(reinterpret_cast<VirtualQGeoServiceProviderFactory::QGeoServiceProviderFactory_SetQmlEngine_Callback>(slot));
}

void QGeoServiceProviderFactory_Delete(QGeoServiceProviderFactory* self) {
    delete self;
}
