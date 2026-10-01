#pragma once
#ifndef QUICK_LIBQSGSIMPLETEXTURENODE_HXX
#define QUICK_LIBQSGSIMPLETEXTURENODE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGSimpleTextureNode
class VirtualQSGSimpleTextureNode final : public QSGSimpleTextureNode {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGSimpleTextureNode_IsSubtreeBlocked_Callback = bool (*)(const QSGSimpleTextureNode*);
    using QSGSimpleTextureNode_Preprocess_Callback = void (*)(QSGSimpleTextureNode*);

    // Instance callback storage
    QSGSimpleTextureNode_IsSubtreeBlocked_Callback qsgsimpletexturenode_issubtreeblocked_callback = nullptr;
    QSGSimpleTextureNode_Preprocess_Callback qsgsimpletexturenode_preprocess_callback = nullptr;

    VirtualQSGSimpleTextureNode() : QSGSimpleTextureNode() {};

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgsimpletexturenode_issubtreeblocked_callback) {
            bool callback_ret = qsgsimpletexturenode_issubtreeblocked_callback(this);
            return callback_ret;
        }
        return QSGSimpleTextureNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgsimpletexturenode_preprocess_callback) {
            qsgsimpletexturenode_preprocess_callback(this);
            return;
        }
        QSGSimpleTextureNode::preprocess();
    }
};

#endif
