#pragma once
#ifndef DESIGNER_LIBPROPERTYSHEET_HXX
#define DESIGNER_LIBPROPERTYSHEET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerPropertySheetExtension
class VirtualQDesignerPropertySheetExtension : public QDesignerPropertySheetExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerPropertySheetExtension_Count_Callback = int (*)(const QDesignerPropertySheetExtension*);
    using QDesignerPropertySheetExtension_IndexOf_Callback = int (*)(const QDesignerPropertySheetExtension*, const char*);
    using QDesignerPropertySheetExtension_PropertyName_Callback = const char* (*)(const QDesignerPropertySheetExtension*, int);
    using QDesignerPropertySheetExtension_PropertyGroup_Callback = const char* (*)(const QDesignerPropertySheetExtension*, int);
    using QDesignerPropertySheetExtension_SetPropertyGroup_Callback = void (*)(QDesignerPropertySheetExtension*, int, const char*);
    using QDesignerPropertySheetExtension_HasReset_Callback = bool (*)(const QDesignerPropertySheetExtension*, int);
    using QDesignerPropertySheetExtension_Reset_Callback = bool (*)(QDesignerPropertySheetExtension*, int);
    using QDesignerPropertySheetExtension_IsVisible_Callback = bool (*)(const QDesignerPropertySheetExtension*, int);
    using QDesignerPropertySheetExtension_SetVisible_Callback = void (*)(QDesignerPropertySheetExtension*, int, bool);
    using QDesignerPropertySheetExtension_IsAttribute_Callback = bool (*)(const QDesignerPropertySheetExtension*, int);
    using QDesignerPropertySheetExtension_SetAttribute_Callback = void (*)(QDesignerPropertySheetExtension*, int, bool);
    using QDesignerPropertySheetExtension_Property_Callback = QVariant* (*)(const QDesignerPropertySheetExtension*, int);
    using QDesignerPropertySheetExtension_SetProperty_Callback = void (*)(QDesignerPropertySheetExtension*, int, QVariant*);
    using QDesignerPropertySheetExtension_IsChanged_Callback = bool (*)(const QDesignerPropertySheetExtension*, int);
    using QDesignerPropertySheetExtension_SetChanged_Callback = void (*)(QDesignerPropertySheetExtension*, int, bool);
    using QDesignerPropertySheetExtension_IsEnabled_Callback = bool (*)(const QDesignerPropertySheetExtension*, int);

    // Instance callback storage
    QDesignerPropertySheetExtension_Count_Callback qdesignerpropertysheetextension_count_callback = nullptr;
    QDesignerPropertySheetExtension_IndexOf_Callback qdesignerpropertysheetextension_indexof_callback = nullptr;
    QDesignerPropertySheetExtension_PropertyName_Callback qdesignerpropertysheetextension_propertyname_callback = nullptr;
    QDesignerPropertySheetExtension_PropertyGroup_Callback qdesignerpropertysheetextension_propertygroup_callback = nullptr;
    QDesignerPropertySheetExtension_SetPropertyGroup_Callback qdesignerpropertysheetextension_setpropertygroup_callback = nullptr;
    QDesignerPropertySheetExtension_HasReset_Callback qdesignerpropertysheetextension_hasreset_callback = nullptr;
    QDesignerPropertySheetExtension_Reset_Callback qdesignerpropertysheetextension_reset_callback = nullptr;
    QDesignerPropertySheetExtension_IsVisible_Callback qdesignerpropertysheetextension_isvisible_callback = nullptr;
    QDesignerPropertySheetExtension_SetVisible_Callback qdesignerpropertysheetextension_setvisible_callback = nullptr;
    QDesignerPropertySheetExtension_IsAttribute_Callback qdesignerpropertysheetextension_isattribute_callback = nullptr;
    QDesignerPropertySheetExtension_SetAttribute_Callback qdesignerpropertysheetextension_setattribute_callback = nullptr;
    QDesignerPropertySheetExtension_Property_Callback qdesignerpropertysheetextension_property_callback = nullptr;
    QDesignerPropertySheetExtension_SetProperty_Callback qdesignerpropertysheetextension_setproperty_callback = nullptr;
    QDesignerPropertySheetExtension_IsChanged_Callback qdesignerpropertysheetextension_ischanged_callback = nullptr;
    QDesignerPropertySheetExtension_SetChanged_Callback qdesignerpropertysheetextension_setchanged_callback = nullptr;
    QDesignerPropertySheetExtension_IsEnabled_Callback qdesignerpropertysheetextension_isenabled_callback = nullptr;

    VirtualQDesignerPropertySheetExtension() : QDesignerPropertySheetExtension() {};

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qdesignerpropertysheetextension_count_callback) {
            int callback_ret = qdesignerpropertysheetextension_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::count called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QString& name) const override {
        if (qdesignerpropertysheetextension_indexof_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            int callback_ret = qdesignerpropertysheetextension_indexof_callback(this, cbval1);
            libqt_free(name_str);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::indexOf called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString propertyName(int index) const override {
        if (qdesignerpropertysheetextension_propertyname_callback) {
            int cbval1 = index;
            const char* callback_ret = qdesignerpropertysheetextension_propertyname_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::propertyName called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString propertyGroup(int index) const override {
        if (qdesignerpropertysheetextension_propertygroup_callback) {
            int cbval1 = index;
            const char* callback_ret = qdesignerpropertysheetextension_propertygroup_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::propertyGroup called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPropertyGroup(int index, const QString& group) override {
        if (qdesignerpropertysheetextension_setpropertygroup_callback) {
            int cbval1 = index;
            const auto group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            auto group_str_len = group_b.length();
            const char* group_str = static_cast<const char*>(malloc(group_str_len + 1));
            memcpy((void*)group_str, group_b.data(), group_str_len);
            ((char*)group_str)[group_str_len] = '\0';
            const char* cbval2 = group_str;
            qdesignerpropertysheetextension_setpropertygroup_callback(this, cbval1, cbval2);
            libqt_free(group_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::setPropertyGroup called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasReset(int index) const override {
        if (qdesignerpropertysheetextension_hasreset_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignerpropertysheetextension_hasreset_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::hasReset called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset(int index) override {
        if (qdesignerpropertysheetextension_reset_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignerpropertysheetextension_reset_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::reset called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isVisible(int index) const override {
        if (qdesignerpropertysheetextension_isvisible_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignerpropertysheetextension_isvisible_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::isVisible called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(int index, bool b) override {
        if (qdesignerpropertysheetextension_setvisible_callback) {
            int cbval1 = index;
            bool cbval2 = b;
            qdesignerpropertysheetextension_setvisible_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::setVisible called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isAttribute(int index) const override {
        if (qdesignerpropertysheetextension_isattribute_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignerpropertysheetextension_isattribute_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::isAttribute called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAttribute(int index, bool b) override {
        if (qdesignerpropertysheetextension_setattribute_callback) {
            int cbval1 = index;
            bool cbval2 = b;
            qdesignerpropertysheetextension_setattribute_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::setAttribute called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property(int index) const override {
        if (qdesignerpropertysheetextension_property_callback) {
            int cbval1 = index;
            QVariant* callback_ret = qdesignerpropertysheetextension_property_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::property called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(int index, const QVariant& value) override {
        if (qdesignerpropertysheetextension_setproperty_callback) {
            int cbval1 = index;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qdesignerpropertysheetextension_setproperty_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::setProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isChanged(int index) const override {
        if (qdesignerpropertysheetextension_ischanged_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignerpropertysheetextension_ischanged_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::isChanged called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setChanged(int index, bool changed) override {
        if (qdesignerpropertysheetextension_setchanged_callback) {
            int cbval1 = index;
            bool cbval2 = changed;
            qdesignerpropertysheetextension_setchanged_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::setChanged called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEnabled(int index) const override {
        if (qdesignerpropertysheetextension_isenabled_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignerpropertysheetextension_isenabled_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertySheetExtension::isEnabled called without being implemented");
    }
};

#endif
