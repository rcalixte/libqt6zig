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
    return static_cast<int>(self->QSGRenderNode::changedStates());
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnChangedStates(QSGRenderNode* self, intptr_t slot) {
    if (auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self)))
        vqsgrendernode->qsgrendernode_changedstates_callback = reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_ChangedStates_Callback>(slot);
}

// Base class handler implementation
void QSGRenderNode_SuperPrepare(QSGRenderNode* self) {
    self->QSGRenderNode::prepare();
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnPrepare(QSGRenderNode* self, intptr_t slot) {
    if (auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self))
        vqsgrendernode->qsgrendernode_prepare_callback = reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_Prepare_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnRender(QSGRenderNode* self, intptr_t slot) {
    if (auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self))
        vqsgrendernode->qsgrendernode_render_callback = reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_Render_Callback>(slot);
}

// Base class handler implementation
void QSGRenderNode_SuperReleaseResources(QSGRenderNode* self) {
    self->QSGRenderNode::releaseResources();
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnReleaseResources(QSGRenderNode* self, intptr_t slot) {
    if (auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self))
        vqsgrendernode->qsgrendernode_releaseresources_callback = reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_ReleaseResources_Callback>(slot);
}

// Base class handler implementation
int QSGRenderNode_SuperFlags(const QSGRenderNode* self) {
    return static_cast<int>(self->QSGRenderNode::flags());
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnFlags(QSGRenderNode* self, intptr_t slot) {
    if (auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self)))
        vqsgrendernode->qsgrendernode_flags_callback = reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_Flags_Callback>(slot);
}

// Base class handler implementation
QRectF* QSGRenderNode_SuperRect(const QSGRenderNode* self) {
    return new QRectF(self->QSGRenderNode::rect());
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnRect(QSGRenderNode* self, intptr_t slot) {
    if (auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self)))
        vqsgrendernode->qsgrendernode_rect_callback = reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_Rect_Callback>(slot);
}

// Derived class handler implementation
bool QSGRenderNode_IsSubtreeBlocked(const QSGRenderNode* self) {
    return self->isSubtreeBlocked();
}

// Base class handler implementation
bool QSGRenderNode_SuperIsSubtreeBlocked(const QSGRenderNode* self) {
    return self->QSGRenderNode::isSubtreeBlocked();
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnIsSubtreeBlocked(QSGRenderNode* self, intptr_t slot) {
    if (auto* vqsgrendernode = const_cast<VirtualQSGRenderNode*>(dynamic_cast<const VirtualQSGRenderNode*>(self)))
        vqsgrendernode->qsgrendernode_issubtreeblocked_callback = reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_IsSubtreeBlocked_Callback>(slot);
}

// Derived class handler implementation
void QSGRenderNode_Preprocess(QSGRenderNode* self) {
    self->preprocess();
}

// Base class handler implementation
void QSGRenderNode_SuperPreprocess(QSGRenderNode* self) {
    self->QSGRenderNode::preprocess();
}

// Auxiliary method to allow providing re-implementation
void QSGRenderNode_OnPreprocess(QSGRenderNode* self, intptr_t slot) {
    if (auto* vqsgrendernode = dynamic_cast<VirtualQSGRenderNode*>(self))
        vqsgrendernode->qsgrendernode_preprocess_callback = reinterpret_cast<VirtualQSGRenderNode::QSGRenderNode_Preprocess_Callback>(slot);
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

void QSGRenderNode__RenderState_Delete(QSGRenderNode__RenderState* self) {
    delete self;
}
