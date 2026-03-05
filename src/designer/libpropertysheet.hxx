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
        auto count_cb = qdesignerpropertysheetextension_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QString& name) const override {
        auto indexof_cb = qdesignerpropertysheetextension_indexof_callback;
        if (indexof_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            int callback_ret = indexof_cb(this, cbval1);
            libqt_free(name_str);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QString propertyName(int index) const override {
        auto propertyname_cb = qdesignerpropertysheetextension_propertyname_callback;
        if (propertyname_cb) {
            int cbval1 = index;

            const char* callback_ret = propertyname_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QString propertyGroup(int index) const override {
        auto propertygroup_cb = qdesignerpropertysheetextension_propertygroup_callback;
        if (propertygroup_cb) {
            int cbval1 = index;

            const char* callback_ret = propertygroup_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPropertyGroup(int index, const QString& group) override {
        auto setpropertygroup_cb = qdesignerpropertysheetextension_setpropertygroup_callback;
        if (setpropertygroup_cb) {
            int cbval1 = index;
            const QString group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            auto group_str_len = group_b.length();
            const char* group_str = static_cast<const char*>(malloc(group_str_len + 1));
            memcpy((void*)group_str, group_b.data(), group_str_len);
            ((char*)group_str)[group_str_len] = '\0';
            const char* cbval2 = group_str;

            setpropertygroup_cb(this, cbval1, cbval2);
            libqt_free(group_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasReset(int index) const override {
        auto hasreset_cb = qdesignerpropertysheetextension_hasreset_callback;
        if (hasreset_cb) {
            int cbval1 = index;

            bool callback_ret = hasreset_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset(int index) override {
        auto reset_cb = qdesignerpropertysheetextension_reset_callback;
        if (reset_cb) {
            int cbval1 = index;

            bool callback_ret = reset_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isVisible(int index) const override {
        auto isvisible_cb = qdesignerpropertysheetextension_isvisible_callback;
        if (isvisible_cb) {
            int cbval1 = index;

            bool callback_ret = isvisible_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(int index, bool b) override {
        auto setvisible_cb = qdesignerpropertysheetextension_setvisible_callback;
        if (setvisible_cb) {
            int cbval1 = index;
            bool cbval2 = b;

            setvisible_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isAttribute(int index) const override {
        auto isattribute_cb = qdesignerpropertysheetextension_isattribute_callback;
        if (isattribute_cb) {
            int cbval1 = index;

            bool callback_ret = isattribute_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAttribute(int index, bool b) override {
        auto setattribute_cb = qdesignerpropertysheetextension_setattribute_callback;
        if (setattribute_cb) {
            int cbval1 = index;
            bool cbval2 = b;

            setattribute_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property(int index) const override {
        auto property_cb = qdesignerpropertysheetextension_property_callback;
        if (property_cb) {
            int cbval1 = index;

            QVariant* callback_ret = property_cb(this, cbval1);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(int index, const QVariant& value) override {
        auto setproperty_cb = qdesignerpropertysheetextension_setproperty_callback;
        if (setproperty_cb) {
            int cbval1 = index;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            setproperty_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isChanged(int index) const override {
        auto ischanged_cb = qdesignerpropertysheetextension_ischanged_callback;
        if (ischanged_cb) {
            int cbval1 = index;

            bool callback_ret = ischanged_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setChanged(int index, bool changed) override {
        auto setchanged_cb = qdesignerpropertysheetextension_setchanged_callback;
        if (setchanged_cb) {
            int cbval1 = index;
            bool cbval2 = changed;

            setchanged_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEnabled(int index) const override {
        auto isenabled_cb = qdesignerpropertysheetextension_isenabled_callback;
        if (isenabled_cb) {
            int cbval1 = index;

            bool callback_ret = isenabled_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }
};

#endif
