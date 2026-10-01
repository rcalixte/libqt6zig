#pragma once
#ifndef QUICK_LIBQSGSIMPLERECTNODE_HXX
#define QUICK_LIBQSGSIMPLERECTNODE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGSimpleRectNode
class VirtualQSGSimpleRectNode final : public QSGSimpleRectNode {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGSimpleRectNode_IsSubtreeBlocked_Callback = bool (*)(const QSGSimpleRectNode*);
    using QSGSimpleRectNode_Preprocess_Callback = void (*)(QSGSimpleRectNode*);

    // Instance callback storage
    QSGSimpleRectNode_IsSubtreeBlocked_Callback qsgsimplerectnode_issubtreeblocked_callback = nullptr;
    QSGSimpleRectNode_Preprocess_Callback qsgsimplerectnode_preprocess_callback = nullptr;

    VirtualQSGSimpleRectNode(const QRectF& rect, const QColor& color) : QSGSimpleRectNode(rect, color) {};
    VirtualQSGSimpleRectNode() : QSGSimpleRectNode() {};

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgsimplerectnode_issubtreeblocked_callback) {
            bool callback_ret = qsgsimplerectnode_issubtreeblocked_callback(this);
            return callback_ret;
        }
        return QSGSimpleRectNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgsimplerectnode_preprocess_callback) {
            qsgsimplerectnode_preprocess_callback(this);
            return;
        }
        QSGSimpleRectNode::preprocess();
    }
};

#endif
