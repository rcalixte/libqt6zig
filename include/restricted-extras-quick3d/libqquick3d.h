#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3D_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3D_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQuick3D QQuick3D;
typedef struct QSurfaceFormat QSurfaceFormat;
#endif

QQuick3D* QQuick3D_new(const QQuick3D* other);
QQuick3D* QQuick3D_new2(QQuick3D* other);
void QQuick3D_CopyAssign(QQuick3D* self, QQuick3D* other);
void QQuick3D_MoveAssign(QQuick3D* self, QQuick3D* other);
QSurfaceFormat* QQuick3D_IdealSurfaceFormat();
QSurfaceFormat* QQuick3D_IdealSurfaceFormat1(int samples);
void QQuick3D_Delete(QQuick3D* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
