#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSANCHORLAYOUT_H
#define SRCC_LIBVIRTUALQGRAPHICSANCHORLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsAnchorLayout so that we can call protected methods
class VirtualQGraphicsAnchorLayout final : public QGraphicsAnchorLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsAnchorLayout = true;

    // Virtual class public types (including callbacks)
    using QGraphicsAnchorLayout_RemoveAt_Callback = void (*)(QGraphicsAnchorLayout*, int);
    using QGraphicsAnchorLayout_SetGeometry_Callback = void (*)(QGraphicsAnchorLayout*, QRectF*);
    using QGraphicsAnchorLayout_Count_Callback = int (*)();
    using QGraphicsAnchorLayout_ItemAt_Callback = QGraphicsLayoutItem* (*)(const QGraphicsAnchorLayout*, int);
    using QGraphicsAnchorLayout_Invalidate_Callback = void (*)();
    using QGraphicsAnchorLayout_SizeHint_Callback = QSizeF* (*)(const QGraphicsAnchorLayout*, int, QSizeF*);
    using QGraphicsAnchorLayout_GetContentsMargins_Callback = void (*)(const QGraphicsAnchorLayout*, double*, double*, double*, double*);
    using QGraphicsAnchorLayout_UpdateGeometry_Callback = void (*)();
    using QGraphicsAnchorLayout_WidgetEvent_Callback = void (*)(QGraphicsAnchorLayout*, QEvent*);
    using QGraphicsAnchorLayout_IsEmpty_Callback = bool (*)();
    using QGraphicsAnchorLayout_AddChildLayoutItem_Callback = void (*)(QGraphicsAnchorLayout*, QGraphicsLayoutItem*);
    using QGraphicsAnchorLayout_SetGraphicsItem_Callback = void (*)(QGraphicsAnchorLayout*, QGraphicsItem*);
    using QGraphicsAnchorLayout_SetOwnedByLayout_Callback = void (*)(QGraphicsAnchorLayout*, bool);

  protected:
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
    QGraphicsAnchorLayout_AddChildLayoutItem_Callback qgraphicsanchorlayout_addchildlayoutitem_callback = nullptr;
    QGraphicsAnchorLayout_SetGraphicsItem_Callback qgraphicsanchorlayout_setgraphicsitem_callback = nullptr;
    QGraphicsAnchorLayout_SetOwnedByLayout_Callback qgraphicsanchorlayout_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsanchorlayout_removeat_isbase = false;
    mutable bool qgraphicsanchorlayout_setgeometry_isbase = false;
    mutable bool qgraphicsanchorlayout_count_isbase = false;
    mutable bool qgraphicsanchorlayout_itemat_isbase = false;
    mutable bool qgraphicsanchorlayout_invalidate_isbase = false;
    mutable bool qgraphicsanchorlayout_sizehint_isbase = false;
    mutable bool qgraphicsanchorlayout_getcontentsmargins_isbase = false;
    mutable bool qgraphicsanchorlayout_updategeometry_isbase = false;
    mutable bool qgraphicsanchorlayout_widgetevent_isbase = false;
    mutable bool qgraphicsanchorlayout_isempty_isbase = false;
    mutable bool qgraphicsanchorlayout_addchildlayoutitem_isbase = false;
    mutable bool qgraphicsanchorlayout_setgraphicsitem_isbase = false;
    mutable bool qgraphicsanchorlayout_setownedbylayout_isbase = false;

  public:
    VirtualQGraphicsAnchorLayout() : QGraphicsAnchorLayout() {};
    VirtualQGraphicsAnchorLayout(QGraphicsLayoutItem* parent) : QGraphicsAnchorLayout(parent) {};

    ~VirtualQGraphicsAnchorLayout() {
        qgraphicsanchorlayout_removeat_callback = nullptr;
        qgraphicsanchorlayout_setgeometry_callback = nullptr;
        qgraphicsanchorlayout_count_callback = nullptr;
        qgraphicsanchorlayout_itemat_callback = nullptr;
        qgraphicsanchorlayout_invalidate_callback = nullptr;
        qgraphicsanchorlayout_sizehint_callback = nullptr;
        qgraphicsanchorlayout_getcontentsmargins_callback = nullptr;
        qgraphicsanchorlayout_updategeometry_callback = nullptr;
        qgraphicsanchorlayout_widgetevent_callback = nullptr;
        qgraphicsanchorlayout_isempty_callback = nullptr;
        qgraphicsanchorlayout_addchildlayoutitem_callback = nullptr;
        qgraphicsanchorlayout_setgraphicsitem_callback = nullptr;
        qgraphicsanchorlayout_setownedbylayout_callback = nullptr;
    }

    // Callback setters
    inline void setQGraphicsAnchorLayout_RemoveAt_Callback(QGraphicsAnchorLayout_RemoveAt_Callback cb) { qgraphicsanchorlayout_removeat_callback = cb; }
    inline void setQGraphicsAnchorLayout_SetGeometry_Callback(QGraphicsAnchorLayout_SetGeometry_Callback cb) { qgraphicsanchorlayout_setgeometry_callback = cb; }
    inline void setQGraphicsAnchorLayout_Count_Callback(QGraphicsAnchorLayout_Count_Callback cb) { qgraphicsanchorlayout_count_callback = cb; }
    inline void setQGraphicsAnchorLayout_ItemAt_Callback(QGraphicsAnchorLayout_ItemAt_Callback cb) { qgraphicsanchorlayout_itemat_callback = cb; }
    inline void setQGraphicsAnchorLayout_Invalidate_Callback(QGraphicsAnchorLayout_Invalidate_Callback cb) { qgraphicsanchorlayout_invalidate_callback = cb; }
    inline void setQGraphicsAnchorLayout_SizeHint_Callback(QGraphicsAnchorLayout_SizeHint_Callback cb) { qgraphicsanchorlayout_sizehint_callback = cb; }
    inline void setQGraphicsAnchorLayout_GetContentsMargins_Callback(QGraphicsAnchorLayout_GetContentsMargins_Callback cb) { qgraphicsanchorlayout_getcontentsmargins_callback = cb; }
    inline void setQGraphicsAnchorLayout_UpdateGeometry_Callback(QGraphicsAnchorLayout_UpdateGeometry_Callback cb) { qgraphicsanchorlayout_updategeometry_callback = cb; }
    inline void setQGraphicsAnchorLayout_WidgetEvent_Callback(QGraphicsAnchorLayout_WidgetEvent_Callback cb) { qgraphicsanchorlayout_widgetevent_callback = cb; }
    inline void setQGraphicsAnchorLayout_IsEmpty_Callback(QGraphicsAnchorLayout_IsEmpty_Callback cb) { qgraphicsanchorlayout_isempty_callback = cb; }
    inline void setQGraphicsAnchorLayout_AddChildLayoutItem_Callback(QGraphicsAnchorLayout_AddChildLayoutItem_Callback cb) { qgraphicsanchorlayout_addchildlayoutitem_callback = cb; }
    inline void setQGraphicsAnchorLayout_SetGraphicsItem_Callback(QGraphicsAnchorLayout_SetGraphicsItem_Callback cb) { qgraphicsanchorlayout_setgraphicsitem_callback = cb; }
    inline void setQGraphicsAnchorLayout_SetOwnedByLayout_Callback(QGraphicsAnchorLayout_SetOwnedByLayout_Callback cb) { qgraphicsanchorlayout_setownedbylayout_callback = cb; }

    // Base flag setters
    inline void setQGraphicsAnchorLayout_RemoveAt_IsBase(bool value) const { qgraphicsanchorlayout_removeat_isbase = value; }
    inline void setQGraphicsAnchorLayout_SetGeometry_IsBase(bool value) const { qgraphicsanchorlayout_setgeometry_isbase = value; }
    inline void setQGraphicsAnchorLayout_Count_IsBase(bool value) const { qgraphicsanchorlayout_count_isbase = value; }
    inline void setQGraphicsAnchorLayout_ItemAt_IsBase(bool value) const { qgraphicsanchorlayout_itemat_isbase = value; }
    inline void setQGraphicsAnchorLayout_Invalidate_IsBase(bool value) const { qgraphicsanchorlayout_invalidate_isbase = value; }
    inline void setQGraphicsAnchorLayout_SizeHint_IsBase(bool value) const { qgraphicsanchorlayout_sizehint_isbase = value; }
    inline void setQGraphicsAnchorLayout_GetContentsMargins_IsBase(bool value) const { qgraphicsanchorlayout_getcontentsmargins_isbase = value; }
    inline void setQGraphicsAnchorLayout_UpdateGeometry_IsBase(bool value) const { qgraphicsanchorlayout_updategeometry_isbase = value; }
    inline void setQGraphicsAnchorLayout_WidgetEvent_IsBase(bool value) const { qgraphicsanchorlayout_widgetevent_isbase = value; }
    inline void setQGraphicsAnchorLayout_IsEmpty_IsBase(bool value) const { qgraphicsanchorlayout_isempty_isbase = value; }
    inline void setQGraphicsAnchorLayout_AddChildLayoutItem_IsBase(bool value) const { qgraphicsanchorlayout_addchildlayoutitem_isbase = value; }
    inline void setQGraphicsAnchorLayout_SetGraphicsItem_IsBase(bool value) const { qgraphicsanchorlayout_setgraphicsitem_isbase = value; }
    inline void setQGraphicsAnchorLayout_SetOwnedByLayout_IsBase(bool value) const { qgraphicsanchorlayout_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void removeAt(int index) override {
        if (qgraphicsanchorlayout_removeat_isbase) {
            qgraphicsanchorlayout_removeat_isbase = false;
            QGraphicsAnchorLayout::removeAt(index);
        } else if (qgraphicsanchorlayout_removeat_callback != nullptr) {
            int cbval1 = index;

            qgraphicsanchorlayout_removeat_callback(this, cbval1);
        } else {
            QGraphicsAnchorLayout::removeAt(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicsanchorlayout_setgeometry_isbase) {
            qgraphicsanchorlayout_setgeometry_isbase = false;
            QGraphicsAnchorLayout::setGeometry(rect);
        } else if (qgraphicsanchorlayout_setgeometry_callback != nullptr) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);

            qgraphicsanchorlayout_setgeometry_callback(this, cbval1);
        } else {
            QGraphicsAnchorLayout::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qgraphicsanchorlayout_count_isbase) {
            qgraphicsanchorlayout_count_isbase = false;
            return QGraphicsAnchorLayout::count();
        } else if (qgraphicsanchorlayout_count_callback != nullptr) {
            int callback_ret = qgraphicsanchorlayout_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsAnchorLayout::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGraphicsLayoutItem* itemAt(int index) const override {
        if (qgraphicsanchorlayout_itemat_isbase) {
            qgraphicsanchorlayout_itemat_isbase = false;
            return QGraphicsAnchorLayout::itemAt(index);
        } else if (qgraphicsanchorlayout_itemat_callback != nullptr) {
            int cbval1 = index;

            QGraphicsLayoutItem* callback_ret = qgraphicsanchorlayout_itemat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsAnchorLayout::itemAt(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgraphicsanchorlayout_invalidate_isbase) {
            qgraphicsanchorlayout_invalidate_isbase = false;
            QGraphicsAnchorLayout::invalidate();
        } else if (qgraphicsanchorlayout_invalidate_callback != nullptr) {
            qgraphicsanchorlayout_invalidate_callback();
        } else {
            QGraphicsAnchorLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicsanchorlayout_sizehint_isbase) {
            qgraphicsanchorlayout_sizehint_isbase = false;
            return QGraphicsAnchorLayout::sizeHint(which, constraint);
        } else if (qgraphicsanchorlayout_sizehint_callback != nullptr) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);

            QSizeF* callback_ret = qgraphicsanchorlayout_sizehint_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QGraphicsAnchorLayout::sizeHint(which, constraint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicsanchorlayout_getcontentsmargins_isbase) {
            qgraphicsanchorlayout_getcontentsmargins_isbase = false;
            QGraphicsAnchorLayout::getContentsMargins(left, top, right, bottom);
        } else if (qgraphicsanchorlayout_getcontentsmargins_callback != nullptr) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);

            qgraphicsanchorlayout_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QGraphicsAnchorLayout::getContentsMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicsanchorlayout_updategeometry_isbase) {
            qgraphicsanchorlayout_updategeometry_isbase = false;
            QGraphicsAnchorLayout::updateGeometry();
        } else if (qgraphicsanchorlayout_updategeometry_callback != nullptr) {
            qgraphicsanchorlayout_updategeometry_callback();
        } else {
            QGraphicsAnchorLayout::updateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void widgetEvent(QEvent* e) override {
        if (qgraphicsanchorlayout_widgetevent_isbase) {
            qgraphicsanchorlayout_widgetevent_isbase = false;
            QGraphicsAnchorLayout::widgetEvent(e);
        } else if (qgraphicsanchorlayout_widgetevent_callback != nullptr) {
            QEvent* cbval1 = e;

            qgraphicsanchorlayout_widgetevent_callback(this, cbval1);
        } else {
            QGraphicsAnchorLayout::widgetEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicsanchorlayout_isempty_isbase) {
            qgraphicsanchorlayout_isempty_isbase = false;
            return QGraphicsAnchorLayout::isEmpty();
        } else if (qgraphicsanchorlayout_isempty_callback != nullptr) {
            bool callback_ret = qgraphicsanchorlayout_isempty_callback();
            return callback_ret;
        } else {
            return QGraphicsAnchorLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayoutItem(QGraphicsLayoutItem* layoutItem) {
        if (qgraphicsanchorlayout_addchildlayoutitem_isbase) {
            qgraphicsanchorlayout_addchildlayoutitem_isbase = false;
            QGraphicsAnchorLayout::addChildLayoutItem(layoutItem);
        } else if (qgraphicsanchorlayout_addchildlayoutitem_callback != nullptr) {
            QGraphicsLayoutItem* cbval1 = layoutItem;

            qgraphicsanchorlayout_addchildlayoutitem_callback(this, cbval1);
        } else {
            QGraphicsAnchorLayout::addChildLayoutItem(layoutItem);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicsanchorlayout_setgraphicsitem_isbase) {
            qgraphicsanchorlayout_setgraphicsitem_isbase = false;
            QGraphicsAnchorLayout::setGraphicsItem(item);
        } else if (qgraphicsanchorlayout_setgraphicsitem_callback != nullptr) {
            QGraphicsItem* cbval1 = item;

            qgraphicsanchorlayout_setgraphicsitem_callback(this, cbval1);
        } else {
            QGraphicsAnchorLayout::setGraphicsItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicsanchorlayout_setownedbylayout_isbase) {
            qgraphicsanchorlayout_setownedbylayout_isbase = false;
            QGraphicsAnchorLayout::setOwnedByLayout(ownedByLayout);
        } else if (qgraphicsanchorlayout_setownedbylayout_callback != nullptr) {
            bool cbval1 = ownedByLayout;

            qgraphicsanchorlayout_setownedbylayout_callback(this, cbval1);
        } else {
            QGraphicsAnchorLayout::setOwnedByLayout(ownedByLayout);
        }
    }

    // Friend functions
    friend QSizeF* QGraphicsAnchorLayout_SizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint);
    friend QSizeF* QGraphicsAnchorLayout_QBaseSizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint);
    friend void QGraphicsAnchorLayout_AddChildLayoutItem(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem);
    friend void QGraphicsAnchorLayout_QBaseAddChildLayoutItem(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem);
    friend void QGraphicsAnchorLayout_SetGraphicsItem(QGraphicsAnchorLayout* self, QGraphicsItem* item);
    friend void QGraphicsAnchorLayout_QBaseSetGraphicsItem(QGraphicsAnchorLayout* self, QGraphicsItem* item);
    friend void QGraphicsAnchorLayout_SetOwnedByLayout(QGraphicsAnchorLayout* self, bool ownedByLayout);
    friend void QGraphicsAnchorLayout_QBaseSetOwnedByLayout(QGraphicsAnchorLayout* self, bool ownedByLayout);
};

#endif
