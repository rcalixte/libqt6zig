#pragma once
#ifndef QUICK_LIBQSGNINEPATCHNODE_H
#define QUICK_LIBQSGNINEPATCHNODE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QRectF QRectF;
typedef struct QSGBasicGeometryNode QSGBasicGeometryNode;
typedef struct QSGGeometry QSGGeometry;
typedef struct QSGGeometryNode QSGGeometryNode;
typedef struct QSGNinePatchNode QSGNinePatchNode;
typedef struct QSGNode QSGNode;
typedef struct QSGTexture QSGTexture;
typedef struct QVector4D QVector4D;
#endif

void QSGNinePatchNode_SetTexture(QSGNinePatchNode* self, QSGTexture* texture);
void QSGNinePatchNode_SetBounds(QSGNinePatchNode* self, const QRectF* bounds);
void QSGNinePatchNode_SetDevicePixelRatio(QSGNinePatchNode* self, double ratio);
void QSGNinePatchNode_SetPadding(QSGNinePatchNode* self, double left, double top, double right, double bottom);
void QSGNinePatchNode_Update(QSGNinePatchNode* self);
void QSGNinePatchNode_RebuildGeometry(QSGTexture* texture, QSGGeometry* geometry, const QVector4D* padding, const QRectF* bounds, double dpr);
void QSGNinePatchNode_Delete(QSGNinePatchNode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
