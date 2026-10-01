#pragma once
#ifndef DESIGNER_LIBDYNAMICPROPERTYSHEET_HXX
#define DESIGNER_LIBDYNAMICPROPERTYSHEET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerDynamicPropertySheetExtension
class VirtualQDesignerDynamicPropertySheetExtension : public QDesignerDynamicPropertySheetExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_Callback = bool (*)(const QDesignerDynamicPropertySheetExtension*);
    using QDesignerDynamicPropertySheetExtension_AddDynamicProperty_Callback = int (*)(QDesignerDynamicPropertySheetExtension*, const char*, QVariant*);
    using QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_Callback = bool (*)(QDesignerDynamicPropertySheetExtension*, int);
    using QDesignerDynamicPropertySheetExtension_IsDynamicProperty_Callback = bool (*)(const QDesignerDynamicPropertySheetExtension*, int);
    using QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_Callback = bool (*)(const QDesignerDynamicPropertySheetExtension*, const char*);

    // Instance callback storage
    QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_Callback qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_callback = nullptr;
    QDesignerDynamicPropertySheetExtension_AddDynamicProperty_Callback qdesignerdynamicpropertysheetextension_adddynamicproperty_callback = nullptr;
    QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_Callback qdesignerdynamicpropertysheetextension_removedynamicproperty_callback = nullptr;
    QDesignerDynamicPropertySheetExtension_IsDynamicProperty_Callback qdesignerdynamicpropertysheetextension_isdynamicproperty_callback = nullptr;
    QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_Callback qdesignerdynamicpropertysheetextension_canadddynamicproperty_callback = nullptr;

    VirtualQDesignerDynamicPropertySheetExtension() : QDesignerDynamicPropertySheetExtension() {};

    // Virtual method for C ABI access and custom callback
    virtual bool dynamicPropertiesAllowed() const override {
        if (qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_callback) {
            bool callback_ret = qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerDynamicPropertySheetExtension::dynamicPropertiesAllowed called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int addDynamicProperty(const QString& propertyName, const QVariant& value) override {
        if (qdesignerdynamicpropertysheetextension_adddynamicproperty_callback) {
            const auto propertyName_ret = propertyName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray propertyName_b = propertyName_ret.toUtf8();
            auto propertyName_str_len = propertyName_b.length();
            const char* propertyName_str = static_cast<const char*>(malloc(propertyName_str_len + 1));
            memcpy((void*)propertyName_str, propertyName_b.data(), propertyName_str_len);
            ((char*)propertyName_str)[propertyName_str_len] = '\0';
            const char* cbval1 = propertyName_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int callback_ret = qdesignerdynamicpropertysheetextension_adddynamicproperty_callback(this, cbval1, cbval2);
            libqt_free(propertyName_str);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerDynamicPropertySheetExtension::addDynamicProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeDynamicProperty(int index) override {
        if (qdesignerdynamicpropertysheetextension_removedynamicproperty_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignerdynamicpropertysheetextension_removedynamicproperty_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerDynamicPropertySheetExtension::removeDynamicProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isDynamicProperty(int index) const override {
        if (qdesignerdynamicpropertysheetextension_isdynamicproperty_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignerdynamicpropertysheetextension_isdynamicproperty_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerDynamicPropertySheetExtension::isDynamicProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canAddDynamicProperty(const QString& propertyName) const override {
        if (qdesignerdynamicpropertysheetextension_canadddynamicproperty_callback) {
            const auto propertyName_ret = propertyName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray propertyName_b = propertyName_ret.toUtf8();
            auto propertyName_str_len = propertyName_b.length();
            const char* propertyName_str = static_cast<const char*>(malloc(propertyName_str_len + 1));
            memcpy((void*)propertyName_str, propertyName_b.data(), propertyName_str_len);
            ((char*)propertyName_str)[propertyName_str_len] = '\0';
            const char* cbval1 = propertyName_str;
            bool callback_ret = qdesignerdynamicpropertysheetextension_canadddynamicproperty_callback(this, cbval1);
            libqt_free(propertyName_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerDynamicPropertySheetExtension::canAddDynamicProperty called without being implemented");
    }
};

#endif
