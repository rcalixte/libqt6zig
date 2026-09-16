#pragma once
#ifndef QUICK_LIBQSGSIMPLETEXTURENODE_HXX
#define QUICK_LIBQSGSIMPLETEXTURENODE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGSimpleTextureNode so that we can call protected methods
class VirtualQSGSimpleTextureNode final : public QSGSimpleTextureNode {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGSimpleTextureNode = true;

    // Virtual class public types (including callbacks)
    using QSGSimpleTextureNode_IsSubtreeBlocked_Callback = bool (*)();
    using QSGSimpleTextureNode_Preprocess_Callback = void (*)();

  protected:
    // Instance callback storage
    QSGSimpleTextureNode_IsSubtreeBlocked_Callback qsgsimpletexturenode_issubtreeblocked_callback = nullptr;
    QSGSimpleTextureNode_Preprocess_Callback qsgsimpletexturenode_preprocess_callback = nullptr;

    // Instance base flags
    mutable bool qsgsimpletexturenode_issubtreeblocked_isbase = false;
    mutable bool qsgsimpletexturenode_preprocess_isbase = false;

  public:
    VirtualQSGSimpleTextureNode() : QSGSimpleTextureNode() {};

    // Callback setters
    inline void setQSGSimpleTextureNode_IsSubtreeBlocked_Callback(QSGSimpleTextureNode_IsSubtreeBlocked_Callback cb) { qsgsimpletexturenode_issubtreeblocked_callback = cb; }
    inline void setQSGSimpleTextureNode_Preprocess_Callback(QSGSimpleTextureNode_Preprocess_Callback cb) { qsgsimpletexturenode_preprocess_callback = cb; }

    // Base flag setters
    inline void setQSGSimpleTextureNode_IsSubtreeBlocked_IsBase(bool value) const { qsgsimpletexturenode_issubtreeblocked_isbase = value; }
    inline void setQSGSimpleTextureNode_Preprocess_IsBase(bool value) const { qsgsimpletexturenode_preprocess_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgsimpletexturenode_issubtreeblocked_isbase) {
            qsgsimpletexturenode_issubtreeblocked_isbase = false;
            return QSGSimpleTextureNode::isSubtreeBlocked();
        }
        auto issubtreeblocked_cb = qsgsimpletexturenode_issubtreeblocked_callback;
        if (issubtreeblocked_cb) {
            bool callback_ret = issubtreeblocked_cb();
            return callback_ret;
        }
        return QSGSimpleTextureNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgsimpletexturenode_preprocess_isbase) {
            qsgsimpletexturenode_preprocess_isbase = false;
            QSGSimpleTextureNode::preprocess();
            return;
        }
        auto preprocess_cb = qsgsimpletexturenode_preprocess_callback;
        if (preprocess_cb) {
            preprocess_cb();
            return;
        }
        QSGSimpleTextureNode::preprocess();
    }
};

#endif
