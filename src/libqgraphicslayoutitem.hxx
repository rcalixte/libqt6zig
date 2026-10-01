#pragma once
#ifndef LIBQGRAPHICSLAYOUTITEM_HXX
#define LIBQGRAPHICSLAYOUTITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsLayoutItem
class VirtualQGraphicsLayoutItem : public QGraphicsLayoutItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsLayoutItem_SetGeometry_Callback = void (*)(QGraphicsLayoutItem*, QRectF*);
    using QGraphicsLayoutItem_GetContentsMargins_Callback = void (*)(const QGraphicsLayoutItem*, double*, double*, double*, double*);
    using QGraphicsLayoutItem_UpdateGeometry_Callback = void (*)(QGraphicsLayoutItem*);
    using QGraphicsLayoutItem_IsEmpty_Callback = bool (*)(const QGraphicsLayoutItem*);
    using QGraphicsLayoutItem_SizeHint_Callback = QSizeF* (*)(const QGraphicsLayoutItem*, int, QSizeF*);
    using QGraphicsLayoutItem::setGraphicsItem;
    using QGraphicsLayoutItem::setOwnedByLayout;

    // Instance callback storage
    QGraphicsLayoutItem_SetGeometry_Callback qgraphicslayoutitem_setgeometry_callback = nullptr;
    QGraphicsLayoutItem_GetContentsMargins_Callback qgraphicslayoutitem_getcontentsmargins_callback = nullptr;
    QGraphicsLayoutItem_UpdateGeometry_Callback qgraphicslayoutitem_updategeometry_callback = nullptr;
    QGraphicsLayoutItem_IsEmpty_Callback qgraphicslayoutitem_isempty_callback = nullptr;
    QGraphicsLayoutItem_SizeHint_Callback qgraphicslayoutitem_sizehint_callback = nullptr;

    // Access struct
    struct Base : QGraphicsLayoutItem {
        using QGraphicsLayoutItem::sizeHint;
    };

    VirtualQGraphicsLayoutItem() : QGraphicsLayoutItem() {};
    VirtualQGraphicsLayoutItem(QGraphicsLayoutItem* parent) : QGraphicsLayoutItem(parent) {};
    VirtualQGraphicsLayoutItem(QGraphicsLayoutItem* parent, bool isLayout) : QGraphicsLayoutItem(parent, isLayout) {};

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicslayoutitem_setgeometry_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            qgraphicslayoutitem_setgeometry_callback(this, cbval1);
            return;
        }
        QGraphicsLayoutItem::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicslayoutitem_getcontentsmargins_callback) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);
            qgraphicslayoutitem_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicslayoutitem_updategeometry_callback) {
            qgraphicslayoutitem_updategeometry_callback(this);
            return;
        }
        QGraphicsLayoutItem::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicslayoutitem_isempty_callback) {
            bool callback_ret = qgraphicslayoutitem_isempty_callback(this);
            return callback_ret;
        }
        return QGraphicsLayoutItem::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicslayoutitem_sizehint_callback) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);
            QSizeF* callback_ret = qgraphicslayoutitem_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsLayoutItem::sizeHint called without being implemented");
    }
};

#endif
