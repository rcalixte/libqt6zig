#include <QQuick3D>
#include <QSurfaceFormat>
#include <qquick3d.h>
#include "libqquick3d.h"
#include "libqquick3d.hxx"

QQuick3D* QQuick3D_new(const QQuick3D* other) {
    return new QQuick3D(*other);
}

QQuick3D* QQuick3D_new2(QQuick3D* other) {
    return new QQuick3D(std::move(*other));
}

void QQuick3D_CopyAssign(QQuick3D* self, QQuick3D* other) {
    *self = *other;
}

void QQuick3D_MoveAssign(QQuick3D* self, QQuick3D* other) {
    *self = std::move(*other);
}

QSurfaceFormat* QQuick3D_IdealSurfaceFormat() {
    return new QSurfaceFormat(QQuick3D::idealSurfaceFormat());
}

QSurfaceFormat* QQuick3D_IdealSurfaceFormat1(int samples) {
    return new QSurfaceFormat(QQuick3D::idealSurfaceFormat(static_cast<int>(samples)));
}

void QQuick3D_Delete(QQuick3D* self) {
    delete self;
}
