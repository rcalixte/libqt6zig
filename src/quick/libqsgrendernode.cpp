#include <QMatrix4x4>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QSGClipNode>
#include <QSGNode>
#include <QSGRenderNode>
#define WORKAROUND_INNER_CLASS_DEFINITION_QSGRenderNode__RenderState
#include <qsgrendernode.h>
#include "libqsgrendernode.h"
#include "libqsgrendernode.hxx"

QSGRenderNode* QSGRenderNode_new() {
    return new VirtualQSGRenderNode();
}

int QSGRenderNode_ChangedStates(const QSGRenderNode* self) {
    return static_cast<int>(self->changedStates());
}

void QSGRenderNode_Prepare(QSGRenderNode* self) {
    self->prepare();
}

void QSGRenderNode_Render(QSGRenderNode* self, const QSGRenderNode__RenderState* state) {
    self->render(state);
}

void QSGRenderNode_ReleaseResources(QSGRenderNode* self) {
    self->releaseResources();
}

int QSGRenderNode_Flags(const QSGRenderNode* self) {
    return static_cast<int>(self->flags());
}

QRectF* QSGRenderNode_Rect(const QSGRenderNode* self) {
    return new QRectF(self->rect());
}

QMatrix4x4* QSGRenderNode_ProjectionMatrix(const QSGRenderNode* self) {
    return (QMatrix4x4*)self->projectionMatrix();
}

QMatrix4x4* QSGRenderNode_ProjectionMatrix2(const QSGRenderNode* self, ptrdiff_t index) {
    return (QMatrix4x4*)self->projectionMatrix((qsizetype)(index));
}

QMatrix4x4* QSGRenderNode_Matrix(const QSGRenderNode* self) {
    return (QMatrix4x4*)self->matrix();
}

QSGClipNode* QSGRenderNode_ClipList(const QSGRenderNode* self) {
    return (QSGClipNode*)self->clipList();
}

double QSGRenderNode_InheritedOpacity(const QSGRenderNode* self) {
    return static_cast<double>(self->inheritedOpacity());
}

// Base class handler implementation
int QSGRenderNode_SuperChangedStates(const QSGRenderNode* self) {
    auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self));
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode) {
        vqsgrendernode->setQSGRenderNode_ChangedStates_IsBase(true);
        return static_cast<int>(vqsgrendernode->changedStates());
    } else {
        return static_cast<int>(self->QSGRenderNode::changedStates());
    }
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnChangedStates(const QSGRenderNode* self, intptr_t slot) {
    auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self));
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode)
        vqsgrendernode->setQSGRenderNode_ChangedStates_Callback(reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_ChangedStates_Callback>(slot));
}

// Base class handler implementation
void QSGRenderNode_SuperPrepare(QSGRenderNode* self) {
    auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self);
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode) {
        vqsgrendernode->setQSGRenderNode_Prepare_IsBase(true);
        vqsgrendernode->prepare();
    } else {
        self->QSGRenderNode::prepare();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnPrepare(QSGRenderNode* self, intptr_t slot) {
    auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self);
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode)
        vqsgrendernode->setQSGRenderNode_Prepare_Callback(reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_Prepare_Callback>(slot));
}

// Base class handler implementation
void QSGRenderNode_SuperRender(QSGRenderNode* self, const QSGRenderNode__RenderState* state) {
    auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self);
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode) {
        vqsgrendernode->setQSGRenderNode_Render_IsBase(true);
        vqsgrendernode->render(state);
    } else {
        ((VirtualQSGRenderNode*)self)->render(state);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnRender(QSGRenderNode* self, intptr_t slot) {
    auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self);
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode)
        vqsgrendernode->setQSGRenderNode_Render_Callback(reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_Render_Callback>(slot));
}

// Base class handler implementation
void QSGRenderNode_SuperReleaseResources(QSGRenderNode* self) {
    auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self);
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode) {
        vqsgrendernode->setQSGRenderNode_ReleaseResources_IsBase(true);
        vqsgrendernode->releaseResources();
    } else {
        self->QSGRenderNode::releaseResources();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnReleaseResources(QSGRenderNode* self, intptr_t slot) {
    auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self);
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode)
        vqsgrendernode->setQSGRenderNode_ReleaseResources_Callback(reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_ReleaseResources_Callback>(slot));
}

// Base class handler implementation
int QSGRenderNode_SuperFlags(const QSGRenderNode* self) {
    auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self));
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode) {
        vqsgrendernode->setQSGRenderNode_Flags_IsBase(true);
        return static_cast<int>(vqsgrendernode->flags());
    } else {
        return static_cast<int>(self->QSGRenderNode::flags());
    }
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnFlags(const QSGRenderNode* self, intptr_t slot) {
    auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self));
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode)
        vqsgrendernode->setQSGRenderNode_Flags_Callback(reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_Flags_Callback>(slot));
}

// Base class handler implementation
QRectF* QSGRenderNode_SuperRect(const QSGRenderNode* self) {
    auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self));
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode) {
        vqsgrendernode->setQSGRenderNode_Rect_IsBase(true);
        return new QRectF(vqsgrendernode->rect());
    } else {
        return new QRectF(((VirtualQSGRenderNode*)self)->rect());
    }
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnRect(const QSGRenderNode* self, intptr_t slot) {
    auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self));
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode)
        vqsgrendernode->setQSGRenderNode_Rect_Callback(reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_Rect_Callback>(slot));
}

// Derived class handler implementation
bool QSGRenderNode_IsSubtreeBlocked(const QSGRenderNode* self) {
    auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self));
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode) {
        return vqsgrendernode->isSubtreeBlocked();
    } else {
        return self->QSGRenderNode::isSubtreeBlocked();
    }
}

// Base class handler implementation
bool QSGRenderNode_SuperIsSubtreeBlocked(const QSGRenderNode* self) {
    auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self));
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode) {
        vqsgrendernode->setQSGRenderNode_IsSubtreeBlocked_IsBase(true);
        return vqsgrendernode->isSubtreeBlocked();
    } else {
        return self->QSGRenderNode::isSubtreeBlocked();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnIsSubtreeBlocked(const QSGRenderNode* self, intptr_t slot) {
    auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self));
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode)
        vqsgrendernode->setQSGRenderNode_IsSubtreeBlocked_Callback(reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_IsSubtreeBlocked_Callback>(slot));
}

// Derived class handler implementation
void QSGRenderNode_Preprocess(QSGRenderNode* self) {
    auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self);
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode) {
        vqsgrendernode->preprocess();
    } else {
        self->QSGRenderNode::preprocess();
    }
}

// Base class handler implementation
void QSGRenderNode_SuperPreprocess(QSGRenderNode* self) {
    auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self);
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode) {
        vqsgrendernode->setQSGRenderNode_Preprocess_IsBase(true);
        vqsgrendernode->preprocess();
    } else {
        self->QSGRenderNode::preprocess();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnPreprocess(QSGRenderNode* self, intptr_t slot) {
    auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self);
    if (vqsgrendernode && vqsgrendernode->isVirtualQSGRenderNode)
        vqsgrendernode->setQSGRenderNode_Preprocess_Callback(reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_Preprocess_Callback>(slot));
}

void QSGRenderNode_Delete(QSGRenderNode* self) {
    delete self;
}

QMatrix4x4* QSGRenderNode__RenderState_ProjectionMatrix(const QSGRenderNode__RenderState* self) {
    return (QMatrix4x4*)self->projectionMatrix();
}

QRect* QSGRenderNode__RenderState_ScissorRect(const QSGRenderNode__RenderState* self) {
    return new QRect(self->scissorRect());
}

bool QSGRenderNode__RenderState_ScissorEnabled(const QSGRenderNode__RenderState* self) {
    return self->scissorEnabled();
}

int QSGRenderNode__RenderState_StencilValue(const QSGRenderNode__RenderState* self) {
    return self->stencilValue();
}

bool QSGRenderNode__RenderState_StencilEnabled(const QSGRenderNode__RenderState* self) {
    return self->stencilEnabled();
}

QRegion* QSGRenderNode__RenderState_ClipRegion(const QSGRenderNode__RenderState* self) {
    return (QRegion*)self->clipRegion();
}

void* QSGRenderNode__RenderState_Get(const QSGRenderNode__RenderState* self, const char* state) {
    return self->get(state);
}

void QSGRenderNode__RenderState_OperatorAssign(QSGRenderNode__RenderState* self, const QSGRenderNode__RenderState* param1) {
    self->operator=(*param1);
}

void QSGRenderNode__RenderState_Delete(QSGRenderNode__RenderState* self) {
    delete self;
}
