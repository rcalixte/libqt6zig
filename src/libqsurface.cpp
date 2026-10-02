#include <QSize>
#include <QSurface>
#include <QSurfaceFormat>
#include <qsurface.h>
#include "libqsurface.h"
#include "libqsurface.hxx"

int QSurface_SurfaceClass(const QSurface* self) {
    return static_cast<int>(self->surfaceClass());
}

QSurfaceFormat* QSurface_Format(const QSurface* self) {
    return new QSurfaceFormat(self->format());
}

int QSurface_SurfaceType(const QSurface* self) {
    return static_cast<int>(self->surfaceType());
}

bool QSurface_SupportsOpenGL(const QSurface* self) {
    return self->supportsOpenGL();
}

QSize* QSurface_Size(const QSurface* self) {
    return new QSize(self->size());
}

void QSurface_Delete(QSurface* self) {
    delete self;
}
