#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSLAYOUTITEM_H
#define SRCC_LIBVIRTUALQGRAPHICSLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsLayoutItem so that we can call protected methods
class VirtualQGraphicsLayoutItem final : public QGraphicsLayoutItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsLayoutItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsLayoutItem_SetGeometry_Callback = void (*)(QGraphicsLayoutItem*, QRectF*);
    using QGraphicsLayoutItem_GetContentsMargins_Callback = void (*)(const QGraphicsLayoutItem*, double*, double*, double*, double*);
    using QGraphicsLayoutItem_UpdateGeometry_Callback = void (*)();
    using QGraphicsLayoutItem_IsEmpty_Callback = bool (*)();
    using QGraphicsLayoutItem_SizeHint_Callback = QSizeF* (*)(const QGraphicsLayoutItem*, int, QSizeF*);
    using QGraphicsLayoutItem_SetGraphicsItem_Callback = void (*)(QGraphicsLayoutItem*, QGraphicsItem*);
    using QGraphicsLayoutItem_SetOwnedByLayout_Callback = void (*)(QGraphicsLayoutItem*, bool);

  protected:
    // Instance callback storage
    QGraphicsLayoutItem_SetGeometry_Callback qgraphicslayoutitem_setgeometry_callback = nullptr;
    QGraphicsLayoutItem_GetContentsMargins_Callback qgraphicslayoutitem_getcontentsmargins_callback = nullptr;
    QGraphicsLayoutItem_UpdateGeometry_Callback qgraphicslayoutitem_updategeometry_callback = nullptr;
    QGraphicsLayoutItem_IsEmpty_Callback qgraphicslayoutitem_isempty_callback = nullptr;
    QGraphicsLayoutItem_SizeHint_Callback qgraphicslayoutitem_sizehint_callback = nullptr;
    QGraphicsLayoutItem_SetGraphicsItem_Callback qgraphicslayoutitem_setgraphicsitem_callback = nullptr;
    QGraphicsLayoutItem_SetOwnedByLayout_Callback qgraphicslayoutitem_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicslayoutitem_setgeometry_isbase = false;
    mutable bool qgraphicslayoutitem_getcontentsmargins_isbase = false;
    mutable bool qgraphicslayoutitem_updategeometry_isbase = false;
    mutable bool qgraphicslayoutitem_isempty_isbase = false;
    mutable bool qgraphicslayoutitem_sizehint_isbase = false;
    mutable bool qgraphicslayoutitem_setgraphicsitem_isbase = false;
    mutable bool qgraphicslayoutitem_setownedbylayout_isbase = false;

  public:
    VirtualQGraphicsLayoutItem() : QGraphicsLayoutItem() {};
    VirtualQGraphicsLayoutItem(QGraphicsLayoutItem* parent) : QGraphicsLayoutItem(parent) {};
    VirtualQGraphicsLayoutItem(QGraphicsLayoutItem* parent, bool isLayout) : QGraphicsLayoutItem(parent, isLayout) {};

    ~VirtualQGraphicsLayoutItem() {
        qgraphicslayoutitem_setgeometry_callback = nullptr;
        qgraphicslayoutitem_getcontentsmargins_callback = nullptr;
        qgraphicslayoutitem_updategeometry_callback = nullptr;
        qgraphicslayoutitem_isempty_callback = nullptr;
        qgraphicslayoutitem_sizehint_callback = nullptr;
        qgraphicslayoutitem_setgraphicsitem_callback = nullptr;
        qgraphicslayoutitem_setownedbylayout_callback = nullptr;
    }

    // Callback setters
    inline void setQGraphicsLayoutItem_SetGeometry_Callback(QGraphicsLayoutItem_SetGeometry_Callback cb) { qgraphicslayoutitem_setgeometry_callback = cb; }
    inline void setQGraphicsLayoutItem_GetContentsMargins_Callback(QGraphicsLayoutItem_GetContentsMargins_Callback cb) { qgraphicslayoutitem_getcontentsmargins_callback = cb; }
    inline void setQGraphicsLayoutItem_UpdateGeometry_Callback(QGraphicsLayoutItem_UpdateGeometry_Callback cb) { qgraphicslayoutitem_updategeometry_callback = cb; }
    inline void setQGraphicsLayoutItem_IsEmpty_Callback(QGraphicsLayoutItem_IsEmpty_Callback cb) { qgraphicslayoutitem_isempty_callback = cb; }
    inline void setQGraphicsLayoutItem_SizeHint_Callback(QGraphicsLayoutItem_SizeHint_Callback cb) { qgraphicslayoutitem_sizehint_callback = cb; }
    inline void setQGraphicsLayoutItem_SetGraphicsItem_Callback(QGraphicsLayoutItem_SetGraphicsItem_Callback cb) { qgraphicslayoutitem_setgraphicsitem_callback = cb; }
    inline void setQGraphicsLayoutItem_SetOwnedByLayout_Callback(QGraphicsLayoutItem_SetOwnedByLayout_Callback cb) { qgraphicslayoutitem_setownedbylayout_callback = cb; }

    // Base flag setters
    inline void setQGraphicsLayoutItem_SetGeometry_IsBase(bool value) const { qgraphicslayoutitem_setgeometry_isbase = value; }
    inline void setQGraphicsLayoutItem_GetContentsMargins_IsBase(bool value) const { qgraphicslayoutitem_getcontentsmargins_isbase = value; }
    inline void setQGraphicsLayoutItem_UpdateGeometry_IsBase(bool value) const { qgraphicslayoutitem_updategeometry_isbase = value; }
    inline void setQGraphicsLayoutItem_IsEmpty_IsBase(bool value) const { qgraphicslayoutitem_isempty_isbase = value; }
    inline void setQGraphicsLayoutItem_SizeHint_IsBase(bool value) const { qgraphicslayoutitem_sizehint_isbase = value; }
    inline void setQGraphicsLayoutItem_SetGraphicsItem_IsBase(bool value) const { qgraphicslayoutitem_setgraphicsitem_isbase = value; }
    inline void setQGraphicsLayoutItem_SetOwnedByLayout_IsBase(bool value) const { qgraphicslayoutitem_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicslayoutitem_setgeometry_isbase) {
            qgraphicslayoutitem_setgeometry_isbase = false;
            QGraphicsLayoutItem::setGeometry(rect);
        } else if (qgraphicslayoutitem_setgeometry_callback != nullptr) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);

            qgraphicslayoutitem_setgeometry_callback(this, cbval1);
        } else {
            QGraphicsLayoutItem::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicslayoutitem_getcontentsmargins_isbase) {
            qgraphicslayoutitem_getcontentsmargins_isbase = false;
            QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom);
        } else if (qgraphicslayoutitem_getcontentsmargins_callback != nullptr) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);

            qgraphicslayoutitem_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicslayoutitem_updategeometry_isbase) {
            qgraphicslayoutitem_updategeometry_isbase = false;
            QGraphicsLayoutItem::updateGeometry();
        } else if (qgraphicslayoutitem_updategeometry_callback != nullptr) {
            qgraphicslayoutitem_updategeometry_callback();
        } else {
            QGraphicsLayoutItem::updateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicslayoutitem_isempty_isbase) {
            qgraphicslayoutitem_isempty_isbase = false;
            return QGraphicsLayoutItem::isEmpty();
        } else if (qgraphicslayoutitem_isempty_callback != nullptr) {
            bool callback_ret = qgraphicslayoutitem_isempty_callback();
            return callback_ret;
        } else {
            return QGraphicsLayoutItem::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicslayoutitem_sizehint_callback != nullptr) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);

            QSizeF* callback_ret = qgraphicslayoutitem_sizehint_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicslayoutitem_setgraphicsitem_isbase) {
            qgraphicslayoutitem_setgraphicsitem_isbase = false;
            QGraphicsLayoutItem::setGraphicsItem(item);
        } else if (qgraphicslayoutitem_setgraphicsitem_callback != nullptr) {
            QGraphicsItem* cbval1 = item;

            qgraphicslayoutitem_setgraphicsitem_callback(this, cbval1);
        } else {
            QGraphicsLayoutItem::setGraphicsItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicslayoutitem_setownedbylayout_isbase) {
            qgraphicslayoutitem_setownedbylayout_isbase = false;
            QGraphicsLayoutItem::setOwnedByLayout(ownedByLayout);
        } else if (qgraphicslayoutitem_setownedbylayout_callback != nullptr) {
            bool cbval1 = ownedByLayout;

            qgraphicslayoutitem_setownedbylayout_callback(this, cbval1);
        } else {
            QGraphicsLayoutItem::setOwnedByLayout(ownedByLayout);
        }
    }

    // Friend functions
    friend QSizeF* QGraphicsLayoutItem_SizeHint(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint);
    friend QSizeF* QGraphicsLayoutItem_QBaseSizeHint(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint);
    friend void QGraphicsLayoutItem_SetGraphicsItem(QGraphicsLayoutItem* self, QGraphicsItem* item);
    friend void QGraphicsLayoutItem_QBaseSetGraphicsItem(QGraphicsLayoutItem* self, QGraphicsItem* item);
    friend void QGraphicsLayoutItem_SetOwnedByLayout(QGraphicsLayoutItem* self, bool ownedByLayout);
    friend void QGraphicsLayoutItem_QBaseSetOwnedByLayout(QGraphicsLayoutItem* self, bool ownedByLayout);
};

#endif
