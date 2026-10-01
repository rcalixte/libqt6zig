#pragma once
#ifndef DESIGNER_LIBCONTAINER_HXX
#define DESIGNER_LIBCONTAINER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerContainerExtension
class VirtualQDesignerContainerExtension : public QDesignerContainerExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerContainerExtension_Count_Callback = int (*)(const QDesignerContainerExtension*);
    using QDesignerContainerExtension_Widget_Callback = QWidget* (*)(const QDesignerContainerExtension*, int);
    using QDesignerContainerExtension_CurrentIndex_Callback = int (*)(const QDesignerContainerExtension*);
    using QDesignerContainerExtension_SetCurrentIndex_Callback = void (*)(QDesignerContainerExtension*, int);
    using QDesignerContainerExtension_CanAddWidget_Callback = bool (*)(const QDesignerContainerExtension*);
    using QDesignerContainerExtension_AddWidget_Callback = void (*)(QDesignerContainerExtension*, QWidget*);
    using QDesignerContainerExtension_InsertWidget_Callback = void (*)(QDesignerContainerExtension*, int, QWidget*);
    using QDesignerContainerExtension_CanRemove_Callback = bool (*)(const QDesignerContainerExtension*, int);
    using QDesignerContainerExtension_Remove_Callback = void (*)(QDesignerContainerExtension*, int);

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

    VirtualQDesignerContainerExtension() : QDesignerContainerExtension() {};

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qdesignercontainerextension_count_callback) {
            int callback_ret = qdesignercontainerextension_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerContainerExtension::count called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget(int index) const override {
        if (qdesignercontainerextension_widget_callback) {
            int cbval1 = index;
            QWidget* callback_ret = qdesignercontainerextension_widget_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerContainerExtension::widget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int currentIndex() const override {
        if (qdesignercontainerextension_currentindex_callback) {
            int callback_ret = qdesignercontainerextension_currentindex_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerContainerExtension::currentIndex called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(int index) override {
        if (qdesignercontainerextension_setcurrentindex_callback) {
            int cbval1 = index;
            qdesignercontainerextension_setcurrentindex_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerContainerExtension::setCurrentIndex called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canAddWidget() const override {
        if (qdesignercontainerextension_canaddwidget_callback) {
            bool callback_ret = qdesignercontainerextension_canaddwidget_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerContainerExtension::canAddWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void addWidget(QWidget* widget) override {
        if (qdesignercontainerextension_addwidget_callback) {
            QWidget* cbval1 = widget;
            qdesignercontainerextension_addwidget_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerContainerExtension::addWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertWidget(int index, QWidget* widget) override {
        if (qdesignercontainerextension_insertwidget_callback) {
            int cbval1 = index;
            QWidget* cbval2 = widget;
            qdesignercontainerextension_insertwidget_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerContainerExtension::insertWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canRemove(int index) const override {
        if (qdesignercontainerextension_canremove_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignercontainerextension_canremove_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerContainerExtension::canRemove called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void remove(int index) override {
        if (qdesignercontainerextension_remove_callback) {
            int cbval1 = index;
            qdesignercontainerextension_remove_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerContainerExtension::remove called without being implemented");
    }
};

#endif
