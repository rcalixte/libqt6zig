#pragma once
#ifndef LIBQGRAPHICSGRIDLAYOUT_HXX
#define LIBQGRAPHICSGRIDLAYOUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsGridLayout
class VirtualQGraphicsGridLayout final : public QGraphicsGridLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsGridLayout_Count_Callback = int (*)(const QGraphicsGridLayout*);
    using QGraphicsGridLayout_ItemAt2_Callback = QGraphicsLayoutItem* (*)(const QGraphicsGridLayout*, int);
    using QGraphicsGridLayout_RemoveAt_Callback = void (*)(QGraphicsGridLayout*, int);
    using QGraphicsGridLayout_Invalidate_Callback = void (*)(QGraphicsGridLayout*);
    using QGraphicsGridLayout_SetGeometry_Callback = void (*)(QGraphicsGridLayout*, QRectF*);
    using QGraphicsGridLayout_SizeHint_Callback = QSizeF* (*)(const QGraphicsGridLayout*, int, QSizeF*);
    using QGraphicsGridLayout_GetContentsMargins_Callback = void (*)(const QGraphicsGridLayout*, double*, double*, double*, double*);
    using QGraphicsGridLayout_UpdateGeometry_Callback = void (*)(QGraphicsGridLayout*);
    using QGraphicsGridLayout_WidgetEvent_Callback = void (*)(QGraphicsGridLayout*, QEvent*);
    using QGraphicsGridLayout_IsEmpty_Callback = bool (*)(const QGraphicsGridLayout*);
    using QGraphicsGridLayout::addChildLayoutItem;
    using QGraphicsGridLayout::setGraphicsItem;
    using QGraphicsGridLayout::setOwnedByLayout;

    // Instance callback storage
    QGraphicsGridLayout_Count_Callback qgraphicsgridlayout_count_callback = nullptr;
    QGraphicsGridLayout_ItemAt2_Callback qgraphicsgridlayout_itemat2_callback = nullptr;
    QGraphicsGridLayout_RemoveAt_Callback qgraphicsgridlayout_removeat_callback = nullptr;
    QGraphicsGridLayout_Invalidate_Callback qgraphicsgridlayout_invalidate_callback = nullptr;
    QGraphicsGridLayout_SetGeometry_Callback qgraphicsgridlayout_setgeometry_callback = nullptr;
    QGraphicsGridLayout_SizeHint_Callback qgraphicsgridlayout_sizehint_callback = nullptr;
    QGraphicsGridLayout_GetContentsMargins_Callback qgraphicsgridlayout_getcontentsmargins_callback = nullptr;
    QGraphicsGridLayout_UpdateGeometry_Callback qgraphicsgridlayout_updategeometry_callback = nullptr;
    QGraphicsGridLayout_WidgetEvent_Callback qgraphicsgridlayout_widgetevent_callback = nullptr;
    QGraphicsGridLayout_IsEmpty_Callback qgraphicsgridlayout_isempty_callback = nullptr;

    VirtualQGraphicsGridLayout() : QGraphicsGridLayout() {};
    VirtualQGraphicsGridLayout(QGraphicsLayoutItem* parent) : QGraphicsGridLayout(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qgraphicsgridlayout_count_callback) {
            int callback_ret = qgraphicsgridlayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsGridLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual QGraphicsLayoutItem* itemAt(int index) const override {
        if (qgraphicsgridlayout_itemat2_callback) {
            int cbval1 = index;
            QGraphicsLayoutItem* callback_ret = qgraphicsgridlayout_itemat2_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsGridLayout::itemAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeAt(int index) override {
        if (qgraphicsgridlayout_removeat_callback) {
            int cbval1 = index;
            qgraphicsgridlayout_removeat_callback(this, cbval1);
            return;
        }
        QGraphicsGridLayout::removeAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgraphicsgridlayout_invalidate_callback) {
            qgraphicsgridlayout_invalidate_callback(this);
            return;
        }
        QGraphicsGridLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicsgridlayout_setgeometry_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            qgraphicsgridlayout_setgeometry_callback(this, cbval1);
            return;
        }
        QGraphicsGridLayout::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicsgridlayout_sizehint_callback) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);
            QSizeF* callback_ret = qgraphicsgridlayout_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsGridLayout::sizeHint(which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicsgridlayout_getcontentsmargins_callback) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);
            qgraphicsgridlayout_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsGridLayout::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicsgridlayout_updategeometry_callback) {
            qgraphicsgridlayout_updategeometry_callback(this);
            return;
        }
        QGraphicsGridLayout::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual void widgetEvent(QEvent* e) override {
        if (qgraphicsgridlayout_widgetevent_callback) {
            QEvent* cbval1 = e;
            qgraphicsgridlayout_widgetevent_callback(this, cbval1);
            return;
        }
        QGraphicsGridLayout::widgetEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicsgridlayout_isempty_callback) {
            bool callback_ret = qgraphicsgridlayout_isempty_callback(this);
            return callback_ret;
        }
        return QGraphicsGridLayout::isEmpty();
    }
};

#endif
