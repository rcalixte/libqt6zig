#include <QGeoServiceProviderFactory>
#include <qgeoserviceproviderfactory.h>
#include "libqgeoserviceproviderfactory.h"
#include "libqgeoserviceproviderfactory.hxx"

QGeoServiceProviderFactory* QGeoServiceProviderFactory_new() {
    return new QGeoServiceProviderFactory();
}

void QGeoServiceProviderFactory_OperatorAssign(QGeoServiceProviderFactory* self, const QGeoServiceProviderFactory* param1) {
    self->operator=(*param1);
}

void QGeoServiceProviderFactory_Delete(QGeoServiceProviderFactory* self) {
    delete self;
}
