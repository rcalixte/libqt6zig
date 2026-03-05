#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALLAYOUTDECORATION_H
#define SRC_DESIGNERC_LIBVIRTUALLAYOUTDECORATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerLayoutDecorationExtension so that we can call protected methods
class VirtualQDesignerLayoutDecorationExtension : public QDesignerLayoutDecorationExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerLayoutDecorationExtension = true;

    // Virtual class public types (including callbacks)
    using QDesignerLayoutDecorationExtension_Widgets_Callback = libqt_list /* of QWidget* */ (*)(const QDesignerLayoutDecorationExtension*, QLayout*);
    using QDesignerLayoutDecorationExtension_ItemInfo_Callback = QRect* (*)(const QDesignerLayoutDecorationExtension*, int);
    using QDesignerLayoutDecorationExtension_IndexOf_Callback = int (*)(const QDesignerLayoutDecorationExtension*, QWidget*);
    using QDesignerLayoutDecorationExtension_IndexOf2_Callback = int (*)(const QDesignerLayoutDecorationExtension*, QLayoutItem*);
    using QDesignerLayoutDecorationExtension_CurrentInsertMode_Callback = int (*)();
    using QDesignerLayoutDecorationExtension_CurrentIndex_Callback = int (*)();
    using QDesignerLayoutDecorationExtension_CurrentCell_Callback = pair_int_int /* tuple of int and int */ (*)();
    using QDesignerLayoutDecorationExtension_InsertWidget_Callback = void (*)(QDesignerLayoutDecorationExtension*, QWidget*, pair_int_int /* tuple of int and int */);
    using QDesignerLayoutDecorationExtension_RemoveWidget_Callback = void (*)(QDesignerLayoutDecorationExtension*, QWidget*);
    using QDesignerLayoutDecorationExtension_InsertRow_Callback = void (*)(QDesignerLayoutDecorationExtension*, int);
    using QDesignerLayoutDecorationExtension_InsertColumn_Callback = void (*)(QDesignerLayoutDecorationExtension*, int);
    using QDesignerLayoutDecorationExtension_Simplify_Callback = void (*)();
    using QDesignerLayoutDecorationExtension_FindItemAt_Callback = int (*)(const QDesignerLayoutDecorationExtension*, QPoint*);
    using QDesignerLayoutDecorationExtension_FindItemAt2_Callback = int (*)(const QDesignerLayoutDecorationExtension*, int, int);
    using QDesignerLayoutDecorationExtension_AdjustIndicator_Callback = void (*)(QDesignerLayoutDecorationExtension*, QPoint*, int);

  protected:
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

    // Instance base flags
    mutable bool qdesignerlayoutdecorationextension_widgets_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_iteminfo_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_indexof_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_indexof2_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_currentinsertmode_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_currentindex_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_currentcell_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_insertwidget_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_removewidget_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_insertrow_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_insertcolumn_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_simplify_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_finditemat_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_finditemat2_isbase = false;
    mutable bool qdesignerlayoutdecorationextension_adjustindicator_isbase = false;

  public:
    VirtualQDesignerLayoutDecorationExtension() : QDesignerLayoutDecorationExtension() {};

    // Callback setters
    inline void setQDesignerLayoutDecorationExtension_Widgets_Callback(QDesignerLayoutDecorationExtension_Widgets_Callback cb) { qdesignerlayoutdecorationextension_widgets_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_ItemInfo_Callback(QDesignerLayoutDecorationExtension_ItemInfo_Callback cb) { qdesignerlayoutdecorationextension_iteminfo_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_IndexOf_Callback(QDesignerLayoutDecorationExtension_IndexOf_Callback cb) { qdesignerlayoutdecorationextension_indexof_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_IndexOf2_Callback(QDesignerLayoutDecorationExtension_IndexOf2_Callback cb) { qdesignerlayoutdecorationextension_indexof2_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_CurrentInsertMode_Callback(QDesignerLayoutDecorationExtension_CurrentInsertMode_Callback cb) { qdesignerlayoutdecorationextension_currentinsertmode_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_CurrentIndex_Callback(QDesignerLayoutDecorationExtension_CurrentIndex_Callback cb) { qdesignerlayoutdecorationextension_currentindex_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_CurrentCell_Callback(QDesignerLayoutDecorationExtension_CurrentCell_Callback cb) { qdesignerlayoutdecorationextension_currentcell_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_InsertWidget_Callback(QDesignerLayoutDecorationExtension_InsertWidget_Callback cb) { qdesignerlayoutdecorationextension_insertwidget_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_RemoveWidget_Callback(QDesignerLayoutDecorationExtension_RemoveWidget_Callback cb) { qdesignerlayoutdecorationextension_removewidget_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_InsertRow_Callback(QDesignerLayoutDecorationExtension_InsertRow_Callback cb) { qdesignerlayoutdecorationextension_insertrow_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_InsertColumn_Callback(QDesignerLayoutDecorationExtension_InsertColumn_Callback cb) { qdesignerlayoutdecorationextension_insertcolumn_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_Simplify_Callback(QDesignerLayoutDecorationExtension_Simplify_Callback cb) { qdesignerlayoutdecorationextension_simplify_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_FindItemAt_Callback(QDesignerLayoutDecorationExtension_FindItemAt_Callback cb) { qdesignerlayoutdecorationextension_finditemat_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_FindItemAt2_Callback(QDesignerLayoutDecorationExtension_FindItemAt2_Callback cb) { qdesignerlayoutdecorationextension_finditemat2_callback = cb; }
    inline void setQDesignerLayoutDecorationExtension_AdjustIndicator_Callback(QDesignerLayoutDecorationExtension_AdjustIndicator_Callback cb) { qdesignerlayoutdecorationextension_adjustindicator_callback = cb; }

    // Base flag setters
    inline void setQDesignerLayoutDecorationExtension_Widgets_IsBase(bool value) const { qdesignerlayoutdecorationextension_widgets_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_ItemInfo_IsBase(bool value) const { qdesignerlayoutdecorationextension_iteminfo_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_IndexOf_IsBase(bool value) const { qdesignerlayoutdecorationextension_indexof_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_IndexOf2_IsBase(bool value) const { qdesignerlayoutdecorationextension_indexof2_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_CurrentInsertMode_IsBase(bool value) const { qdesignerlayoutdecorationextension_currentinsertmode_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_CurrentIndex_IsBase(bool value) const { qdesignerlayoutdecorationextension_currentindex_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_CurrentCell_IsBase(bool value) const { qdesignerlayoutdecorationextension_currentcell_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_InsertWidget_IsBase(bool value) const { qdesignerlayoutdecorationextension_insertwidget_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_RemoveWidget_IsBase(bool value) const { qdesignerlayoutdecorationextension_removewidget_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_InsertRow_IsBase(bool value) const { qdesignerlayoutdecorationextension_insertrow_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_InsertColumn_IsBase(bool value) const { qdesignerlayoutdecorationextension_insertcolumn_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_Simplify_IsBase(bool value) const { qdesignerlayoutdecorationextension_simplify_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_FindItemAt_IsBase(bool value) const { qdesignerlayoutdecorationextension_finditemat_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_FindItemAt2_IsBase(bool value) const { qdesignerlayoutdecorationextension_finditemat2_isbase = value; }
    inline void setQDesignerLayoutDecorationExtension_AdjustIndicator_IsBase(bool value) const { qdesignerlayoutdecorationextension_adjustindicator_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QList<QWidget*> widgets(QLayout* layout) const override {
        auto widgets_cb = qdesignerlayoutdecorationextension_widgets_callback;
        if (widgets_cb) {
            QLayout* cbval1 = layout;

            libqt_list /* of QWidget* */ callback_ret = widgets_cb(this, cbval1);
            QList<QWidget*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QWidget** callback_ret_arr = static_cast<QWidget**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemInfo(int index) const override {
        auto iteminfo_cb = qdesignerlayoutdecorationextension_iteminfo_callback;
        if (iteminfo_cb) {
            int cbval1 = index;

            QRect* callback_ret = iteminfo_cb(this, cbval1);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(QWidget* widget) const override {
        auto indexof_cb = qdesignerlayoutdecorationextension_indexof_callback;
        if (indexof_cb) {
            QWidget* cbval1 = widget;

            int callback_ret = indexof_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(QLayoutItem* item) const override {
        auto indexof2_cb = qdesignerlayoutdecorationextension_indexof2_callback;
        if (indexof2_cb) {
            QLayoutItem* cbval1 = item;

            int callback_ret = indexof2_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerLayoutDecorationExtension::InsertMode currentInsertMode() const override {
        auto currentinsertmode_cb = qdesignerlayoutdecorationextension_currentinsertmode_callback;
        if (currentinsertmode_cb) {
            int callback_ret = currentinsertmode_cb();
            return static_cast<QDesignerLayoutDecorationExtension::InsertMode>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int currentIndex() const override {
        auto currentindex_cb = qdesignerlayoutdecorationextension_currentindex_callback;
        if (currentindex_cb) {
            int callback_ret = currentindex_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QPair<int, int> currentCell() const override {
        auto currentcell_cb = qdesignerlayoutdecorationextension_currentcell_callback;
        if (currentcell_cb) {
            pair_int_int /* tuple of int and int */ callback_ret = currentcell_cb();
            QPair<int, int> callback_ret_QPair;
            callback_ret_QPair.first = callback_ret.first;
            callback_ret_QPair.second = callback_ret.second;
            return callback_ret_QPair;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertWidget(QWidget* widget, const QPair<int, int>& cell) override {
        auto insertwidget_cb = qdesignerlayoutdecorationextension_insertwidget_callback;
        if (insertwidget_cb) {
            QWidget* cbval1 = widget;
            const QPair<int, int>& cell_ret = cell;
            // Convert QPair<> from C++ memory to manually-managed C memory
            pair_int_int /* tuple of int and int */ cell_out;
            cell_out.first = cell_ret.first;
            cell_out.second = cell_ret.second;
            pair_int_int /* tuple of int and int */ cbval2 = cell_out;

            insertwidget_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeWidget(QWidget* widget) override {
        auto removewidget_cb = qdesignerlayoutdecorationextension_removewidget_callback;
        if (removewidget_cb) {
            QWidget* cbval1 = widget;

            removewidget_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertRow(int row) override {
        auto insertrow_cb = qdesignerlayoutdecorationextension_insertrow_callback;
        if (insertrow_cb) {
            int cbval1 = row;

            insertrow_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertColumn(int column) override {
        auto insertcolumn_cb = qdesignerlayoutdecorationextension_insertcolumn_callback;
        if (insertcolumn_cb) {
            int cbval1 = column;

            insertcolumn_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void simplify() override {
        auto simplify_cb = qdesignerlayoutdecorationextension_simplify_callback;
        if (simplify_cb) {
            simplify_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int findItemAt(const QPoint& pos) const override {
        auto finditemat_cb = qdesignerlayoutdecorationextension_finditemat_callback;
        if (finditemat_cb) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            int callback_ret = finditemat_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int findItemAt(int row, int column) const override {
        auto finditemat2_cb = qdesignerlayoutdecorationextension_finditemat2_callback;
        if (finditemat2_cb) {
            int cbval1 = row;
            int cbval2 = column;

            int callback_ret = finditemat2_cb(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void adjustIndicator(const QPoint& pos, int index) override {
        auto adjustindicator_cb = qdesignerlayoutdecorationextension_adjustindicator_callback;
        if (adjustindicator_cb) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            int cbval2 = index;

            adjustindicator_cb(this, cbval1, cbval2);
        }
    }
};

#endif
