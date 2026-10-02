#include <QNetworkAccessManager>
#include <QObject>
#include <QQmlNetworkAccessManagerFactory>
#include <qqmlnetworkaccessmanagerfactory.h>
#include "libqqmlnetworkaccessmanagerfactory.h"
#include "libqqmlnetworkaccessmanagerfactory.hxx"

QNetworkAccessManager* QQmlNetworkAccessManagerFactory_Create(QQmlNetworkAccessManagerFactory* self, QObject* parent) {
    return self->create(parent);
}

void QQmlNetworkAccessManagerFactory_Delete(QQmlNetworkAccessManagerFactory* self) {
    delete self;
}
