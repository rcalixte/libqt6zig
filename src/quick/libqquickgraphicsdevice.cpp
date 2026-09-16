#include <QOpenGLContext>
#include <QQuickGraphicsDevice>
#include <qquickgraphicsdevice.h>
#include "libqquickgraphicsdevice.h"
#include "libqquickgraphicsdevice.hxx"

QQuickGraphicsDevice* QQuickGraphicsDevice_new() {
    return new QQuickGraphicsDevice();
}

QQuickGraphicsDevice* QQuickGraphicsDevice_new2(const QQuickGraphicsDevice* other) {
    return new QQuickGraphicsDevice(*other);
}

void QQuickGraphicsDevice_OperatorAssign(QQuickGraphicsDevice* self, const QQuickGraphicsDevice* other) {
    self->operator=(*other);
}

bool QQuickGraphicsDevice_IsNull(const QQuickGraphicsDevice* self) {
    return self->isNull();
}

QQuickGraphicsDevice* QQuickGraphicsDevice_FromOpenGLContext(QOpenGLContext* context) {
    return new QQuickGraphicsDevice(QQuickGraphicsDevice::fromOpenGLContext(context));
}

void QQuickGraphicsDevice_Delete(QQuickGraphicsDevice* self) {
    delete self;
}
