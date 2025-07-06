#pragma once
#ifndef SRCC_LIBQSURFACE_H
#define SRCC_LIBQSURFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
#endif

int QSurface_SurfaceClass(const QSurface* self);
QSurfaceFormat* QSurface_Format(const QSurface* self);
int QSurface_SurfaceType(const QSurface* self);
bool QSurface_SupportsOpenGL(const QSurface* self);
QSize* QSurface_Size(const QSurface* self);
void QSurface_Delete(QSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
