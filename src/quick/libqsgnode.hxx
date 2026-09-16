#pragma once
#ifndef QUICK_LIBQSGNODE_HXX
#define QUICK_LIBQSGNODE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGNode so that we can call protected methods
class VirtualQSGNode final : public QSGNode {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGNode = true;

    // Virtual class public types (including callbacks)
    using QSGNode_IsSubtreeBlocked_Callback = bool (*)();
    using QSGNode_Preprocess_Callback = void (*)();

  protected:
    // Instance callback storage
    QSGNode_IsSubtreeBlocked_Callback qsgnode_issubtreeblocked_callback = nullptr;
    QSGNode_Preprocess_Callback qsgnode_preprocess_callback = nullptr;

    // Instance base flags
    mutable bool qsgnode_issubtreeblocked_isbase = false;
    mutable bool qsgnode_preprocess_isbase = false;

  public:
    VirtualQSGNode() : QSGNode() {};

    // Callback setters
    inline void setQSGNode_IsSubtreeBlocked_Callback(QSGNode_IsSubtreeBlocked_Callback cb) { qsgnode_issubtreeblocked_callback = cb; }
    inline void setQSGNode_Preprocess_Callback(QSGNode_Preprocess_Callback cb) { qsgnode_preprocess_callback = cb; }

    // Base flag setters
    inline void setQSGNode_IsSubtreeBlocked_IsBase(bool value) const { qsgnode_issubtreeblocked_isbase = value; }
    inline void setQSGNode_Preprocess_IsBase(bool value) const { qsgnode_preprocess_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgnode_issubtreeblocked_isbase) {
            qsgnode_issubtreeblocked_isbase = false;
            return QSGNode::isSubtreeBlocked();
        }
        auto issubtreeblocked_cb = qsgnode_issubtreeblocked_callback;
        if (issubtreeblocked_cb) {
            bool callback_ret = issubtreeblocked_cb();
            return callback_ret;
        }
        return QSGNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgnode_preprocess_isbase) {
            qsgnode_preprocess_isbase = false;
            QSGNode::preprocess();
            return;
        }
        auto preprocess_cb = qsgnode_preprocess_callback;
        if (preprocess_cb) {
            preprocess_cb();
            return;
        }
        QSGNode::preprocess();
    }
};

// This class is a subclass of QSGGeometryNode so that we can call protected methods
class VirtualQSGGeometryNode final : public QSGGeometryNode {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGGeometryNode = true;

    // Virtual class public types (including callbacks)
    using QSGGeometryNode_IsSubtreeBlocked_Callback = bool (*)();
    using QSGGeometryNode_Preprocess_Callback = void (*)();

  protected:
    // Instance callback storage
    QSGGeometryNode_IsSubtreeBlocked_Callback qsggeometrynode_issubtreeblocked_callback = nullptr;
    QSGGeometryNode_Preprocess_Callback qsggeometrynode_preprocess_callback = nullptr;

    // Instance base flags
    mutable bool qsggeometrynode_issubtreeblocked_isbase = false;
    mutable bool qsggeometrynode_preprocess_isbase = false;

  public:
    VirtualQSGGeometryNode() : QSGGeometryNode() {};

    // Callback setters
    inline void setQSGGeometryNode_IsSubtreeBlocked_Callback(QSGGeometryNode_IsSubtreeBlocked_Callback cb) { qsggeometrynode_issubtreeblocked_callback = cb; }
    inline void setQSGGeometryNode_Preprocess_Callback(QSGGeometryNode_Preprocess_Callback cb) { qsggeometrynode_preprocess_callback = cb; }

    // Base flag setters
    inline void setQSGGeometryNode_IsSubtreeBlocked_IsBase(bool value) const { qsggeometrynode_issubtreeblocked_isbase = value; }
    inline void setQSGGeometryNode_Preprocess_IsBase(bool value) const { qsggeometrynode_preprocess_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsggeometrynode_issubtreeblocked_isbase) {
            qsggeometrynode_issubtreeblocked_isbase = false;
            return QSGGeometryNode::isSubtreeBlocked();
        }
        auto issubtreeblocked_cb = qsggeometrynode_issubtreeblocked_callback;
        if (issubtreeblocked_cb) {
            bool callback_ret = issubtreeblocked_cb();
            return callback_ret;
        }
        return QSGGeometryNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsggeometrynode_preprocess_isbase) {
            qsggeometrynode_preprocess_isbase = false;
            QSGGeometryNode::preprocess();
            return;
        }
        auto preprocess_cb = qsggeometrynode_preprocess_callback;
        if (preprocess_cb) {
            preprocess_cb();
            return;
        }
        QSGGeometryNode::preprocess();
    }
};

// This class is a subclass of QSGClipNode so that we can call protected methods
class VirtualQSGClipNode final : public QSGClipNode {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGClipNode = true;

    // Virtual class public types (including callbacks)
    using QSGClipNode_IsSubtreeBlocked_Callback = bool (*)();
    using QSGClipNode_Preprocess_Callback = void (*)();

  protected:
    // Instance callback storage
    QSGClipNode_IsSubtreeBlocked_Callback qsgclipnode_issubtreeblocked_callback = nullptr;
    QSGClipNode_Preprocess_Callback qsgclipnode_preprocess_callback = nullptr;

    // Instance base flags
    mutable bool qsgclipnode_issubtreeblocked_isbase = false;
    mutable bool qsgclipnode_preprocess_isbase = false;

  public:
    VirtualQSGClipNode() : QSGClipNode() {};

    // Callback setters
    inline void setQSGClipNode_IsSubtreeBlocked_Callback(QSGClipNode_IsSubtreeBlocked_Callback cb) { qsgclipnode_issubtreeblocked_callback = cb; }
    inline void setQSGClipNode_Preprocess_Callback(QSGClipNode_Preprocess_Callback cb) { qsgclipnode_preprocess_callback = cb; }

    // Base flag setters
    inline void setQSGClipNode_IsSubtreeBlocked_IsBase(bool value) const { qsgclipnode_issubtreeblocked_isbase = value; }
    inline void setQSGClipNode_Preprocess_IsBase(bool value) const { qsgclipnode_preprocess_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgclipnode_issubtreeblocked_isbase) {
            qsgclipnode_issubtreeblocked_isbase = false;
            return QSGClipNode::isSubtreeBlocked();
        }
        auto issubtreeblocked_cb = qsgclipnode_issubtreeblocked_callback;
        if (issubtreeblocked_cb) {
            bool callback_ret = issubtreeblocked_cb();
            return callback_ret;
        }
        return QSGClipNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgclipnode_preprocess_isbase) {
            qsgclipnode_preprocess_isbase = false;
            QSGClipNode::preprocess();
            return;
        }
        auto preprocess_cb = qsgclipnode_preprocess_callback;
        if (preprocess_cb) {
            preprocess_cb();
            return;
        }
        QSGClipNode::preprocess();
    }
};

// This class is a subclass of QSGTransformNode so that we can call protected methods
class VirtualQSGTransformNode final : public QSGTransformNode {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGTransformNode = true;

    // Virtual class public types (including callbacks)
    using QSGTransformNode_IsSubtreeBlocked_Callback = bool (*)();
    using QSGTransformNode_Preprocess_Callback = void (*)();

  protected:
    // Instance callback storage
    QSGTransformNode_IsSubtreeBlocked_Callback qsgtransformnode_issubtreeblocked_callback = nullptr;
    QSGTransformNode_Preprocess_Callback qsgtransformnode_preprocess_callback = nullptr;

    // Instance base flags
    mutable bool qsgtransformnode_issubtreeblocked_isbase = false;
    mutable bool qsgtransformnode_preprocess_isbase = false;

  public:
    VirtualQSGTransformNode() : QSGTransformNode() {};

    // Callback setters
    inline void setQSGTransformNode_IsSubtreeBlocked_Callback(QSGTransformNode_IsSubtreeBlocked_Callback cb) { qsgtransformnode_issubtreeblocked_callback = cb; }
    inline void setQSGTransformNode_Preprocess_Callback(QSGTransformNode_Preprocess_Callback cb) { qsgtransformnode_preprocess_callback = cb; }

    // Base flag setters
    inline void setQSGTransformNode_IsSubtreeBlocked_IsBase(bool value) const { qsgtransformnode_issubtreeblocked_isbase = value; }
    inline void setQSGTransformNode_Preprocess_IsBase(bool value) const { qsgtransformnode_preprocess_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgtransformnode_issubtreeblocked_isbase) {
            qsgtransformnode_issubtreeblocked_isbase = false;
            return QSGTransformNode::isSubtreeBlocked();
        }
        auto issubtreeblocked_cb = qsgtransformnode_issubtreeblocked_callback;
        if (issubtreeblocked_cb) {
            bool callback_ret = issubtreeblocked_cb();
            return callback_ret;
        }
        return QSGTransformNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgtransformnode_preprocess_isbase) {
            qsgtransformnode_preprocess_isbase = false;
            QSGTransformNode::preprocess();
            return;
        }
        auto preprocess_cb = qsgtransformnode_preprocess_callback;
        if (preprocess_cb) {
            preprocess_cb();
            return;
        }
        QSGTransformNode::preprocess();
    }
};

// This class is a subclass of QSGRootNode so that we can call protected methods
class VirtualQSGRootNode final : public QSGRootNode {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGRootNode = true;

    // Virtual class public types (including callbacks)
    using QSGRootNode_IsSubtreeBlocked_Callback = bool (*)();
    using QSGRootNode_Preprocess_Callback = void (*)();

  protected:
    // Instance callback storage
    QSGRootNode_IsSubtreeBlocked_Callback qsgrootnode_issubtreeblocked_callback = nullptr;
    QSGRootNode_Preprocess_Callback qsgrootnode_preprocess_callback = nullptr;

    // Instance base flags
    mutable bool qsgrootnode_issubtreeblocked_isbase = false;
    mutable bool qsgrootnode_preprocess_isbase = false;

  public:
    VirtualQSGRootNode() : QSGRootNode() {};

    // Callback setters
    inline void setQSGRootNode_IsSubtreeBlocked_Callback(QSGRootNode_IsSubtreeBlocked_Callback cb) { qsgrootnode_issubtreeblocked_callback = cb; }
    inline void setQSGRootNode_Preprocess_Callback(QSGRootNode_Preprocess_Callback cb) { qsgrootnode_preprocess_callback = cb; }

    // Base flag setters
    inline void setQSGRootNode_IsSubtreeBlocked_IsBase(bool value) const { qsgrootnode_issubtreeblocked_isbase = value; }
    inline void setQSGRootNode_Preprocess_IsBase(bool value) const { qsgrootnode_preprocess_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgrootnode_issubtreeblocked_isbase) {
            qsgrootnode_issubtreeblocked_isbase = false;
            return QSGRootNode::isSubtreeBlocked();
        }
        auto issubtreeblocked_cb = qsgrootnode_issubtreeblocked_callback;
        if (issubtreeblocked_cb) {
            bool callback_ret = issubtreeblocked_cb();
            return callback_ret;
        }
        return QSGRootNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgrootnode_preprocess_isbase) {
            qsgrootnode_preprocess_isbase = false;
            QSGRootNode::preprocess();
            return;
        }
        auto preprocess_cb = qsgrootnode_preprocess_callback;
        if (preprocess_cb) {
            preprocess_cb();
            return;
        }
        QSGRootNode::preprocess();
    }
};

// This class is a subclass of QSGOpacityNode so that we can call protected methods
class VirtualQSGOpacityNode final : public QSGOpacityNode {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGOpacityNode = true;

    // Virtual class public types (including callbacks)
    using QSGOpacityNode_IsSubtreeBlocked_Callback = bool (*)();
    using QSGOpacityNode_Preprocess_Callback = void (*)();

  protected:
    // Instance callback storage
    QSGOpacityNode_IsSubtreeBlocked_Callback qsgopacitynode_issubtreeblocked_callback = nullptr;
    QSGOpacityNode_Preprocess_Callback qsgopacitynode_preprocess_callback = nullptr;

    // Instance base flags
    mutable bool qsgopacitynode_issubtreeblocked_isbase = false;
    mutable bool qsgopacitynode_preprocess_isbase = false;

  public:
    VirtualQSGOpacityNode() : QSGOpacityNode() {};

    // Callback setters
    inline void setQSGOpacityNode_IsSubtreeBlocked_Callback(QSGOpacityNode_IsSubtreeBlocked_Callback cb) { qsgopacitynode_issubtreeblocked_callback = cb; }
    inline void setQSGOpacityNode_Preprocess_Callback(QSGOpacityNode_Preprocess_Callback cb) { qsgopacitynode_preprocess_callback = cb; }

    // Base flag setters
    inline void setQSGOpacityNode_IsSubtreeBlocked_IsBase(bool value) const { qsgopacitynode_issubtreeblocked_isbase = value; }
    inline void setQSGOpacityNode_Preprocess_IsBase(bool value) const { qsgopacitynode_preprocess_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgopacitynode_issubtreeblocked_isbase) {
            qsgopacitynode_issubtreeblocked_isbase = false;
            return QSGOpacityNode::isSubtreeBlocked();
        }
        auto issubtreeblocked_cb = qsgopacitynode_issubtreeblocked_callback;
        if (issubtreeblocked_cb) {
            bool callback_ret = issubtreeblocked_cb();
            return callback_ret;
        }
        return QSGOpacityNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgopacitynode_preprocess_isbase) {
            qsgopacitynode_preprocess_isbase = false;
            QSGOpacityNode::preprocess();
            return;
        }
        auto preprocess_cb = qsgopacitynode_preprocess_callback;
        if (preprocess_cb) {
            preprocess_cb();
            return;
        }
        QSGOpacityNode::preprocess();
    }
};

// This class is a subclass of QSGNodeVisitor so that we can call protected methods
class VirtualQSGNodeVisitor final : public QSGNodeVisitor {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGNodeVisitor = true;

    // Virtual class public types (including callbacks)
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
    using QSGNodeVisitor_OperatorAssign_Callback = void (*)(QSGNodeVisitor*, QSGNodeVisitor*);

  protected:
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
    QSGNodeVisitor_OperatorAssign_Callback qsgnodevisitor_operatorassign_callback = nullptr;

    // Instance base flags
    mutable bool qsgnodevisitor_entertransformnode_isbase = false;
    mutable bool qsgnodevisitor_leavetransformnode_isbase = false;
    mutable bool qsgnodevisitor_enterclipnode_isbase = false;
    mutable bool qsgnodevisitor_leaveclipnode_isbase = false;
    mutable bool qsgnodevisitor_entergeometrynode_isbase = false;
    mutable bool qsgnodevisitor_leavegeometrynode_isbase = false;
    mutable bool qsgnodevisitor_enteropacitynode_isbase = false;
    mutable bool qsgnodevisitor_leaveopacitynode_isbase = false;
    mutable bool qsgnodevisitor_visitnode_isbase = false;
    mutable bool qsgnodevisitor_visitchildren_isbase = false;
    mutable bool qsgnodevisitor_operatorassign_isbase = false;

  public:
    VirtualQSGNodeVisitor() : QSGNodeVisitor() {};

    // Callback setters
    inline void setQSGNodeVisitor_EnterTransformNode_Callback(QSGNodeVisitor_EnterTransformNode_Callback cb) { qsgnodevisitor_entertransformnode_callback = cb; }
    inline void setQSGNodeVisitor_LeaveTransformNode_Callback(QSGNodeVisitor_LeaveTransformNode_Callback cb) { qsgnodevisitor_leavetransformnode_callback = cb; }
    inline void setQSGNodeVisitor_EnterClipNode_Callback(QSGNodeVisitor_EnterClipNode_Callback cb) { qsgnodevisitor_enterclipnode_callback = cb; }
    inline void setQSGNodeVisitor_LeaveClipNode_Callback(QSGNodeVisitor_LeaveClipNode_Callback cb) { qsgnodevisitor_leaveclipnode_callback = cb; }
    inline void setQSGNodeVisitor_EnterGeometryNode_Callback(QSGNodeVisitor_EnterGeometryNode_Callback cb) { qsgnodevisitor_entergeometrynode_callback = cb; }
    inline void setQSGNodeVisitor_LeaveGeometryNode_Callback(QSGNodeVisitor_LeaveGeometryNode_Callback cb) { qsgnodevisitor_leavegeometrynode_callback = cb; }
    inline void setQSGNodeVisitor_EnterOpacityNode_Callback(QSGNodeVisitor_EnterOpacityNode_Callback cb) { qsgnodevisitor_enteropacitynode_callback = cb; }
    inline void setQSGNodeVisitor_LeaveOpacityNode_Callback(QSGNodeVisitor_LeaveOpacityNode_Callback cb) { qsgnodevisitor_leaveopacitynode_callback = cb; }
    inline void setQSGNodeVisitor_VisitNode_Callback(QSGNodeVisitor_VisitNode_Callback cb) { qsgnodevisitor_visitnode_callback = cb; }
    inline void setQSGNodeVisitor_VisitChildren_Callback(QSGNodeVisitor_VisitChildren_Callback cb) { qsgnodevisitor_visitchildren_callback = cb; }
    inline void setQSGNodeVisitor_OperatorAssign_Callback(QSGNodeVisitor_OperatorAssign_Callback cb) { qsgnodevisitor_operatorassign_callback = cb; }

    // Base flag setters
    inline void setQSGNodeVisitor_EnterTransformNode_IsBase(bool value) const { qsgnodevisitor_entertransformnode_isbase = value; }
    inline void setQSGNodeVisitor_LeaveTransformNode_IsBase(bool value) const { qsgnodevisitor_leavetransformnode_isbase = value; }
    inline void setQSGNodeVisitor_EnterClipNode_IsBase(bool value) const { qsgnodevisitor_enterclipnode_isbase = value; }
    inline void setQSGNodeVisitor_LeaveClipNode_IsBase(bool value) const { qsgnodevisitor_leaveclipnode_isbase = value; }
    inline void setQSGNodeVisitor_EnterGeometryNode_IsBase(bool value) const { qsgnodevisitor_entergeometrynode_isbase = value; }
    inline void setQSGNodeVisitor_LeaveGeometryNode_IsBase(bool value) const { qsgnodevisitor_leavegeometrynode_isbase = value; }
    inline void setQSGNodeVisitor_EnterOpacityNode_IsBase(bool value) const { qsgnodevisitor_enteropacitynode_isbase = value; }
    inline void setQSGNodeVisitor_LeaveOpacityNode_IsBase(bool value) const { qsgnodevisitor_leaveopacitynode_isbase = value; }
    inline void setQSGNodeVisitor_VisitNode_IsBase(bool value) const { qsgnodevisitor_visitnode_isbase = value; }
    inline void setQSGNodeVisitor_VisitChildren_IsBase(bool value) const { qsgnodevisitor_visitchildren_isbase = value; }
    inline void setQSGNodeVisitor_OperatorAssign_IsBase(bool value) const { qsgnodevisitor_operatorassign_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void enterTransformNode(QSGTransformNode* param1) override {
        if (qsgnodevisitor_entertransformnode_isbase) {
            qsgnodevisitor_entertransformnode_isbase = false;
            QSGNodeVisitor::enterTransformNode(param1);
            return;
        }
        auto entertransformnode_cb = qsgnodevisitor_entertransformnode_callback;
        if (entertransformnode_cb) {
            QSGTransformNode* cbval1 = param1;
            entertransformnode_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::enterTransformNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveTransformNode(QSGTransformNode* param1) override {
        if (qsgnodevisitor_leavetransformnode_isbase) {
            qsgnodevisitor_leavetransformnode_isbase = false;
            QSGNodeVisitor::leaveTransformNode(param1);
            return;
        }
        auto leavetransformnode_cb = qsgnodevisitor_leavetransformnode_callback;
        if (leavetransformnode_cb) {
            QSGTransformNode* cbval1 = param1;
            leavetransformnode_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::leaveTransformNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterClipNode(QSGClipNode* param1) override {
        if (qsgnodevisitor_enterclipnode_isbase) {
            qsgnodevisitor_enterclipnode_isbase = false;
            QSGNodeVisitor::enterClipNode(param1);
            return;
        }
        auto enterclipnode_cb = qsgnodevisitor_enterclipnode_callback;
        if (enterclipnode_cb) {
            QSGClipNode* cbval1 = param1;
            enterclipnode_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::enterClipNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveClipNode(QSGClipNode* param1) override {
        if (qsgnodevisitor_leaveclipnode_isbase) {
            qsgnodevisitor_leaveclipnode_isbase = false;
            QSGNodeVisitor::leaveClipNode(param1);
            return;
        }
        auto leaveclipnode_cb = qsgnodevisitor_leaveclipnode_callback;
        if (leaveclipnode_cb) {
            QSGClipNode* cbval1 = param1;
            leaveclipnode_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::leaveClipNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterGeometryNode(QSGGeometryNode* param1) override {
        if (qsgnodevisitor_entergeometrynode_isbase) {
            qsgnodevisitor_entergeometrynode_isbase = false;
            QSGNodeVisitor::enterGeometryNode(param1);
            return;
        }
        auto entergeometrynode_cb = qsgnodevisitor_entergeometrynode_callback;
        if (entergeometrynode_cb) {
            QSGGeometryNode* cbval1 = param1;
            entergeometrynode_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::enterGeometryNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveGeometryNode(QSGGeometryNode* param1) override {
        if (qsgnodevisitor_leavegeometrynode_isbase) {
            qsgnodevisitor_leavegeometrynode_isbase = false;
            QSGNodeVisitor::leaveGeometryNode(param1);
            return;
        }
        auto leavegeometrynode_cb = qsgnodevisitor_leavegeometrynode_callback;
        if (leavegeometrynode_cb) {
            QSGGeometryNode* cbval1 = param1;
            leavegeometrynode_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::leaveGeometryNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterOpacityNode(QSGOpacityNode* param1) override {
        if (qsgnodevisitor_enteropacitynode_isbase) {
            qsgnodevisitor_enteropacitynode_isbase = false;
            QSGNodeVisitor::enterOpacityNode(param1);
            return;
        }
        auto enteropacitynode_cb = qsgnodevisitor_enteropacitynode_callback;
        if (enteropacitynode_cb) {
            QSGOpacityNode* cbval1 = param1;
            enteropacitynode_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::enterOpacityNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveOpacityNode(QSGOpacityNode* param1) override {
        if (qsgnodevisitor_leaveopacitynode_isbase) {
            qsgnodevisitor_leaveopacitynode_isbase = false;
            QSGNodeVisitor::leaveOpacityNode(param1);
            return;
        }
        auto leaveopacitynode_cb = qsgnodevisitor_leaveopacitynode_callback;
        if (leaveopacitynode_cb) {
            QSGOpacityNode* cbval1 = param1;
            leaveopacitynode_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::leaveOpacityNode(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void visitNode(QSGNode* n) override {
        if (qsgnodevisitor_visitnode_isbase) {
            qsgnodevisitor_visitnode_isbase = false;
            QSGNodeVisitor::visitNode(n);
            return;
        }
        auto visitnode_cb = qsgnodevisitor_visitnode_callback;
        if (visitnode_cb) {
            QSGNode* cbval1 = n;
            visitnode_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::visitNode(n);
    }

    // Virtual method for C ABI access and custom callback
    virtual void visitChildren(QSGNode* n) override {
        if (qsgnodevisitor_visitchildren_isbase) {
            qsgnodevisitor_visitchildren_isbase = false;
            QSGNodeVisitor::visitChildren(n);
            return;
        }
        auto visitchildren_cb = qsgnodevisitor_visitchildren_callback;
        if (visitchildren_cb) {
            QSGNode* cbval1 = n;
            visitchildren_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::visitChildren(n);
    }

    // Virtual method for C ABI access and custom callback
    void operator=(const QSGNodeVisitor& param1) {
        if (qsgnodevisitor_operatorassign_isbase) {
            qsgnodevisitor_operatorassign_isbase = false;
            QSGNodeVisitor::operator=(param1);
            return;
        }
        auto operatorassign_cb = qsgnodevisitor_operatorassign_callback;
        if (operatorassign_cb) {
            const QSGNodeVisitor& param1_ret = param1;
            // Cast returned reference into pointer
            QSGNodeVisitor* cbval1 = const_cast<QSGNodeVisitor*>(&param1_ret);
            operatorassign_cb(this, cbval1);
            return;
        }
        QSGNodeVisitor::operator=(param1);
    }

    // Friend functions
    friend void QSGNodeVisitor_EnterTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1);
    friend void QSGNodeVisitor_SuperEnterTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1);
    friend void QSGNodeVisitor_LeaveTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1);
    friend void QSGNodeVisitor_SuperLeaveTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1);
    friend void QSGNodeVisitor_EnterClipNode(QSGNodeVisitor* self, QSGClipNode* param1);
    friend void QSGNodeVisitor_SuperEnterClipNode(QSGNodeVisitor* self, QSGClipNode* param1);
    friend void QSGNodeVisitor_LeaveClipNode(QSGNodeVisitor* self, QSGClipNode* param1);
    friend void QSGNodeVisitor_SuperLeaveClipNode(QSGNodeVisitor* self, QSGClipNode* param1);
    friend void QSGNodeVisitor_EnterGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1);
    friend void QSGNodeVisitor_SuperEnterGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1);
    friend void QSGNodeVisitor_LeaveGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1);
    friend void QSGNodeVisitor_SuperLeaveGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1);
    friend void QSGNodeVisitor_EnterOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1);
    friend void QSGNodeVisitor_SuperEnterOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1);
    friend void QSGNodeVisitor_LeaveOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1);
    friend void QSGNodeVisitor_SuperLeaveOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1);
    friend void QSGNodeVisitor_VisitNode(QSGNodeVisitor* self, QSGNode* n);
    friend void QSGNodeVisitor_SuperVisitNode(QSGNodeVisitor* self, QSGNode* n);
    friend void QSGNodeVisitor_VisitChildren(QSGNodeVisitor* self, QSGNode* n);
    friend void QSGNodeVisitor_SuperVisitChildren(QSGNodeVisitor* self, QSGNode* n);
    friend void QSGNodeVisitor_OperatorAssign(QSGNodeVisitor* self, const QSGNodeVisitor* param1);
    friend void QSGNodeVisitor_SuperOperatorAssign(QSGNodeVisitor* self, const QSGNodeVisitor* param1);
};

#endif
