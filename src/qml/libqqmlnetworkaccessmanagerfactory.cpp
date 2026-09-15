#include <QNetworkAccessManager>
#include <QObject>
#include <QQmlNetworkAccessManagerFactory>
#include <qqmlnetworkaccessmanagerfactory.h>
#include "libqqmlnetworkaccessmanagerfactory.h"
#include "libqqmlnetworkaccessmanagerfactory.hxx"

QNetworkAccessManager* QQmlNetworkAccessManagerFactory_Create(QQmlNetworkAccessManagerFactory* self, QObject* parent) {
    return self->create(parent);
}

void QQmlNetworkAccessManagerFactory_OperatorAssign(QQmlNetworkAccessManagerFactory* self, const QQmlNetworkAccessManagerFactory* param1) {
    self->operator=(*param1);
}

void QQmlNetworkAccessManagerFactory_Delete(QQmlNetworkAccessManagerFactory* self) {
    delete self;
}
