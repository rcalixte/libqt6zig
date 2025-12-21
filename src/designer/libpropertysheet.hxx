#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALPROPERTYSHEET_H
#define SRC_DESIGNERC_LIBVIRTUALPROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerPropertySheetExtension so that we can call protected methods
class VirtualQDesignerPropertySheetExtension : public QDesignerPropertySheetExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerPropertySheetExtension = true;

    // Virtual class public types (including callbacks)
    using QDesignerPropertySheetExtension_Count_Callback = int (*)();
    using QDesignerPropertySheetExtension_IndexOf_Callback = int (*)(const QDesignerPropertySheetExtension*, libqt_string);
    using QDesignerPropertySheetExtension_PropertyName_Callback = const char* (*)(const QDesignerPropertySheetExtension*, int);
    using QDesignerPropertySheetExtension_PropertyGroup_Callback = const char* (*)(const QDesignerPropertySheetExtension*, int);
    using QDesignerPropertySheetExtension_SetPropertyGroup_Callback = void (*)(QDesignerPropertySheetExtension*, int, libqt_string);
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

  protected:
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

    // Instance base flags
    mutable bool qdesignerpropertysheetextension_count_isbase = false;
    mutable bool qdesignerpropertysheetextension_indexof_isbase = false;
    mutable bool qdesignerpropertysheetextension_propertyname_isbase = false;
    mutable bool qdesignerpropertysheetextension_propertygroup_isbase = false;
    mutable bool qdesignerpropertysheetextension_setpropertygroup_isbase = false;
    mutable bool qdesignerpropertysheetextension_hasreset_isbase = false;
    mutable bool qdesignerpropertysheetextension_reset_isbase = false;
    mutable bool qdesignerpropertysheetextension_isvisible_isbase = false;
    mutable bool qdesignerpropertysheetextension_setvisible_isbase = false;
    mutable bool qdesignerpropertysheetextension_isattribute_isbase = false;
    mutable bool qdesignerpropertysheetextension_setattribute_isbase = false;
    mutable bool qdesignerpropertysheetextension_property_isbase = false;
    mutable bool qdesignerpropertysheetextension_setproperty_isbase = false;
    mutable bool qdesignerpropertysheetextension_ischanged_isbase = false;
    mutable bool qdesignerpropertysheetextension_setchanged_isbase = false;
    mutable bool qdesignerpropertysheetextension_isenabled_isbase = false;

  public:
    VirtualQDesignerPropertySheetExtension() : QDesignerPropertySheetExtension() {};

    ~VirtualQDesignerPropertySheetExtension() {
        qdesignerpropertysheetextension_count_callback = nullptr;
        qdesignerpropertysheetextension_indexof_callback = nullptr;
        qdesignerpropertysheetextension_propertyname_callback = nullptr;
        qdesignerpropertysheetextension_propertygroup_callback = nullptr;
        qdesignerpropertysheetextension_setpropertygroup_callback = nullptr;
        qdesignerpropertysheetextension_hasreset_callback = nullptr;
        qdesignerpropertysheetextension_reset_callback = nullptr;
        qdesignerpropertysheetextension_isvisible_callback = nullptr;
        qdesignerpropertysheetextension_setvisible_callback = nullptr;
        qdesignerpropertysheetextension_isattribute_callback = nullptr;
        qdesignerpropertysheetextension_setattribute_callback = nullptr;
        qdesignerpropertysheetextension_property_callback = nullptr;
        qdesignerpropertysheetextension_setproperty_callback = nullptr;
        qdesignerpropertysheetextension_ischanged_callback = nullptr;
        qdesignerpropertysheetextension_setchanged_callback = nullptr;
        qdesignerpropertysheetextension_isenabled_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerPropertySheetExtension_Count_Callback(QDesignerPropertySheetExtension_Count_Callback cb) { qdesignerpropertysheetextension_count_callback = cb; }
    inline void setQDesignerPropertySheetExtension_IndexOf_Callback(QDesignerPropertySheetExtension_IndexOf_Callback cb) { qdesignerpropertysheetextension_indexof_callback = cb; }
    inline void setQDesignerPropertySheetExtension_PropertyName_Callback(QDesignerPropertySheetExtension_PropertyName_Callback cb) { qdesignerpropertysheetextension_propertyname_callback = cb; }
    inline void setQDesignerPropertySheetExtension_PropertyGroup_Callback(QDesignerPropertySheetExtension_PropertyGroup_Callback cb) { qdesignerpropertysheetextension_propertygroup_callback = cb; }
    inline void setQDesignerPropertySheetExtension_SetPropertyGroup_Callback(QDesignerPropertySheetExtension_SetPropertyGroup_Callback cb) { qdesignerpropertysheetextension_setpropertygroup_callback = cb; }
    inline void setQDesignerPropertySheetExtension_HasReset_Callback(QDesignerPropertySheetExtension_HasReset_Callback cb) { qdesignerpropertysheetextension_hasreset_callback = cb; }
    inline void setQDesignerPropertySheetExtension_Reset_Callback(QDesignerPropertySheetExtension_Reset_Callback cb) { qdesignerpropertysheetextension_reset_callback = cb; }
    inline void setQDesignerPropertySheetExtension_IsVisible_Callback(QDesignerPropertySheetExtension_IsVisible_Callback cb) { qdesignerpropertysheetextension_isvisible_callback = cb; }
    inline void setQDesignerPropertySheetExtension_SetVisible_Callback(QDesignerPropertySheetExtension_SetVisible_Callback cb) { qdesignerpropertysheetextension_setvisible_callback = cb; }
    inline void setQDesignerPropertySheetExtension_IsAttribute_Callback(QDesignerPropertySheetExtension_IsAttribute_Callback cb) { qdesignerpropertysheetextension_isattribute_callback = cb; }
    inline void setQDesignerPropertySheetExtension_SetAttribute_Callback(QDesignerPropertySheetExtension_SetAttribute_Callback cb) { qdesignerpropertysheetextension_setattribute_callback = cb; }
    inline void setQDesignerPropertySheetExtension_Property_Callback(QDesignerPropertySheetExtension_Property_Callback cb) { qdesignerpropertysheetextension_property_callback = cb; }
    inline void setQDesignerPropertySheetExtension_SetProperty_Callback(QDesignerPropertySheetExtension_SetProperty_Callback cb) { qdesignerpropertysheetextension_setproperty_callback = cb; }
    inline void setQDesignerPropertySheetExtension_IsChanged_Callback(QDesignerPropertySheetExtension_IsChanged_Callback cb) { qdesignerpropertysheetextension_ischanged_callback = cb; }
    inline void setQDesignerPropertySheetExtension_SetChanged_Callback(QDesignerPropertySheetExtension_SetChanged_Callback cb) { qdesignerpropertysheetextension_setchanged_callback = cb; }
    inline void setQDesignerPropertySheetExtension_IsEnabled_Callback(QDesignerPropertySheetExtension_IsEnabled_Callback cb) { qdesignerpropertysheetextension_isenabled_callback = cb; }

    // Base flag setters
    inline void setQDesignerPropertySheetExtension_Count_IsBase(bool value) const { qdesignerpropertysheetextension_count_isbase = value; }
    inline void setQDesignerPropertySheetExtension_IndexOf_IsBase(bool value) const { qdesignerpropertysheetextension_indexof_isbase = value; }
    inline void setQDesignerPropertySheetExtension_PropertyName_IsBase(bool value) const { qdesignerpropertysheetextension_propertyname_isbase = value; }
    inline void setQDesignerPropertySheetExtension_PropertyGroup_IsBase(bool value) const { qdesignerpropertysheetextension_propertygroup_isbase = value; }
    inline void setQDesignerPropertySheetExtension_SetPropertyGroup_IsBase(bool value) const { qdesignerpropertysheetextension_setpropertygroup_isbase = value; }
    inline void setQDesignerPropertySheetExtension_HasReset_IsBase(bool value) const { qdesignerpropertysheetextension_hasreset_isbase = value; }
    inline void setQDesignerPropertySheetExtension_Reset_IsBase(bool value) const { qdesignerpropertysheetextension_reset_isbase = value; }
    inline void setQDesignerPropertySheetExtension_IsVisible_IsBase(bool value) const { qdesignerpropertysheetextension_isvisible_isbase = value; }
    inline void setQDesignerPropertySheetExtension_SetVisible_IsBase(bool value) const { qdesignerpropertysheetextension_setvisible_isbase = value; }
    inline void setQDesignerPropertySheetExtension_IsAttribute_IsBase(bool value) const { qdesignerpropertysheetextension_isattribute_isbase = value; }
    inline void setQDesignerPropertySheetExtension_SetAttribute_IsBase(bool value) const { qdesignerpropertysheetextension_setattribute_isbase = value; }
    inline void setQDesignerPropertySheetExtension_Property_IsBase(bool value) const { qdesignerpropertysheetextension_property_isbase = value; }
    inline void setQDesignerPropertySheetExtension_SetProperty_IsBase(bool value) const { qdesignerpropertysheetextension_setproperty_isbase = value; }
    inline void setQDesignerPropertySheetExtension_IsChanged_IsBase(bool value) const { qdesignerpropertysheetextension_ischanged_isbase = value; }
    inline void setQDesignerPropertySheetExtension_SetChanged_IsBase(bool value) const { qdesignerpropertysheetextension_setchanged_isbase = value; }
    inline void setQDesignerPropertySheetExtension_IsEnabled_IsBase(bool value) const { qdesignerpropertysheetextension_isenabled_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qdesignerpropertysheetextension_count_callback != nullptr) {
            int callback_ret = qdesignerpropertysheetextension_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QString& name) const override {
        if (qdesignerpropertysheetextension_indexof_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            int callback_ret = qdesignerpropertysheetextension_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString propertyName(int index) const override {
        if (qdesignerpropertysheetextension_propertyname_callback != nullptr) {
            int cbval1 = index;

            const char* callback_ret = qdesignerpropertysheetextension_propertyname_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString propertyGroup(int index) const override {
        if (qdesignerpropertysheetextension_propertygroup_callback != nullptr) {
            int cbval1 = index;

            const char* callback_ret = qdesignerpropertysheetextension_propertygroup_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPropertyGroup(int index, const QString& group) override {
        if (qdesignerpropertysheetextension_setpropertygroup_callback != nullptr) {
            int cbval1 = index;
            const QString group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            libqt_string group_str;
            group_str.len = group_b.length();
            group_str.data = static_cast<const char*>(malloc(group_str.len + 1));
            memcpy((void*)group_str.data, group_b.data(), group_str.len);
            ((char*)group_str.data)[group_str.len] = '\0';
            libqt_string cbval2 = group_str;

            qdesignerpropertysheetextension_setpropertygroup_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasReset(int index) const override {
        if (qdesignerpropertysheetextension_hasreset_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignerpropertysheetextension_hasreset_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset(int index) override {
        if (qdesignerpropertysheetextension_reset_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignerpropertysheetextension_reset_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isVisible(int index) const override {
        if (qdesignerpropertysheetextension_isvisible_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignerpropertysheetextension_isvisible_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(int index, bool b) override {
        if (qdesignerpropertysheetextension_setvisible_callback != nullptr) {
            int cbval1 = index;
            bool cbval2 = b;

            qdesignerpropertysheetextension_setvisible_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isAttribute(int index) const override {
        if (qdesignerpropertysheetextension_isattribute_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignerpropertysheetextension_isattribute_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAttribute(int index, bool b) override {
        if (qdesignerpropertysheetextension_setattribute_callback != nullptr) {
            int cbval1 = index;
            bool cbval2 = b;

            qdesignerpropertysheetextension_setattribute_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property(int index) const override {
        if (qdesignerpropertysheetextension_property_callback != nullptr) {
            int cbval1 = index;

            QVariant* callback_ret = qdesignerpropertysheetextension_property_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(int index, const QVariant& value) override {
        if (qdesignerpropertysheetextension_setproperty_callback != nullptr) {
            int cbval1 = index;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qdesignerpropertysheetextension_setproperty_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isChanged(int index) const override {
        if (qdesignerpropertysheetextension_ischanged_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignerpropertysheetextension_ischanged_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setChanged(int index, bool changed) override {
        if (qdesignerpropertysheetextension_setchanged_callback != nullptr) {
            int cbval1 = index;
            bool cbval2 = changed;

            qdesignerpropertysheetextension_setchanged_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEnabled(int index) const override {
        if (qdesignerpropertysheetextension_isenabled_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignerpropertysheetextension_isenabled_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }
};

#endif
