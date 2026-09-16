#pragma once
#ifndef QUICK_LIBQSGRENDERNODE_HXX
#define QUICK_LIBQSGRENDERNODE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGRenderNode so that we can call protected methods
class VirtualQSGRenderNode : public QSGRenderNode {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGRenderNode = true;

    // Virtual class public types (including callbacks)
    using QSGRenderNode_ChangedStates_Callback = int (*)();
    using QSGRenderNode_Prepare_Callback = void (*)();
    using QSGRenderNode_Render_Callback = void (*)(QSGRenderNode*, QSGRenderNode__RenderState*);
    using QSGRenderNode_ReleaseResources_Callback = void (*)();
    using QSGRenderNode_Flags_Callback = int (*)();
    using QSGRenderNode_Rect_Callback = QRectF* (*)();
    using QSGRenderNode_IsSubtreeBlocked_Callback = bool (*)();
    using QSGRenderNode_Preprocess_Callback = void (*)();

  protected:
    // Instance callback storage
    QSGRenderNode_ChangedStates_Callback qsgrendernode_changedstates_callback = nullptr;
    QSGRenderNode_Prepare_Callback qsgrendernode_prepare_callback = nullptr;
    QSGRenderNode_Render_Callback qsgrendernode_render_callback = nullptr;
    QSGRenderNode_ReleaseResources_Callback qsgrendernode_releaseresources_callback = nullptr;
    QSGRenderNode_Flags_Callback qsgrendernode_flags_callback = nullptr;
    QSGRenderNode_Rect_Callback qsgrendernode_rect_callback = nullptr;
    QSGRenderNode_IsSubtreeBlocked_Callback qsgrendernode_issubtreeblocked_callback = nullptr;
    QSGRenderNode_Preprocess_Callback qsgrendernode_preprocess_callback = nullptr;

    // Instance base flags
    mutable bool qsgrendernode_changedstates_isbase = false;
    mutable bool qsgrendernode_prepare_isbase = false;
    mutable bool qsgrendernode_render_isbase = false;
    mutable bool qsgrendernode_releaseresources_isbase = false;
    mutable bool qsgrendernode_flags_isbase = false;
    mutable bool qsgrendernode_rect_isbase = false;
    mutable bool qsgrendernode_issubtreeblocked_isbase = false;
    mutable bool qsgrendernode_preprocess_isbase = false;

  public:
    VirtualQSGRenderNode() : QSGRenderNode() {};

    // Callback setters
    inline void setQSGRenderNode_ChangedStates_Callback(QSGRenderNode_ChangedStates_Callback cb) { qsgrendernode_changedstates_callback = cb; }
    inline void setQSGRenderNode_Prepare_Callback(QSGRenderNode_Prepare_Callback cb) { qsgrendernode_prepare_callback = cb; }
    inline void setQSGRenderNode_Render_Callback(QSGRenderNode_Render_Callback cb) { qsgrendernode_render_callback = cb; }
    inline void setQSGRenderNode_ReleaseResources_Callback(QSGRenderNode_ReleaseResources_Callback cb) { qsgrendernode_releaseresources_callback = cb; }
    inline void setQSGRenderNode_Flags_Callback(QSGRenderNode_Flags_Callback cb) { qsgrendernode_flags_callback = cb; }
    inline void setQSGRenderNode_Rect_Callback(QSGRenderNode_Rect_Callback cb) { qsgrendernode_rect_callback = cb; }
    inline void setQSGRenderNode_IsSubtreeBlocked_Callback(QSGRenderNode_IsSubtreeBlocked_Callback cb) { qsgrendernode_issubtreeblocked_callback = cb; }
    inline void setQSGRenderNode_Preprocess_Callback(QSGRenderNode_Preprocess_Callback cb) { qsgrendernode_preprocess_callback = cb; }

    // Base flag setters
    inline void setQSGRenderNode_ChangedStates_IsBase(bool value) const { qsgrendernode_changedstates_isbase = value; }
    inline void setQSGRenderNode_Prepare_IsBase(bool value) const { qsgrendernode_prepare_isbase = value; }
    inline void setQSGRenderNode_Render_IsBase(bool value) const { qsgrendernode_render_isbase = value; }
    inline void setQSGRenderNode_ReleaseResources_IsBase(bool value) const { qsgrendernode_releaseresources_isbase = value; }
    inline void setQSGRenderNode_Flags_IsBase(bool value) const { qsgrendernode_flags_isbase = value; }
    inline void setQSGRenderNode_Rect_IsBase(bool value) const { qsgrendernode_rect_isbase = value; }
    inline void setQSGRenderNode_IsSubtreeBlocked_IsBase(bool value) const { qsgrendernode_issubtreeblocked_isbase = value; }
    inline void setQSGRenderNode_Preprocess_IsBase(bool value) const { qsgrendernode_preprocess_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QSGRenderNode::StateFlags changedStates() const override {
        if (qsgrendernode_changedstates_isbase) {
            qsgrendernode_changedstates_isbase = false;
            return QSGRenderNode::changedStates();
        }
        auto changedstates_cb = qsgrendernode_changedstates_callback;
        if (changedstates_cb) {
            int callback_ret = changedstates_cb();
            return static_cast<QSGRenderNode::StateFlags>(callback_ret);
        }
        return QSGRenderNode::changedStates();
    }

    // Virtual method for C ABI access and custom callback
    virtual void prepare() override {
        if (qsgrendernode_prepare_isbase) {
            qsgrendernode_prepare_isbase = false;
            QSGRenderNode::prepare();
            return;
        }
        auto prepare_cb = qsgrendernode_prepare_callback;
        if (prepare_cb) {
            prepare_cb();
            return;
        }
        QSGRenderNode::prepare();
    }

    // Virtual method for C ABI access and custom callback
    virtual void render(const QSGRenderNode::RenderState* state) override {
        auto render_cb = qsgrendernode_render_callback;
        if (render_cb) {
            QSGRenderNode__RenderState* cbval1 = (QSGRenderNode__RenderState*)state;
            render_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseResources() override {
        if (qsgrendernode_releaseresources_isbase) {
            qsgrendernode_releaseresources_isbase = false;
            QSGRenderNode::releaseResources();
            return;
        }
        auto releaseresources_cb = qsgrendernode_releaseresources_callback;
        if (releaseresources_cb) {
            releaseresources_cb();
            return;
        }
        QSGRenderNode::releaseResources();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGRenderNode::RenderingFlags flags() const override {
        if (qsgrendernode_flags_isbase) {
            qsgrendernode_flags_isbase = false;
            return QSGRenderNode::flags();
        }
        auto flags_cb = qsgrendernode_flags_callback;
        if (flags_cb) {
            int callback_ret = flags_cb();
            return static_cast<QSGRenderNode::RenderingFlags>(callback_ret);
        }
        return QSGRenderNode::flags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF rect() const override {
        if (qsgrendernode_rect_isbase) {
            qsgrendernode_rect_isbase = false;
            return QSGRenderNode::rect();
        }
        auto rect_cb = qsgrendernode_rect_callback;
        if (rect_cb) {
            QRectF* callback_ret = rect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSGRenderNode::rect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgrendernode_issubtreeblocked_isbase) {
            qsgrendernode_issubtreeblocked_isbase = false;
            return QSGRenderNode::isSubtreeBlocked();
        }
        auto issubtreeblocked_cb = qsgrendernode_issubtreeblocked_callback;
        if (issubtreeblocked_cb) {
            bool callback_ret = issubtreeblocked_cb();
            return callback_ret;
        }
        return QSGRenderNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgrendernode_preprocess_isbase) {
            qsgrendernode_preprocess_isbase = false;
            QSGRenderNode::preprocess();
            return;
        }
        auto preprocess_cb = qsgrendernode_preprocess_callback;
        if (preprocess_cb) {
            preprocess_cb();
            return;
        }
        QSGRenderNode::preprocess();
    }
};

#endif
