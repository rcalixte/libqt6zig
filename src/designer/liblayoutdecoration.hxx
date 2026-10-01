#pragma once
#ifndef DESIGNER_LIBLAYOUTDECORATION_HXX
#define DESIGNER_LIBLAYOUTDECORATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerLayoutDecorationExtension
class VirtualQDesignerLayoutDecorationExtension : public QDesignerLayoutDecorationExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerLayoutDecorationExtension_Widgets_Callback = libqt_list /* of QWidget* */ (*)(const QDesignerLayoutDecorationExtension*, QLayout*);
    using QDesignerLayoutDecorationExtension_ItemInfo_Callback = QRect* (*)(const QDesignerLayoutDecorationExtension*, int);
    using QDesignerLayoutDecorationExtension_IndexOf_Callback = int (*)(const QDesignerLayoutDecorationExtension*, QWidget*);
    using QDesignerLayoutDecorationExtension_IndexOf2_Callback = int (*)(const QDesignerLayoutDecorationExtension*, QLayoutItem*);
    using QDesignerLayoutDecorationExtension_CurrentInsertMode_Callback = int (*)(const QDesignerLayoutDecorationExtension*);
    using QDesignerLayoutDecorationExtension_CurrentIndex_Callback = int (*)(const QDesignerLayoutDecorationExtension*);
    using QDesignerLayoutDecorationExtension_CurrentCell_Callback = pair_int_int /* tuple of int and int */ (*)(const QDesignerLayoutDecorationExtension*);
    using QDesignerLayoutDecorationExtension_InsertWidget_Callback = void (*)(QDesignerLayoutDecorationExtension*, QWidget*, pair_int_int /* tuple of int and int */);
    using QDesignerLayoutDecorationExtension_RemoveWidget_Callback = void (*)(QDesignerLayoutDecorationExtension*, QWidget*);
    using QDesignerLayoutDecorationExtension_InsertRow_Callback = void (*)(QDesignerLayoutDecorationExtension*, int);
    using QDesignerLayoutDecorationExtension_InsertColumn_Callback = void (*)(QDesignerLayoutDecorationExtension*, int);
    using QDesignerLayoutDecorationExtension_Simplify_Callback = void (*)(QDesignerLayoutDecorationExtension*);
    using QDesignerLayoutDecorationExtension_FindItemAt_Callback = int (*)(const QDesignerLayoutDecorationExtension*, QPoint*);
    using QDesignerLayoutDecorationExtension_FindItemAt2_Callback = int (*)(const QDesignerLayoutDecorationExtension*, int, int);
    using QDesignerLayoutDecorationExtension_AdjustIndicator_Callback = void (*)(QDesignerLayoutDecorationExtension*, QPoint*, int);

    // Instance callback storage
    QDesignerLayoutDecorationExtension_Widgets_Callback qdesignerlayoutdecorationextension_widgets_callback = nullptr;
    QDesignerLayoutDecorationExtension_ItemInfo_Callback qdesignerlayoutdecorationextension_iteminfo_callback = nullptr;
    QDesignerLayoutDecorationExtension_IndexOf_Callback qdesignerlayoutdecorationextension_indexof_callback = nullptr;
    QDesignerLayoutDecorationExtension_IndexOf2_Callback qdesignerlayoutdecorationextension_indexof2_callback = nullptr;
    QDesignerLayoutDecorationExtension_CurrentInsertMode_Callback qdesignerlayoutdecorationextension_currentinsertmode_callback = nullptr;
    QDesignerLayoutDecorationExtension_CurrentIndex_Callback qdesignerlayoutdecorationextension_currentindex_callback = nullptr;
    QDesignerLayoutDecorationExtension_CurrentCell_Callback qdesignerlayoutdecorationextension_currentcell_callback = nullptr;
    QDesignerLayoutDecorationExtension_InsertWidget_Callback qdesignerlayoutdecorationextension_insertwidget_callback = nullptr;
    QDesignerLayoutDecorationExtension_RemoveWidget_Callback qdesignerlayoutdecorationextension_removewidget_callback = nullptr;
    QDesignerLayoutDecorationExtension_InsertRow_Callback qdesignerlayoutdecorationextension_insertrow_callback = nullptr;
    QDesignerLayoutDecorationExtension_InsertColumn_Callback qdesignerlayoutdecorationextension_insertcolumn_callback = nullptr;
    QDesignerLayoutDecorationExtension_Simplify_Callback qdesignerlayoutdecorationextension_simplify_callback = nullptr;
    QDesignerLayoutDecorationExtension_FindItemAt_Callback qdesignerlayoutdecorationextension_finditemat_callback = nullptr;
    QDesignerLayoutDecorationExtension_FindItemAt2_Callback qdesignerlayoutdecorationextension_finditemat2_callback = nullptr;
    QDesignerLayoutDecorationExtension_AdjustIndicator_Callback qdesignerlayoutdecorationextension_adjustindicator_callback = nullptr;

    VirtualQDesignerLayoutDecorationExtension() : QDesignerLayoutDecorationExtension() {};

    // Virtual method for C ABI access and custom callback
    virtual QList<QWidget*> widgets(QLayout* layout) const override {
        if (qdesignerlayoutdecorationextension_widgets_callback) {
            QLayout* cbval1 = layout;
            libqt_list /* of QWidget* */ callback_ret = qdesignerlayoutdecorationextension_widgets_callback(this, cbval1);
            QList<QWidget*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QWidget** callback_ret_arr = static_cast<QWidget**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::widgets called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemInfo(int index) const override {
        if (qdesignerlayoutdecorationextension_iteminfo_callback) {
            int cbval1 = index;
            QRect* callback_ret = qdesignerlayoutdecorationextension_iteminfo_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::itemInfo called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(QWidget* widget) const override {
        if (qdesignerlayoutdecorationextension_indexof_callback) {
            QWidget* cbval1 = widget;
            int callback_ret = qdesignerlayoutdecorationextension_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::indexOf called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(QLayoutItem* item) const override {
        if (qdesignerlayoutdecorationextension_indexof2_callback) {
            QLayoutItem* cbval1 = item;
            int callback_ret = qdesignerlayoutdecorationextension_indexof2_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::indexOf2 called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerLayoutDecorationExtension::InsertMode currentInsertMode() const override {
        if (qdesignerlayoutdecorationextension_currentinsertmode_callback) {
            int callback_ret = qdesignerlayoutdecorationextension_currentinsertmode_callback(this);
            return static_cast<QDesignerLayoutDecorationExtension::InsertMode>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::currentInsertMode called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int currentIndex() const override {
        if (qdesignerlayoutdecorationextension_currentindex_callback) {
            int callback_ret = qdesignerlayoutdecorationextension_currentindex_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::currentIndex called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QPair<int, int> currentCell() const override {
        if (qdesignerlayoutdecorationextension_currentcell_callback) {
            pair_int_int /* tuple of int and int */ callback_ret = qdesignerlayoutdecorationextension_currentcell_callback(this);
            QPair<int, int> callback_ret_QPair;
            callback_ret_QPair.first = callback_ret.first;
            callback_ret_QPair.second = callback_ret.second;
            return callback_ret_QPair;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::currentCell called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertWidget(QWidget* widget, const QPair<int, int>& cell) override {
        if (qdesignerlayoutdecorationextension_insertwidget_callback) {
            QWidget* cbval1 = widget;
            const QPair<int, int>& cell_ret = cell;
            // Convert QPair<> from C++ memory to manually-managed C memory
            pair_int_int /* tuple of int and int */ cell_out;
            cell_out.first = cell_ret.first;
            cell_out.second = cell_ret.second;
            pair_int_int /* tuple of int and int */ cbval2 = cell_out;
            qdesignerlayoutdecorationextension_insertwidget_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::insertWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeWidget(QWidget* widget) override {
        if (qdesignerlayoutdecorationextension_removewidget_callback) {
            QWidget* cbval1 = widget;
            qdesignerlayoutdecorationextension_removewidget_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::removeWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertRow(int row) override {
        if (qdesignerlayoutdecorationextension_insertrow_callback) {
            int cbval1 = row;
            qdesignerlayoutdecorationextension_insertrow_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::insertRow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertColumn(int column) override {
        if (qdesignerlayoutdecorationextension_insertcolumn_callback) {
            int cbval1 = column;
            qdesignerlayoutdecorationextension_insertcolumn_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::insertColumn called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void simplify() override {
        if (qdesignerlayoutdecorationextension_simplify_callback) {
            qdesignerlayoutdecorationextension_simplify_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::simplify called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int findItemAt(const QPoint& pos) const override {
        if (qdesignerlayoutdecorationextension_finditemat_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            int callback_ret = qdesignerlayoutdecorationextension_finditemat_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::findItemAt called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int findItemAt(int row, int column) const override {
        if (qdesignerlayoutdecorationextension_finditemat2_callback) {
            int cbval1 = row;
            int cbval2 = column;
            int callback_ret = qdesignerlayoutdecorationextension_finditemat2_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::findItemAt2 called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void adjustIndicator(const QPoint& pos, int index) override {
        if (qdesignerlayoutdecorationextension_adjustindicator_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            int cbval2 = index;
            qdesignerlayoutdecorationextension_adjustindicator_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerLayoutDecorationExtension::adjustIndicator called without being implemented");
    }
};

#endif
