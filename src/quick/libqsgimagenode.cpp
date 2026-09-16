#include <QRectF>
#include <QSGBasicGeometryNode>
#include <QSGGeometry>
#include <QSGGeometryNode>
#include <QSGImageNode>
#include <QSGNode>
#include <QSGTexture>
#include <qsgimagenode.h>
#include "libqsgimagenode.h"
#include "libqsgimagenode.hxx"

void QSGImageNode_SetRect(QSGImageNode* self, const QRectF* rect) {
    self->setRect(*rect);
}

void QSGImageNode_SetRect2(QSGImageNode* self, double x, double y, double w, double h) {
    self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QSGImageNode_Rect(const QSGImageNode* self) {
    return new QRectF(self->rect());
}

void QSGImageNode_SetSourceRect(QSGImageNode* self, const QRectF* r) {
    self->setSourceRect(*r);
}

void QSGImageNode_SetSourceRect2(QSGImageNode* self, double x, double y, double w, double h) {
    self->setSourceRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QSGImageNode_SourceRect(const QSGImageNode* self) {
    return new QRectF(self->sourceRect());
}

void QSGImageNode_SetTexture(QSGImageNode* self, QSGTexture* texture) {
    self->setTexture(texture);
}

QSGTexture* QSGImageNode_Texture(const QSGImageNode* self) {
    return self->texture();
}

void QSGImageNode_SetFiltering(QSGImageNode* self, int filtering) {
    self->setFiltering(static_cast<QSGTexture::Filtering>(filtering));
}

int QSGImageNode_Filtering(const QSGImageNode* self) {
    return static_cast<int>(self->filtering());
}

void QSGImageNode_SetMipmapFiltering(QSGImageNode* self, int filtering) {
    self->setMipmapFiltering(static_cast<QSGTexture::Filtering>(filtering));
}

int QSGImageNode_MipmapFiltering(const QSGImageNode* self) {
    return static_cast<int>(self->mipmapFiltering());
}

void QSGImageNode_SetAnisotropyLevel(QSGImageNode* self, int level) {
    self->setAnisotropyLevel(static_cast<QSGTexture::AnisotropyLevel>(level));
}

int QSGImageNode_AnisotropyLevel(const QSGImageNode* self) {
    return static_cast<int>(self->anisotropyLevel());
}

void QSGImageNode_SetTextureCoordinatesTransform(QSGImageNode* self, int mode) {
    self->setTextureCoordinatesTransform(static_cast<QFlags<QSGImageNode::TextureCoordinatesTransformFlag>>(mode));
}

int QSGImageNode_TextureCoordinatesTransform(const QSGImageNode* self) {
    return static_cast<int>(self->textureCoordinatesTransform());
}

void QSGImageNode_SetOwnsTexture(QSGImageNode* self, bool owns) {
    self->setOwnsTexture(owns);
}

bool QSGImageNode_OwnsTexture(const QSGImageNode* self) {
    return self->ownsTexture();
}

void QSGImageNode_RebuildGeometry(QSGGeometry* g, QSGTexture* texture, const QRectF* rect, QRectF* sourceRect, int texCoordMode) {
    QSGImageNode::rebuildGeometry(g, texture, *rect, *sourceRect, static_cast<QFlags<QSGImageNode::TextureCoordinatesTransformFlag>>(texCoordMode));
}

void QSGImageNode_Delete(QSGImageNode* self) {
    delete self;
}
