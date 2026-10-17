#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACEDATAITEM_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACEDATAITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSurfaceDataItem QSurfaceDataItem;
typedef struct QVector3D QVector3D;
#endif

QSurfaceDataItem* QSurfaceDataItem_new();
QSurfaceDataItem* QSurfaceDataItem_new2(const QVector3D* position);
QSurfaceDataItem* QSurfaceDataItem_new3(const QSurfaceDataItem* other);
void QSurfaceDataItem_OperatorAssign(QSurfaceDataItem* self, const QSurfaceDataItem* other);
void QSurfaceDataItem_SetPosition(QSurfaceDataItem* self, const QVector3D* pos);
QVector3D* QSurfaceDataItem_Position(const QSurfaceDataItem* self);
void QSurfaceDataItem_SetX(QSurfaceDataItem* self, float value);
void QSurfaceDataItem_SetY(QSurfaceDataItem* self, float value);
void QSurfaceDataItem_SetZ(QSurfaceDataItem* self, float value);
float QSurfaceDataItem_X(const QSurfaceDataItem* self);
float QSurfaceDataItem_Y(const QSurfaceDataItem* self);
float QSurfaceDataItem_Z(const QSurfaceDataItem* self);
void QSurfaceDataItem_Delete(QSurfaceDataItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
