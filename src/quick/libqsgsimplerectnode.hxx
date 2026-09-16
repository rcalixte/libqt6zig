#pragma once
#ifndef QUICK_LIBQSGSIMPLERECTNODE_HXX
#define QUICK_LIBQSGSIMPLERECTNODE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGSimpleRectNode so that we can call protected methods
class VirtualQSGSimpleRectNode final : public QSGSimpleRectNode {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGSimpleRectNode = true;

    // Virtual class public types (including callbacks)
    using QSGSimpleRectNode_IsSubtreeBlocked_Callback = bool (*)();
    using QSGSimpleRectNode_Preprocess_Callback = void (*)();

  protected:
    // Instance callback storage
    QSGSimpleRectNode_IsSubtreeBlocked_Callback qsgsimplerectnode_issubtreeblocked_callback = nullptr;
    QSGSimpleRectNode_Preprocess_Callback qsgsimplerectnode_preprocess_callback = nullptr;

    // Instance base flags
    mutable bool qsgsimplerectnode_issubtreeblocked_isbase = false;
    mutable bool qsgsimplerectnode_preprocess_isbase = false;

  public:
    VirtualQSGSimpleRectNode(const QRectF& rect, const QColor& color) : QSGSimpleRectNode(rect, color) {};
    VirtualQSGSimpleRectNode() : QSGSimpleRectNode() {};

    // Callback setters
    inline void setQSGSimpleRectNode_IsSubtreeBlocked_Callback(QSGSimpleRectNode_IsSubtreeBlocked_Callback cb) { qsgsimplerectnode_issubtreeblocked_callback = cb; }
    inline void setQSGSimpleRectNode_Preprocess_Callback(QSGSimpleRectNode_Preprocess_Callback cb) { qsgsimplerectnode_preprocess_callback = cb; }

    // Base flag setters
    inline void setQSGSimpleRectNode_IsSubtreeBlocked_IsBase(bool value) const { qsgsimplerectnode_issubtreeblocked_isbase = value; }
    inline void setQSGSimpleRectNode_Preprocess_IsBase(bool value) const { qsgsimplerectnode_preprocess_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isSubtreeBlocked() const override {
        if (qsgsimplerectnode_issubtreeblocked_isbase) {
            qsgsimplerectnode_issubtreeblocked_isbase = false;
            return QSGSimpleRectNode::isSubtreeBlocked();
        }
        auto issubtreeblocked_cb = qsgsimplerectnode_issubtreeblocked_callback;
        if (issubtreeblocked_cb) {
            bool callback_ret = issubtreeblocked_cb();
            return callback_ret;
        }
        return QSGSimpleRectNode::isSubtreeBlocked();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preprocess() override {
        if (qsgsimplerectnode_preprocess_isbase) {
            qsgsimplerectnode_preprocess_isbase = false;
            QSGSimpleRectNode::preprocess();
            return;
        }
        auto preprocess_cb = qsgsimplerectnode_preprocess_callback;
        if (preprocess_cb) {
            preprocess_cb();
            return;
        }
        QSGSimpleRectNode::preprocess();
    }
};

#endif
