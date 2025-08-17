#pragma once
#ifndef SRCC_LIBVIRTUALQLAYOUTITEM_H
#define SRCC_LIBVIRTUALQLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLayoutItem so that we can call protected methods
class VirtualQLayoutItem final : public QLayoutItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQLayoutItem = true;

    // Virtual class public types (including callbacks)
    using QLayoutItem_SizeHint_Callback = QSize* (*)();
    using QLayoutItem_MinimumSize_Callback = QSize* (*)();
    using QLayoutItem_MaximumSize_Callback = QSize* (*)();
    using QLayoutItem_ExpandingDirections_Callback = int (*)();
    using QLayoutItem_SetGeometry_Callback = void (*)(QLayoutItem*, QRect*);
    using QLayoutItem_Geometry_Callback = QRect* (*)();
    using QLayoutItem_IsEmpty_Callback = bool (*)();
    using QLayoutItem_HasHeightForWidth_Callback = bool (*)();
    using QLayoutItem_HeightForWidth_Callback = int (*)(const QLayoutItem*, int);
    using QLayoutItem_MinimumHeightForWidth_Callback = int (*)(const QLayoutItem*, int);
    using QLayoutItem_Invalidate_Callback = void (*)();
    using QLayoutItem_Widget_Callback = QWidget* (*)();
    using QLayoutItem_Layout_Callback = QLayout* (*)();
    using QLayoutItem_SpacerItem_Callback = QSpacerItem* (*)();
    using QLayoutItem_ControlTypes_Callback = int (*)();
    using QLayoutItem_OperatorAssign_Callback = void (*)(QLayoutItem*, QLayoutItem*);

  protected:
    // Instance callback storage
    QLayoutItem_SizeHint_Callback qlayoutitem_sizehint_callback = nullptr;
    QLayoutItem_MinimumSize_Callback qlayoutitem_minimumsize_callback = nullptr;
    QLayoutItem_MaximumSize_Callback qlayoutitem_maximumsize_callback = nullptr;
    QLayoutItem_ExpandingDirections_Callback qlayoutitem_expandingdirections_callback = nullptr;
    QLayoutItem_SetGeometry_Callback qlayoutitem_setgeometry_callback = nullptr;
    QLayoutItem_Geometry_Callback qlayoutitem_geometry_callback = nullptr;
    QLayoutItem_IsEmpty_Callback qlayoutitem_isempty_callback = nullptr;
    QLayoutItem_HasHeightForWidth_Callback qlayoutitem_hasheightforwidth_callback = nullptr;
    QLayoutItem_HeightForWidth_Callback qlayoutitem_heightforwidth_callback = nullptr;
    QLayoutItem_MinimumHeightForWidth_Callback qlayoutitem_minimumheightforwidth_callback = nullptr;
    QLayoutItem_Invalidate_Callback qlayoutitem_invalidate_callback = nullptr;
    QLayoutItem_Widget_Callback qlayoutitem_widget_callback = nullptr;
    QLayoutItem_Layout_Callback qlayoutitem_layout_callback = nullptr;
    QLayoutItem_SpacerItem_Callback qlayoutitem_spaceritem_callback = nullptr;
    QLayoutItem_ControlTypes_Callback qlayoutitem_controltypes_callback = nullptr;
    QLayoutItem_OperatorAssign_Callback qlayoutitem_operatorassign_callback = nullptr;

    // Instance base flags
    mutable bool qlayoutitem_sizehint_isbase = false;
    mutable bool qlayoutitem_minimumsize_isbase = false;
    mutable bool qlayoutitem_maximumsize_isbase = false;
    mutable bool qlayoutitem_expandingdirections_isbase = false;
    mutable bool qlayoutitem_setgeometry_isbase = false;
    mutable bool qlayoutitem_geometry_isbase = false;
    mutable bool qlayoutitem_isempty_isbase = false;
    mutable bool qlayoutitem_hasheightforwidth_isbase = false;
    mutable bool qlayoutitem_heightforwidth_isbase = false;
    mutable bool qlayoutitem_minimumheightforwidth_isbase = false;
    mutable bool qlayoutitem_invalidate_isbase = false;
    mutable bool qlayoutitem_widget_isbase = false;
    mutable bool qlayoutitem_layout_isbase = false;
    mutable bool qlayoutitem_spaceritem_isbase = false;
    mutable bool qlayoutitem_controltypes_isbase = false;
    mutable bool qlayoutitem_operatorassign_isbase = false;

  public:
    VirtualQLayoutItem() : QLayoutItem() {};
    VirtualQLayoutItem(const QLayoutItem& param1) : QLayoutItem(param1) {};
    VirtualQLayoutItem(Qt::Alignment alignment) : QLayoutItem(alignment) {};

    ~VirtualQLayoutItem() {
        qlayoutitem_sizehint_callback = nullptr;
        qlayoutitem_minimumsize_callback = nullptr;
        qlayoutitem_maximumsize_callback = nullptr;
        qlayoutitem_expandingdirections_callback = nullptr;
        qlayoutitem_setgeometry_callback = nullptr;
        qlayoutitem_geometry_callback = nullptr;
        qlayoutitem_isempty_callback = nullptr;
        qlayoutitem_hasheightforwidth_callback = nullptr;
        qlayoutitem_heightforwidth_callback = nullptr;
        qlayoutitem_minimumheightforwidth_callback = nullptr;
        qlayoutitem_invalidate_callback = nullptr;
        qlayoutitem_widget_callback = nullptr;
        qlayoutitem_layout_callback = nullptr;
        qlayoutitem_spaceritem_callback = nullptr;
        qlayoutitem_controltypes_callback = nullptr;
        qlayoutitem_operatorassign_callback = nullptr;
    }

    // Callback setters
    inline void setQLayoutItem_SizeHint_Callback(QLayoutItem_SizeHint_Callback cb) { qlayoutitem_sizehint_callback = cb; }
    inline void setQLayoutItem_MinimumSize_Callback(QLayoutItem_MinimumSize_Callback cb) { qlayoutitem_minimumsize_callback = cb; }
    inline void setQLayoutItem_MaximumSize_Callback(QLayoutItem_MaximumSize_Callback cb) { qlayoutitem_maximumsize_callback = cb; }
    inline void setQLayoutItem_ExpandingDirections_Callback(QLayoutItem_ExpandingDirections_Callback cb) { qlayoutitem_expandingdirections_callback = cb; }
    inline void setQLayoutItem_SetGeometry_Callback(QLayoutItem_SetGeometry_Callback cb) { qlayoutitem_setgeometry_callback = cb; }
    inline void setQLayoutItem_Geometry_Callback(QLayoutItem_Geometry_Callback cb) { qlayoutitem_geometry_callback = cb; }
    inline void setQLayoutItem_IsEmpty_Callback(QLayoutItem_IsEmpty_Callback cb) { qlayoutitem_isempty_callback = cb; }
    inline void setQLayoutItem_HasHeightForWidth_Callback(QLayoutItem_HasHeightForWidth_Callback cb) { qlayoutitem_hasheightforwidth_callback = cb; }
    inline void setQLayoutItem_HeightForWidth_Callback(QLayoutItem_HeightForWidth_Callback cb) { qlayoutitem_heightforwidth_callback = cb; }
    inline void setQLayoutItem_MinimumHeightForWidth_Callback(QLayoutItem_MinimumHeightForWidth_Callback cb) { qlayoutitem_minimumheightforwidth_callback = cb; }
    inline void setQLayoutItem_Invalidate_Callback(QLayoutItem_Invalidate_Callback cb) { qlayoutitem_invalidate_callback = cb; }
    inline void setQLayoutItem_Widget_Callback(QLayoutItem_Widget_Callback cb) { qlayoutitem_widget_callback = cb; }
    inline void setQLayoutItem_Layout_Callback(QLayoutItem_Layout_Callback cb) { qlayoutitem_layout_callback = cb; }
    inline void setQLayoutItem_SpacerItem_Callback(QLayoutItem_SpacerItem_Callback cb) { qlayoutitem_spaceritem_callback = cb; }
    inline void setQLayoutItem_ControlTypes_Callback(QLayoutItem_ControlTypes_Callback cb) { qlayoutitem_controltypes_callback = cb; }
    inline void setQLayoutItem_OperatorAssign_Callback(QLayoutItem_OperatorAssign_Callback cb) { qlayoutitem_operatorassign_callback = cb; }

    // Base flag setters
    inline void setQLayoutItem_SizeHint_IsBase(bool value) const { qlayoutitem_sizehint_isbase = value; }
    inline void setQLayoutItem_MinimumSize_IsBase(bool value) const { qlayoutitem_minimumsize_isbase = value; }
    inline void setQLayoutItem_MaximumSize_IsBase(bool value) const { qlayoutitem_maximumsize_isbase = value; }
    inline void setQLayoutItem_ExpandingDirections_IsBase(bool value) const { qlayoutitem_expandingdirections_isbase = value; }
    inline void setQLayoutItem_SetGeometry_IsBase(bool value) const { qlayoutitem_setgeometry_isbase = value; }
    inline void setQLayoutItem_Geometry_IsBase(bool value) const { qlayoutitem_geometry_isbase = value; }
    inline void setQLayoutItem_IsEmpty_IsBase(bool value) const { qlayoutitem_isempty_isbase = value; }
    inline void setQLayoutItem_HasHeightForWidth_IsBase(bool value) const { qlayoutitem_hasheightforwidth_isbase = value; }
    inline void setQLayoutItem_HeightForWidth_IsBase(bool value) const { qlayoutitem_heightforwidth_isbase = value; }
    inline void setQLayoutItem_MinimumHeightForWidth_IsBase(bool value) const { qlayoutitem_minimumheightforwidth_isbase = value; }
    inline void setQLayoutItem_Invalidate_IsBase(bool value) const { qlayoutitem_invalidate_isbase = value; }
    inline void setQLayoutItem_Widget_IsBase(bool value) const { qlayoutitem_widget_isbase = value; }
    inline void setQLayoutItem_Layout_IsBase(bool value) const { qlayoutitem_layout_isbase = value; }
    inline void setQLayoutItem_SpacerItem_IsBase(bool value) const { qlayoutitem_spaceritem_isbase = value; }
    inline void setQLayoutItem_ControlTypes_IsBase(bool value) const { qlayoutitem_controltypes_isbase = value; }
    inline void setQLayoutItem_OperatorAssign_IsBase(bool value) const { qlayoutitem_operatorassign_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlayoutitem_sizehint_callback != nullptr) {
            QSize* callback_ret = qlayoutitem_sizehint_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qlayoutitem_minimumsize_callback != nullptr) {
            QSize* callback_ret = qlayoutitem_minimumsize_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qlayoutitem_maximumsize_callback != nullptr) {
            QSize* callback_ret = qlayoutitem_maximumsize_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qlayoutitem_expandingdirections_callback != nullptr) {
            int callback_ret = qlayoutitem_expandingdirections_callback();
            return static_cast<Qt::Orientations>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qlayoutitem_setgeometry_callback != nullptr) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);

            qlayoutitem_setgeometry_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qlayoutitem_geometry_callback != nullptr) {
            QRect* callback_ret = qlayoutitem_geometry_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qlayoutitem_isempty_callback != nullptr) {
            bool callback_ret = qlayoutitem_isempty_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlayoutitem_hasheightforwidth_isbase) {
            qlayoutitem_hasheightforwidth_isbase = false;
            return QLayoutItem::hasHeightForWidth();
        } else if (qlayoutitem_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qlayoutitem_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QLayoutItem::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlayoutitem_heightforwidth_isbase) {
            qlayoutitem_heightforwidth_isbase = false;
            return QLayoutItem::heightForWidth(param1);
        } else if (qlayoutitem_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qlayoutitem_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLayoutItem::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qlayoutitem_minimumheightforwidth_isbase) {
            qlayoutitem_minimumheightforwidth_isbase = false;
            return QLayoutItem::minimumHeightForWidth(param1);
        } else if (qlayoutitem_minimumheightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qlayoutitem_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLayoutItem::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qlayoutitem_invalidate_isbase) {
            qlayoutitem_invalidate_isbase = false;
            QLayoutItem::invalidate();
        } else if (qlayoutitem_invalidate_callback != nullptr) {
            qlayoutitem_invalidate_callback();
        } else {
            QLayoutItem::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qlayoutitem_widget_isbase) {
            qlayoutitem_widget_isbase = false;
            return QLayoutItem::widget();
        } else if (qlayoutitem_widget_callback != nullptr) {
            QWidget* callback_ret = qlayoutitem_widget_callback();
            return callback_ret;
        } else {
            return QLayoutItem::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qlayoutitem_layout_isbase) {
            qlayoutitem_layout_isbase = false;
            return QLayoutItem::layout();
        } else if (qlayoutitem_layout_callback != nullptr) {
            QLayout* callback_ret = qlayoutitem_layout_callback();
            return callback_ret;
        } else {
            return QLayoutItem::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qlayoutitem_spaceritem_isbase) {
            qlayoutitem_spaceritem_isbase = false;
            return QLayoutItem::spacerItem();
        } else if (qlayoutitem_spaceritem_callback != nullptr) {
            QSpacerItem* callback_ret = qlayoutitem_spaceritem_callback();
            return callback_ret;
        } else {
            return QLayoutItem::spacerItem();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qlayoutitem_controltypes_isbase) {
            qlayoutitem_controltypes_isbase = false;
            return QLayoutItem::controlTypes();
        } else if (qlayoutitem_controltypes_callback != nullptr) {
            int callback_ret = qlayoutitem_controltypes_callback();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        } else {
            return QLayoutItem::controlTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    void operator=(const QLayoutItem& param1) {
        if (qlayoutitem_operatorassign_isbase) {
            qlayoutitem_operatorassign_isbase = false;
            QLayoutItem::operator=(param1);
        } else if (qlayoutitem_operatorassign_callback != nullptr) {
            const QLayoutItem& param1_ret = param1;
            // Cast returned reference into pointer
            QLayoutItem* cbval1 = const_cast<QLayoutItem*>(&param1_ret);

            qlayoutitem_operatorassign_callback(this, cbval1);
        } else {
            QLayoutItem::operator=(param1);
        }
    }

    // Friend functions
    friend void QLayoutItem_OperatorAssign(QLayoutItem* self, const QLayoutItem* param1);
    friend void QLayoutItem_QBaseOperatorAssign(QLayoutItem* self, const QLayoutItem* param1);
};

// This class is a subclass of QSpacerItem so that we can call protected methods
class VirtualQSpacerItem final : public QSpacerItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQSpacerItem = true;

    // Virtual class public types (including callbacks)
    using QSpacerItem_SizeHint_Callback = QSize* (*)();
    using QSpacerItem_MinimumSize_Callback = QSize* (*)();
    using QSpacerItem_MaximumSize_Callback = QSize* (*)();
    using QSpacerItem_ExpandingDirections_Callback = int (*)();
    using QSpacerItem_IsEmpty_Callback = bool (*)();
    using QSpacerItem_SetGeometry_Callback = void (*)(QSpacerItem*, QRect*);
    using QSpacerItem_Geometry_Callback = QRect* (*)();
    using QSpacerItem_SpacerItem_Callback = QSpacerItem* (*)();
    using QSpacerItem_HasHeightForWidth_Callback = bool (*)();
    using QSpacerItem_HeightForWidth_Callback = int (*)(const QSpacerItem*, int);
    using QSpacerItem_MinimumHeightForWidth_Callback = int (*)(const QSpacerItem*, int);
    using QSpacerItem_Invalidate_Callback = void (*)();
    using QSpacerItem_Widget_Callback = QWidget* (*)();
    using QSpacerItem_Layout_Callback = QLayout* (*)();
    using QSpacerItem_ControlTypes_Callback = int (*)();

  protected:
    // Instance callback storage
    QSpacerItem_SizeHint_Callback qspaceritem_sizehint_callback = nullptr;
    QSpacerItem_MinimumSize_Callback qspaceritem_minimumsize_callback = nullptr;
    QSpacerItem_MaximumSize_Callback qspaceritem_maximumsize_callback = nullptr;
    QSpacerItem_ExpandingDirections_Callback qspaceritem_expandingdirections_callback = nullptr;
    QSpacerItem_IsEmpty_Callback qspaceritem_isempty_callback = nullptr;
    QSpacerItem_SetGeometry_Callback qspaceritem_setgeometry_callback = nullptr;
    QSpacerItem_Geometry_Callback qspaceritem_geometry_callback = nullptr;
    QSpacerItem_SpacerItem_Callback qspaceritem_spaceritem_callback = nullptr;
    QSpacerItem_HasHeightForWidth_Callback qspaceritem_hasheightforwidth_callback = nullptr;
    QSpacerItem_HeightForWidth_Callback qspaceritem_heightforwidth_callback = nullptr;
    QSpacerItem_MinimumHeightForWidth_Callback qspaceritem_minimumheightforwidth_callback = nullptr;
    QSpacerItem_Invalidate_Callback qspaceritem_invalidate_callback = nullptr;
    QSpacerItem_Widget_Callback qspaceritem_widget_callback = nullptr;
    QSpacerItem_Layout_Callback qspaceritem_layout_callback = nullptr;
    QSpacerItem_ControlTypes_Callback qspaceritem_controltypes_callback = nullptr;

    // Instance base flags
    mutable bool qspaceritem_sizehint_isbase = false;
    mutable bool qspaceritem_minimumsize_isbase = false;
    mutable bool qspaceritem_maximumsize_isbase = false;
    mutable bool qspaceritem_expandingdirections_isbase = false;
    mutable bool qspaceritem_isempty_isbase = false;
    mutable bool qspaceritem_setgeometry_isbase = false;
    mutable bool qspaceritem_geometry_isbase = false;
    mutable bool qspaceritem_spaceritem_isbase = false;
    mutable bool qspaceritem_hasheightforwidth_isbase = false;
    mutable bool qspaceritem_heightforwidth_isbase = false;
    mutable bool qspaceritem_minimumheightforwidth_isbase = false;
    mutable bool qspaceritem_invalidate_isbase = false;
    mutable bool qspaceritem_widget_isbase = false;
    mutable bool qspaceritem_layout_isbase = false;
    mutable bool qspaceritem_controltypes_isbase = false;

  public:
    VirtualQSpacerItem(int w, int h) : QSpacerItem(w, h) {};
    VirtualQSpacerItem(const QSpacerItem& param1) : QSpacerItem(param1) {};
    VirtualQSpacerItem(int w, int h, QSizePolicy::Policy hData) : QSpacerItem(w, h, hData) {};
    VirtualQSpacerItem(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) : QSpacerItem(w, h, hData, vData) {};

    ~VirtualQSpacerItem() {
        qspaceritem_sizehint_callback = nullptr;
        qspaceritem_minimumsize_callback = nullptr;
        qspaceritem_maximumsize_callback = nullptr;
        qspaceritem_expandingdirections_callback = nullptr;
        qspaceritem_isempty_callback = nullptr;
        qspaceritem_setgeometry_callback = nullptr;
        qspaceritem_geometry_callback = nullptr;
        qspaceritem_spaceritem_callback = nullptr;
        qspaceritem_hasheightforwidth_callback = nullptr;
        qspaceritem_heightforwidth_callback = nullptr;
        qspaceritem_minimumheightforwidth_callback = nullptr;
        qspaceritem_invalidate_callback = nullptr;
        qspaceritem_widget_callback = nullptr;
        qspaceritem_layout_callback = nullptr;
        qspaceritem_controltypes_callback = nullptr;
    }

    // Callback setters
    inline void setQSpacerItem_SizeHint_Callback(QSpacerItem_SizeHint_Callback cb) { qspaceritem_sizehint_callback = cb; }
    inline void setQSpacerItem_MinimumSize_Callback(QSpacerItem_MinimumSize_Callback cb) { qspaceritem_minimumsize_callback = cb; }
    inline void setQSpacerItem_MaximumSize_Callback(QSpacerItem_MaximumSize_Callback cb) { qspaceritem_maximumsize_callback = cb; }
    inline void setQSpacerItem_ExpandingDirections_Callback(QSpacerItem_ExpandingDirections_Callback cb) { qspaceritem_expandingdirections_callback = cb; }
    inline void setQSpacerItem_IsEmpty_Callback(QSpacerItem_IsEmpty_Callback cb) { qspaceritem_isempty_callback = cb; }
    inline void setQSpacerItem_SetGeometry_Callback(QSpacerItem_SetGeometry_Callback cb) { qspaceritem_setgeometry_callback = cb; }
    inline void setQSpacerItem_Geometry_Callback(QSpacerItem_Geometry_Callback cb) { qspaceritem_geometry_callback = cb; }
    inline void setQSpacerItem_SpacerItem_Callback(QSpacerItem_SpacerItem_Callback cb) { qspaceritem_spaceritem_callback = cb; }
    inline void setQSpacerItem_HasHeightForWidth_Callback(QSpacerItem_HasHeightForWidth_Callback cb) { qspaceritem_hasheightforwidth_callback = cb; }
    inline void setQSpacerItem_HeightForWidth_Callback(QSpacerItem_HeightForWidth_Callback cb) { qspaceritem_heightforwidth_callback = cb; }
    inline void setQSpacerItem_MinimumHeightForWidth_Callback(QSpacerItem_MinimumHeightForWidth_Callback cb) { qspaceritem_minimumheightforwidth_callback = cb; }
    inline void setQSpacerItem_Invalidate_Callback(QSpacerItem_Invalidate_Callback cb) { qspaceritem_invalidate_callback = cb; }
    inline void setQSpacerItem_Widget_Callback(QSpacerItem_Widget_Callback cb) { qspaceritem_widget_callback = cb; }
    inline void setQSpacerItem_Layout_Callback(QSpacerItem_Layout_Callback cb) { qspaceritem_layout_callback = cb; }
    inline void setQSpacerItem_ControlTypes_Callback(QSpacerItem_ControlTypes_Callback cb) { qspaceritem_controltypes_callback = cb; }

    // Base flag setters
    inline void setQSpacerItem_SizeHint_IsBase(bool value) const { qspaceritem_sizehint_isbase = value; }
    inline void setQSpacerItem_MinimumSize_IsBase(bool value) const { qspaceritem_minimumsize_isbase = value; }
    inline void setQSpacerItem_MaximumSize_IsBase(bool value) const { qspaceritem_maximumsize_isbase = value; }
    inline void setQSpacerItem_ExpandingDirections_IsBase(bool value) const { qspaceritem_expandingdirections_isbase = value; }
    inline void setQSpacerItem_IsEmpty_IsBase(bool value) const { qspaceritem_isempty_isbase = value; }
    inline void setQSpacerItem_SetGeometry_IsBase(bool value) const { qspaceritem_setgeometry_isbase = value; }
    inline void setQSpacerItem_Geometry_IsBase(bool value) const { qspaceritem_geometry_isbase = value; }
    inline void setQSpacerItem_SpacerItem_IsBase(bool value) const { qspaceritem_spaceritem_isbase = value; }
    inline void setQSpacerItem_HasHeightForWidth_IsBase(bool value) const { qspaceritem_hasheightforwidth_isbase = value; }
    inline void setQSpacerItem_HeightForWidth_IsBase(bool value) const { qspaceritem_heightforwidth_isbase = value; }
    inline void setQSpacerItem_MinimumHeightForWidth_IsBase(bool value) const { qspaceritem_minimumheightforwidth_isbase = value; }
    inline void setQSpacerItem_Invalidate_IsBase(bool value) const { qspaceritem_invalidate_isbase = value; }
    inline void setQSpacerItem_Widget_IsBase(bool value) const { qspaceritem_widget_isbase = value; }
    inline void setQSpacerItem_Layout_IsBase(bool value) const { qspaceritem_layout_isbase = value; }
    inline void setQSpacerItem_ControlTypes_IsBase(bool value) const { qspaceritem_controltypes_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qspaceritem_sizehint_isbase) {
            qspaceritem_sizehint_isbase = false;
            return QSpacerItem::sizeHint();
        } else if (qspaceritem_sizehint_callback != nullptr) {
            QSize* callback_ret = qspaceritem_sizehint_callback();
            return *callback_ret;
        } else {
            return QSpacerItem::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qspaceritem_minimumsize_isbase) {
            qspaceritem_minimumsize_isbase = false;
            return QSpacerItem::minimumSize();
        } else if (qspaceritem_minimumsize_callback != nullptr) {
            QSize* callback_ret = qspaceritem_minimumsize_callback();
            return *callback_ret;
        } else {
            return QSpacerItem::minimumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qspaceritem_maximumsize_isbase) {
            qspaceritem_maximumsize_isbase = false;
            return QSpacerItem::maximumSize();
        } else if (qspaceritem_maximumsize_callback != nullptr) {
            QSize* callback_ret = qspaceritem_maximumsize_callback();
            return *callback_ret;
        } else {
            return QSpacerItem::maximumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qspaceritem_expandingdirections_isbase) {
            qspaceritem_expandingdirections_isbase = false;
            return QSpacerItem::expandingDirections();
        } else if (qspaceritem_expandingdirections_callback != nullptr) {
            int callback_ret = qspaceritem_expandingdirections_callback();
            return static_cast<Qt::Orientations>(callback_ret);
        } else {
            return QSpacerItem::expandingDirections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qspaceritem_isempty_isbase) {
            qspaceritem_isempty_isbase = false;
            return QSpacerItem::isEmpty();
        } else if (qspaceritem_isempty_callback != nullptr) {
            bool callback_ret = qspaceritem_isempty_callback();
            return callback_ret;
        } else {
            return QSpacerItem::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qspaceritem_setgeometry_isbase) {
            qspaceritem_setgeometry_isbase = false;
            QSpacerItem::setGeometry(geometry);
        } else if (qspaceritem_setgeometry_callback != nullptr) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);

            qspaceritem_setgeometry_callback(this, cbval1);
        } else {
            QSpacerItem::setGeometry(geometry);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qspaceritem_geometry_isbase) {
            qspaceritem_geometry_isbase = false;
            return QSpacerItem::geometry();
        } else if (qspaceritem_geometry_callback != nullptr) {
            QRect* callback_ret = qspaceritem_geometry_callback();
            return *callback_ret;
        } else {
            return QSpacerItem::geometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qspaceritem_spaceritem_isbase) {
            qspaceritem_spaceritem_isbase = false;
            return QSpacerItem::spacerItem();
        } else if (qspaceritem_spaceritem_callback != nullptr) {
            QSpacerItem* callback_ret = qspaceritem_spaceritem_callback();
            return callback_ret;
        } else {
            return QSpacerItem::spacerItem();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qspaceritem_hasheightforwidth_isbase) {
            qspaceritem_hasheightforwidth_isbase = false;
            return QSpacerItem::hasHeightForWidth();
        } else if (qspaceritem_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qspaceritem_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QSpacerItem::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qspaceritem_heightforwidth_isbase) {
            qspaceritem_heightforwidth_isbase = false;
            return QSpacerItem::heightForWidth(param1);
        } else if (qspaceritem_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qspaceritem_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSpacerItem::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qspaceritem_minimumheightforwidth_isbase) {
            qspaceritem_minimumheightforwidth_isbase = false;
            return QSpacerItem::minimumHeightForWidth(param1);
        } else if (qspaceritem_minimumheightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qspaceritem_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSpacerItem::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qspaceritem_invalidate_isbase) {
            qspaceritem_invalidate_isbase = false;
            QSpacerItem::invalidate();
        } else if (qspaceritem_invalidate_callback != nullptr) {
            qspaceritem_invalidate_callback();
        } else {
            QSpacerItem::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qspaceritem_widget_isbase) {
            qspaceritem_widget_isbase = false;
            return QSpacerItem::widget();
        } else if (qspaceritem_widget_callback != nullptr) {
            QWidget* callback_ret = qspaceritem_widget_callback();
            return callback_ret;
        } else {
            return QSpacerItem::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qspaceritem_layout_isbase) {
            qspaceritem_layout_isbase = false;
            return QSpacerItem::layout();
        } else if (qspaceritem_layout_callback != nullptr) {
            QLayout* callback_ret = qspaceritem_layout_callback();
            return callback_ret;
        } else {
            return QSpacerItem::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qspaceritem_controltypes_isbase) {
            qspaceritem_controltypes_isbase = false;
            return QSpacerItem::controlTypes();
        } else if (qspaceritem_controltypes_callback != nullptr) {
            int callback_ret = qspaceritem_controltypes_callback();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        } else {
            return QSpacerItem::controlTypes();
        }
    }
};

// This class is a subclass of QWidgetItem so that we can call protected methods
class VirtualQWidgetItem final : public QWidgetItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQWidgetItem = true;

    // Virtual class public types (including callbacks)
    using QWidgetItem_SizeHint_Callback = QSize* (*)();
    using QWidgetItem_MinimumSize_Callback = QSize* (*)();
    using QWidgetItem_MaximumSize_Callback = QSize* (*)();
    using QWidgetItem_ExpandingDirections_Callback = int (*)();
    using QWidgetItem_IsEmpty_Callback = bool (*)();
    using QWidgetItem_SetGeometry_Callback = void (*)(QWidgetItem*, QRect*);
    using QWidgetItem_Geometry_Callback = QRect* (*)();
    using QWidgetItem_Widget_Callback = QWidget* (*)();
    using QWidgetItem_HasHeightForWidth_Callback = bool (*)();
    using QWidgetItem_HeightForWidth_Callback = int (*)(const QWidgetItem*, int);
    using QWidgetItem_MinimumHeightForWidth_Callback = int (*)(const QWidgetItem*, int);
    using QWidgetItem_ControlTypes_Callback = int (*)();
    using QWidgetItem_Invalidate_Callback = void (*)();
    using QWidgetItem_Layout_Callback = QLayout* (*)();
    using QWidgetItem_SpacerItem_Callback = QSpacerItem* (*)();

  protected:
    // Instance callback storage
    QWidgetItem_SizeHint_Callback qwidgetitem_sizehint_callback = nullptr;
    QWidgetItem_MinimumSize_Callback qwidgetitem_minimumsize_callback = nullptr;
    QWidgetItem_MaximumSize_Callback qwidgetitem_maximumsize_callback = nullptr;
    QWidgetItem_ExpandingDirections_Callback qwidgetitem_expandingdirections_callback = nullptr;
    QWidgetItem_IsEmpty_Callback qwidgetitem_isempty_callback = nullptr;
    QWidgetItem_SetGeometry_Callback qwidgetitem_setgeometry_callback = nullptr;
    QWidgetItem_Geometry_Callback qwidgetitem_geometry_callback = nullptr;
    QWidgetItem_Widget_Callback qwidgetitem_widget_callback = nullptr;
    QWidgetItem_HasHeightForWidth_Callback qwidgetitem_hasheightforwidth_callback = nullptr;
    QWidgetItem_HeightForWidth_Callback qwidgetitem_heightforwidth_callback = nullptr;
    QWidgetItem_MinimumHeightForWidth_Callback qwidgetitem_minimumheightforwidth_callback = nullptr;
    QWidgetItem_ControlTypes_Callback qwidgetitem_controltypes_callback = nullptr;
    QWidgetItem_Invalidate_Callback qwidgetitem_invalidate_callback = nullptr;
    QWidgetItem_Layout_Callback qwidgetitem_layout_callback = nullptr;
    QWidgetItem_SpacerItem_Callback qwidgetitem_spaceritem_callback = nullptr;

    // Instance base flags
    mutable bool qwidgetitem_sizehint_isbase = false;
    mutable bool qwidgetitem_minimumsize_isbase = false;
    mutable bool qwidgetitem_maximumsize_isbase = false;
    mutable bool qwidgetitem_expandingdirections_isbase = false;
    mutable bool qwidgetitem_isempty_isbase = false;
    mutable bool qwidgetitem_setgeometry_isbase = false;
    mutable bool qwidgetitem_geometry_isbase = false;
    mutable bool qwidgetitem_widget_isbase = false;
    mutable bool qwidgetitem_hasheightforwidth_isbase = false;
    mutable bool qwidgetitem_heightforwidth_isbase = false;
    mutable bool qwidgetitem_minimumheightforwidth_isbase = false;
    mutable bool qwidgetitem_controltypes_isbase = false;
    mutable bool qwidgetitem_invalidate_isbase = false;
    mutable bool qwidgetitem_layout_isbase = false;
    mutable bool qwidgetitem_spaceritem_isbase = false;

  public:
    VirtualQWidgetItem(QWidget* w) : QWidgetItem(w) {};

    ~VirtualQWidgetItem() {
        qwidgetitem_sizehint_callback = nullptr;
        qwidgetitem_minimumsize_callback = nullptr;
        qwidgetitem_maximumsize_callback = nullptr;
        qwidgetitem_expandingdirections_callback = nullptr;
        qwidgetitem_isempty_callback = nullptr;
        qwidgetitem_setgeometry_callback = nullptr;
        qwidgetitem_geometry_callback = nullptr;
        qwidgetitem_widget_callback = nullptr;
        qwidgetitem_hasheightforwidth_callback = nullptr;
        qwidgetitem_heightforwidth_callback = nullptr;
        qwidgetitem_minimumheightforwidth_callback = nullptr;
        qwidgetitem_controltypes_callback = nullptr;
        qwidgetitem_invalidate_callback = nullptr;
        qwidgetitem_layout_callback = nullptr;
        qwidgetitem_spaceritem_callback = nullptr;
    }

    // Callback setters
    inline void setQWidgetItem_SizeHint_Callback(QWidgetItem_SizeHint_Callback cb) { qwidgetitem_sizehint_callback = cb; }
    inline void setQWidgetItem_MinimumSize_Callback(QWidgetItem_MinimumSize_Callback cb) { qwidgetitem_minimumsize_callback = cb; }
    inline void setQWidgetItem_MaximumSize_Callback(QWidgetItem_MaximumSize_Callback cb) { qwidgetitem_maximumsize_callback = cb; }
    inline void setQWidgetItem_ExpandingDirections_Callback(QWidgetItem_ExpandingDirections_Callback cb) { qwidgetitem_expandingdirections_callback = cb; }
    inline void setQWidgetItem_IsEmpty_Callback(QWidgetItem_IsEmpty_Callback cb) { qwidgetitem_isempty_callback = cb; }
    inline void setQWidgetItem_SetGeometry_Callback(QWidgetItem_SetGeometry_Callback cb) { qwidgetitem_setgeometry_callback = cb; }
    inline void setQWidgetItem_Geometry_Callback(QWidgetItem_Geometry_Callback cb) { qwidgetitem_geometry_callback = cb; }
    inline void setQWidgetItem_Widget_Callback(QWidgetItem_Widget_Callback cb) { qwidgetitem_widget_callback = cb; }
    inline void setQWidgetItem_HasHeightForWidth_Callback(QWidgetItem_HasHeightForWidth_Callback cb) { qwidgetitem_hasheightforwidth_callback = cb; }
    inline void setQWidgetItem_HeightForWidth_Callback(QWidgetItem_HeightForWidth_Callback cb) { qwidgetitem_heightforwidth_callback = cb; }
    inline void setQWidgetItem_MinimumHeightForWidth_Callback(QWidgetItem_MinimumHeightForWidth_Callback cb) { qwidgetitem_minimumheightforwidth_callback = cb; }
    inline void setQWidgetItem_ControlTypes_Callback(QWidgetItem_ControlTypes_Callback cb) { qwidgetitem_controltypes_callback = cb; }
    inline void setQWidgetItem_Invalidate_Callback(QWidgetItem_Invalidate_Callback cb) { qwidgetitem_invalidate_callback = cb; }
    inline void setQWidgetItem_Layout_Callback(QWidgetItem_Layout_Callback cb) { qwidgetitem_layout_callback = cb; }
    inline void setQWidgetItem_SpacerItem_Callback(QWidgetItem_SpacerItem_Callback cb) { qwidgetitem_spaceritem_callback = cb; }

    // Base flag setters
    inline void setQWidgetItem_SizeHint_IsBase(bool value) const { qwidgetitem_sizehint_isbase = value; }
    inline void setQWidgetItem_MinimumSize_IsBase(bool value) const { qwidgetitem_minimumsize_isbase = value; }
    inline void setQWidgetItem_MaximumSize_IsBase(bool value) const { qwidgetitem_maximumsize_isbase = value; }
    inline void setQWidgetItem_ExpandingDirections_IsBase(bool value) const { qwidgetitem_expandingdirections_isbase = value; }
    inline void setQWidgetItem_IsEmpty_IsBase(bool value) const { qwidgetitem_isempty_isbase = value; }
    inline void setQWidgetItem_SetGeometry_IsBase(bool value) const { qwidgetitem_setgeometry_isbase = value; }
    inline void setQWidgetItem_Geometry_IsBase(bool value) const { qwidgetitem_geometry_isbase = value; }
    inline void setQWidgetItem_Widget_IsBase(bool value) const { qwidgetitem_widget_isbase = value; }
    inline void setQWidgetItem_HasHeightForWidth_IsBase(bool value) const { qwidgetitem_hasheightforwidth_isbase = value; }
    inline void setQWidgetItem_HeightForWidth_IsBase(bool value) const { qwidgetitem_heightforwidth_isbase = value; }
    inline void setQWidgetItem_MinimumHeightForWidth_IsBase(bool value) const { qwidgetitem_minimumheightforwidth_isbase = value; }
    inline void setQWidgetItem_ControlTypes_IsBase(bool value) const { qwidgetitem_controltypes_isbase = value; }
    inline void setQWidgetItem_Invalidate_IsBase(bool value) const { qwidgetitem_invalidate_isbase = value; }
    inline void setQWidgetItem_Layout_IsBase(bool value) const { qwidgetitem_layout_isbase = value; }
    inline void setQWidgetItem_SpacerItem_IsBase(bool value) const { qwidgetitem_spaceritem_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwidgetitem_sizehint_isbase) {
            qwidgetitem_sizehint_isbase = false;
            return QWidgetItem::sizeHint();
        } else if (qwidgetitem_sizehint_callback != nullptr) {
            QSize* callback_ret = qwidgetitem_sizehint_callback();
            return *callback_ret;
        } else {
            return QWidgetItem::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qwidgetitem_minimumsize_isbase) {
            qwidgetitem_minimumsize_isbase = false;
            return QWidgetItem::minimumSize();
        } else if (qwidgetitem_minimumsize_callback != nullptr) {
            QSize* callback_ret = qwidgetitem_minimumsize_callback();
            return *callback_ret;
        } else {
            return QWidgetItem::minimumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qwidgetitem_maximumsize_isbase) {
            qwidgetitem_maximumsize_isbase = false;
            return QWidgetItem::maximumSize();
        } else if (qwidgetitem_maximumsize_callback != nullptr) {
            QSize* callback_ret = qwidgetitem_maximumsize_callback();
            return *callback_ret;
        } else {
            return QWidgetItem::maximumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qwidgetitem_expandingdirections_isbase) {
            qwidgetitem_expandingdirections_isbase = false;
            return QWidgetItem::expandingDirections();
        } else if (qwidgetitem_expandingdirections_callback != nullptr) {
            int callback_ret = qwidgetitem_expandingdirections_callback();
            return static_cast<Qt::Orientations>(callback_ret);
        } else {
            return QWidgetItem::expandingDirections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qwidgetitem_isempty_isbase) {
            qwidgetitem_isempty_isbase = false;
            return QWidgetItem::isEmpty();
        } else if (qwidgetitem_isempty_callback != nullptr) {
            bool callback_ret = qwidgetitem_isempty_callback();
            return callback_ret;
        } else {
            return QWidgetItem::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qwidgetitem_setgeometry_isbase) {
            qwidgetitem_setgeometry_isbase = false;
            QWidgetItem::setGeometry(geometry);
        } else if (qwidgetitem_setgeometry_callback != nullptr) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);

            qwidgetitem_setgeometry_callback(this, cbval1);
        } else {
            QWidgetItem::setGeometry(geometry);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qwidgetitem_geometry_isbase) {
            qwidgetitem_geometry_isbase = false;
            return QWidgetItem::geometry();
        } else if (qwidgetitem_geometry_callback != nullptr) {
            QRect* callback_ret = qwidgetitem_geometry_callback();
            return *callback_ret;
        } else {
            return QWidgetItem::geometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qwidgetitem_widget_isbase) {
            qwidgetitem_widget_isbase = false;
            return QWidgetItem::widget();
        } else if (qwidgetitem_widget_callback != nullptr) {
            QWidget* callback_ret = qwidgetitem_widget_callback();
            return callback_ret;
        } else {
            return QWidgetItem::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwidgetitem_hasheightforwidth_isbase) {
            qwidgetitem_hasheightforwidth_isbase = false;
            return QWidgetItem::hasHeightForWidth();
        } else if (qwidgetitem_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qwidgetitem_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QWidgetItem::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qwidgetitem_heightforwidth_isbase) {
            qwidgetitem_heightforwidth_isbase = false;
            return QWidgetItem::heightForWidth(param1);
        } else if (qwidgetitem_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qwidgetitem_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWidgetItem::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qwidgetitem_minimumheightforwidth_isbase) {
            qwidgetitem_minimumheightforwidth_isbase = false;
            return QWidgetItem::minimumHeightForWidth(param1);
        } else if (qwidgetitem_minimumheightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qwidgetitem_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWidgetItem::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qwidgetitem_controltypes_isbase) {
            qwidgetitem_controltypes_isbase = false;
            return QWidgetItem::controlTypes();
        } else if (qwidgetitem_controltypes_callback != nullptr) {
            int callback_ret = qwidgetitem_controltypes_callback();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        } else {
            return QWidgetItem::controlTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qwidgetitem_invalidate_isbase) {
            qwidgetitem_invalidate_isbase = false;
            QWidgetItem::invalidate();
        } else if (qwidgetitem_invalidate_callback != nullptr) {
            qwidgetitem_invalidate_callback();
        } else {
            QWidgetItem::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qwidgetitem_layout_isbase) {
            qwidgetitem_layout_isbase = false;
            return QWidgetItem::layout();
        } else if (qwidgetitem_layout_callback != nullptr) {
            QLayout* callback_ret = qwidgetitem_layout_callback();
            return callback_ret;
        } else {
            return QWidgetItem::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qwidgetitem_spaceritem_isbase) {
            qwidgetitem_spaceritem_isbase = false;
            return QWidgetItem::spacerItem();
        } else if (qwidgetitem_spaceritem_callback != nullptr) {
            QSpacerItem* callback_ret = qwidgetitem_spaceritem_callback();
            return callback_ret;
        } else {
            return QWidgetItem::spacerItem();
        }
    }
};

// This class is a subclass of QWidgetItemV2 so that we can call protected methods
class VirtualQWidgetItemV2 final : public QWidgetItemV2 {

  public:
    // Virtual class boolean flag
    bool isVirtualQWidgetItemV2 = true;

    // Virtual class public types (including callbacks)
    using QWidgetItemV2_SizeHint_Callback = QSize* (*)();
    using QWidgetItemV2_MinimumSize_Callback = QSize* (*)();
    using QWidgetItemV2_MaximumSize_Callback = QSize* (*)();
    using QWidgetItemV2_HeightForWidth_Callback = int (*)(const QWidgetItemV2*, int);
    using QWidgetItemV2_ExpandingDirections_Callback = int (*)();
    using QWidgetItemV2_IsEmpty_Callback = bool (*)();
    using QWidgetItemV2_SetGeometry_Callback = void (*)(QWidgetItemV2*, QRect*);
    using QWidgetItemV2_Geometry_Callback = QRect* (*)();
    using QWidgetItemV2_Widget_Callback = QWidget* (*)();
    using QWidgetItemV2_HasHeightForWidth_Callback = bool (*)();
    using QWidgetItemV2_MinimumHeightForWidth_Callback = int (*)(const QWidgetItemV2*, int);
    using QWidgetItemV2_ControlTypes_Callback = int (*)();
    using QWidgetItemV2_Invalidate_Callback = void (*)();
    using QWidgetItemV2_Layout_Callback = QLayout* (*)();
    using QWidgetItemV2_SpacerItem_Callback = QSpacerItem* (*)();

  protected:
    // Instance callback storage
    QWidgetItemV2_SizeHint_Callback qwidgetitemv2_sizehint_callback = nullptr;
    QWidgetItemV2_MinimumSize_Callback qwidgetitemv2_minimumsize_callback = nullptr;
    QWidgetItemV2_MaximumSize_Callback qwidgetitemv2_maximumsize_callback = nullptr;
    QWidgetItemV2_HeightForWidth_Callback qwidgetitemv2_heightforwidth_callback = nullptr;
    QWidgetItemV2_ExpandingDirections_Callback qwidgetitemv2_expandingdirections_callback = nullptr;
    QWidgetItemV2_IsEmpty_Callback qwidgetitemv2_isempty_callback = nullptr;
    QWidgetItemV2_SetGeometry_Callback qwidgetitemv2_setgeometry_callback = nullptr;
    QWidgetItemV2_Geometry_Callback qwidgetitemv2_geometry_callback = nullptr;
    QWidgetItemV2_Widget_Callback qwidgetitemv2_widget_callback = nullptr;
    QWidgetItemV2_HasHeightForWidth_Callback qwidgetitemv2_hasheightforwidth_callback = nullptr;
    QWidgetItemV2_MinimumHeightForWidth_Callback qwidgetitemv2_minimumheightforwidth_callback = nullptr;
    QWidgetItemV2_ControlTypes_Callback qwidgetitemv2_controltypes_callback = nullptr;
    QWidgetItemV2_Invalidate_Callback qwidgetitemv2_invalidate_callback = nullptr;
    QWidgetItemV2_Layout_Callback qwidgetitemv2_layout_callback = nullptr;
    QWidgetItemV2_SpacerItem_Callback qwidgetitemv2_spaceritem_callback = nullptr;

    // Instance base flags
    mutable bool qwidgetitemv2_sizehint_isbase = false;
    mutable bool qwidgetitemv2_minimumsize_isbase = false;
    mutable bool qwidgetitemv2_maximumsize_isbase = false;
    mutable bool qwidgetitemv2_heightforwidth_isbase = false;
    mutable bool qwidgetitemv2_expandingdirections_isbase = false;
    mutable bool qwidgetitemv2_isempty_isbase = false;
    mutable bool qwidgetitemv2_setgeometry_isbase = false;
    mutable bool qwidgetitemv2_geometry_isbase = false;
    mutable bool qwidgetitemv2_widget_isbase = false;
    mutable bool qwidgetitemv2_hasheightforwidth_isbase = false;
    mutable bool qwidgetitemv2_minimumheightforwidth_isbase = false;
    mutable bool qwidgetitemv2_controltypes_isbase = false;
    mutable bool qwidgetitemv2_invalidate_isbase = false;
    mutable bool qwidgetitemv2_layout_isbase = false;
    mutable bool qwidgetitemv2_spaceritem_isbase = false;

  public:
    VirtualQWidgetItemV2(QWidget* widget) : QWidgetItemV2(widget) {};

    ~VirtualQWidgetItemV2() {
        qwidgetitemv2_sizehint_callback = nullptr;
        qwidgetitemv2_minimumsize_callback = nullptr;
        qwidgetitemv2_maximumsize_callback = nullptr;
        qwidgetitemv2_heightforwidth_callback = nullptr;
        qwidgetitemv2_expandingdirections_callback = nullptr;
        qwidgetitemv2_isempty_callback = nullptr;
        qwidgetitemv2_setgeometry_callback = nullptr;
        qwidgetitemv2_geometry_callback = nullptr;
        qwidgetitemv2_widget_callback = nullptr;
        qwidgetitemv2_hasheightforwidth_callback = nullptr;
        qwidgetitemv2_minimumheightforwidth_callback = nullptr;
        qwidgetitemv2_controltypes_callback = nullptr;
        qwidgetitemv2_invalidate_callback = nullptr;
        qwidgetitemv2_layout_callback = nullptr;
        qwidgetitemv2_spaceritem_callback = nullptr;
    }

    // Callback setters
    inline void setQWidgetItemV2_SizeHint_Callback(QWidgetItemV2_SizeHint_Callback cb) { qwidgetitemv2_sizehint_callback = cb; }
    inline void setQWidgetItemV2_MinimumSize_Callback(QWidgetItemV2_MinimumSize_Callback cb) { qwidgetitemv2_minimumsize_callback = cb; }
    inline void setQWidgetItemV2_MaximumSize_Callback(QWidgetItemV2_MaximumSize_Callback cb) { qwidgetitemv2_maximumsize_callback = cb; }
    inline void setQWidgetItemV2_HeightForWidth_Callback(QWidgetItemV2_HeightForWidth_Callback cb) { qwidgetitemv2_heightforwidth_callback = cb; }
    inline void setQWidgetItemV2_ExpandingDirections_Callback(QWidgetItemV2_ExpandingDirections_Callback cb) { qwidgetitemv2_expandingdirections_callback = cb; }
    inline void setQWidgetItemV2_IsEmpty_Callback(QWidgetItemV2_IsEmpty_Callback cb) { qwidgetitemv2_isempty_callback = cb; }
    inline void setQWidgetItemV2_SetGeometry_Callback(QWidgetItemV2_SetGeometry_Callback cb) { qwidgetitemv2_setgeometry_callback = cb; }
    inline void setQWidgetItemV2_Geometry_Callback(QWidgetItemV2_Geometry_Callback cb) { qwidgetitemv2_geometry_callback = cb; }
    inline void setQWidgetItemV2_Widget_Callback(QWidgetItemV2_Widget_Callback cb) { qwidgetitemv2_widget_callback = cb; }
    inline void setQWidgetItemV2_HasHeightForWidth_Callback(QWidgetItemV2_HasHeightForWidth_Callback cb) { qwidgetitemv2_hasheightforwidth_callback = cb; }
    inline void setQWidgetItemV2_MinimumHeightForWidth_Callback(QWidgetItemV2_MinimumHeightForWidth_Callback cb) { qwidgetitemv2_minimumheightforwidth_callback = cb; }
    inline void setQWidgetItemV2_ControlTypes_Callback(QWidgetItemV2_ControlTypes_Callback cb) { qwidgetitemv2_controltypes_callback = cb; }
    inline void setQWidgetItemV2_Invalidate_Callback(QWidgetItemV2_Invalidate_Callback cb) { qwidgetitemv2_invalidate_callback = cb; }
    inline void setQWidgetItemV2_Layout_Callback(QWidgetItemV2_Layout_Callback cb) { qwidgetitemv2_layout_callback = cb; }
    inline void setQWidgetItemV2_SpacerItem_Callback(QWidgetItemV2_SpacerItem_Callback cb) { qwidgetitemv2_spaceritem_callback = cb; }

    // Base flag setters
    inline void setQWidgetItemV2_SizeHint_IsBase(bool value) const { qwidgetitemv2_sizehint_isbase = value; }
    inline void setQWidgetItemV2_MinimumSize_IsBase(bool value) const { qwidgetitemv2_minimumsize_isbase = value; }
    inline void setQWidgetItemV2_MaximumSize_IsBase(bool value) const { qwidgetitemv2_maximumsize_isbase = value; }
    inline void setQWidgetItemV2_HeightForWidth_IsBase(bool value) const { qwidgetitemv2_heightforwidth_isbase = value; }
    inline void setQWidgetItemV2_ExpandingDirections_IsBase(bool value) const { qwidgetitemv2_expandingdirections_isbase = value; }
    inline void setQWidgetItemV2_IsEmpty_IsBase(bool value) const { qwidgetitemv2_isempty_isbase = value; }
    inline void setQWidgetItemV2_SetGeometry_IsBase(bool value) const { qwidgetitemv2_setgeometry_isbase = value; }
    inline void setQWidgetItemV2_Geometry_IsBase(bool value) const { qwidgetitemv2_geometry_isbase = value; }
    inline void setQWidgetItemV2_Widget_IsBase(bool value) const { qwidgetitemv2_widget_isbase = value; }
    inline void setQWidgetItemV2_HasHeightForWidth_IsBase(bool value) const { qwidgetitemv2_hasheightforwidth_isbase = value; }
    inline void setQWidgetItemV2_MinimumHeightForWidth_IsBase(bool value) const { qwidgetitemv2_minimumheightforwidth_isbase = value; }
    inline void setQWidgetItemV2_ControlTypes_IsBase(bool value) const { qwidgetitemv2_controltypes_isbase = value; }
    inline void setQWidgetItemV2_Invalidate_IsBase(bool value) const { qwidgetitemv2_invalidate_isbase = value; }
    inline void setQWidgetItemV2_Layout_IsBase(bool value) const { qwidgetitemv2_layout_isbase = value; }
    inline void setQWidgetItemV2_SpacerItem_IsBase(bool value) const { qwidgetitemv2_spaceritem_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwidgetitemv2_sizehint_isbase) {
            qwidgetitemv2_sizehint_isbase = false;
            return QWidgetItemV2::sizeHint();
        } else if (qwidgetitemv2_sizehint_callback != nullptr) {
            QSize* callback_ret = qwidgetitemv2_sizehint_callback();
            return *callback_ret;
        } else {
            return QWidgetItemV2::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qwidgetitemv2_minimumsize_isbase) {
            qwidgetitemv2_minimumsize_isbase = false;
            return QWidgetItemV2::minimumSize();
        } else if (qwidgetitemv2_minimumsize_callback != nullptr) {
            QSize* callback_ret = qwidgetitemv2_minimumsize_callback();
            return *callback_ret;
        } else {
            return QWidgetItemV2::minimumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qwidgetitemv2_maximumsize_isbase) {
            qwidgetitemv2_maximumsize_isbase = false;
            return QWidgetItemV2::maximumSize();
        } else if (qwidgetitemv2_maximumsize_callback != nullptr) {
            QSize* callback_ret = qwidgetitemv2_maximumsize_callback();
            return *callback_ret;
        } else {
            return QWidgetItemV2::maximumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (qwidgetitemv2_heightforwidth_isbase) {
            qwidgetitemv2_heightforwidth_isbase = false;
            return QWidgetItemV2::heightForWidth(width);
        } else if (qwidgetitemv2_heightforwidth_callback != nullptr) {
            int cbval1 = width;

            int callback_ret = qwidgetitemv2_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWidgetItemV2::heightForWidth(width);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qwidgetitemv2_expandingdirections_isbase) {
            qwidgetitemv2_expandingdirections_isbase = false;
            return QWidgetItemV2::expandingDirections();
        } else if (qwidgetitemv2_expandingdirections_callback != nullptr) {
            int callback_ret = qwidgetitemv2_expandingdirections_callback();
            return static_cast<Qt::Orientations>(callback_ret);
        } else {
            return QWidgetItemV2::expandingDirections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qwidgetitemv2_isempty_isbase) {
            qwidgetitemv2_isempty_isbase = false;
            return QWidgetItemV2::isEmpty();
        } else if (qwidgetitemv2_isempty_callback != nullptr) {
            bool callback_ret = qwidgetitemv2_isempty_callback();
            return callback_ret;
        } else {
            return QWidgetItemV2::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qwidgetitemv2_setgeometry_isbase) {
            qwidgetitemv2_setgeometry_isbase = false;
            QWidgetItemV2::setGeometry(geometry);
        } else if (qwidgetitemv2_setgeometry_callback != nullptr) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);

            qwidgetitemv2_setgeometry_callback(this, cbval1);
        } else {
            QWidgetItemV2::setGeometry(geometry);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qwidgetitemv2_geometry_isbase) {
            qwidgetitemv2_geometry_isbase = false;
            return QWidgetItemV2::geometry();
        } else if (qwidgetitemv2_geometry_callback != nullptr) {
            QRect* callback_ret = qwidgetitemv2_geometry_callback();
            return *callback_ret;
        } else {
            return QWidgetItemV2::geometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qwidgetitemv2_widget_isbase) {
            qwidgetitemv2_widget_isbase = false;
            return QWidgetItemV2::widget();
        } else if (qwidgetitemv2_widget_callback != nullptr) {
            QWidget* callback_ret = qwidgetitemv2_widget_callback();
            return callback_ret;
        } else {
            return QWidgetItemV2::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwidgetitemv2_hasheightforwidth_isbase) {
            qwidgetitemv2_hasheightforwidth_isbase = false;
            return QWidgetItemV2::hasHeightForWidth();
        } else if (qwidgetitemv2_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qwidgetitemv2_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QWidgetItemV2::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qwidgetitemv2_minimumheightforwidth_isbase) {
            qwidgetitemv2_minimumheightforwidth_isbase = false;
            return QWidgetItemV2::minimumHeightForWidth(param1);
        } else if (qwidgetitemv2_minimumheightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qwidgetitemv2_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWidgetItemV2::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qwidgetitemv2_controltypes_isbase) {
            qwidgetitemv2_controltypes_isbase = false;
            return QWidgetItemV2::controlTypes();
        } else if (qwidgetitemv2_controltypes_callback != nullptr) {
            int callback_ret = qwidgetitemv2_controltypes_callback();
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        } else {
            return QWidgetItemV2::controlTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qwidgetitemv2_invalidate_isbase) {
            qwidgetitemv2_invalidate_isbase = false;
            QWidgetItemV2::invalidate();
        } else if (qwidgetitemv2_invalidate_callback != nullptr) {
            qwidgetitemv2_invalidate_callback();
        } else {
            QWidgetItemV2::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qwidgetitemv2_layout_isbase) {
            qwidgetitemv2_layout_isbase = false;
            return QWidgetItemV2::layout();
        } else if (qwidgetitemv2_layout_callback != nullptr) {
            QLayout* callback_ret = qwidgetitemv2_layout_callback();
            return callback_ret;
        } else {
            return QWidgetItemV2::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qwidgetitemv2_spaceritem_isbase) {
            qwidgetitemv2_spaceritem_isbase = false;
            return QWidgetItemV2::spacerItem();
        } else if (qwidgetitemv2_spaceritem_callback != nullptr) {
            QSpacerItem* callback_ret = qwidgetitemv2_spaceritem_callback();
            return callback_ret;
        } else {
            return QWidgetItemV2::spacerItem();
        }
    }
};

#endif
