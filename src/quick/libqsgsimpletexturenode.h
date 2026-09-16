#pragma once
#ifndef QUICK_LIBQSGSIMPLETEXTURENODE_H
#define QUICK_LIBQSGSIMPLETEXTURENODE_H

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
typedef struct QSGGeometryNode QSGGeometryNode;
typedef struct QSGNode QSGNode;
typedef struct QSGSimpleTextureNode QSGSimpleTextureNode;
typedef struct QSGTexture QSGTexture;
#endif

QSGSimpleTextureNode* QSGSimpleTextureNode_new();
void QSGSimpleTextureNode_SetRect(QSGSimpleTextureNode* self, const QRectF* rect);
void QSGSimpleTextureNode_SetRect2(QSGSimpleTextureNode* self, double x, double y, double w, double h);
QRectF* QSGSimpleTextureNode_Rect(const QSGSimpleTextureNode* self);
void QSGSimpleTextureNode_SetSourceRect(QSGSimpleTextureNode* self, const QRectF* r);
void QSGSimpleTextureNode_SetSourceRect2(QSGSimpleTextureNode* self, double x, double y, double w, double h);
QRectF* QSGSimpleTextureNode_SourceRect(const QSGSimpleTextureNode* self);
void QSGSimpleTextureNode_SetTexture(QSGSimpleTextureNode* self, QSGTexture* texture);
QSGTexture* QSGSimpleTextureNode_Texture(const QSGSimpleTextureNode* self);
void QSGSimpleTextureNode_SetFiltering(QSGSimpleTextureNode* self, int filtering);
int QSGSimpleTextureNode_Filtering(const QSGSimpleTextureNode* self);
void QSGSimpleTextureNode_SetTextureCoordinatesTransform(QSGSimpleTextureNode* self, int mode);
int QSGSimpleTextureNode_TextureCoordinatesTransform(const QSGSimpleTextureNode* self);
void QSGSimpleTextureNode_SetOwnsTexture(QSGSimpleTextureNode* self, bool owns);
bool QSGSimpleTextureNode_OwnsTexture(const QSGSimpleTextureNode* self);
bool QSGSimpleTextureNode_IsSubtreeBlocked(const QSGSimpleTextureNode* self);
void QSGSimpleTextureNode_OnIsSubtreeBlocked(const QSGSimpleTextureNode* self, intptr_t slot);
bool QSGSimpleTextureNode_SuperIsSubtreeBlocked(const QSGSimpleTextureNode* self);
void QSGSimpleTextureNode_Preprocess(QSGSimpleTextureNode* self);
void QSGSimpleTextureNode_OnPreprocess(QSGSimpleTextureNode* self, intptr_t slot);
void QSGSimpleTextureNode_SuperPreprocess(QSGSimpleTextureNode* self);
void QSGSimpleTextureNode_Delete(QSGSimpleTextureNode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
