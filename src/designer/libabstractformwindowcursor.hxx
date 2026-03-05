#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMWINDOWCURSOR_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMWINDOWCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerFormWindowCursorInterface so that we can call protected methods
class VirtualQDesignerFormWindowCursorInterface : public QDesignerFormWindowCursorInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerFormWindowCursorInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerFormWindowCursorInterface_FormWindow_Callback = QDesignerFormWindowInterface* (*)();
    using QDesignerFormWindowCursorInterface_MovePosition_Callback = bool (*)(QDesignerFormWindowCursorInterface*, int, int);
    using QDesignerFormWindowCursorInterface_Position_Callback = int (*)();
    using QDesignerFormWindowCursorInterface_SetPosition_Callback = void (*)(QDesignerFormWindowCursorInterface*, int, int);
    using QDesignerFormWindowCursorInterface_Current_Callback = QWidget* (*)();
    using QDesignerFormWindowCursorInterface_WidgetCount_Callback = int (*)();
    using QDesignerFormWindowCursorInterface_Widget_Callback = QWidget* (*)(const QDesignerFormWindowCursorInterface*, int);
    using QDesignerFormWindowCursorInterface_HasSelection_Callback = bool (*)();
    using QDesignerFormWindowCursorInterface_SelectedWidgetCount_Callback = int (*)();
    using QDesignerFormWindowCursorInterface_SelectedWidget_Callback = QWidget* (*)(const QDesignerFormWindowCursorInterface*, int);
    using QDesignerFormWindowCursorInterface_SetProperty_Callback = void (*)(QDesignerFormWindowCursorInterface*, const char*, QVariant*);
    using QDesignerFormWindowCursorInterface_SetWidgetProperty_Callback = void (*)(QDesignerFormWindowCursorInterface*, QWidget*, const char*, QVariant*);
    using QDesignerFormWindowCursorInterface_ResetWidgetProperty_Callback = void (*)(QDesignerFormWindowCursorInterface*, QWidget*, const char*);

  protected:
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

    // Instance base flags
    mutable bool qdesignerformwindowcursorinterface_formwindow_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_moveposition_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_position_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_setposition_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_current_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_widgetcount_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_widget_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_hasselection_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_selectedwidgetcount_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_selectedwidget_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_setproperty_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_setwidgetproperty_isbase = false;
    mutable bool qdesignerformwindowcursorinterface_resetwidgetproperty_isbase = false;

  public:
    VirtualQDesignerFormWindowCursorInterface() : QDesignerFormWindowCursorInterface() {};

    // Callback setters
    inline void setQDesignerFormWindowCursorInterface_FormWindow_Callback(QDesignerFormWindowCursorInterface_FormWindow_Callback cb) { qdesignerformwindowcursorinterface_formwindow_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_MovePosition_Callback(QDesignerFormWindowCursorInterface_MovePosition_Callback cb) { qdesignerformwindowcursorinterface_moveposition_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_Position_Callback(QDesignerFormWindowCursorInterface_Position_Callback cb) { qdesignerformwindowcursorinterface_position_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_SetPosition_Callback(QDesignerFormWindowCursorInterface_SetPosition_Callback cb) { qdesignerformwindowcursorinterface_setposition_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_Current_Callback(QDesignerFormWindowCursorInterface_Current_Callback cb) { qdesignerformwindowcursorinterface_current_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_WidgetCount_Callback(QDesignerFormWindowCursorInterface_WidgetCount_Callback cb) { qdesignerformwindowcursorinterface_widgetcount_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_Widget_Callback(QDesignerFormWindowCursorInterface_Widget_Callback cb) { qdesignerformwindowcursorinterface_widget_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_HasSelection_Callback(QDesignerFormWindowCursorInterface_HasSelection_Callback cb) { qdesignerformwindowcursorinterface_hasselection_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_SelectedWidgetCount_Callback(QDesignerFormWindowCursorInterface_SelectedWidgetCount_Callback cb) { qdesignerformwindowcursorinterface_selectedwidgetcount_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_SelectedWidget_Callback(QDesignerFormWindowCursorInterface_SelectedWidget_Callback cb) { qdesignerformwindowcursorinterface_selectedwidget_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_SetProperty_Callback(QDesignerFormWindowCursorInterface_SetProperty_Callback cb) { qdesignerformwindowcursorinterface_setproperty_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_SetWidgetProperty_Callback(QDesignerFormWindowCursorInterface_SetWidgetProperty_Callback cb) { qdesignerformwindowcursorinterface_setwidgetproperty_callback = cb; }
    inline void setQDesignerFormWindowCursorInterface_ResetWidgetProperty_Callback(QDesignerFormWindowCursorInterface_ResetWidgetProperty_Callback cb) { qdesignerformwindowcursorinterface_resetwidgetproperty_callback = cb; }

    // Base flag setters
    inline void setQDesignerFormWindowCursorInterface_FormWindow_IsBase(bool value) const { qdesignerformwindowcursorinterface_formwindow_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_MovePosition_IsBase(bool value) const { qdesignerformwindowcursorinterface_moveposition_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_Position_IsBase(bool value) const { qdesignerformwindowcursorinterface_position_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_SetPosition_IsBase(bool value) const { qdesignerformwindowcursorinterface_setposition_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_Current_IsBase(bool value) const { qdesignerformwindowcursorinterface_current_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_WidgetCount_IsBase(bool value) const { qdesignerformwindowcursorinterface_widgetcount_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_Widget_IsBase(bool value) const { qdesignerformwindowcursorinterface_widget_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_HasSelection_IsBase(bool value) const { qdesignerformwindowcursorinterface_hasselection_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_SelectedWidgetCount_IsBase(bool value) const { qdesignerformwindowcursorinterface_selectedwidgetcount_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_SelectedWidget_IsBase(bool value) const { qdesignerformwindowcursorinterface_selectedwidget_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_SetProperty_IsBase(bool value) const { qdesignerformwindowcursorinterface_setproperty_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_SetWidgetProperty_IsBase(bool value) const { qdesignerformwindowcursorinterface_setwidgetproperty_isbase = value; }
    inline void setQDesignerFormWindowCursorInterface_ResetWidgetProperty_IsBase(bool value) const { qdesignerformwindowcursorinterface_resetwidgetproperty_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* formWindow() const override {
        auto formwindow_cb = qdesignerformwindowcursorinterface_formwindow_callback;
        if (formwindow_cb) {
            QDesignerFormWindowInterface* callback_ret = formwindow_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool movePosition(QDesignerFormWindowCursorInterface::MoveOperation op, QDesignerFormWindowCursorInterface::MoveMode mode) override {
        auto moveposition_cb = qdesignerformwindowcursorinterface_moveposition_callback;
        if (moveposition_cb) {
            int cbval1 = static_cast<int>(op);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = moveposition_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int position() const override {
        auto position_cb = qdesignerformwindowcursorinterface_position_callback;
        if (position_cb) {
            int callback_ret = position_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPosition(int pos, QDesignerFormWindowCursorInterface::MoveMode mode) override {
        auto setposition_cb = qdesignerformwindowcursorinterface_setposition_callback;
        if (setposition_cb) {
            int cbval1 = pos;
            int cbval2 = static_cast<int>(mode);

            setposition_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* current() const override {
        auto current_cb = qdesignerformwindowcursorinterface_current_callback;
        if (current_cb) {
            QWidget* callback_ret = current_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int widgetCount() const override {
        auto widgetcount_cb = qdesignerformwindowcursorinterface_widgetcount_callback;
        if (widgetcount_cb) {
            int callback_ret = widgetcount_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget(int index) const override {
        auto widget_cb = qdesignerformwindowcursorinterface_widget_callback;
        if (widget_cb) {
            int cbval1 = index;

            QWidget* callback_ret = widget_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasSelection() const override {
        auto hasselection_cb = qdesignerformwindowcursorinterface_hasselection_callback;
        if (hasselection_cb) {
            bool callback_ret = hasselection_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int selectedWidgetCount() const override {
        auto selectedwidgetcount_cb = qdesignerformwindowcursorinterface_selectedwidgetcount_callback;
        if (selectedwidgetcount_cb) {
            int callback_ret = selectedwidgetcount_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* selectedWidget(int index) const override {
        auto selectedwidget_cb = qdesignerformwindowcursorinterface_selectedwidget_callback;
        if (selectedwidget_cb) {
            int cbval1 = index;

            QWidget* callback_ret = selectedwidget_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QString& name, const QVariant& value) override {
        auto setproperty_cb = qdesignerformwindowcursorinterface_setproperty_callback;
        if (setproperty_cb) {
            const QString name_ret = name;
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

            setproperty_cb(this, cbval1, cbval2);
            libqt_free(name_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWidgetProperty(QWidget* widget, const QString& name, const QVariant& value) override {
        auto setwidgetproperty_cb = qdesignerformwindowcursorinterface_setwidgetproperty_callback;
        if (setwidgetproperty_cb) {
            QWidget* cbval1 = widget;
            const QString name_ret = name;
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

            setwidgetproperty_cb(this, cbval1, cbval2, cbval3);
            libqt_free(name_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetWidgetProperty(QWidget* widget, const QString& name) override {
        auto resetwidgetproperty_cb = qdesignerformwindowcursorinterface_resetwidgetproperty_callback;
        if (resetwidgetproperty_cb) {
            QWidget* cbval1 = widget;
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval2 = name_str;

            resetwidgetproperty_cb(this, cbval1, cbval2);
            libqt_free(name_str);
        }
    }
};

#endif
