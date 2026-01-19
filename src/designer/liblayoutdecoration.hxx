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
    using QDesignerLayoutDecorationExtension_Widgets_Callback = QWidget** (*)(const QDesignerLayoutDecorationExtension*, QLayout*);
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

    ~VirtualQDesignerLayoutDecorationExtension() {
        qdesignerlayoutdecorationextension_widgets_callback = nullptr;
        qdesignerlayoutdecorationextension_iteminfo_callback = nullptr;
        qdesignerlayoutdecorationextension_indexof_callback = nullptr;
        qdesignerlayoutdecorationextension_indexof2_callback = nullptr;
        qdesignerlayoutdecorationextension_currentinsertmode_callback = nullptr;
        qdesignerlayoutdecorationextension_currentindex_callback = nullptr;
        qdesignerlayoutdecorationextension_currentcell_callback = nullptr;
        qdesignerlayoutdecorationextension_insertwidget_callback = nullptr;
        qdesignerlayoutdecorationextension_removewidget_callback = nullptr;
        qdesignerlayoutdecorationextension_insertrow_callback = nullptr;
        qdesignerlayoutdecorationextension_insertcolumn_callback = nullptr;
        qdesignerlayoutdecorationextension_simplify_callback = nullptr;
        qdesignerlayoutdecorationextension_finditemat_callback = nullptr;
        qdesignerlayoutdecorationextension_finditemat2_callback = nullptr;
        qdesignerlayoutdecorationextension_adjustindicator_callback = nullptr;
    }

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
        if (qdesignerlayoutdecorationextension_widgets_callback != nullptr) {
            QLayout* cbval1 = layout;

            QWidget** callback_ret = qdesignerlayoutdecorationextension_widgets_callback(this, cbval1);
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemInfo(int index) const override {
        if (qdesignerlayoutdecorationextension_iteminfo_callback != nullptr) {
            int cbval1 = index;

            QRect* callback_ret = qdesignerlayoutdecorationextension_iteminfo_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(QWidget* widget) const override {
        if (qdesignerlayoutdecorationextension_indexof_callback != nullptr) {
            QWidget* cbval1 = widget;

            int callback_ret = qdesignerlayoutdecorationextension_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(QLayoutItem* item) const override {
        if (qdesignerlayoutdecorationextension_indexof2_callback != nullptr) {
            QLayoutItem* cbval1 = item;

            int callback_ret = qdesignerlayoutdecorationextension_indexof2_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerLayoutDecorationExtension::InsertMode currentInsertMode() const override {
        if (qdesignerlayoutdecorationextension_currentinsertmode_callback != nullptr) {
            int callback_ret = qdesignerlayoutdecorationextension_currentinsertmode_callback();
            return static_cast<QDesignerLayoutDecorationExtension::InsertMode>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int currentIndex() const override {
        if (qdesignerlayoutdecorationextension_currentindex_callback != nullptr) {
            int callback_ret = qdesignerlayoutdecorationextension_currentindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPair<int, int> currentCell() const override {
        if (qdesignerlayoutdecorationextension_currentcell_callback != nullptr) {
            pair_int_int /* tuple of int and int */ callback_ret = qdesignerlayoutdecorationextension_currentcell_callback();
            QPair<int, int> callback_ret_QPair;
            callback_ret_QPair.first = callback_ret.first;
            callback_ret_QPair.second = callback_ret.second;
            return callback_ret_QPair;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertWidget(QWidget* widget, const QPair<int, int>& cell) override {
        if (qdesignerlayoutdecorationextension_insertwidget_callback != nullptr) {
            QWidget* cbval1 = widget;
            const QPair<int, int>& cell_ret = cell;
            // Convert QPair<> from C++ memory to manually-managed C memory
            pair_int_int /* tuple of int and int */ cell_out;
            cell_out.first = cell_ret.first;
            cell_out.second = cell_ret.second;
            pair_int_int /* tuple of int and int */ cbval2 = cell_out;

            qdesignerlayoutdecorationextension_insertwidget_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeWidget(QWidget* widget) override {
        if (qdesignerlayoutdecorationextension_removewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            qdesignerlayoutdecorationextension_removewidget_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertRow(int row) override {
        if (qdesignerlayoutdecorationextension_insertrow_callback != nullptr) {
            int cbval1 = row;

            qdesignerlayoutdecorationextension_insertrow_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertColumn(int column) override {
        if (qdesignerlayoutdecorationextension_insertcolumn_callback != nullptr) {
            int cbval1 = column;

            qdesignerlayoutdecorationextension_insertcolumn_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void simplify() override {
        if (qdesignerlayoutdecorationextension_simplify_callback != nullptr) {
            qdesignerlayoutdecorationextension_simplify_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int findItemAt(const QPoint& pos) const override {
        if (qdesignerlayoutdecorationextension_finditemat_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            int callback_ret = qdesignerlayoutdecorationextension_finditemat_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int findItemAt(int row, int column) const override {
        if (qdesignerlayoutdecorationextension_finditemat2_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            int callback_ret = qdesignerlayoutdecorationextension_finditemat2_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void adjustIndicator(const QPoint& pos, int index) override {
        if (qdesignerlayoutdecorationextension_adjustindicator_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            int cbval2 = index;

            qdesignerlayoutdecorationextension_adjustindicator_callback(this, cbval1, cbval2);
        }
    }
};

#endif
