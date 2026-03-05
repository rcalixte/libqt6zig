#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSLAYOUT_H
#define SRCC_LIBVIRTUALQGRAPHICSLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsLayout so that we can call protected methods
class VirtualQGraphicsLayout : public QGraphicsLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsLayout = true;

    // Virtual class public types (including callbacks)
    using QGraphicsLayout_GetContentsMargins_Callback = void (*)(const QGraphicsLayout*, double*, double*, double*, double*);
    using QGraphicsLayout_Invalidate_Callback = void (*)();
    using QGraphicsLayout_UpdateGeometry_Callback = void (*)();
    using QGraphicsLayout_WidgetEvent_Callback = void (*)(QGraphicsLayout*, QEvent*);
    using QGraphicsLayout_Count_Callback = int (*)();
    using QGraphicsLayout_ItemAt_Callback = QGraphicsLayoutItem* (*)(const QGraphicsLayout*, int);
    using QGraphicsLayout_RemoveAt_Callback = void (*)(QGraphicsLayout*, int);
    using QGraphicsLayout_SetGeometry_Callback = void (*)(QGraphicsLayout*, QRectF*);
    using QGraphicsLayout_IsEmpty_Callback = bool (*)();
    using QGraphicsLayout_SizeHint_Callback = QSizeF* (*)(const QGraphicsLayout*, int, QSizeF*);
    using QGraphicsLayout_AddChildLayoutItem_Callback = void (*)(QGraphicsLayout*, QGraphicsLayoutItem*);
    using QGraphicsLayout_SetGraphicsItem_Callback = void (*)(QGraphicsLayout*, QGraphicsItem*);
    using QGraphicsLayout_SetOwnedByLayout_Callback = void (*)(QGraphicsLayout*, bool);

  protected:
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
    QGraphicsLayout_AddChildLayoutItem_Callback qgraphicslayout_addchildlayoutitem_callback = nullptr;
    QGraphicsLayout_SetGraphicsItem_Callback qgraphicslayout_setgraphicsitem_callback = nullptr;
    QGraphicsLayout_SetOwnedByLayout_Callback qgraphicslayout_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicslayout_getcontentsmargins_isbase = false;
    mutable bool qgraphicslayout_invalidate_isbase = false;
    mutable bool qgraphicslayout_updategeometry_isbase = false;
    mutable bool qgraphicslayout_widgetevent_isbase = false;
    mutable bool qgraphicslayout_count_isbase = false;
    mutable bool qgraphicslayout_itemat_isbase = false;
    mutable bool qgraphicslayout_removeat_isbase = false;
    mutable bool qgraphicslayout_setgeometry_isbase = false;
    mutable bool qgraphicslayout_isempty_isbase = false;
    mutable bool qgraphicslayout_sizehint_isbase = false;
    mutable bool qgraphicslayout_addchildlayoutitem_isbase = false;
    mutable bool qgraphicslayout_setgraphicsitem_isbase = false;
    mutable bool qgraphicslayout_setownedbylayout_isbase = false;

  public:
    VirtualQGraphicsLayout() : QGraphicsLayout() {};
    VirtualQGraphicsLayout(QGraphicsLayoutItem* parent) : QGraphicsLayout(parent) {};

    // Callback setters
    inline void setQGraphicsLayout_GetContentsMargins_Callback(QGraphicsLayout_GetContentsMargins_Callback cb) { qgraphicslayout_getcontentsmargins_callback = cb; }
    inline void setQGraphicsLayout_Invalidate_Callback(QGraphicsLayout_Invalidate_Callback cb) { qgraphicslayout_invalidate_callback = cb; }
    inline void setQGraphicsLayout_UpdateGeometry_Callback(QGraphicsLayout_UpdateGeometry_Callback cb) { qgraphicslayout_updategeometry_callback = cb; }
    inline void setQGraphicsLayout_WidgetEvent_Callback(QGraphicsLayout_WidgetEvent_Callback cb) { qgraphicslayout_widgetevent_callback = cb; }
    inline void setQGraphicsLayout_Count_Callback(QGraphicsLayout_Count_Callback cb) { qgraphicslayout_count_callback = cb; }
    inline void setQGraphicsLayout_ItemAt_Callback(QGraphicsLayout_ItemAt_Callback cb) { qgraphicslayout_itemat_callback = cb; }
    inline void setQGraphicsLayout_RemoveAt_Callback(QGraphicsLayout_RemoveAt_Callback cb) { qgraphicslayout_removeat_callback = cb; }
    inline void setQGraphicsLayout_SetGeometry_Callback(QGraphicsLayout_SetGeometry_Callback cb) { qgraphicslayout_setgeometry_callback = cb; }
    inline void setQGraphicsLayout_IsEmpty_Callback(QGraphicsLayout_IsEmpty_Callback cb) { qgraphicslayout_isempty_callback = cb; }
    inline void setQGraphicsLayout_SizeHint_Callback(QGraphicsLayout_SizeHint_Callback cb) { qgraphicslayout_sizehint_callback = cb; }
    inline void setQGraphicsLayout_AddChildLayoutItem_Callback(QGraphicsLayout_AddChildLayoutItem_Callback cb) { qgraphicslayout_addchildlayoutitem_callback = cb; }
    inline void setQGraphicsLayout_SetGraphicsItem_Callback(QGraphicsLayout_SetGraphicsItem_Callback cb) { qgraphicslayout_setgraphicsitem_callback = cb; }
    inline void setQGraphicsLayout_SetOwnedByLayout_Callback(QGraphicsLayout_SetOwnedByLayout_Callback cb) { qgraphicslayout_setownedbylayout_callback = cb; }

    // Base flag setters
    inline void setQGraphicsLayout_GetContentsMargins_IsBase(bool value) const { qgraphicslayout_getcontentsmargins_isbase = value; }
    inline void setQGraphicsLayout_Invalidate_IsBase(bool value) const { qgraphicslayout_invalidate_isbase = value; }
    inline void setQGraphicsLayout_UpdateGeometry_IsBase(bool value) const { qgraphicslayout_updategeometry_isbase = value; }
    inline void setQGraphicsLayout_WidgetEvent_IsBase(bool value) const { qgraphicslayout_widgetevent_isbase = value; }
    inline void setQGraphicsLayout_Count_IsBase(bool value) const { qgraphicslayout_count_isbase = value; }
    inline void setQGraphicsLayout_ItemAt_IsBase(bool value) const { qgraphicslayout_itemat_isbase = value; }
    inline void setQGraphicsLayout_RemoveAt_IsBase(bool value) const { qgraphicslayout_removeat_isbase = value; }
    inline void setQGraphicsLayout_SetGeometry_IsBase(bool value) const { qgraphicslayout_setgeometry_isbase = value; }
    inline void setQGraphicsLayout_IsEmpty_IsBase(bool value) const { qgraphicslayout_isempty_isbase = value; }
    inline void setQGraphicsLayout_SizeHint_IsBase(bool value) const { qgraphicslayout_sizehint_isbase = value; }
    inline void setQGraphicsLayout_AddChildLayoutItem_IsBase(bool value) const { qgraphicslayout_addchildlayoutitem_isbase = value; }
    inline void setQGraphicsLayout_SetGraphicsItem_IsBase(bool value) const { qgraphicslayout_setgraphicsitem_isbase = value; }
    inline void setQGraphicsLayout_SetOwnedByLayout_IsBase(bool value) const { qgraphicslayout_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicslayout_getcontentsmargins_isbase) {
            qgraphicslayout_getcontentsmargins_isbase = false;
            QGraphicsLayout::getContentsMargins(left, top, right, bottom);
            return;
        }
        auto getcontentsmargins_cb = qgraphicslayout_getcontentsmargins_callback;
        if (getcontentsmargins_cb) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);

            getcontentsmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsLayout::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgraphicslayout_invalidate_isbase) {
            qgraphicslayout_invalidate_isbase = false;
            QGraphicsLayout::invalidate();
            return;
        }
        auto invalidate_cb = qgraphicslayout_invalidate_callback;
        if (invalidate_cb) {
            invalidate_cb();
            return;
        }
        QGraphicsLayout::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicslayout_updategeometry_isbase) {
            qgraphicslayout_updategeometry_isbase = false;
            QGraphicsLayout::updateGeometry();
            return;
        }
        auto updategeometry_cb = qgraphicslayout_updategeometry_callback;
        if (updategeometry_cb) {
            updategeometry_cb();
            return;
        }
        QGraphicsLayout::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual void widgetEvent(QEvent* e) override {
        if (qgraphicslayout_widgetevent_isbase) {
            qgraphicslayout_widgetevent_isbase = false;
            QGraphicsLayout::widgetEvent(e);
            return;
        }
        auto widgetevent_cb = qgraphicslayout_widgetevent_callback;
        if (widgetevent_cb) {
            QEvent* cbval1 = e;

            widgetevent_cb(this, cbval1);
            return;
        }
        QGraphicsLayout::widgetEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        auto count_cb = qgraphicslayout_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QGraphicsLayoutItem* itemAt(int i) const override {
        auto itemat_cb = qgraphicslayout_itemat_callback;
        if (itemat_cb) {
            int cbval1 = i;

            QGraphicsLayoutItem* callback_ret = itemat_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeAt(int index) override {
        auto removeat_cb = qgraphicslayout_removeat_callback;
        if (removeat_cb) {
            int cbval1 = index;

            removeat_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicslayout_setgeometry_isbase) {
            qgraphicslayout_setgeometry_isbase = false;
            QGraphicsLayout::setGeometry(rect);
            return;
        }
        auto setgeometry_cb = qgraphicslayout_setgeometry_callback;
        if (setgeometry_cb) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);

            setgeometry_cb(this, cbval1);
            return;
        }
        QGraphicsLayout::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicslayout_isempty_isbase) {
            qgraphicslayout_isempty_isbase = false;
            return QGraphicsLayout::isEmpty();
        }
        auto isempty_cb = qgraphicslayout_isempty_callback;
        if (isempty_cb) {
            bool callback_ret = isempty_cb();
            return callback_ret;
        }
        return QGraphicsLayout::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        auto sizehint_cb = qgraphicslayout_sizehint_callback;
        if (sizehint_cb) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);

            QSizeF* callback_ret = sizehint_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayoutItem(QGraphicsLayoutItem* layoutItem) {
        if (qgraphicslayout_addchildlayoutitem_isbase) {
            qgraphicslayout_addchildlayoutitem_isbase = false;
            QGraphicsLayout::addChildLayoutItem(layoutItem);
            return;
        }
        auto addchildlayoutitem_cb = qgraphicslayout_addchildlayoutitem_callback;
        if (addchildlayoutitem_cb) {
            QGraphicsLayoutItem* cbval1 = layoutItem;

            addchildlayoutitem_cb(this, cbval1);
            return;
        }
        QGraphicsLayout::addChildLayoutItem(layoutItem);
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicslayout_setgraphicsitem_isbase) {
            qgraphicslayout_setgraphicsitem_isbase = false;
            QGraphicsLayout::setGraphicsItem(item);
            return;
        }
        auto setgraphicsitem_cb = qgraphicslayout_setgraphicsitem_callback;
        if (setgraphicsitem_cb) {
            QGraphicsItem* cbval1 = item;

            setgraphicsitem_cb(this, cbval1);
            return;
        }
        QGraphicsLayout::setGraphicsItem(item);
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicslayout_setownedbylayout_isbase) {
            qgraphicslayout_setownedbylayout_isbase = false;
            QGraphicsLayout::setOwnedByLayout(ownedByLayout);
            return;
        }
        auto setownedbylayout_cb = qgraphicslayout_setownedbylayout_callback;
        if (setownedbylayout_cb) {
            bool cbval1 = ownedByLayout;

            setownedbylayout_cb(this, cbval1);
            return;
        }
        QGraphicsLayout::setOwnedByLayout(ownedByLayout);
    }

    // Friend functions
    friend QSizeF* QGraphicsLayout_SizeHint(const QGraphicsLayout* self, int which, const QSizeF* constraint);
    friend QSizeF* QGraphicsLayout_SuperSizeHint(const QGraphicsLayout* self, int which, const QSizeF* constraint);
    friend void QGraphicsLayout_AddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem);
    friend void QGraphicsLayout_SuperAddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem);
    friend void QGraphicsLayout_SetGraphicsItem(QGraphicsLayout* self, QGraphicsItem* item);
    friend void QGraphicsLayout_SuperSetGraphicsItem(QGraphicsLayout* self, QGraphicsItem* item);
    friend void QGraphicsLayout_SetOwnedByLayout(QGraphicsLayout* self, bool ownedByLayout);
    friend void QGraphicsLayout_SuperSetOwnedByLayout(QGraphicsLayout* self, bool ownedByLayout);
};

#endif
