#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSGRIDLAYOUT_H
#define SRCC_LIBVIRTUALQGRAPHICSGRIDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsGridLayout so that we can call protected methods
class VirtualQGraphicsGridLayout final : public QGraphicsGridLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsGridLayout = true;

    // Virtual class public types (including callbacks)
    using QGraphicsGridLayout_Count_Callback = int (*)();
    using QGraphicsGridLayout_ItemAtWithIndex_Callback = QGraphicsLayoutItem* (*)(const QGraphicsGridLayout*, int);
    using QGraphicsGridLayout_RemoveAt_Callback = void (*)(QGraphicsGridLayout*, int);
    using QGraphicsGridLayout_Invalidate_Callback = void (*)();
    using QGraphicsGridLayout_SetGeometry_Callback = void (*)(QGraphicsGridLayout*, QRectF*);
    using QGraphicsGridLayout_SizeHint_Callback = QSizeF* (*)(const QGraphicsGridLayout*, int, QSizeF*);
    using QGraphicsGridLayout_GetContentsMargins_Callback = void (*)(const QGraphicsGridLayout*, double*, double*, double*, double*);
    using QGraphicsGridLayout_UpdateGeometry_Callback = void (*)();
    using QGraphicsGridLayout_WidgetEvent_Callback = void (*)(QGraphicsGridLayout*, QEvent*);
    using QGraphicsGridLayout_IsEmpty_Callback = bool (*)();
    using QGraphicsGridLayout_AddChildLayoutItem_Callback = void (*)(QGraphicsGridLayout*, QGraphicsLayoutItem*);
    using QGraphicsGridLayout_SetGraphicsItem_Callback = void (*)(QGraphicsGridLayout*, QGraphicsItem*);
    using QGraphicsGridLayout_SetOwnedByLayout_Callback = void (*)(QGraphicsGridLayout*, bool);

  protected:
    // Instance callback storage
    QGraphicsGridLayout_Count_Callback qgraphicsgridlayout_count_callback = nullptr;
    QGraphicsGridLayout_ItemAtWithIndex_Callback qgraphicsgridlayout_itematwithindex_callback = nullptr;
    QGraphicsGridLayout_RemoveAt_Callback qgraphicsgridlayout_removeat_callback = nullptr;
    QGraphicsGridLayout_Invalidate_Callback qgraphicsgridlayout_invalidate_callback = nullptr;
    QGraphicsGridLayout_SetGeometry_Callback qgraphicsgridlayout_setgeometry_callback = nullptr;
    QGraphicsGridLayout_SizeHint_Callback qgraphicsgridlayout_sizehint_callback = nullptr;
    QGraphicsGridLayout_GetContentsMargins_Callback qgraphicsgridlayout_getcontentsmargins_callback = nullptr;
    QGraphicsGridLayout_UpdateGeometry_Callback qgraphicsgridlayout_updategeometry_callback = nullptr;
    QGraphicsGridLayout_WidgetEvent_Callback qgraphicsgridlayout_widgetevent_callback = nullptr;
    QGraphicsGridLayout_IsEmpty_Callback qgraphicsgridlayout_isempty_callback = nullptr;
    QGraphicsGridLayout_AddChildLayoutItem_Callback qgraphicsgridlayout_addchildlayoutitem_callback = nullptr;
    QGraphicsGridLayout_SetGraphicsItem_Callback qgraphicsgridlayout_setgraphicsitem_callback = nullptr;
    QGraphicsGridLayout_SetOwnedByLayout_Callback qgraphicsgridlayout_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsgridlayout_count_isbase = false;
    mutable bool qgraphicsgridlayout_itematwithindex_isbase = false;
    mutable bool qgraphicsgridlayout_removeat_isbase = false;
    mutable bool qgraphicsgridlayout_invalidate_isbase = false;
    mutable bool qgraphicsgridlayout_setgeometry_isbase = false;
    mutable bool qgraphicsgridlayout_sizehint_isbase = false;
    mutable bool qgraphicsgridlayout_getcontentsmargins_isbase = false;
    mutable bool qgraphicsgridlayout_updategeometry_isbase = false;
    mutable bool qgraphicsgridlayout_widgetevent_isbase = false;
    mutable bool qgraphicsgridlayout_isempty_isbase = false;
    mutable bool qgraphicsgridlayout_addchildlayoutitem_isbase = false;
    mutable bool qgraphicsgridlayout_setgraphicsitem_isbase = false;
    mutable bool qgraphicsgridlayout_setownedbylayout_isbase = false;

  public:
    VirtualQGraphicsGridLayout() : QGraphicsGridLayout(){};
    VirtualQGraphicsGridLayout(QGraphicsLayoutItem* parent) : QGraphicsGridLayout(parent){};

    ~VirtualQGraphicsGridLayout() {
        qgraphicsgridlayout_count_callback = nullptr;
        qgraphicsgridlayout_itematwithindex_callback = nullptr;
        qgraphicsgridlayout_removeat_callback = nullptr;
        qgraphicsgridlayout_invalidate_callback = nullptr;
        qgraphicsgridlayout_setgeometry_callback = nullptr;
        qgraphicsgridlayout_sizehint_callback = nullptr;
        qgraphicsgridlayout_getcontentsmargins_callback = nullptr;
        qgraphicsgridlayout_updategeometry_callback = nullptr;
        qgraphicsgridlayout_widgetevent_callback = nullptr;
        qgraphicsgridlayout_isempty_callback = nullptr;
        qgraphicsgridlayout_addchildlayoutitem_callback = nullptr;
        qgraphicsgridlayout_setgraphicsitem_callback = nullptr;
        qgraphicsgridlayout_setownedbylayout_callback = nullptr;
    }

    // Callback setters
    inline void setQGraphicsGridLayout_Count_Callback(QGraphicsGridLayout_Count_Callback cb) { qgraphicsgridlayout_count_callback = cb; }
    inline void setQGraphicsGridLayout_ItemAtWithIndex_Callback(QGraphicsGridLayout_ItemAtWithIndex_Callback cb) { qgraphicsgridlayout_itematwithindex_callback = cb; }
    inline void setQGraphicsGridLayout_RemoveAt_Callback(QGraphicsGridLayout_RemoveAt_Callback cb) { qgraphicsgridlayout_removeat_callback = cb; }
    inline void setQGraphicsGridLayout_Invalidate_Callback(QGraphicsGridLayout_Invalidate_Callback cb) { qgraphicsgridlayout_invalidate_callback = cb; }
    inline void setQGraphicsGridLayout_SetGeometry_Callback(QGraphicsGridLayout_SetGeometry_Callback cb) { qgraphicsgridlayout_setgeometry_callback = cb; }
    inline void setQGraphicsGridLayout_SizeHint_Callback(QGraphicsGridLayout_SizeHint_Callback cb) { qgraphicsgridlayout_sizehint_callback = cb; }
    inline void setQGraphicsGridLayout_GetContentsMargins_Callback(QGraphicsGridLayout_GetContentsMargins_Callback cb) { qgraphicsgridlayout_getcontentsmargins_callback = cb; }
    inline void setQGraphicsGridLayout_UpdateGeometry_Callback(QGraphicsGridLayout_UpdateGeometry_Callback cb) { qgraphicsgridlayout_updategeometry_callback = cb; }
    inline void setQGraphicsGridLayout_WidgetEvent_Callback(QGraphicsGridLayout_WidgetEvent_Callback cb) { qgraphicsgridlayout_widgetevent_callback = cb; }
    inline void setQGraphicsGridLayout_IsEmpty_Callback(QGraphicsGridLayout_IsEmpty_Callback cb) { qgraphicsgridlayout_isempty_callback = cb; }
    inline void setQGraphicsGridLayout_AddChildLayoutItem_Callback(QGraphicsGridLayout_AddChildLayoutItem_Callback cb) { qgraphicsgridlayout_addchildlayoutitem_callback = cb; }
    inline void setQGraphicsGridLayout_SetGraphicsItem_Callback(QGraphicsGridLayout_SetGraphicsItem_Callback cb) { qgraphicsgridlayout_setgraphicsitem_callback = cb; }
    inline void setQGraphicsGridLayout_SetOwnedByLayout_Callback(QGraphicsGridLayout_SetOwnedByLayout_Callback cb) { qgraphicsgridlayout_setownedbylayout_callback = cb; }

    // Base flag setters
    inline void setQGraphicsGridLayout_Count_IsBase(bool value) const { qgraphicsgridlayout_count_isbase = value; }
    inline void setQGraphicsGridLayout_ItemAtWithIndex_IsBase(bool value) const { qgraphicsgridlayout_itematwithindex_isbase = value; }
    inline void setQGraphicsGridLayout_RemoveAt_IsBase(bool value) const { qgraphicsgridlayout_removeat_isbase = value; }
    inline void setQGraphicsGridLayout_Invalidate_IsBase(bool value) const { qgraphicsgridlayout_invalidate_isbase = value; }
    inline void setQGraphicsGridLayout_SetGeometry_IsBase(bool value) const { qgraphicsgridlayout_setgeometry_isbase = value; }
    inline void setQGraphicsGridLayout_SizeHint_IsBase(bool value) const { qgraphicsgridlayout_sizehint_isbase = value; }
    inline void setQGraphicsGridLayout_GetContentsMargins_IsBase(bool value) const { qgraphicsgridlayout_getcontentsmargins_isbase = value; }
    inline void setQGraphicsGridLayout_UpdateGeometry_IsBase(bool value) const { qgraphicsgridlayout_updategeometry_isbase = value; }
    inline void setQGraphicsGridLayout_WidgetEvent_IsBase(bool value) const { qgraphicsgridlayout_widgetevent_isbase = value; }
    inline void setQGraphicsGridLayout_IsEmpty_IsBase(bool value) const { qgraphicsgridlayout_isempty_isbase = value; }
    inline void setQGraphicsGridLayout_AddChildLayoutItem_IsBase(bool value) const { qgraphicsgridlayout_addchildlayoutitem_isbase = value; }
    inline void setQGraphicsGridLayout_SetGraphicsItem_IsBase(bool value) const { qgraphicsgridlayout_setgraphicsitem_isbase = value; }
    inline void setQGraphicsGridLayout_SetOwnedByLayout_IsBase(bool value) const { qgraphicsgridlayout_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qgraphicsgridlayout_count_isbase) {
            qgraphicsgridlayout_count_isbase = false;
            return QGraphicsGridLayout::count();
        } else if (qgraphicsgridlayout_count_callback != nullptr) {
            int callback_ret = qgraphicsgridlayout_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsGridLayout::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGraphicsLayoutItem* itemAt(int index) const override {
        if (qgraphicsgridlayout_itematwithindex_isbase) {
            qgraphicsgridlayout_itematwithindex_isbase = false;
            return QGraphicsGridLayout::itemAt(index);
        } else if (qgraphicsgridlayout_itematwithindex_callback != nullptr) {
            int cbval1 = index;

            QGraphicsLayoutItem* callback_ret = qgraphicsgridlayout_itematwithindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsGridLayout::itemAt(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeAt(int index) override {
        if (qgraphicsgridlayout_removeat_isbase) {
            qgraphicsgridlayout_removeat_isbase = false;
            QGraphicsGridLayout::removeAt(index);
        } else if (qgraphicsgridlayout_removeat_callback != nullptr) {
            int cbval1 = index;

            qgraphicsgridlayout_removeat_callback(this, cbval1);
        } else {
            QGraphicsGridLayout::removeAt(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgraphicsgridlayout_invalidate_isbase) {
            qgraphicsgridlayout_invalidate_isbase = false;
            QGraphicsGridLayout::invalidate();
        } else if (qgraphicsgridlayout_invalidate_callback != nullptr) {
            qgraphicsgridlayout_invalidate_callback();
        } else {
            QGraphicsGridLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicsgridlayout_setgeometry_isbase) {
            qgraphicsgridlayout_setgeometry_isbase = false;
            QGraphicsGridLayout::setGeometry(rect);
        } else if (qgraphicsgridlayout_setgeometry_callback != nullptr) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);

            qgraphicsgridlayout_setgeometry_callback(this, cbval1);
        } else {
            QGraphicsGridLayout::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicsgridlayout_sizehint_isbase) {
            qgraphicsgridlayout_sizehint_isbase = false;
            return QGraphicsGridLayout::sizeHint(which, constraint);
        } else if (qgraphicsgridlayout_sizehint_callback != nullptr) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);

            QSizeF* callback_ret = qgraphicsgridlayout_sizehint_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QGraphicsGridLayout::sizeHint(which, constraint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicsgridlayout_getcontentsmargins_isbase) {
            qgraphicsgridlayout_getcontentsmargins_isbase = false;
            QGraphicsGridLayout::getContentsMargins(left, top, right, bottom);
        } else if (qgraphicsgridlayout_getcontentsmargins_callback != nullptr) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);

            qgraphicsgridlayout_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QGraphicsGridLayout::getContentsMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicsgridlayout_updategeometry_isbase) {
            qgraphicsgridlayout_updategeometry_isbase = false;
            QGraphicsGridLayout::updateGeometry();
        } else if (qgraphicsgridlayout_updategeometry_callback != nullptr) {
            qgraphicsgridlayout_updategeometry_callback();
        } else {
            QGraphicsGridLayout::updateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void widgetEvent(QEvent* e) override {
        if (qgraphicsgridlayout_widgetevent_isbase) {
            qgraphicsgridlayout_widgetevent_isbase = false;
            QGraphicsGridLayout::widgetEvent(e);
        } else if (qgraphicsgridlayout_widgetevent_callback != nullptr) {
            QEvent* cbval1 = e;

            qgraphicsgridlayout_widgetevent_callback(this, cbval1);
        } else {
            QGraphicsGridLayout::widgetEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicsgridlayout_isempty_isbase) {
            qgraphicsgridlayout_isempty_isbase = false;
            return QGraphicsGridLayout::isEmpty();
        } else if (qgraphicsgridlayout_isempty_callback != nullptr) {
            bool callback_ret = qgraphicsgridlayout_isempty_callback();
            return callback_ret;
        } else {
            return QGraphicsGridLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayoutItem(QGraphicsLayoutItem* layoutItem) {
        if (qgraphicsgridlayout_addchildlayoutitem_isbase) {
            qgraphicsgridlayout_addchildlayoutitem_isbase = false;
            QGraphicsGridLayout::addChildLayoutItem(layoutItem);
        } else if (qgraphicsgridlayout_addchildlayoutitem_callback != nullptr) {
            QGraphicsLayoutItem* cbval1 = layoutItem;

            qgraphicsgridlayout_addchildlayoutitem_callback(this, cbval1);
        } else {
            QGraphicsGridLayout::addChildLayoutItem(layoutItem);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicsgridlayout_setgraphicsitem_isbase) {
            qgraphicsgridlayout_setgraphicsitem_isbase = false;
            QGraphicsGridLayout::setGraphicsItem(item);
        } else if (qgraphicsgridlayout_setgraphicsitem_callback != nullptr) {
            QGraphicsItem* cbval1 = item;

            qgraphicsgridlayout_setgraphicsitem_callback(this, cbval1);
        } else {
            QGraphicsGridLayout::setGraphicsItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicsgridlayout_setownedbylayout_isbase) {
            qgraphicsgridlayout_setownedbylayout_isbase = false;
            QGraphicsGridLayout::setOwnedByLayout(ownedByLayout);
        } else if (qgraphicsgridlayout_setownedbylayout_callback != nullptr) {
            bool cbval1 = ownedByLayout;

            qgraphicsgridlayout_setownedbylayout_callback(this, cbval1);
        } else {
            QGraphicsGridLayout::setOwnedByLayout(ownedByLayout);
        }
    }

    // Friend functions
    friend void QGraphicsGridLayout_AddChildLayoutItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* layoutItem);
    friend void QGraphicsGridLayout_QBaseAddChildLayoutItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* layoutItem);
    friend void QGraphicsGridLayout_SetGraphicsItem(QGraphicsGridLayout* self, QGraphicsItem* item);
    friend void QGraphicsGridLayout_QBaseSetGraphicsItem(QGraphicsGridLayout* self, QGraphicsItem* item);
    friend void QGraphicsGridLayout_SetOwnedByLayout(QGraphicsGridLayout* self, bool ownedByLayout);
    friend void QGraphicsGridLayout_QBaseSetOwnedByLayout(QGraphicsGridLayout* self, bool ownedByLayout);
};

#endif
