#pragma once
#ifndef LIBQLAYOUTITEM_HXX
#define LIBQLAYOUTITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLayoutItem
class VirtualQLayoutItem : public QLayoutItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLayoutItem_SizeHint_Callback = QSize* (*)(const QLayoutItem*);
    using QLayoutItem_MinimumSize_Callback = QSize* (*)(const QLayoutItem*);
    using QLayoutItem_MaximumSize_Callback = QSize* (*)(const QLayoutItem*);
    using QLayoutItem_ExpandingDirections_Callback = int (*)(const QLayoutItem*);
    using QLayoutItem_SetGeometry_Callback = void (*)(QLayoutItem*, QRect*);
    using QLayoutItem_Geometry_Callback = QRect* (*)(const QLayoutItem*);
    using QLayoutItem_IsEmpty_Callback = bool (*)(const QLayoutItem*);
    using QLayoutItem_HasHeightForWidth_Callback = bool (*)(const QLayoutItem*);
    using QLayoutItem_HeightForWidth_Callback = int (*)(const QLayoutItem*, int);
    using QLayoutItem_MinimumHeightForWidth_Callback = int (*)(const QLayoutItem*, int);
    using QLayoutItem_Invalidate_Callback = void (*)(QLayoutItem*);
    using QLayoutItem_Widget_Callback = QWidget* (*)(const QLayoutItem*);
    using QLayoutItem_Layout_Callback = QLayout* (*)(QLayoutItem*);
    using QLayoutItem_SpacerItem_Callback = QSpacerItem* (*)(QLayoutItem*);
    using QLayoutItem_ControlTypes_Callback = int (*)(const QLayoutItem*);

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

    VirtualQLayoutItem() : QLayoutItem() {};
    VirtualQLayoutItem(const QLayoutItem& param1) : QLayoutItem(param1) {};
    VirtualQLayoutItem(Qt::Alignment alignment) : QLayoutItem(alignment) {};

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlayoutitem_sizehint_callback) {
            QSize* callback_ret = qlayoutitem_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayoutItem::sizeHint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qlayoutitem_minimumsize_callback) {
            QSize* callback_ret = qlayoutitem_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayoutItem::minimumSize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qlayoutitem_maximumsize_callback) {
            QSize* callback_ret = qlayoutitem_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayoutItem::maximumSize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qlayoutitem_expandingdirections_callback) {
            int callback_ret = qlayoutitem_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayoutItem::expandingDirections called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qlayoutitem_setgeometry_callback) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);
            qlayoutitem_setgeometry_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayoutItem::setGeometry called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qlayoutitem_geometry_callback) {
            QRect* callback_ret = qlayoutitem_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayoutItem::geometry called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qlayoutitem_isempty_callback) {
            bool callback_ret = qlayoutitem_isempty_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QLayoutItem::isEmpty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlayoutitem_hasheightforwidth_callback) {
            bool callback_ret = qlayoutitem_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QLayoutItem::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlayoutitem_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qlayoutitem_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLayoutItem::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qlayoutitem_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qlayoutitem_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLayoutItem::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qlayoutitem_invalidate_callback) {
            qlayoutitem_invalidate_callback(this);
            return;
        }
        QLayoutItem::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qlayoutitem_widget_callback) {
            QWidget* callback_ret = qlayoutitem_widget_callback(this);
            return callback_ret;
        }
        return QLayoutItem::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qlayoutitem_layout_callback) {
            QLayout* callback_ret = qlayoutitem_layout_callback(this);
            return callback_ret;
        }
        return QLayoutItem::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qlayoutitem_spaceritem_callback) {
            QSpacerItem* callback_ret = qlayoutitem_spaceritem_callback(this);
            return callback_ret;
        }
        return QLayoutItem::spacerItem();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qlayoutitem_controltypes_callback) {
            int callback_ret = qlayoutitem_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QLayoutItem::controlTypes();
    }
};

// This class is a subclass of QSpacerItem
class VirtualQSpacerItem final : public QSpacerItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSpacerItem_SizeHint_Callback = QSize* (*)(const QSpacerItem*);
    using QSpacerItem_MinimumSize_Callback = QSize* (*)(const QSpacerItem*);
    using QSpacerItem_MaximumSize_Callback = QSize* (*)(const QSpacerItem*);
    using QSpacerItem_ExpandingDirections_Callback = int (*)(const QSpacerItem*);
    using QSpacerItem_IsEmpty_Callback = bool (*)(const QSpacerItem*);
    using QSpacerItem_SetGeometry_Callback = void (*)(QSpacerItem*, QRect*);
    using QSpacerItem_Geometry_Callback = QRect* (*)(const QSpacerItem*);
    using QSpacerItem_SpacerItem_Callback = QSpacerItem* (*)(QSpacerItem*);
    using QSpacerItem_HasHeightForWidth_Callback = bool (*)(const QSpacerItem*);
    using QSpacerItem_HeightForWidth_Callback = int (*)(const QSpacerItem*, int);
    using QSpacerItem_MinimumHeightForWidth_Callback = int (*)(const QSpacerItem*, int);
    using QSpacerItem_Invalidate_Callback = void (*)(QSpacerItem*);
    using QSpacerItem_Widget_Callback = QWidget* (*)(const QSpacerItem*);
    using QSpacerItem_Layout_Callback = QLayout* (*)(QSpacerItem*);
    using QSpacerItem_ControlTypes_Callback = int (*)(const QSpacerItem*);

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

    VirtualQSpacerItem(int w, int h) : QSpacerItem(w, h) {};
    VirtualQSpacerItem(const QSpacerItem& param1) : QSpacerItem(param1) {};
    VirtualQSpacerItem(int w, int h, QSizePolicy::Policy hData) : QSpacerItem(w, h, hData) {};
    VirtualQSpacerItem(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) : QSpacerItem(w, h, hData, vData) {};

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qspaceritem_sizehint_callback) {
            QSize* callback_ret = qspaceritem_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSpacerItem::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qspaceritem_minimumsize_callback) {
            QSize* callback_ret = qspaceritem_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSpacerItem::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qspaceritem_maximumsize_callback) {
            QSize* callback_ret = qspaceritem_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSpacerItem::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qspaceritem_expandingdirections_callback) {
            int callback_ret = qspaceritem_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QSpacerItem::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qspaceritem_isempty_callback) {
            bool callback_ret = qspaceritem_isempty_callback(this);
            return callback_ret;
        }
        return QSpacerItem::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qspaceritem_setgeometry_callback) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);
            qspaceritem_setgeometry_callback(this, cbval1);
            return;
        }
        QSpacerItem::setGeometry(geometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qspaceritem_geometry_callback) {
            QRect* callback_ret = qspaceritem_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSpacerItem::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qspaceritem_spaceritem_callback) {
            QSpacerItem* callback_ret = qspaceritem_spaceritem_callback(this);
            return callback_ret;
        }
        return QSpacerItem::spacerItem();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qspaceritem_hasheightforwidth_callback) {
            bool callback_ret = qspaceritem_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QSpacerItem::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qspaceritem_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qspaceritem_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSpacerItem::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qspaceritem_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qspaceritem_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSpacerItem::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qspaceritem_invalidate_callback) {
            qspaceritem_invalidate_callback(this);
            return;
        }
        QSpacerItem::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qspaceritem_widget_callback) {
            QWidget* callback_ret = qspaceritem_widget_callback(this);
            return callback_ret;
        }
        return QSpacerItem::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qspaceritem_layout_callback) {
            QLayout* callback_ret = qspaceritem_layout_callback(this);
            return callback_ret;
        }
        return QSpacerItem::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qspaceritem_controltypes_callback) {
            int callback_ret = qspaceritem_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QSpacerItem::controlTypes();
    }
};

// This class is a subclass of QWidgetItem
class VirtualQWidgetItem final : public QWidgetItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWidgetItem_SizeHint_Callback = QSize* (*)(const QWidgetItem*);
    using QWidgetItem_MinimumSize_Callback = QSize* (*)(const QWidgetItem*);
    using QWidgetItem_MaximumSize_Callback = QSize* (*)(const QWidgetItem*);
    using QWidgetItem_ExpandingDirections_Callback = int (*)(const QWidgetItem*);
    using QWidgetItem_IsEmpty_Callback = bool (*)(const QWidgetItem*);
    using QWidgetItem_SetGeometry_Callback = void (*)(QWidgetItem*, QRect*);
    using QWidgetItem_Geometry_Callback = QRect* (*)(const QWidgetItem*);
    using QWidgetItem_Widget_Callback = QWidget* (*)(const QWidgetItem*);
    using QWidgetItem_HasHeightForWidth_Callback = bool (*)(const QWidgetItem*);
    using QWidgetItem_HeightForWidth_Callback = int (*)(const QWidgetItem*, int);
    using QWidgetItem_MinimumHeightForWidth_Callback = int (*)(const QWidgetItem*, int);
    using QWidgetItem_ControlTypes_Callback = int (*)(const QWidgetItem*);
    using QWidgetItem_Invalidate_Callback = void (*)(QWidgetItem*);
    using QWidgetItem_Layout_Callback = QLayout* (*)(QWidgetItem*);
    using QWidgetItem_SpacerItem_Callback = QSpacerItem* (*)(QWidgetItem*);

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

    VirtualQWidgetItem(QWidget* w) : QWidgetItem(w) {};

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwidgetitem_sizehint_callback) {
            QSize* callback_ret = qwidgetitem_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidgetItem::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qwidgetitem_minimumsize_callback) {
            QSize* callback_ret = qwidgetitem_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidgetItem::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qwidgetitem_maximumsize_callback) {
            QSize* callback_ret = qwidgetitem_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidgetItem::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qwidgetitem_expandingdirections_callback) {
            int callback_ret = qwidgetitem_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QWidgetItem::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qwidgetitem_isempty_callback) {
            bool callback_ret = qwidgetitem_isempty_callback(this);
            return callback_ret;
        }
        return QWidgetItem::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qwidgetitem_setgeometry_callback) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);
            qwidgetitem_setgeometry_callback(this, cbval1);
            return;
        }
        QWidgetItem::setGeometry(geometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qwidgetitem_geometry_callback) {
            QRect* callback_ret = qwidgetitem_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidgetItem::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qwidgetitem_widget_callback) {
            QWidget* callback_ret = qwidgetitem_widget_callback(this);
            return callback_ret;
        }
        return QWidgetItem::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwidgetitem_hasheightforwidth_callback) {
            bool callback_ret = qwidgetitem_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QWidgetItem::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qwidgetitem_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qwidgetitem_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWidgetItem::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qwidgetitem_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qwidgetitem_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWidgetItem::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qwidgetitem_controltypes_callback) {
            int callback_ret = qwidgetitem_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QWidgetItem::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qwidgetitem_invalidate_callback) {
            qwidgetitem_invalidate_callback(this);
            return;
        }
        QWidgetItem::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qwidgetitem_layout_callback) {
            QLayout* callback_ret = qwidgetitem_layout_callback(this);
            return callback_ret;
        }
        return QWidgetItem::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qwidgetitem_spaceritem_callback) {
            QSpacerItem* callback_ret = qwidgetitem_spaceritem_callback(this);
            return callback_ret;
        }
        return QWidgetItem::spacerItem();
    }
};

// This class is a subclass of QWidgetItemV2
class VirtualQWidgetItemV2 final : public QWidgetItemV2 {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWidgetItemV2_SizeHint_Callback = QSize* (*)(const QWidgetItemV2*);
    using QWidgetItemV2_MinimumSize_Callback = QSize* (*)(const QWidgetItemV2*);
    using QWidgetItemV2_MaximumSize_Callback = QSize* (*)(const QWidgetItemV2*);
    using QWidgetItemV2_HeightForWidth_Callback = int (*)(const QWidgetItemV2*, int);
    using QWidgetItemV2_ExpandingDirections_Callback = int (*)(const QWidgetItemV2*);
    using QWidgetItemV2_IsEmpty_Callback = bool (*)(const QWidgetItemV2*);
    using QWidgetItemV2_SetGeometry_Callback = void (*)(QWidgetItemV2*, QRect*);
    using QWidgetItemV2_Geometry_Callback = QRect* (*)(const QWidgetItemV2*);
    using QWidgetItemV2_Widget_Callback = QWidget* (*)(const QWidgetItemV2*);
    using QWidgetItemV2_HasHeightForWidth_Callback = bool (*)(const QWidgetItemV2*);
    using QWidgetItemV2_MinimumHeightForWidth_Callback = int (*)(const QWidgetItemV2*, int);
    using QWidgetItemV2_ControlTypes_Callback = int (*)(const QWidgetItemV2*);
    using QWidgetItemV2_Invalidate_Callback = void (*)(QWidgetItemV2*);
    using QWidgetItemV2_Layout_Callback = QLayout* (*)(QWidgetItemV2*);
    using QWidgetItemV2_SpacerItem_Callback = QSpacerItem* (*)(QWidgetItemV2*);

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

    VirtualQWidgetItemV2(QWidget* widget) : QWidgetItemV2(widget) {};

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwidgetitemv2_sizehint_callback) {
            QSize* callback_ret = qwidgetitemv2_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidgetItemV2::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qwidgetitemv2_minimumsize_callback) {
            QSize* callback_ret = qwidgetitemv2_minimumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidgetItemV2::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qwidgetitemv2_maximumsize_callback) {
            QSize* callback_ret = qwidgetitemv2_maximumsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidgetItemV2::maximumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (qwidgetitemv2_heightforwidth_callback) {
            int cbval1 = width;
            int callback_ret = qwidgetitemv2_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWidgetItemV2::heightForWidth(width);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qwidgetitemv2_expandingdirections_callback) {
            int callback_ret = qwidgetitemv2_expandingdirections_callback(this);
            return static_cast<Qt::Orientations>(callback_ret);
        }
        return QWidgetItemV2::expandingDirections();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qwidgetitemv2_isempty_callback) {
            bool callback_ret = qwidgetitemv2_isempty_callback(this);
            return callback_ret;
        }
        return QWidgetItemV2::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& geometry) override {
        if (qwidgetitemv2_setgeometry_callback) {
            const QRect& geometry_ret = geometry;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&geometry_ret);
            qwidgetitemv2_setgeometry_callback(this, cbval1);
            return;
        }
        QWidgetItemV2::setGeometry(geometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qwidgetitemv2_geometry_callback) {
            QRect* callback_ret = qwidgetitemv2_geometry_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidgetItemV2::geometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qwidgetitemv2_widget_callback) {
            QWidget* callback_ret = qwidgetitemv2_widget_callback(this);
            return callback_ret;
        }
        return QWidgetItemV2::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwidgetitemv2_hasheightforwidth_callback) {
            bool callback_ret = qwidgetitemv2_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QWidgetItemV2::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qwidgetitemv2_minimumheightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qwidgetitemv2_minimumheightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWidgetItemV2::minimumHeightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qwidgetitemv2_controltypes_callback) {
            int callback_ret = qwidgetitemv2_controltypes_callback(this);
            return static_cast<QSizePolicy::ControlTypes>(callback_ret);
        }
        return QWidgetItemV2::controlTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qwidgetitemv2_invalidate_callback) {
            qwidgetitemv2_invalidate_callback(this);
            return;
        }
        QWidgetItemV2::invalidate();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qwidgetitemv2_layout_callback) {
            QLayout* callback_ret = qwidgetitemv2_layout_callback(this);
            return callback_ret;
        }
        return QWidgetItemV2::layout();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qwidgetitemv2_spaceritem_callback) {
            QSpacerItem* callback_ret = qwidgetitemv2_spaceritem_callback(this);
            return callback_ret;
        }
        return QWidgetItemV2::spacerItem();
    }
};

#endif
