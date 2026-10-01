#pragma once
#ifndef LIBQGRAPHICSLINEARLAYOUT_HXX
#define LIBQGRAPHICSLINEARLAYOUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsLinearLayout
class VirtualQGraphicsLinearLayout final : public QGraphicsLinearLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsLinearLayout_RemoveAt_Callback = void (*)(QGraphicsLinearLayout*, int);
    using QGraphicsLinearLayout_SetGeometry_Callback = void (*)(QGraphicsLinearLayout*, QRectF*);
    using QGraphicsLinearLayout_Count_Callback = int (*)(const QGraphicsLinearLayout*);
    using QGraphicsLinearLayout_ItemAt_Callback = QGraphicsLayoutItem* (*)(const QGraphicsLinearLayout*, int);
    using QGraphicsLinearLayout_Invalidate_Callback = void (*)(QGraphicsLinearLayout*);
    using QGraphicsLinearLayout_SizeHint_Callback = QSizeF* (*)(const QGraphicsLinearLayout*, int, QSizeF*);
    using QGraphicsLinearLayout_GetContentsMargins_Callback = void (*)(const QGraphicsLinearLayout*, double*, double*, double*, double*);
    using QGraphicsLinearLayout_UpdateGeometry_Callback = void (*)(QGraphicsLinearLayout*);
    using QGraphicsLinearLayout_WidgetEvent_Callback = void (*)(QGraphicsLinearLayout*, QEvent*);
    using QGraphicsLinearLayout_IsEmpty_Callback = bool (*)(const QGraphicsLinearLayout*);
    using QGraphicsLinearLayout::addChildLayoutItem;
    using QGraphicsLinearLayout::setGraphicsItem;
    using QGraphicsLinearLayout::setOwnedByLayout;

    // Instance callback storage
    QGraphicsLinearLayout_RemoveAt_Callback qgraphicslinearlayout_removeat_callback = nullptr;
    QGraphicsLinearLayout_SetGeometry_Callback qgraphicslinearlayout_setgeometry_callback = nullptr;
    QGraphicsLinearLayout_Count_Callback qgraphicslinearlayout_count_callback = nullptr;
    QGraphicsLinearLayout_ItemAt_Callback qgraphicslinearlayout_itemat_callback = nullptr;
    QGraphicsLinearLayout_Invalidate_Callback qgraphicslinearlayout_invalidate_callback = nullptr;
    QGraphicsLinearLayout_SizeHint_Callback qgraphicslinearlayout_sizehint_callback = nullptr;
    QGraphicsLinearLayout_GetContentsMargins_Callback qgraphicslinearlayout_getcontentsmargins_callback = nullptr;
    QGraphicsLinearLayout_UpdateGeometry_Callback qgraphicslinearlayout_updategeometry_callback = nullptr;
    QGraphicsLinearLayout_WidgetEvent_Callback qgraphicslinearlayout_widgetevent_callback = nullptr;
    QGraphicsLinearLayout_IsEmpty_Callback qgraphicslinearlayout_isempty_callback = nullptr;

    VirtualQGraphicsLinearLayout() : QGraphicsLinearLayout() {};
    VirtualQGraphicsLinearLayout(Qt::Orientation orientation) : QGraphicsLinearLayout(orientation) {};
    VirtualQGraphicsLinearLayout(QGraphicsLayoutItem* parent) : QGraphicsLinearLayout(parent) {};
    VirtualQGraphicsLinearLayout(Qt::Orientation orientation, QGraphicsLayoutItem* parent) : QGraphicsLinearLayout(orientation, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual void removeAt(int index) override {
        if (qgraphicslinearlayout_removeat_callback) {
            int cbval1 = index;
            qgraphicslinearlayout_removeat_callback(this, cbval1);
            return;
        }
        QGraphicsLinearLayout::removeAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicslinearlayout_setgeometry_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            qgraphicslinearlayout_setgeometry_callback(this, cbval1);
            return;
        }
        QGraphicsLinearLayout::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qgraphicslinearlayout_count_callback) {
            int callback_ret = qgraphicslinearlayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsLinearLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual QGraphicsLayoutItem* itemAt(int index) const override {
        if (qgraphicslinearlayout_itemat_callback) {
            int cbval1 = index;
            QGraphicsLayoutItem* callback_ret = qgraphicslinearlayout_itemat_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsLinearLayout::itemAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgraphicslinearlayout_invalidate_callback) {
            qgraphicslinearlayout_invalidate_callback(this);
            return;
        }
        QGraphicsLinearLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicslinearlayout_sizehint_callback) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);
            QSizeF* callback_ret = qgraphicslinearlayout_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsLinearLayout::sizeHint(which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicslinearlayout_getcontentsmargins_callback) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);
            qgraphicslinearlayout_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsLinearLayout::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicslinearlayout_updategeometry_callback) {
            qgraphicslinearlayout_updategeometry_callback(this);
            return;
        }
        QGraphicsLinearLayout::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual void widgetEvent(QEvent* e) override {
        if (qgraphicslinearlayout_widgetevent_callback) {
            QEvent* cbval1 = e;
            qgraphicslinearlayout_widgetevent_callback(this, cbval1);
            return;
        }
        QGraphicsLinearLayout::widgetEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicslinearlayout_isempty_callback) {
            bool callback_ret = qgraphicslinearlayout_isempty_callback(this);
            return callback_ret;
        }
        return QGraphicsLinearLayout::isEmpty();
    }
};

#endif
