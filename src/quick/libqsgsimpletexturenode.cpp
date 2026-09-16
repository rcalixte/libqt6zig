#include <QRectF>
#include <QSGBasicGeometryNode>
#include <QSGGeometryNode>
#include <QSGNode>
#include <QSGSimpleTextureNode>
#include <QSGTexture>
#include <qsgsimpletexturenode.h>
#include "libqsgsimpletexturenode.h"
#include "libqsgsimpletexturenode.hxx"

QSGSimpleTextureNode* QSGSimpleTextureNode_new() {
    return new VirtualQSGSimpleTextureNode();
}

void QSGSimpleTextureNode_SetRect(QSGSimpleTextureNode* self, const QRectF* rect) {
    self->setRect(*rect);
}

void QSGSimpleTextureNode_SetRect2(QSGSimpleTextureNode* self, double x, double y, double w, double h) {
    self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QSGSimpleTextureNode_Rect(const QSGSimpleTextureNode* self) {
    return new QRectF(self->rect());
}

void QSGSimpleTextureNode_SetSourceRect(QSGSimpleTextureNode* self, const QRectF* r) {
    self->setSourceRect(*r);
}

void QSGSimpleTextureNode_SetSourceRect2(QSGSimpleTextureNode* self, double x, double y, double w, double h) {
    self->setSourceRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QSGSimpleTextureNode_SourceRect(const QSGSimpleTextureNode* self) {
    return new QRectF(self->sourceRect());
}

void QSGSimpleTextureNode_SetTexture(QSGSimpleTextureNode* self, QSGTexture* texture) {
    self->setTexture(texture);
}

QSGTexture* QSGSimpleTextureNode_Texture(const QSGSimpleTextureNode* self) {
    return self->texture();
}

void QSGSimpleTextureNode_SetFiltering(QSGSimpleTextureNode* self, int filtering) {
    self->setFiltering(static_cast<QSGTexture::Filtering>(filtering));
}

int QSGSimpleTextureNode_Filtering(const QSGSimpleTextureNode* self) {
    return static_cast<int>(self->filtering());
}

void QSGSimpleTextureNode_SetTextureCoordinatesTransform(QSGSimpleTextureNode* self, int mode) {
    self->setTextureCoordinatesTransform(static_cast<QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag>>(mode));
}

int QSGSimpleTextureNode_TextureCoordinatesTransform(const QSGSimpleTextureNode* self) {
    return static_cast<int>(self->textureCoordinatesTransform());
}

void QSGSimpleTextureNode_SetOwnsTexture(QSGSimpleTextureNode* self, bool owns) {
    self->setOwnsTexture(owns);
}

bool QSGSimpleTextureNode_OwnsTexture(const QSGSimpleTextureNode* self) {
    return self->ownsTexture();
}

// Derived class handler implementation
bool QSGSimpleTextureNode_IsSubtreeBlocked(const QSGSimpleTextureNode* self) {
    auto* vqsgsimpletexturenode = const_cast<VirtualQSGSimpleTextureNode*>(dynamic_cast<const VirtualQSGSimpleTextureNode*>(self));
    if (vqsgsimpletexturenode && vqsgsimpletexturenode->isVirtualQSGSimpleTextureNode) {
        return vqsgsimpletexturenode->isSubtreeBlocked();
    } else {
        return self->QSGSimpleTextureNode::isSubtreeBlocked();
    }
}

// Base class handler implementation
bool QSGSimpleTextureNode_SuperIsSubtreeBlocked(const QSGSimpleTextureNode* self) {
    auto* vqsgsimpletexturenode = const_cast<VirtualQSGSimpleTextureNode*>(dynamic_cast<const VirtualQSGSimpleTextureNode*>(self));
    if (vqsgsimpletexturenode && vqsgsimpletexturenode->isVirtualQSGSimpleTextureNode) {
        vqsgsimpletexturenode->setQSGSimpleTextureNode_IsSubtreeBlocked_IsBase(true);
        return vqsgsimpletexturenode->isSubtreeBlocked();
    } else {
        return self->QSGSimpleTextureNode::isSubtreeBlocked();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGSimpleTextureNode_OnIsSubtreeBlocked(const QSGSimpleTextureNode* self, intptr_t slot) {
    auto* vqsgsimpletexturenode = const_cast<VirtualQSGSimpleTextureNode*>(dynamic_cast<const VirtualQSGSimpleTextureNode*>(self));
    if (vqsgsimpletexturenode && vqsgsimpletexturenode->isVirtualQSGSimpleTextureNode)
        vqsgsimpletexturenode->setQSGSimpleTextureNode_IsSubtreeBlocked_Callback(reinterpret_cast<VirtualQSGSimpleTextureNode::QSGSimpleTextureNode_IsSubtreeBlocked_Callback>(slot));
}

// Derived class handler implementation
void QSGSimpleTextureNode_Preprocess(QSGSimpleTextureNode* self) {
    auto* vqsgsimpletexturenode = dynamic_cast<VirtualQSGSimpleTextureNode*>(self);
    if (vqsgsimpletexturenode && vqsgsimpletexturenode->isVirtualQSGSimpleTextureNode) {
        vqsgsimpletexturenode->preprocess();
    } else {
        self->QSGSimpleTextureNode::preprocess();
    }
}

// Base class handler implementation
void QSGSimpleTextureNode_SuperPreprocess(QSGSimpleTextureNode* self) {
    auto* vqsgsimpletexturenode = dynamic_cast<VirtualQSGSimpleTextureNode*>(self);
    if (vqsgsimpletexturenode && vqsgsimpletexturenode->isVirtualQSGSimpleTextureNode) {
        vqsgsimpletexturenode->setQSGSimpleTextureNode_Preprocess_IsBase(true);
        vqsgsimpletexturenode->preprocess();
    } else {
        self->QSGSimpleTextureNode::preprocess();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGSimpleTextureNode_OnPreprocess(QSGSimpleTextureNode* self, intptr_t slot) {
    auto* vqsgsimpletexturenode = dynamic_cast<VirtualQSGSimpleTextureNode*>(self);
    if (vqsgsimpletexturenode && vqsgsimpletexturenode->isVirtualQSGSimpleTextureNode)
        vqsgsimpletexturenode->setQSGSimpleTextureNode_Preprocess_Callback(reinterpret_cast<VirtualQSGSimpleTextureNode::QSGSimpleTextureNode_Preprocess_Callback>(slot));
}

void QSGSimpleTextureNode_Delete(QSGSimpleTextureNode* self) {
    delete self;
}
