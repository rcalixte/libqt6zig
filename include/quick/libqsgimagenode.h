#pragma once
#ifndef QUICK_LIBQSGIMAGENODE_H
#define QUICK_LIBQSGIMAGENODE_H

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
typedef struct QSGImageNode QSGImageNode;
typedef struct QSGNode QSGNode;
typedef struct QSGTexture QSGTexture;
#endif

void QSGImageNode_SetRect(QSGImageNode* self, const QRectF* rect);
void QSGImageNode_SetRect2(QSGImageNode* self, double x, double y, double w, double h);
QRectF* QSGImageNode_Rect(const QSGImageNode* self);
void QSGImageNode_SetSourceRect(QSGImageNode* self, const QRectF* r);
void QSGImageNode_SetSourceRect2(QSGImageNode* self, double x, double y, double w, double h);
QRectF* QSGImageNode_SourceRect(const QSGImageNode* self);
void QSGImageNode_SetTexture(QSGImageNode* self, QSGTexture* texture);
QSGTexture* QSGImageNode_Texture(const QSGImageNode* self);
void QSGImageNode_SetFiltering(QSGImageNode* self, int filtering);
int QSGImageNode_Filtering(const QSGImageNode* self);
void QSGImageNode_SetMipmapFiltering(QSGImageNode* self, int filtering);
int QSGImageNode_MipmapFiltering(const QSGImageNode* self);
void QSGImageNode_SetAnisotropyLevel(QSGImageNode* self, int level);
int QSGImageNode_AnisotropyLevel(const QSGImageNode* self);
void QSGImageNode_SetTextureCoordinatesTransform(QSGImageNode* self, int mode);
int QSGImageNode_TextureCoordinatesTransform(const QSGImageNode* self);
void QSGImageNode_SetOwnsTexture(QSGImageNode* self, bool owns);
bool QSGImageNode_OwnsTexture(const QSGImageNode* self);
void QSGImageNode_RebuildGeometry(QSGGeometry* g, QSGTexture* texture, const QRectF* rect, QRectF* sourceRect, int texCoordMode);
void QSGImageNode_Delete(QSGImageNode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
