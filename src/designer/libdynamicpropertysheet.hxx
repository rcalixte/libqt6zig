#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALDYNAMICPROPERTYSHEET_H
#define SRC_DESIGNERC_LIBVIRTUALDYNAMICPROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerDynamicPropertySheetExtension so that we can call protected methods
class VirtualQDesignerDynamicPropertySheetExtension : public QDesignerDynamicPropertySheetExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerDynamicPropertySheetExtension = true;

    // Virtual class public types (including callbacks)
    using QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_Callback = bool (*)();
    using QDesignerDynamicPropertySheetExtension_AddDynamicProperty_Callback = int (*)(QDesignerDynamicPropertySheetExtension*, libqt_string, QVariant*);
    using QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_Callback = bool (*)(QDesignerDynamicPropertySheetExtension*, int);
    using QDesignerDynamicPropertySheetExtension_IsDynamicProperty_Callback = bool (*)(const QDesignerDynamicPropertySheetExtension*, int);
    using QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_Callback = bool (*)(const QDesignerDynamicPropertySheetExtension*, libqt_string);

  protected:
    // Instance callback storage
    QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_Callback qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_callback = nullptr;
    QDesignerDynamicPropertySheetExtension_AddDynamicProperty_Callback qdesignerdynamicpropertysheetextension_adddynamicproperty_callback = nullptr;
    QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_Callback qdesignerdynamicpropertysheetextension_removedynamicproperty_callback = nullptr;
    QDesignerDynamicPropertySheetExtension_IsDynamicProperty_Callback qdesignerdynamicpropertysheetextension_isdynamicproperty_callback = nullptr;
    QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_Callback qdesignerdynamicpropertysheetextension_canadddynamicproperty_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_isbase = false;
    mutable bool qdesignerdynamicpropertysheetextension_adddynamicproperty_isbase = false;
    mutable bool qdesignerdynamicpropertysheetextension_removedynamicproperty_isbase = false;
    mutable bool qdesignerdynamicpropertysheetextension_isdynamicproperty_isbase = false;
    mutable bool qdesignerdynamicpropertysheetextension_canadddynamicproperty_isbase = false;

  public:
    VirtualQDesignerDynamicPropertySheetExtension() : QDesignerDynamicPropertySheetExtension() {};

    ~VirtualQDesignerDynamicPropertySheetExtension() {
        qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_callback = nullptr;
        qdesignerdynamicpropertysheetextension_adddynamicproperty_callback = nullptr;
        qdesignerdynamicpropertysheetextension_removedynamicproperty_callback = nullptr;
        qdesignerdynamicpropertysheetextension_isdynamicproperty_callback = nullptr;
        qdesignerdynamicpropertysheetextension_canadddynamicproperty_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_Callback(QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_Callback cb) { qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_callback = cb; }
    inline void setQDesignerDynamicPropertySheetExtension_AddDynamicProperty_Callback(QDesignerDynamicPropertySheetExtension_AddDynamicProperty_Callback cb) { qdesignerdynamicpropertysheetextension_adddynamicproperty_callback = cb; }
    inline void setQDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_Callback(QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_Callback cb) { qdesignerdynamicpropertysheetextension_removedynamicproperty_callback = cb; }
    inline void setQDesignerDynamicPropertySheetExtension_IsDynamicProperty_Callback(QDesignerDynamicPropertySheetExtension_IsDynamicProperty_Callback cb) { qdesignerdynamicpropertysheetextension_isdynamicproperty_callback = cb; }
    inline void setQDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_Callback(QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_Callback cb) { qdesignerdynamicpropertysheetextension_canadddynamicproperty_callback = cb; }

    // Base flag setters
    inline void setQDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed_IsBase(bool value) const { qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_isbase = value; }
    inline void setQDesignerDynamicPropertySheetExtension_AddDynamicProperty_IsBase(bool value) const { qdesignerdynamicpropertysheetextension_adddynamicproperty_isbase = value; }
    inline void setQDesignerDynamicPropertySheetExtension_RemoveDynamicProperty_IsBase(bool value) const { qdesignerdynamicpropertysheetextension_removedynamicproperty_isbase = value; }
    inline void setQDesignerDynamicPropertySheetExtension_IsDynamicProperty_IsBase(bool value) const { qdesignerdynamicpropertysheetextension_isdynamicproperty_isbase = value; }
    inline void setQDesignerDynamicPropertySheetExtension_CanAddDynamicProperty_IsBase(bool value) const { qdesignerdynamicpropertysheetextension_canadddynamicproperty_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool dynamicPropertiesAllowed() const override {
        if (qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_callback != nullptr) {
            bool callback_ret = qdesignerdynamicpropertysheetextension_dynamicpropertiesallowed_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int addDynamicProperty(const QString& propertyName, const QVariant& value) override {
        if (qdesignerdynamicpropertysheetextension_adddynamicproperty_callback != nullptr) {
            const QString propertyName_ret = propertyName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray propertyName_b = propertyName_ret.toUtf8();
            libqt_string propertyName_str;
            propertyName_str.len = propertyName_b.length();
            propertyName_str.data = static_cast<const char*>(malloc(propertyName_str.len + 1));
            memcpy((void*)propertyName_str.data, propertyName_b.data(), propertyName_str.len);
            ((char*)propertyName_str.data)[propertyName_str.len] = '\0';
            libqt_string cbval1 = propertyName_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            int callback_ret = qdesignerdynamicpropertysheetextension_adddynamicproperty_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeDynamicProperty(int index) override {
        if (qdesignerdynamicpropertysheetextension_removedynamicproperty_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignerdynamicpropertysheetextension_removedynamicproperty_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isDynamicProperty(int index) const override {
        if (qdesignerdynamicpropertysheetextension_isdynamicproperty_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignerdynamicpropertysheetextension_isdynamicproperty_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canAddDynamicProperty(const QString& propertyName) const override {
        if (qdesignerdynamicpropertysheetextension_canadddynamicproperty_callback != nullptr) {
            const QString propertyName_ret = propertyName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray propertyName_b = propertyName_ret.toUtf8();
            libqt_string propertyName_str;
            propertyName_str.len = propertyName_b.length();
            propertyName_str.data = static_cast<const char*>(malloc(propertyName_str.len + 1));
            memcpy((void*)propertyName_str.data, propertyName_b.data(), propertyName_str.len);
            ((char*)propertyName_str.data)[propertyName_str.len] = '\0';
            libqt_string cbval1 = propertyName_str;

            bool callback_ret = qdesignerdynamicpropertysheetextension_canadddynamicproperty_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }
};

#endif
