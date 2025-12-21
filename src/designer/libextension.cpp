#include <QAbstractExtensionFactory>
#include <QAbstractExtensionManager>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <extension.h>
#include "libextension.h"
#include "libextension.hxx"

QObject* QAbstractExtensionFactory_Extension(const QAbstractExtensionFactory* self, QObject* object, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    return self->extension(object, iid_QString);
}

void QAbstractExtensionFactory_OperatorAssign(QAbstractExtensionFactory* self, const QAbstractExtensionFactory* param1) {
    self->operator=(*param1);
}

void QAbstractExtensionFactory_Delete(QAbstractExtensionFactory* self) {
    delete self;
}

void QAbstractExtensionManager_RegisterExtensions(QAbstractExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    self->registerExtensions(factory, iid_QString);
}

void QAbstractExtensionManager_UnregisterExtensions(QAbstractExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    self->unregisterExtensions(factory, iid_QString);
}

QObject* QAbstractExtensionManager_Extension(const QAbstractExtensionManager* self, QObject* object, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    return self->extension(object, iid_QString);
}

void QAbstractExtensionManager_OperatorAssign(QAbstractExtensionManager* self, const QAbstractExtensionManager* param1) {
    self->operator=(*param1);
}

void QAbstractExtensionManager_Delete(QAbstractExtensionManager* self) {
    delete self;
}
