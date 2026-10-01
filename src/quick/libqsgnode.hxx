#pragma once
#ifndef QUICK_LIBQSGNODE_HXX
#define QUICK_LIBQSGNODE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGNode
class VirtualQSGNode final : public QSGNode {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGNode_IsSubtreeBlocked_Callback = bool (*)(const QSGNode*);
    using QSGNode_Preprocess_Callback = void (*)(QSGNode*);

    // Instance callback storage
    QSGNode_IsSubtreeBlocked_Callback qsgnode_issubtreeblocked_callback = nullptr;
    QSGNode_Preprocess_Callback qsgnode_preprocess_callback = nullptr;

    VirtualQSGNode() : QSGNode() {};

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgnode_issubtreeblocked_callback) {
            bool callback_ret = qsgnode_issubtreeblocked_callback(this);
            return callback_ret;
        }
        return QSGNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgnode_preprocess_callback) {
            qsgnode_preprocess_callback(this);
            return;
        }
        QSGNode::preprocess();
    }
};

// This class is a subclass of QSGGeometryNode
class VirtualQSGGeometryNode final : public QSGGeometryNode {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGGeometryNode_IsSubtreeBlocked_Callback = bool (*)(const QSGGeometryNode*);
    using QSGGeometryNode_Preprocess_Callback = void (*)(QSGGeometryNode*);

    // Instance callback storage
    QSGGeometryNode_IsSubtreeBlocked_Callback qsggeometrynode_issubtreeblocked_callback = nullptr;
    QSGGeometryNode_Preprocess_Callback qsggeometrynode_preprocess_callback = nullptr;

    VirtualQSGGeometryNode() : QSGGeometryNode() {};

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsggeometrynode_issubtreeblocked_callback) {
            bool callback_ret = qsggeometrynode_issubtreeblocked_callback(this);
            return callback_ret;
        }
        return QSGGeometryNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsggeometrynode_preprocess_callback) {
            qsggeometrynode_preprocess_callback(this);
            return;
        }
        QSGGeometryNode::preprocess();
    }
};

// This class is a subclass of QSGClipNode
class VirtualQSGClipNode final : public QSGClipNode {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGClipNode_IsSubtreeBlocked_Callback = bool (*)(const QSGClipNode*);
    using QSGClipNode_Preprocess_Callback = void (*)(QSGClipNode*);

    // Instance callback storage
    QSGClipNode_IsSubtreeBlocked_Callback qsgclipnode_issubtreeblocked_callback = nullptr;
    QSGClipNode_Preprocess_Callback qsgclipnode_preprocess_callback = nullptr;

    VirtualQSGClipNode() : QSGClipNode() {};

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgclipnode_issubtreeblocked_callback) {
            bool callback_ret = qsgclipnode_issubtreeblocked_callback(this);
            return callback_ret;
        }
        return QSGClipNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgclipnode_preprocess_callback) {
            qsgclipnode_preprocess_callback(this);
            return;
        }
        QSGClipNode::preprocess();
    }
};

// This class is a subclass of QSGTransformNode
class VirtualQSGTransformNode final : public QSGTransformNode {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGTransformNode_IsSubtreeBlocked_Callback = bool (*)(const QSGTransformNode*);
    using QSGTransformNode_Preprocess_Callback = void (*)(QSGTransformNode*);

    // Instance callback storage
    QSGTransformNode_IsSubtreeBlocked_Callback qsgtransformnode_issubtreeblocked_callback = nullptr;
    QSGTransformNode_Preprocess_Callback qsgtransformnode_preprocess_callback = nullptr;

    VirtualQSGTransformNode() : QSGTransformNode() {};

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgtransformnode_issubtreeblocked_callback) {
            bool callback_ret = qsgtransformnode_issubtreeblocked_callback(this);
            return callback_ret;
        }
        return QSGTransformNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgtransformnode_preprocess_callback) {
            qsgtransformnode_preprocess_callback(this);
            return;
        }
        QSGTransformNode::preprocess();
    }
};

// This class is a subclass of QSGRootNode
class VirtualQSGRootNode final : public QSGRootNode {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGRootNode_IsSubtreeBlocked_Callback = bool (*)(const QSGRootNode*);
    using QSGRootNode_Preprocess_Callback = void (*)(QSGRootNode*);

    // Instance callback storage
    QSGRootNode_IsSubtreeBlocked_Callback qsgrootnode_issubtreeblocked_callback = nullptr;
    QSGRootNode_Preprocess_Callback qsgrootnode_preprocess_callback = nullptr;

    VirtualQSGRootNode() : QSGRootNode() {};

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgrootnode_issubtreeblocked_callback) {
            bool callback_ret = qsgrootnode_issubtreeblocked_callback(this);
            return callback_ret;
        }
        return QSGRootNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgrootnode_preprocess_callback) {
            qsgrootnode_preprocess_callback(this);
            return;
        }
        QSGRootNode::preprocess();
    }
};

// This class is a subclass of QSGOpacityNode
class VirtualQSGOpacityNode final : public QSGOpacityNode {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGOpacityNode_IsSubtreeBlocked_Callback = bool (*)(const QSGOpacityNode*);
    using QSGOpacityNode_Preprocess_Callback = void (*)(QSGOpacityNode*);

    // Instance callback storage
    QSGOpacityNode_IsSubtreeBlocked_Callback qsgopacitynode_issubtreeblocked_callback = nullptr;
    QSGOpacityNode_Preprocess_Callback qsgopacitynode_preprocess_callback = nullptr;

    VirtualQSGOpacityNode() : QSGOpacityNode() {};

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgopacitynode_issubtreeblocked_callback) {
            bool callback_ret = qsgopacitynode_issubtreeblocked_callback(this);
            return callback_ret;
        }
        return QSGOpacityNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgopacitynode_preprocess_callback) {
            qsgopacitynode_preprocess_callback(this);
            return;
        }
        QSGOpacityNode::preprocess();
    }
};

// This class is a subclass of QSGNodeVisitor
class VirtualQSGNodeVisitor final : public QSGNodeVisitor {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGNodeVisitor_EnterTransformNode_Callback = void (*)(QSGNodeVisitor*, QSGTransformNode*);
    using QSGNodeVisitor_LeaveTransformNode_Callback = void (*)(QSGNodeVisitor*, QSGTransformNode*);
    using QSGNodeVisitor_EnterClipNode_Callback = void (*)(QSGNodeVisitor*, QSGClipNode*);
    using QSGNodeVisitor_LeaveClipNode_Callback = void (*)(QSGNodeVisitor*, QSGClipNode*);
    using QSGNodeVisitor_EnterGeometryNode_Callback = void (*)(QSGNodeVisitor*, QSGGeometryNode*);
    using QSGNodeVisitor_LeaveGeometryNode_Callback = void (*)(QSGNodeVisitor*, QSGGeometryNode*);
    using QSGNodeVisitor_EnterOpacityNode_Callback = void (*)(QSGNodeVisitor*, QSGOpacityNode*);
    using QSGNodeVisitor_LeaveOpacityNode_Callback = void (*)(QSGNodeVisitor*, QSGOpacityNode*);
    using QSGNodeVisitor_VisitNode_Callback = void (*)(QSGNodeVisitor*, QSGNode*);
    using QSGNodeVisitor_VisitChildren_Callback = void (*)(QSGNodeVisitor*, QSGNode*);

    // Instance callback storage
    QSGNodeVisitor_EnterTransformNode_Callback qsgnodevisitor_entertransformnode_callback = nullptr;
    QSGNodeVisitor_LeaveTransformNode_Callback qsgnodevisitor_leavetransformnode_callback = nullptr;
    QSGNodeVisitor_EnterClipNode_Callback qsgnodevisitor_enterclipnode_callback = nullptr;
    QSGNodeVisitor_LeaveClipNode_Callback qsgnodevisitor_leaveclipnode_callback = nullptr;
    QSGNodeVisitor_EnterGeometryNode_Callback qsgnodevisitor_entergeometrynode_callback = nullptr;
    QSGNodeVisitor_LeaveGeometryNode_Callback qsgnodevisitor_leavegeometrynode_callback = nullptr;
    QSGNodeVisitor_EnterOpacityNode_Callback qsgnodevisitor_enteropacitynode_callback = nullptr;
    QSGNodeVisitor_LeaveOpacityNode_Callback qsgnodevisitor_leaveopacitynode_callback = nullptr;
    QSGNodeVisitor_VisitNode_Callback qsgnodevisitor_visitnode_callback = nullptr;
    QSGNodeVisitor_VisitChildren_Callback qsgnodevisitor_visitchildren_callback = nullptr;

    // Access struct
    struct Base : QSGNodeVisitor {
        using QSGNodeVisitor::enterClipNode;
        using QSGNodeVisitor::enterGeometryNode;
        using QSGNodeVisitor::enterOpacityNode;
        using QSGNodeVisitor::enterTransformNode;
        using QSGNodeVisitor::leaveClipNode;
        using QSGNodeVisitor::leaveGeometryNode;
        using QSGNodeVisitor::leaveOpacityNode;
        using QSGNodeVisitor::leaveTransformNode;
        using QSGNodeVisitor::visitChildren;
        using QSGNodeVisitor::visitNode;
    };

    VirtualQSGNodeVisitor() : QSGNodeVisitor() {};

    // Virtual method for C ABI access and custom callback
    virtual void enterTransformNode(QSGTransformNode* param1) override {
        if (qsgnodevisitor_entertransformnode_callback) {
            QSGTransformNode* cbval1 = param1;
            qsgnodevisitor_entertransformnode_callback(this, cbval1);
            return;
        }
        QSGNodeVisitor::enterTransformNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveTransformNode(QSGTransformNode* param1) override {
        if (qsgnodevisitor_leavetransformnode_callback) {
            QSGTransformNode* cbval1 = param1;
            qsgnodevisitor_leavetransformnode_callback(this, cbval1);
            return;
        }
        QSGNodeVisitor::leaveTransformNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterClipNode(QSGClipNode* param1) override {
        if (qsgnodevisitor_enterclipnode_callback) {
            QSGClipNode* cbval1 = param1;
            qsgnodevisitor_enterclipnode_callback(this, cbval1);
            return;
        }
        QSGNodeVisitor::enterClipNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveClipNode(QSGClipNode* param1) override {
        if (qsgnodevisitor_leaveclipnode_callback) {
            QSGClipNode* cbval1 = param1;
            qsgnodevisitor_leaveclipnode_callback(this, cbval1);
            return;
        }
        QSGNodeVisitor::leaveClipNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterGeometryNode(QSGGeometryNode* param1) override {
        if (qsgnodevisitor_entergeometrynode_callback) {
            QSGGeometryNode* cbval1 = param1;
            qsgnodevisitor_entergeometrynode_callback(this, cbval1);
            return;
        }
        QSGNodeVisitor::enterGeometryNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveGeometryNode(QSGGeometryNode* param1) override {
        if (qsgnodevisitor_leavegeometrynode_callback) {
            QSGGeometryNode* cbval1 = param1;
            qsgnodevisitor_leavegeometrynode_callback(this, cbval1);
            return;
        }
        QSGNodeVisitor::leaveGeometryNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterOpacityNode(QSGOpacityNode* param1) override {
        if (qsgnodevisitor_enteropacitynode_callback) {
            QSGOpacityNode* cbval1 = param1;
            qsgnodevisitor_enteropacitynode_callback(this, cbval1);
            return;
        }
        QSGNodeVisitor::enterOpacityNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveOpacityNode(QSGOpacityNode* param1) override {
        if (qsgnodevisitor_leaveopacitynode_callback) {
            QSGOpacityNode* cbval1 = param1;
            qsgnodevisitor_leaveopacitynode_callback(this, cbval1);
            return;
        }
        QSGNodeVisitor::leaveOpacityNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void visitNode(QSGNode* n) override {
        if (qsgnodevisitor_visitnode_callback) {
            QSGNode* cbval1 = n;
            qsgnodevisitor_visitnode_callback(this, cbval1);
            return;
        }
        QSGNodeVisitor::visitNode(n);
    }

    // Virtual method for C ABI access and custom callback
    virtual void visitChildren(QSGNode* n) override {
        if (qsgnodevisitor_visitchildren_callback) {
            QSGNode* cbval1 = n;
            qsgnodevisitor_visitchildren_callback(this, cbval1);
            return;
        }
        QSGNodeVisitor::visitChildren(n);
    }

    // Friend functions
    friend void QSGNodeVisitor_SuperEnterTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1);
    friend void QSGNodeVisitor_SuperLeaveTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1);
    friend void QSGNodeVisitor_SuperEnterClipNode(QSGNodeVisitor* self, QSGClipNode* param1);
    friend void QSGNodeVisitor_SuperLeaveClipNode(QSGNodeVisitor* self, QSGClipNode* param1);
    friend void QSGNodeVisitor_SuperEnterGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1);
    friend void QSGNodeVisitor_SuperLeaveGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1);
    friend void QSGNodeVisitor_SuperEnterOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1);
    friend void QSGNodeVisitor_SuperLeaveOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1);
    friend void QSGNodeVisitor_SuperVisitNode(QSGNodeVisitor* self, QSGNode* n);
    friend void QSGNodeVisitor_SuperVisitChildren(QSGNodeVisitor* self, QSGNode* n);
};

#endif
