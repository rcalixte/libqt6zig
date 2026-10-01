#pragma once
#ifndef LIBQGRAPHICSANCHORLAYOUT_HXX
#define LIBQGRAPHICSANCHORLAYOUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsAnchorLayout
class VirtualQGraphicsAnchorLayout final : public QGraphicsAnchorLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsAnchorLayout_RemoveAt_Callback = void (*)(QGraphicsAnchorLayout*, int);
    using QGraphicsAnchorLayout_SetGeometry_Callback = void (*)(QGraphicsAnchorLayout*, QRectF*);
    using QGraphicsAnchorLayout_Count_Callback = int (*)(const QGraphicsAnchorLayout*);
    using QGraphicsAnchorLayout_ItemAt_Callback = QGraphicsLayoutItem* (*)(const QGraphicsAnchorLayout*, int);
    using QGraphicsAnchorLayout_Invalidate_Callback = void (*)(QGraphicsAnchorLayout*);
    using QGraphicsAnchorLayout_SizeHint_Callback = QSizeF* (*)(const QGraphicsAnchorLayout*, int, QSizeF*);
    using QGraphicsAnchorLayout_GetContentsMargins_Callback = void (*)(const QGraphicsAnchorLayout*, double*, double*, double*, double*);
    using QGraphicsAnchorLayout_UpdateGeometry_Callback = void (*)(QGraphicsAnchorLayout*);
    using QGraphicsAnchorLayout_WidgetEvent_Callback = void (*)(QGraphicsAnchorLayout*, QEvent*);
    using QGraphicsAnchorLayout_IsEmpty_Callback = bool (*)(const QGraphicsAnchorLayout*);
    using QGraphicsAnchorLayout::addChildLayoutItem;
    using QGraphicsAnchorLayout::setGraphicsItem;
    using QGraphicsAnchorLayout::setOwnedByLayout;

    // Instance callback storage
    QGraphicsAnchorLayout_RemoveAt_Callback qgraphicsanchorlayout_removeat_callback = nullptr;
    QGraphicsAnchorLayout_SetGeometry_Callback qgraphicsanchorlayout_setgeometry_callback = nullptr;
    QGraphicsAnchorLayout_Count_Callback qgraphicsanchorlayout_count_callback = nullptr;
    QGraphicsAnchorLayout_ItemAt_Callback qgraphicsanchorlayout_itemat_callback = nullptr;
    QGraphicsAnchorLayout_Invalidate_Callback qgraphicsanchorlayout_invalidate_callback = nullptr;
    QGraphicsAnchorLayout_SizeHint_Callback qgraphicsanchorlayout_sizehint_callback = nullptr;
    QGraphicsAnchorLayout_GetContentsMargins_Callback qgraphicsanchorlayout_getcontentsmargins_callback = nullptr;
    QGraphicsAnchorLayout_UpdateGeometry_Callback qgraphicsanchorlayout_updategeometry_callback = nullptr;
    QGraphicsAnchorLayout_WidgetEvent_Callback qgraphicsanchorlayout_widgetevent_callback = nullptr;
    QGraphicsAnchorLayout_IsEmpty_Callback qgraphicsanchorlayout_isempty_callback = nullptr;

    // Access struct
    struct Base : QGraphicsAnchorLayout {
        using QGraphicsAnchorLayout::sizeHint;
    };

    VirtualQGraphicsAnchorLayout() : QGraphicsAnchorLayout() {};
    VirtualQGraphicsAnchorLayout(QGraphicsLayoutItem* parent) : QGraphicsAnchorLayout(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual void removeAt(int index) override {
        if (qgraphicsanchorlayout_removeat_callback) {
            int cbval1 = index;
            qgraphicsanchorlayout_removeat_callback(this, cbval1);
            return;
        }
        QGraphicsAnchorLayout::removeAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicsanchorlayout_setgeometry_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            qgraphicsanchorlayout_setgeometry_callback(this, cbval1);
            return;
        }
        QGraphicsAnchorLayout::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qgraphicsanchorlayout_count_callback) {
            int callback_ret = qgraphicsanchorlayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsAnchorLayout::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual QGraphicsLayoutItem* itemAt(int index) const override {
        if (qgraphicsanchorlayout_itemat_callback) {
            int cbval1 = index;
            QGraphicsLayoutItem* callback_ret = qgraphicsanchorlayout_itemat_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsAnchorLayout::itemAt(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgraphicsanchorlayout_invalidate_callback) {
            qgraphicsanchorlayout_invalidate_callback(this);
            return;
        }
        QGraphicsAnchorLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicsanchorlayout_sizehint_callback) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);
            QSizeF* callback_ret = qgraphicsanchorlayout_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsAnchorLayout::sizeHint(which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicsanchorlayout_getcontentsmargins_callback) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);
            qgraphicsanchorlayout_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsAnchorLayout::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicsanchorlayout_updategeometry_callback) {
            qgraphicsanchorlayout_updategeometry_callback(this);
            return;
        }
        QGraphicsAnchorLayout::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual void widgetEvent(QEvent* e) override {
        if (qgraphicsanchorlayout_widgetevent_callback) {
            QEvent* cbval1 = e;
            qgraphicsanchorlayout_widgetevent_callback(this, cbval1);
            return;
        }
        QGraphicsAnchorLayout::widgetEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicsanchorlayout_isempty_callback) {
            bool callback_ret = qgraphicsanchorlayout_isempty_callback(this);
            return callback_ret;
        }
        return QGraphicsAnchorLayout::isEmpty();
    }

    // Friend functions
    friend QSizeF* QGraphicsAnchorLayout_SuperSizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint);
};

#endif
