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

    ~VirtualQDesignerContainerExtension() {
        qdesignercontainerextension_count_callback = nullptr;
        qdesignercontainerextension_widget_callback = nullptr;
        qdesignercontainerextension_currentindex_callback = nullptr;
        qdesignercontainerextension_setcurrentindex_callback = nullptr;
        qdesignercontainerextension_canaddwidget_callback = nullptr;
        qdesignercontainerextension_addwidget_callback = nullptr;
        qdesignercontainerextension_insertwidget_callback = nullptr;
        qdesignercontainerextension_canremove_callback = nullptr;
        qdesignercontainerextension_remove_callback = nullptr;
    }

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
        if (qdesignercontainerextension_count_callback != nullptr) {
            int callback_ret = qdesignercontainerextension_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget(int index) const override {
        if (qdesignercontainerextension_widget_callback != nullptr) {
            int cbval1 = index;

            QWidget* callback_ret = qdesignercontainerextension_widget_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int currentIndex() const override {
        if (qdesignercontainerextension_currentindex_callback != nullptr) {
            int callback_ret = qdesignercontainerextension_currentindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(int index) override {
        if (qdesignercontainerextension_setcurrentindex_callback != nullptr) {
            int cbval1 = index;

            qdesignercontainerextension_setcurrentindex_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canAddWidget() const override {
        if (qdesignercontainerextension_canaddwidget_callback != nullptr) {
            bool callback_ret = qdesignercontainerextension_canaddwidget_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addWidget(QWidget* widget) override {
        if (qdesignercontainerextension_addwidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            qdesignercontainerextension_addwidget_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertWidget(int index, QWidget* widget) override {
        if (qdesignercontainerextension_insertwidget_callback != nullptr) {
            int cbval1 = index;
            QWidget* cbval2 = widget;

            qdesignercontainerextension_insertwidget_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canRemove(int index) const override {
        if (qdesignercontainerextension_canremove_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignercontainerextension_canremove_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void remove(int index) override {
        if (qdesignercontainerextension_remove_callback != nullptr) {
            int cbval1 = index;

            qdesignercontainerextension_remove_callback(this, cbval1);
        }
    }
};

#endif
