#include <QMatrix4x4>
#include <QRectF>
#include <QSGBasicGeometryNode>
#include <QSGClipNode>
#include <QSGGeometry>
#include <QSGGeometryNode>
#include <QSGMaterial>
#include <QSGNode>
#include <QSGNodeVisitor>
#include <QSGOpacityNode>
#include <QSGRootNode>
#include <QSGTransformNode>
#include <QString>
#include <qsgnode.h>
#include "libqsgnode.h"
#include "libqsgnode.hxx"

QSGNode* QSGNode_new() {
    return new VirtualQSGNode();
}

QSGNode* QSGNode_Parent(const QSGNode* self) {
    return self->parent();
}

void QSGNode_RemoveChildNode(QSGNode* self, QSGNode* node) {
    self->removeChildNode(node);
}

void QSGNode_RemoveAllChildNodes(QSGNode* self) {
    self->removeAllChildNodes();
}

void QSGNode_PrependChildNode(QSGNode* self, QSGNode* node) {
    self->prependChildNode(node);
}

void QSGNode_AppendChildNode(QSGNode* self, QSGNode* node) {
    self->appendChildNode(node);
}

void QSGNode_InsertChildNodeBefore(QSGNode* self, QSGNode* node, QSGNode* before) {
    self->insertChildNodeBefore(node, before);
}

void QSGNode_InsertChildNodeAfter(QSGNode* self, QSGNode* node, QSGNode* after) {
    self->insertChildNodeAfter(node, after);
}

void QSGNode_ReparentChildNodesTo(QSGNode* self, QSGNode* newParent) {
    self->reparentChildNodesTo(newParent);
}

int QSGNode_ChildCount(const QSGNode* self) {
    return self->childCount();
}

QSGNode* QSGNode_ChildAtIndex(const QSGNode* self, int i) {
    return self->childAtIndex(static_cast<int>(i));
}

QSGNode* QSGNode_FirstChild(const QSGNode* self) {
    return self->firstChild();
}

QSGNode* QSGNode_LastChild(const QSGNode* self) {
    return self->lastChild();
}

QSGNode* QSGNode_NextSibling(const QSGNode* self) {
    return self->nextSibling();
}

QSGNode* QSGNode_PreviousSibling(const QSGNode* self) {
    return self->previousSibling();
}

int QSGNode_Type(const QSGNode* self) {
    return static_cast<int>(self->type());
}

void QSGNode_ClearDirty(QSGNode* self) {
    self->clearDirty();
}

void QSGNode_MarkDirty(QSGNode* self, int bits) {
    self->markDirty(static_cast<QSGNode::DirtyState>(bits));
}

int QSGNode_DirtyState(const QSGNode* self) {
    return static_cast<int>(self->dirtyState());
}

bool QSGNode_IsSubtreeBlocked(const QSGNode* self) {
    return self->isSubtreeBlocked();
}

int QSGNode_Flags(const QSGNode* self) {
    return static_cast<int>(self->flags());
}

void QSGNode_SetFlag(QSGNode* self, int param1) {
    self->setFlag(static_cast<QSGNode::Flag>(param1));
}

void QSGNode_SetFlags(QSGNode* self, int param1) {
    self->setFlags(static_cast<QSGNode::Flags>(param1));
}

void QSGNode_Preprocess(QSGNode* self) {
    self->preprocess();
}

void QSGNode_SetFlag2(QSGNode* self, int param1, bool param2) {
    self->setFlag(static_cast<QSGNode::Flag>(param1), param2);
}

void QSGNode_SetFlags2(QSGNode* self, int param1, bool param2) {
    self->setFlags(static_cast<QSGNode::Flags>(param1), param2);
}

// Base class handler implementation
bool QSGNode_SuperIsSubtreeBlocked(const QSGNode* self) {
    return self->QSGNode::isSubtreeBlocked();
}

// Auxiliary method to allow providing re-implementation
void QSGNode_OnIsSubtreeBlocked(QSGNode* self, intptr_t slot) {
    if (auto* vqsgnode = const_cast<VirtualQSGNode*>(dynamic_cast<const VirtualQSGNode*>(self)))
        vqsgnode->qsgnode_issubtreeblocked_callback = reinterpret_cast<VirtualQSGNode::QSGNode_IsSubtreeBlocked_Callback>(slot);
}

// Base class handler implementation
void QSGNode_SuperPreprocess(QSGNode* self) {
    self->QSGNode::preprocess();
}

// Auxiliary method to allow providing re-implementation
void QSGNode_OnPreprocess(QSGNode* self, intptr_t slot) {
    if (auto* vqsgnode = dynamic_cast<VirtualQSGNode*>(self))
        vqsgnode->qsgnode_preprocess_callback = reinterpret_cast<VirtualQSGNode::QSGNode_Preprocess_Callback>(slot);
}

void QSGNode_Delete(QSGNode* self) {
    delete self;
}

void qsgnode_h_QsgnodeSetDescription(QSGNode* node, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    qsgnode_set_description(node, description_QString);
}

void QSGBasicGeometryNode_SetGeometry(QSGBasicGeometryNode* self, QSGGeometry* geometry) {
    self->setGeometry(geometry);
}

QSGGeometry* QSGBasicGeometryNode_Geometry(const QSGBasicGeometryNode* self) {
    return (QSGGeometry*)self->geometry();
}

QSGGeometry* QSGBasicGeometryNode_Geometry2(QSGBasicGeometryNode* self) {
    return self->geometry();
}

QMatrix4x4* QSGBasicGeometryNode_Matrix(const QSGBasicGeometryNode* self) {
    return (QMatrix4x4*)self->matrix();
}

QSGClipNode* QSGBasicGeometryNode_ClipList(const QSGBasicGeometryNode* self) {
    return (QSGClipNode*)self->clipList();
}

void QSGBasicGeometryNode_SetRendererMatrix(QSGBasicGeometryNode* self, const QMatrix4x4* m) {
    self->setRendererMatrix(m);
}

void QSGBasicGeometryNode_SetRendererClipList(QSGBasicGeometryNode* self, const QSGClipNode* c) {
    self->setRendererClipList(c);
}

void QSGBasicGeometryNode_Delete(QSGBasicGeometryNode* self) {
    delete self;
}

QSGGeometryNode* QSGGeometryNode_new() {
    return new VirtualQSGGeometryNode();
}

void QSGGeometryNode_SetMaterial(QSGGeometryNode* self, QSGMaterial* material) {
    self->setMaterial(material);
}

QSGMaterial* QSGGeometryNode_Material(const QSGGeometryNode* self) {
    return self->material();
}

void QSGGeometryNode_SetOpaqueMaterial(QSGGeometryNode* self, QSGMaterial* material) {
    self->setOpaqueMaterial(material);
}

QSGMaterial* QSGGeometryNode_OpaqueMaterial(const QSGGeometryNode* self) {
    return self->opaqueMaterial();
}

QSGMaterial* QSGGeometryNode_ActiveMaterial(const QSGGeometryNode* self) {
    return self->activeMaterial();
}

void QSGGeometryNode_SetRenderOrder(QSGGeometryNode* self, int order) {
    self->setRenderOrder(static_cast<int>(order));
}

int QSGGeometryNode_RenderOrder(const QSGGeometryNode* self) {
    return self->renderOrder();
}

void QSGGeometryNode_SetInheritedOpacity(QSGGeometryNode* self, double opacity) {
    self->setInheritedOpacity(static_cast<qreal>(opacity));
}

double QSGGeometryNode_InheritedOpacity(const QSGGeometryNode* self) {
    return static_cast<double>(self->inheritedOpacity());
}

// Derived class handler implementation
bool QSGGeometryNode_IsSubtreeBlocked(const QSGGeometryNode* self) {
    return self->isSubtreeBlocked();
}

// Base class handler implementation
bool QSGGeometryNode_SuperIsSubtreeBlocked(const QSGGeometryNode* self) {
    return self->QSGGeometryNode::isSubtreeBlocked();
}

// Auxiliary method to allow providing re-implementation
void QSGGeometryNode_OnIsSubtreeBlocked(QSGGeometryNode* self, intptr_t slot) {
    if (auto* vqsggeometrynode = const_cast<VirtualQSGGeometryNode*>(dynamic_cast<const VirtualQSGGeometryNode*>(self)))
        vqsggeometrynode->qsggeometrynode_issubtreeblocked_callback = reinterpret_cast<VirtualQSGGeometryNode::QSGGeometryNode_IsSubtreeBlocked_Callback>(slot);
}

// Derived class handler implementation
void QSGGeometryNode_Preprocess(QSGGeometryNode* self) {
    self->preprocess();
}

// Base class handler implementation
void QSGGeometryNode_SuperPreprocess(QSGGeometryNode* self) {
    self->QSGGeometryNode::preprocess();
}

// Auxiliary method to allow providing re-implementation
void QSGGeometryNode_OnPreprocess(QSGGeometryNode* self, intptr_t slot) {
    if (auto* vqsggeometrynode = dynamic_cast<VirtualQSGGeometryNode*>(self))
        vqsggeometrynode->qsggeometrynode_preprocess_callback = reinterpret_cast<VirtualQSGGeometryNode::QSGGeometryNode_Preprocess_Callback>(slot);
}

void QSGGeometryNode_Delete(QSGGeometryNode* self) {
    delete self;
}

QSGClipNode* QSGClipNode_new() {
    return new VirtualQSGClipNode();
}

void QSGClipNode_SetIsRectangular(QSGClipNode* self, bool rectHint) {
    self->setIsRectangular(rectHint);
}

bool QSGClipNode_IsRectangular(const QSGClipNode* self) {
    return self->isRectangular();
}

void QSGClipNode_SetClipRect(QSGClipNode* self, const QRectF* clipRect) {
    self->setClipRect(*clipRect);
}

QRectF* QSGClipNode_ClipRect(const QSGClipNode* self) {
    return new QRectF(self->clipRect());
}

// Derived class handler implementation
bool QSGClipNode_IsSubtreeBlocked(const QSGClipNode* self) {
    return self->isSubtreeBlocked();
}

// Base class handler implementation
bool QSGClipNode_SuperIsSubtreeBlocked(const QSGClipNode* self) {
    return self->QSGClipNode::isSubtreeBlocked();
}

// Auxiliary method to allow providing re-implementation
void QSGClipNode_OnIsSubtreeBlocked(QSGClipNode* self, intptr_t slot) {
    if (auto* vqsgclipnode = const_cast<VirtualQSGClipNode*>(dynamic_cast<const VirtualQSGClipNode*>(self)))
        vqsgclipnode->qsgclipnode_issubtreeblocked_callback = reinterpret_cast<VirtualQSGClipNode::QSGClipNode_IsSubtreeBlocked_Callback>(slot);
}

// Derived class handler implementation
void QSGClipNode_Preprocess(QSGClipNode* self) {
    self->preprocess();
}

// Base class handler implementation
void QSGClipNode_SuperPreprocess(QSGClipNode* self) {
    self->QSGClipNode::preprocess();
}

// Auxiliary method to allow providing re-implementation
void QSGClipNode_OnPreprocess(QSGClipNode* self, intptr_t slot) {
    if (auto* vqsgclipnode = dynamic_cast<VirtualQSGClipNode*>(self))
        vqsgclipnode->qsgclipnode_preprocess_callback = reinterpret_cast<VirtualQSGClipNode::QSGClipNode_Preprocess_Callback>(slot);
}

void QSGClipNode_Delete(QSGClipNode* self) {
    delete self;
}

QSGTransformNode* QSGTransformNode_new() {
    return new VirtualQSGTransformNode();
}

void QSGTransformNode_SetMatrix(QSGTransformNode* self, const QMatrix4x4* matrix) {
    self->setMatrix(*matrix);
}

QMatrix4x4* QSGTransformNode_Matrix(const QSGTransformNode* self) {
    const QMatrix4x4& _ret = self->matrix();
    // Cast returned reference into pointer
    return const_cast<QMatrix4x4*>(&_ret);
}

void QSGTransformNode_SetCombinedMatrix(QSGTransformNode* self, const QMatrix4x4* matrix) {
    self->setCombinedMatrix(*matrix);
}

QMatrix4x4* QSGTransformNode_CombinedMatrix(const QSGTransformNode* self) {
    const QMatrix4x4& _ret = self->combinedMatrix();
    // Cast returned reference into pointer
    return const_cast<QMatrix4x4*>(&_ret);
}

// Derived class handler implementation
bool QSGTransformNode_IsSubtreeBlocked(const QSGTransformNode* self) {
    return self->isSubtreeBlocked();
}

// Base class handler implementation
bool QSGTransformNode_SuperIsSubtreeBlocked(const QSGTransformNode* self) {
    return self->QSGTransformNode::isSubtreeBlocked();
}

// Auxiliary method to allow providing re-implementation
void QSGTransformNode_OnIsSubtreeBlocked(QSGTransformNode* self, intptr_t slot) {
    if (auto* vqsgtransformnode = const_cast<VirtualQSGTransformNode*>(dynamic_cast<const VirtualQSGTransformNode*>(self)))
        vqsgtransformnode->qsgtransformnode_issubtreeblocked_callback = reinterpret_cast<VirtualQSGTransformNode::QSGTransformNode_IsSubtreeBlocked_Callback>(slot);
}

// Derived class handler implementation
void QSGTransformNode_Preprocess(QSGTransformNode* self) {
    self->preprocess();
}

// Base class handler implementation
void QSGTransformNode_SuperPreprocess(QSGTransformNode* self) {
    self->QSGTransformNode::preprocess();
}

// Auxiliary method to allow providing re-implementation
void QSGTransformNode_OnPreprocess(QSGTransformNode* self, intptr_t slot) {
    if (auto* vqsgtransformnode = dynamic_cast<VirtualQSGTransformNode*>(self))
        vqsgtransformnode->qsgtransformnode_preprocess_callback = reinterpret_cast<VirtualQSGTransformNode::QSGTransformNode_Preprocess_Callback>(slot);
}

void QSGTransformNode_Delete(QSGTransformNode* self) {
    delete self;
}

QSGRootNode* QSGRootNode_new() {
    return new VirtualQSGRootNode();
}

// Derived class handler implementation
bool QSGRootNode_IsSubtreeBlocked(const QSGRootNode* self) {
    return self->isSubtreeBlocked();
}

// Base class handler implementation
bool QSGRootNode_SuperIsSubtreeBlocked(const QSGRootNode* self) {
    return self->QSGRootNode::isSubtreeBlocked();
}

// Auxiliary method to allow providing re-implementation
void QSGRootNode_OnIsSubtreeBlocked(QSGRootNode* self, intptr_t slot) {
    if (auto* vqsgrootnode = const_cast<VirtualQSGRootNode*>(dynamic_cast<const VirtualQSGRootNode*>(self)))
        vqsgrootnode->qsgrootnode_issubtreeblocked_callback = reinterpret_cast<VirtualQSGRootNode::QSGRootNode_IsSubtreeBlocked_Callback>(slot);
}

// Derived class handler implementation
void QSGRootNode_Preprocess(QSGRootNode* self) {
    self->preprocess();
}

// Base class handler implementation
void QSGRootNode_SuperPreprocess(QSGRootNode* self) {
    self->QSGRootNode::preprocess();
}

// Auxiliary method to allow providing re-implementation
void QSGRootNode_OnPreprocess(QSGRootNode* self, intptr_t slot) {
    if (auto* vqsgrootnode = dynamic_cast<VirtualQSGRootNode*>(self))
        vqsgrootnode->qsgrootnode_preprocess_callback = reinterpret_cast<VirtualQSGRootNode::QSGRootNode_Preprocess_Callback>(slot);
}

void QSGRootNode_Delete(QSGRootNode* self) {
    delete self;
}

QSGOpacityNode* QSGOpacityNode_new() {
    return new VirtualQSGOpacityNode();
}

void QSGOpacityNode_SetOpacity(QSGOpacityNode* self, double opacity) {
    self->setOpacity(static_cast<qreal>(opacity));
}

double QSGOpacityNode_Opacity(const QSGOpacityNode* self) {
    return static_cast<double>(self->opacity());
}

void QSGOpacityNode_SetCombinedOpacity(QSGOpacityNode* self, double opacity) {
    self->setCombinedOpacity(static_cast<qreal>(opacity));
}

double QSGOpacityNode_CombinedOpacity(const QSGOpacityNode* self) {
    return static_cast<double>(self->combinedOpacity());
}

bool QSGOpacityNode_IsSubtreeBlocked(const QSGOpacityNode* self) {
    return self->isSubtreeBlocked();
}

// Base class handler implementation
bool QSGOpacityNode_SuperIsSubtreeBlocked(const QSGOpacityNode* self) {
    return self->QSGOpacityNode::isSubtreeBlocked();
}

// Auxiliary method to allow providing re-implementation
void QSGOpacityNode_OnIsSubtreeBlocked(QSGOpacityNode* self, intptr_t slot) {
    if (auto* vqsgopacitynode = const_cast<VirtualQSGOpacityNode*>(dynamic_cast<const VirtualQSGOpacityNode*>(self)))
        vqsgopacitynode->qsgopacitynode_issubtreeblocked_callback = reinterpret_cast<VirtualQSGOpacityNode::QSGOpacityNode_IsSubtreeBlocked_Callback>(slot);
}

// Derived class handler implementation
void QSGOpacityNode_Preprocess(QSGOpacityNode* self) {
    self->preprocess();
}

// Base class handler implementation
void QSGOpacityNode_SuperPreprocess(QSGOpacityNode* self) {
    self->QSGOpacityNode::preprocess();
}

// Auxiliary method to allow providing re-implementation
void QSGOpacityNode_OnPreprocess(QSGOpacityNode* self, intptr_t slot) {
    if (auto* vqsgopacitynode = dynamic_cast<VirtualQSGOpacityNode*>(self))
        vqsgopacitynode->qsgopacitynode_preprocess_callback = reinterpret_cast<VirtualQSGOpacityNode::QSGOpacityNode_Preprocess_Callback>(slot);
}

void QSGOpacityNode_Delete(QSGOpacityNode* self) {
    delete self;
}

QSGNodeVisitor* QSGNodeVisitor_new() {
    return new VirtualQSGNodeVisitor();
}

void QSGNodeVisitor_EnterTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1) {
    auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self);
    if (vqsgnodevisitor) {
        vqsgnodevisitor->enterTransformNode(param1);
    }
}

void QSGNodeVisitor_LeaveTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1) {
    auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self);
    if (vqsgnodevisitor) {
        vqsgnodevisitor->leaveTransformNode(param1);
    }
}

void QSGNodeVisitor_EnterClipNode(QSGNodeVisitor* self, QSGClipNode* param1) {
    auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self);
    if (vqsgnodevisitor) {
        vqsgnodevisitor->enterClipNode(param1);
    }
}

void QSGNodeVisitor_LeaveClipNode(QSGNodeVisitor* self, QSGClipNode* param1) {
    auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self);
    if (vqsgnodevisitor) {
        vqsgnodevisitor->leaveClipNode(param1);
    }
}

void QSGNodeVisitor_EnterGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1) {
    auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self);
    if (vqsgnodevisitor) {
        vqsgnodevisitor->enterGeometryNode(param1);
    }
}

void QSGNodeVisitor_LeaveGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1) {
    auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self);
    if (vqsgnodevisitor) {
        vqsgnodevisitor->leaveGeometryNode(param1);
    }
}

void QSGNodeVisitor_EnterOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1) {
    auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self);
    if (vqsgnodevisitor) {
        vqsgnodevisitor->enterOpacityNode(param1);
    }
}

void QSGNodeVisitor_LeaveOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1) {
    auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self);
    if (vqsgnodevisitor) {
        vqsgnodevisitor->leaveOpacityNode(param1);
    }
}

void QSGNodeVisitor_VisitNode(QSGNodeVisitor* self, QSGNode* n) {
    auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self);
    if (vqsgnodevisitor) {
        vqsgnodevisitor->visitNode(n);
    }
}

void QSGNodeVisitor_VisitChildren(QSGNodeVisitor* self, QSGNode* n) {
    auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self);
    if (vqsgnodevisitor) {
        vqsgnodevisitor->visitChildren(n);
    }
}

// Base class handler implementation
void QSGNodeVisitor_SuperEnterTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self)) {
        vqsgnodevisitor->QSGNodeVisitor::enterTransformNode(param1);
    } else
        qFatal("Error: Protected virtual method QSGNodeVisitor::enterTransformNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGNodeVisitor_OnEnterTransformNode(QSGNodeVisitor* self, intptr_t slot) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self))
        vqsgnodevisitor->qsgnodevisitor_entertransformnode_callback = reinterpret_cast<VirtualQSGNodeVisitor::QSGNodeVisitor_EnterTransformNode_Callback>(slot);
}

// Base class handler implementation
void QSGNodeVisitor_SuperLeaveTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self)) {
        vqsgnodevisitor->QSGNodeVisitor::leaveTransformNode(param1);
    } else
        qFatal("Error: Protected virtual method QSGNodeVisitor::leaveTransformNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGNodeVisitor_OnLeaveTransformNode(QSGNodeVisitor* self, intptr_t slot) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self))
        vqsgnodevisitor->qsgnodevisitor_leavetransformnode_callback = reinterpret_cast<VirtualQSGNodeVisitor::QSGNodeVisitor_LeaveTransformNode_Callback>(slot);
}

// Base class handler implementation
void QSGNodeVisitor_SuperEnterClipNode(QSGNodeVisitor* self, QSGClipNode* param1) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self)) {
        vqsgnodevisitor->QSGNodeVisitor::enterClipNode(param1);
    } else
        qFatal("Error: Protected virtual method QSGNodeVisitor::enterClipNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGNodeVisitor_OnEnterClipNode(QSGNodeVisitor* self, intptr_t slot) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self))
        vqsgnodevisitor->qsgnodevisitor_enterclipnode_callback = reinterpret_cast<VirtualQSGNodeVisitor::QSGNodeVisitor_EnterClipNode_Callback>(slot);
}

// Base class handler implementation
void QSGNodeVisitor_SuperLeaveClipNode(QSGNodeVisitor* self, QSGClipNode* param1) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self)) {
        vqsgnodevisitor->QSGNodeVisitor::leaveClipNode(param1);
    } else
        qFatal("Error: Protected virtual method QSGNodeVisitor::leaveClipNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGNodeVisitor_OnLeaveClipNode(QSGNodeVisitor* self, intptr_t slot) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self))
        vqsgnodevisitor->qsgnodevisitor_leaveclipnode_callback = reinterpret_cast<VirtualQSGNodeVisitor::QSGNodeVisitor_LeaveClipNode_Callback>(slot);
}

// Base class handler implementation
void QSGNodeVisitor_SuperEnterGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self)) {
        vqsgnodevisitor->QSGNodeVisitor::enterGeometryNode(param1);
    } else
        qFatal("Error: Protected virtual method QSGNodeVisitor::enterGeometryNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGNodeVisitor_OnEnterGeometryNode(QSGNodeVisitor* self, intptr_t slot) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self))
        vqsgnodevisitor->qsgnodevisitor_entergeometrynode_callback = reinterpret_cast<VirtualQSGNodeVisitor::QSGNodeVisitor_EnterGeometryNode_Callback>(slot);
}

// Base class handler implementation
void QSGNodeVisitor_SuperLeaveGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self)) {
        vqsgnodevisitor->QSGNodeVisitor::leaveGeometryNode(param1);
    } else
        qFatal("Error: Protected virtual method QSGNodeVisitor::leaveGeometryNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGNodeVisitor_OnLeaveGeometryNode(QSGNodeVisitor* self, intptr_t slot) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self))
        vqsgnodevisitor->qsgnodevisitor_leavegeometrynode_callback = reinterpret_cast<VirtualQSGNodeVisitor::QSGNodeVisitor_LeaveGeometryNode_Callback>(slot);
}

// Base class handler implementation
void QSGNodeVisitor_SuperEnterOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self)) {
        vqsgnodevisitor->QSGNodeVisitor::enterOpacityNode(param1);
    } else
        qFatal("Error: Protected virtual method QSGNodeVisitor::enterOpacityNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGNodeVisitor_OnEnterOpacityNode(QSGNodeVisitor* self, intptr_t slot) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self))
        vqsgnodevisitor->qsgnodevisitor_enteropacitynode_callback = reinterpret_cast<VirtualQSGNodeVisitor::QSGNodeVisitor_EnterOpacityNode_Callback>(slot);
}

// Base class handler implementation
void QSGNodeVisitor_SuperLeaveOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self)) {
        vqsgnodevisitor->QSGNodeVisitor::leaveOpacityNode(param1);
    } else
        qFatal("Error: Protected virtual method QSGNodeVisitor::leaveOpacityNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGNodeVisitor_OnLeaveOpacityNode(QSGNodeVisitor* self, intptr_t slot) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self))
        vqsgnodevisitor->qsgnodevisitor_leaveopacitynode_callback = reinterpret_cast<VirtualQSGNodeVisitor::QSGNodeVisitor_LeaveOpacityNode_Callback>(slot);
}

// Base class handler implementation
void QSGNodeVisitor_SuperVisitNode(QSGNodeVisitor* self, QSGNode* n) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self)) {
        vqsgnodevisitor->QSGNodeVisitor::visitNode(n);
    } else
        qFatal("Error: Protected virtual method QSGNodeVisitor::visitNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGNodeVisitor_OnVisitNode(QSGNodeVisitor* self, intptr_t slot) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self))
        vqsgnodevisitor->qsgnodevisitor_visitnode_callback = reinterpret_cast<VirtualQSGNodeVisitor::QSGNodeVisitor_VisitNode_Callback>(slot);
}

// Base class handler implementation
void QSGNodeVisitor_SuperVisitChildren(QSGNodeVisitor* self, QSGNode* n) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self)) {
        vqsgnodevisitor->QSGNodeVisitor::visitChildren(n);
    } else
        qFatal("Error: Protected virtual method QSGNodeVisitor::visitChildren called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGNodeVisitor_OnVisitChildren(QSGNodeVisitor* self, intptr_t slot) {
    if (auto* vqsgnodevisitor = dynamic_cast<VirtualQSGNodeVisitor*>(self))
        vqsgnodevisitor->qsgnodevisitor_visitchildren_callback = reinterpret_cast<VirtualQSGNodeVisitor::QSGNodeVisitor_VisitChildren_Callback>(slot);
}

void QSGNodeVisitor_Delete(QSGNodeVisitor* self) {
    delete self;
}
