#include <QOpenGLContext>
#include <QOpenGLVersionFunctionsFactory>
#include <QOpenGLVersionProfile>
#include <qopenglversionfunctionsfactory.h>
#include "libqopenglversionfunctionsfactory.h"
#include "libqopenglversionfunctionsfactory.hxx"

QOpenGLVersionFunctionsFactory* QOpenGLVersionFunctionsFactory_new(const QOpenGLVersionFunctionsFactory* other) {
    return new QOpenGLVersionFunctionsFactory(*other);
}

QOpenGLVersionFunctionsFactory* QOpenGLVersionFunctionsFactory_new2(QOpenGLVersionFunctionsFactory* other) {
    return new QOpenGLVersionFunctionsFactory(std::move(*other));
}

void QOpenGLVersionFunctionsFactory_CopyAssign(QOpenGLVersionFunctionsFactory* self, QOpenGLVersionFunctionsFactory* other) {
    *self = *other;
}

void QOpenGLVersionFunctionsFactory_MoveAssign(QOpenGLVersionFunctionsFactory* self, QOpenGLVersionFunctionsFactory* other) {
    *self = std::move(*other);
}

QAbstractOpenGLFunctions* QOpenGLVersionFunctionsFactory_Get() {
    return QOpenGLVersionFunctionsFactory::get();
}

QAbstractOpenGLFunctions* QOpenGLVersionFunctionsFactory_Get1(const QOpenGLVersionProfile* versionProfile) {
    return QOpenGLVersionFunctionsFactory::get(*versionProfile);
}

QAbstractOpenGLFunctions* QOpenGLVersionFunctionsFactory_Get2(const QOpenGLVersionProfile* versionProfile, QOpenGLContext* context) {
    return QOpenGLVersionFunctionsFactory::get(*versionProfile, context);
}

void QOpenGLVersionFunctionsFactory_Delete(QOpenGLVersionFunctionsFactory* self) {
    delete self;
}
