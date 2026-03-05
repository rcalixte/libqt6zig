#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALCONTAINER_H
#define SRC_DESIGNERC_LIBVIRTUALCONTAINER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerContainerExtension so that we can call protected methods
class VirtualQDesignerContainerExtension : public QDesignerContainerExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerContainerExtension = true;

    // Virtual class public types (including callbacks)
    using QDesignerContainerExtension_Count_Callback = int (*)();
    using QDesignerContainerExtension_Widget_Callback = QWidget* (*)(const QDesignerContainerExtension*, int);
    using QDesignerContainerExtension_CurrentIndex_Callback = int (*)();
    using QDesignerContainerExtension_SetCurrentIndex_Callback = void (*)(QDesignerContainerExtension*, int);
    using QDesignerContainerExtension_CanAddWidget_Callback = bool (*)();
    using QDesignerContainerExtension_AddWidget_Callback = void (*)(QDesignerContainerExtension*, QWidget*);
    using QDesignerContainerExtension_InsertWidget_Callback = void (*)(QDesignerContainerExtension*, int, QWidget*);
    using QDesignerContainerExtension_CanRemove_Callback = bool (*)(const QDesignerContainerExtension*, int);
    using QDesignerContainerExtension_Remove_Callback = void (*)(QDesignerContainerExtension*, int);

  protected:
    // Instance callback storage
    QDesignerContainerExtension_Count_Callback qdesignercontainerextension_count_callback = nullptr;
    QDesignerContainerExtension_Widget_Callback qdesignercontainerextension_widget_callback = nullptr;
    QDesignerContainerExtension_CurrentIndex_Callback qdesignercontainerextension_currentindex_callback = nullptr;
    QDesignerContainerExtension_SetCurrentIndex_Callback qdesignercontainerextension_setcurrentindex_callback = nullptr;
    QDesignerContainerExtension_CanAddWidget_Callback qdesignercontainerextension_canaddwidget_callback = nullptr;
    QDesignerContainerExtension_AddWidget_Callback qdesignercontainerextension_addwidget_callback = nullptr;
    QDesignerContainerExtension_InsertWidget_Callback qdesignercontainerextension_insertwidget_callback = nullptr;
    QDesignerContainerExtension_CanRemove_Callback qdesignercontainerextension_canremove_callback = nullptr;
    QDesignerContainerExtension_Remove_Callback qdesignercontainerextension_remove_callback = nullptr;

    // Instance base flags
    mutable bool qdesignercontainerextension_count_isbase = false;
    mutable bool qdesignercontainerextension_widget_isbase = false;
    mutable bool qdesignercontainerextension_currentindex_isbase = false;
    mutable bool qdesignercontainerextension_setcurrentindex_isbase = false;
    mutable bool qdesignercontainerextension_canaddwidget_isbase = false;
    mutable bool qdesignercontainerextension_addwidget_isbase = false;
    mutable bool qdesignercontainerextension_insertwidget_isbase = false;
    mutable bool qdesignercontainerextension_canremove_isbase = false;
    mutable bool qdesignercontainerextension_remove_isbase = false;

  public:
    VirtualQDesignerContainerExtension() : QDesignerContainerExtension() {};

    // Callback setters
    inline void setQDesignerContainerExtension_Count_Callback(QDesignerContainerExtension_Count_Callback cb) { qdesignercontainerextension_count_callback = cb; }
    inline void setQDesignerContainerExtension_Widget_Callback(QDesignerContainerExtension_Widget_Callback cb) { qdesignercontainerextension_widget_callback = cb; }
    inline void setQDesignerContainerExtension_CurrentIndex_Callback(QDesignerContainerExtension_CurrentIndex_Callback cb) { qdesignercontainerextension_currentindex_callback = cb; }
    inline void setQDesignerContainerExtension_SetCurrentIndex_Callback(QDesignerContainerExtension_SetCurrentIndex_Callback cb) { qdesignercontainerextension_setcurrentindex_callback = cb; }
    inline void setQDesignerContainerExtension_CanAddWidget_Callback(QDesignerContainerExtension_CanAddWidget_Callback cb) { qdesignercontainerextension_canaddwidget_callback = cb; }
    inline void setQDesignerContainerExtension_AddWidget_Callback(QDesignerContainerExtension_AddWidget_Callback cb) { qdesignercontainerextension_addwidget_callback = cb; }
    inline void setQDesignerContainerExtension_InsertWidget_Callback(QDesignerContainerExtension_InsertWidget_Callback cb) { qdesignercontainerextension_insertwidget_callback = cb; }
    inline void setQDesignerContainerExtension_CanRemove_Callback(QDesignerContainerExtension_CanRemove_Callback cb) { qdesignercontainerextension_canremove_callback = cb; }
    inline void setQDesignerContainerExtension_Remove_Callback(QDesignerContainerExtension_Remove_Callback cb) { qdesignercontainerextension_remove_callback = cb; }

    // Base flag setters
    inline void setQDesignerContainerExtension_Count_IsBase(bool value) const { qdesignercontainerextension_count_isbase = value; }
    inline void setQDesignerContainerExtension_Widget_IsBase(bool value) const { qdesignercontainerextension_widget_isbase = value; }
    inline void setQDesignerContainerExtension_CurrentIndex_IsBase(bool value) const { qdesignercontainerextension_currentindex_isbase = value; }
    inline void setQDesignerContainerExtension_SetCurrentIndex_IsBase(bool value) const { qdesignercontainerextension_setcurrentindex_isbase = value; }
    inline void setQDesignerContainerExtension_CanAddWidget_IsBase(bool value) const { qdesignercontainerextension_canaddwidget_isbase = value; }
    inline void setQDesignerContainerExtension_AddWidget_IsBase(bool value) const { qdesignercontainerextension_addwidget_isbase = value; }
    inline void setQDesignerContainerExtension_InsertWidget_IsBase(bool value) const { qdesignercontainerextension_insertwidget_isbase = value; }
    inline void setQDesignerContainerExtension_CanRemove_IsBase(bool value) const { qdesignercontainerextension_canremove_isbase = value; }
    inline void setQDesignerContainerExtension_Remove_IsBase(bool value) const { qdesignercontainerextension_remove_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        auto count_cb = qdesignercontainerextension_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget(int index) const override {
        auto widget_cb = qdesignercontainerextension_widget_callback;
        if (widget_cb) {
            int cbval1 = index;

            QWidget* callback_ret = widget_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int currentIndex() const override {
        auto currentindex_cb = qdesignercontainerextension_currentindex_callback;
        if (currentindex_cb) {
            int callback_ret = currentindex_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(int index) override {
        auto setcurrentindex_cb = qdesignercontainerextension_setcurrentindex_callback;
        if (setcurrentindex_cb) {
            int cbval1 = index;

            setcurrentindex_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canAddWidget() const override {
        auto canaddwidget_cb = qdesignercontainerextension_canaddwidget_callback;
        if (canaddwidget_cb) {
            bool callback_ret = canaddwidget_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void addWidget(QWidget* widget) override {
        auto addwidget_cb = qdesignercontainerextension_addwidget_callback;
        if (addwidget_cb) {
            QWidget* cbval1 = widget;

            addwidget_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertWidget(int index, QWidget* widget) override {
        auto insertwidget_cb = qdesignercontainerextension_insertwidget_callback;
        if (insertwidget_cb) {
            int cbval1 = index;
            QWidget* cbval2 = widget;

            insertwidget_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canRemove(int index) const override {
        auto canremove_cb = qdesignercontainerextension_canremove_callback;
        if (canremove_cb) {
            int cbval1 = index;

            bool callback_ret = canremove_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void remove(int index) override {
        auto remove_cb = qdesignercontainerextension_remove_callback;
        if (remove_cb) {
            int cbval1 = index;

            remove_cb(this, cbval1);
        }
    }
};

#endif
