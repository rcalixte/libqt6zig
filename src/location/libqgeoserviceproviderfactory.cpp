#include <QGeoServiceProviderFactory>
#include <qgeoserviceproviderfactory.h>
#include "libqgeoserviceproviderfactory.h"
#include "libqgeoserviceproviderfactory.hxx"

void QGeoServiceProviderFactory_OperatorAssign(QGeoServiceProviderFactory* self, const QGeoServiceProviderFactory* param1) {
    self->operator=(*param1);
}

void QGeoServiceProviderFactory_Delete(QGeoServiceProviderFactory* self) {
    delete self;
}
