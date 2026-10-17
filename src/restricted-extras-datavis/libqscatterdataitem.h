#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTERDATAITEM_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTERDATAITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQuaternion QQuaternion;
typedef struct QScatterDataItem QScatterDataItem;
typedef struct QVector3D QVector3D;
#endif

QScatterDataItem* QScatterDataItem_new();
QScatterDataItem* QScatterDataItem_new2(const QVector3D* position);
QScatterDataItem* QScatterDataItem_new3(const QVector3D* position, const QQuaternion* rotation);
QScatterDataItem* QScatterDataItem_new4(const QScatterDataItem* other);
void QScatterDataItem_OperatorAssign(QScatterDataItem* self, const QScatterDataItem* other);
void QScatterDataItem_SetPosition(QScatterDataItem* self, const QVector3D* pos);
QVector3D* QScatterDataItem_Position(const QScatterDataItem* self);
void QScatterDataItem_SetRotation(QScatterDataItem* self, const QQuaternion* rot);
QQuaternion* QScatterDataItem_Rotation(const QScatterDataItem* self);
void QScatterDataItem_SetX(QScatterDataItem* self, float value);
void QScatterDataItem_SetY(QScatterDataItem* self, float value);
void QScatterDataItem_SetZ(QScatterDataItem* self, float value);
float QScatterDataItem_X(const QScatterDataItem* self);
float QScatterDataItem_Y(const QScatterDataItem* self);
float QScatterDataItem_Z(const QScatterDataItem* self);
void QScatterDataItem_Delete(QScatterDataItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
