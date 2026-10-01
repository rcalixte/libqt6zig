#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMWINDOWCURSOR_HXX
#define DESIGNER_LIBABSTRACTFORMWINDOWCURSOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerFormWindowCursorInterface
class VirtualQDesignerFormWindowCursorInterface : public QDesignerFormWindowCursorInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerFormWindowCursorInterface_FormWindow_Callback = QDesignerFormWindowInterface* (*)(const QDesignerFormWindowCursorInterface*);
    using QDesignerFormWindowCursorInterface_MovePosition_Callback = bool (*)(QDesignerFormWindowCursorInterface*, int, int);
    using QDesignerFormWindowCursorInterface_Position_Callback = int (*)(const QDesignerFormWindowCursorInterface*);
    using QDesignerFormWindowCursorInterface_SetPosition_Callback = void (*)(QDesignerFormWindowCursorInterface*, int, int);
    using QDesignerFormWindowCursorInterface_Current_Callback = QWidget* (*)(const QDesignerFormWindowCursorInterface*);
    using QDesignerFormWindowCursorInterface_WidgetCount_Callback = int (*)(const QDesignerFormWindowCursorInterface*);
    using QDesignerFormWindowCursorInterface_Widget_Callback = QWidget* (*)(const QDesignerFormWindowCursorInterface*, int);
    using QDesignerFormWindowCursorInterface_HasSelection_Callback = bool (*)(const QDesignerFormWindowCursorInterface*);
    using QDesignerFormWindowCursorInterface_SelectedWidgetCount_Callback = int (*)(const QDesignerFormWindowCursorInterface*);
    using QDesignerFormWindowCursorInterface_SelectedWidget_Callback = QWidget* (*)(const QDesignerFormWindowCursorInterface*, int);
    using QDesignerFormWindowCursorInterface_SetProperty_Callback = void (*)(QDesignerFormWindowCursorInterface*, const char*, QVariant*);
    using QDesignerFormWindowCursorInterface_SetWidgetProperty_Callback = void (*)(QDesignerFormWindowCursorInterface*, QWidget*, const char*, QVariant*);
    using QDesignerFormWindowCursorInterface_ResetWidgetProperty_Callback = void (*)(QDesignerFormWindowCursorInterface*, QWidget*, const char*);

    // Instance callback storage
    QDesignerFormWindowCursorInterface_FormWindow_Callback qdesignerformwindowcursorinterface_formwindow_callback = nullptr;
    QDesignerFormWindowCursorInterface_MovePosition_Callback qdesignerformwindowcursorinterface_moveposition_callback = nullptr;
    QDesignerFormWindowCursorInterface_Position_Callback qdesignerformwindowcursorinterface_position_callback = nullptr;
    QDesignerFormWindowCursorInterface_SetPosition_Callback qdesignerformwindowcursorinterface_setposition_callback = nullptr;
    QDesignerFormWindowCursorInterface_Current_Callback qdesignerformwindowcursorinterface_current_callback = nullptr;
    QDesignerFormWindowCursorInterface_WidgetCount_Callback qdesignerformwindowcursorinterface_widgetcount_callback = nullptr;
    QDesignerFormWindowCursorInterface_Widget_Callback qdesignerformwindowcursorinterface_widget_callback = nullptr;
    QDesignerFormWindowCursorInterface_HasSelection_Callback qdesignerformwindowcursorinterface_hasselection_callback = nullptr;
    QDesignerFormWindowCursorInterface_SelectedWidgetCount_Callback qdesignerformwindowcursorinterface_selectedwidgetcount_callback = nullptr;
    QDesignerFormWindowCursorInterface_SelectedWidget_Callback qdesignerformwindowcursorinterface_selectedwidget_callback = nullptr;
    QDesignerFormWindowCursorInterface_SetProperty_Callback qdesignerformwindowcursorinterface_setproperty_callback = nullptr;
    QDesignerFormWindowCursorInterface_SetWidgetProperty_Callback qdesignerformwindowcursorinterface_setwidgetproperty_callback = nullptr;
    QDesignerFormWindowCursorInterface_ResetWidgetProperty_Callback qdesignerformwindowcursorinterface_resetwidgetproperty_callback = nullptr;

    VirtualQDesignerFormWindowCursorInterface() : QDesignerFormWindowCursorInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* formWindow() const override {
        if (qdesignerformwindowcursorinterface_formwindow_callback) {
            QDesignerFormWindowInterface* callback_ret = qdesignerformwindowcursorinterface_formwindow_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::formWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool movePosition(QDesignerFormWindowCursorInterface::MoveOperation op, QDesignerFormWindowCursorInterface::MoveMode mode) override {
        if (qdesignerformwindowcursorinterface_moveposition_callback) {
            int cbval1 = static_cast<int>(op);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qdesignerformwindowcursorinterface_moveposition_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::movePosition called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int position() const override {
        if (qdesignerformwindowcursorinterface_position_callback) {
            int callback_ret = qdesignerformwindowcursorinterface_position_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::position called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPosition(int pos, QDesignerFormWindowCursorInterface::MoveMode mode) override {
        if (qdesignerformwindowcursorinterface_setposition_callback) {
            int cbval1 = pos;
            int cbval2 = static_cast<int>(mode);
            qdesignerformwindowcursorinterface_setposition_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::setPosition called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* current() const override {
        if (qdesignerformwindowcursorinterface_current_callback) {
            QWidget* callback_ret = qdesignerformwindowcursorinterface_current_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::current called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int widgetCount() const override {
        if (qdesignerformwindowcursorinterface_widgetcount_callback) {
            int callback_ret = qdesignerformwindowcursorinterface_widgetcount_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::widgetCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget(int index) const override {
        if (qdesignerformwindowcursorinterface_widget_callback) {
            int cbval1 = index;
            QWidget* callback_ret = qdesignerformwindowcursorinterface_widget_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::widget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasSelection() const override {
        if (qdesignerformwindowcursorinterface_hasselection_callback) {
            bool callback_ret = qdesignerformwindowcursorinterface_hasselection_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::hasSelection called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int selectedWidgetCount() const override {
        if (qdesignerformwindowcursorinterface_selectedwidgetcount_callback) {
            int callback_ret = qdesignerformwindowcursorinterface_selectedwidgetcount_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::selectedWidgetCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* selectedWidget(int index) const override {
        if (qdesignerformwindowcursorinterface_selectedwidget_callback) {
            int cbval1 = index;
            QWidget* callback_ret = qdesignerformwindowcursorinterface_selectedwidget_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::selectedWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QString& name, const QVariant& value) override {
        if (qdesignerformwindowcursorinterface_setproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qdesignerformwindowcursorinterface_setproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::setProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWidgetProperty(QWidget* widget, const QString& name, const QVariant& value) override {
        if (qdesignerformwindowcursorinterface_setwidgetproperty_callback) {
            QWidget* cbval1 = widget;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval2 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            qdesignerformwindowcursorinterface_setwidgetproperty_callback(this, cbval1, cbval2, cbval3);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::setWidgetProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetWidgetProperty(QWidget* widget, const QString& name) override {
        if (qdesignerformwindowcursorinterface_resetwidgetproperty_callback) {
            QWidget* cbval1 = widget;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval2 = name_str;
            qdesignerformwindowcursorinterface_resetwidgetproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowCursorInterface::resetWidgetProperty called without being implemented");
    }
};

#endif
