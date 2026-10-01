#pragma once
#ifndef LIBQGRAPHICSLAYOUT_HXX
#define LIBQGRAPHICSLAYOUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsLayout
class VirtualQGraphicsLayout : public QGraphicsLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsLayout_GetContentsMargins_Callback = void (*)(const QGraphicsLayout*, double*, double*, double*, double*);
    using QGraphicsLayout_Invalidate_Callback = void (*)(QGraphicsLayout*);
    using QGraphicsLayout_UpdateGeometry_Callback = void (*)(QGraphicsLayout*);
    using QGraphicsLayout_WidgetEvent_Callback = void (*)(QGraphicsLayout*, QEvent*);
    using QGraphicsLayout_Count_Callback = int (*)(const QGraphicsLayout*);
    using QGraphicsLayout_ItemAt_Callback = QGraphicsLayoutItem* (*)(const QGraphicsLayout*, int);
    using QGraphicsLayout_RemoveAt_Callback = void (*)(QGraphicsLayout*, int);
    using QGraphicsLayout_SetGeometry_Callback = void (*)(QGraphicsLayout*, QRectF*);
    using QGraphicsLayout_IsEmpty_Callback = bool (*)(const QGraphicsLayout*);
    using QGraphicsLayout_SizeHint_Callback = QSizeF* (*)(const QGraphicsLayout*, int, QSizeF*);
    using QGraphicsLayout::addChildLayoutItem;
    using QGraphicsLayout::setGraphicsItem;
    using QGraphicsLayout::setOwnedByLayout;

    // Instance callback storage
    QGraphicsLayout_GetContentsMargins_Callback qgraphicslayout_getcontentsmargins_callback = nullptr;
    QGraphicsLayout_Invalidate_Callback qgraphicslayout_invalidate_callback = nullptr;
    QGraphicsLayout_UpdateGeometry_Callback qgraphicslayout_updategeometry_callback = nullptr;
    QGraphicsLayout_WidgetEvent_Callback qgraphicslayout_widgetevent_callback = nullptr;
    QGraphicsLayout_Count_Callback qgraphicslayout_count_callback = nullptr;
    QGraphicsLayout_ItemAt_Callback qgraphicslayout_itemat_callback = nullptr;
    QGraphicsLayout_RemoveAt_Callback qgraphicslayout_removeat_callback = nullptr;
    QGraphicsLayout_SetGeometry_Callback qgraphicslayout_setgeometry_callback = nullptr;
    QGraphicsLayout_IsEmpty_Callback qgraphicslayout_isempty_callback = nullptr;
    QGraphicsLayout_SizeHint_Callback qgraphicslayout_sizehint_callback = nullptr;

    // Access struct
    struct Base : QGraphicsLayout {
        using QGraphicsLayout::sizeHint;
    };

    VirtualQGraphicsLayout() : QGraphicsLayout() {};
    VirtualQGraphicsLayout(QGraphicsLayoutItem* parent) : QGraphicsLayout(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicslayout_getcontentsmargins_callback) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);
            qgraphicslayout_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsLayout::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgraphicslayout_invalidate_callback) {
            qgraphicslayout_invalidate_callback(this);
            return;
        }
        QGraphicsLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicslayout_updategeometry_callback) {
            qgraphicslayout_updategeometry_callback(this);
            return;
        }
        QGraphicsLayout::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual void widgetEvent(QEvent* e) override {
        if (qgraphicslayout_widgetevent_callback) {
            QEvent* cbval1 = e;
            qgraphicslayout_widgetevent_callback(this, cbval1);
            return;
        }
        QGraphicsLayout::widgetEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qgraphicslayout_count_callback) {
            int callback_ret = qgraphicslayout_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsLayout::count called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QGraphicsLayoutItem* itemAt(int i) const override {
        if (qgraphicslayout_itemat_callback) {
            int cbval1 = i;
            QGraphicsLayoutItem* callback_ret = qgraphicslayout_itemat_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsLayout::itemAt called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeAt(int index) override {
        if (qgraphicslayout_removeat_callback) {
            int cbval1 = index;
            qgraphicslayout_removeat_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsLayout::removeAt called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicslayout_setgeometry_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            qgraphicslayout_setgeometry_callback(this, cbval1);
            return;
        }
        QGraphicsLayout::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicslayout_isempty_callback) {
            bool callback_ret = qgraphicslayout_isempty_callback(this);
            return callback_ret;
        }
        return QGraphicsLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicslayout_sizehint_callback) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);
            QSizeF* callback_ret = qgraphicslayout_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsLayout::sizeHint called without being implemented");
    }
};

#endif
