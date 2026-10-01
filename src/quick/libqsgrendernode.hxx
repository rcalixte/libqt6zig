#pragma once
#ifndef QUICK_LIBQSGRENDERNODE_HXX
#define QUICK_LIBQSGRENDERNODE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGRenderNode
class VirtualQSGRenderNode : public QSGRenderNode {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGRenderNode_ChangedStates_Callback = int (*)(const QSGRenderNode*);
    using QSGRenderNode_Prepare_Callback = void (*)(QSGRenderNode*);
    using QSGRenderNode_Render_Callback = void (*)(QSGRenderNode*, QSGRenderNode__RenderState*);
    using QSGRenderNode_ReleaseResources_Callback = void (*)(QSGRenderNode*);
    using QSGRenderNode_Flags_Callback = int (*)(const QSGRenderNode*);
    using QSGRenderNode_Rect_Callback = QRectF* (*)(const QSGRenderNode*);
    using QSGRenderNode_IsSubtreeBlocked_Callback = bool (*)(const QSGRenderNode*);
    using QSGRenderNode_Preprocess_Callback = void (*)(QSGRenderNode*);

    // Instance callback storage
    QSGRenderNode_ChangedStates_Callback qsgrendernode_changedstates_callback = nullptr;
    QSGRenderNode_Prepare_Callback qsgrendernode_prepare_callback = nullptr;
    QSGRenderNode_Render_Callback qsgrendernode_render_callback = nullptr;
    QSGRenderNode_ReleaseResources_Callback qsgrendernode_releaseresources_callback = nullptr;
    QSGRenderNode_Flags_Callback qsgrendernode_flags_callback = nullptr;
    QSGRenderNode_Rect_Callback qsgrendernode_rect_callback = nullptr;
    QSGRenderNode_IsSubtreeBlocked_Callback qsgrendernode_issubtreeblocked_callback = nullptr;
    QSGRenderNode_Preprocess_Callback qsgrendernode_preprocess_callback = nullptr;

    VirtualQSGRenderNode() : QSGRenderNode() {};

    // Virtual method for C ABI access and custom callback
    virtual QSGRenderNode::StateFlags changedStates() const override {
        if (qsgrendernode_changedstates_callback) {
            int callback_ret = qsgrendernode_changedstates_callback(this);
            return static_cast<QSGRenderNode::StateFlags>(callback_ret);
        }
        return QSGRenderNode::changedStates();
    }

    // Virtual method for C ABI access and custom callback
    virtual void prepare() override {
        if (qsgrendernode_prepare_callback) {
            qsgrendernode_prepare_callback(this);
            return;
        }
        QSGRenderNode::prepare();
    }

    // Virtual method for C ABI access and custom callback
    virtual void render(const QSGRenderNode::RenderState* state) override {
        if (qsgrendernode_render_callback) {
            QSGRenderNode__RenderState* cbval1 = (QSGRenderNode__RenderState*)state;
            qsgrendernode_render_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGRenderNode::render called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseResources() override {
        if (qsgrendernode_releaseresources_callback) {
            qsgrendernode_releaseresources_callback(this);
            return;
        }
        QSGRenderNode::releaseResources();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGRenderNode::RenderingFlags flags() const override {
        if (qsgrendernode_flags_callback) {
            int callback_ret = qsgrendernode_flags_callback(this);
            return static_cast<QSGRenderNode::RenderingFlags>(callback_ret);
        }
        return QSGRenderNode::flags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF rect() const override {
        if (qsgrendernode_rect_callback) {
            QRectF* callback_ret = qsgrendernode_rect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSGRenderNode::rect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgrendernode_issubtreeblocked_callback) {
            bool callback_ret = qsgrendernode_issubtreeblocked_callback(this);
            return callback_ret;
        }
        return QSGRenderNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgrendernode_preprocess_callback) {
            qsgrendernode_preprocess_callback(this);
            return;
        }
        QSGRenderNode::preprocess();
    }
};

#endif
