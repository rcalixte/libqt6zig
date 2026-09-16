#include <QColor>
#include <QRectF>
#include <QSGBasicGeometryNode>
#include <QSGGeometryNode>
#include <QSGNode>
#include <QSGSimpleRectNode>
#include <qsgsimplerectnode.h>
#include "libqsgsimplerectnode.h"
#include "libqsgsimplerectnode.hxx"

QSGSimpleRectNode* QSGSimpleRectNode_new(const QRectF* rect, const QColor* color) {
    return new VirtualQSGSimpleRectNode(*rect, *color);
}

QSGSimpleRectNode* QSGSimpleRectNode_new2() {
    return new VirtualQSGSimpleRectNode();
}

void QSGSimpleRectNode_SetRect(QSGSimpleRectNode* self, const QRectF* rect) {
    self->setRect(*rect);
}

void QSGSimpleRectNode_SetRect2(QSGSimpleRectNode* self, double x, double y, double w, double h) {
    self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QSGSimpleRectNode_Rect(const QSGSimpleRectNode* self) {
    return new QRectF(self->rect());
}

void QSGSimpleRectNode_SetColor(QSGSimpleRectNode* self, const QColor* color) {
    self->setColor(*color);
}

QColor* QSGSimpleRectNode_Color(const QSGSimpleRectNode* self) {
    return new QColor(self->color());
}

// Derived class handler implementation
bool QSGSimpleRectNode_IsSubtreeBlocked(const QSGSimpleRectNode* self) {
    auto* vqsgsimplerectnode = const_cast<VirtualQSGSimpleRectNode*>(dynamic_cast<const VirtualQSGSimpleRectNode*>(self));
    if (vqsgsimplerectnode && vqsgsimplerectnode->isVirtualQSGSimpleRectNode) {
        return vqsgsimplerectnode->isSubtreeBlocked();
    } else {
        return self->QSGSimpleRectNode::isSubtreeBlocked();
    }
}

// Base class handler implementation
bool QSGSimpleRectNode_SuperIsSubtreeBlocked(const QSGSimpleRectNode* self) {
    auto* vqsgsimplerectnode = const_cast<VirtualQSGSimpleRectNode*>(dynamic_cast<const VirtualQSGSimpleRectNode*>(self));
    if (vqsgsimplerectnode && vqsgsimplerectnode->isVirtualQSGSimpleRectNode) {
        vqsgsimplerectnode->setQSGSimpleRectNode_IsSubtreeBlocked_IsBase(true);
        return vqsgsimplerectnode->isSubtreeBlocked();
    } else {
        return self->QSGSimpleRectNode::isSubtreeBlocked();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGSimpleRectNode_OnIsSubtreeBlocked(const QSGSimpleRectNode* self, intptr_t slot) {
    auto* vqsgsimplerectnode = const_cast<VirtualQSGSimpleRectNode*>(dynamic_cast<const VirtualQSGSimpleRectNode*>(self));
    if (vqsgsimplerectnode && vqsgsimplerectnode->isVirtualQSGSimpleRectNode)
        vqsgsimplerectnode->setQSGSimpleRectNode_IsSubtreeBlocked_Callback(reinterpret_cast<VirtualQSGSimpleRectNode::QSGSimpleRectNode_IsSubtreeBlocked_Callback>(slot));
}

// Derived class handler implementation
void QSGSimpleRectNode_Preprocess(QSGSimpleRectNode* self) {
    auto* vqsgsimplerectnode = dynamic_cast<VirtualQSGSimpleRectNode*>(self);
    if (vqsgsimplerectnode && vqsgsimplerectnode->isVirtualQSGSimpleRectNode) {
        vqsgsimplerectnode->preprocess();
    } else {
        self->QSGSimpleRectNode::preprocess();
    }
}

// Base class handler implementation
void QSGSimpleRectNode_SuperPreprocess(QSGSimpleRectNode* self) {
    auto* vqsgsimplerectnode = dynamic_cast<VirtualQSGSimpleRectNode*>(self);
    if (vqsgsimplerectnode && vqsgsimplerectnode->isVirtualQSGSimpleRectNode) {
        vqsgsimplerectnode->setQSGSimpleRectNode_Preprocess_IsBase(true);
        vqsgsimplerectnode->preprocess();
    } else {
        self->QSGSimpleRectNode::preprocess();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGSimpleRectNode_OnPreprocess(QSGSimpleRectNode* self, intptr_t slot) {
    auto* vqsgsimplerectnode = dynamic_cast<VirtualQSGSimpleRectNode*>(self);
    if (vqsgsimplerectnode && vqsgsimplerectnode->isVirtualQSGSimpleRectNode)
        vqsgsimplerectnode->setQSGSimpleRectNode_Preprocess_Callback(reinterpret_cast<VirtualQSGSimpleRectNode::QSGSimpleRectNode_Preprocess_Callback>(slot));
}

void QSGSimpleRectNode_Delete(QSGSimpleRectNode* self) {
    delete self;
}
